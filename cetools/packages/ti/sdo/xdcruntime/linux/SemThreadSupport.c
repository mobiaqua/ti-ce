/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 * Copyright (c) 2013, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/*
 *  ======== SemThreadSupport.c ========
 */

#include <errno.h>
#include <semaphore.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

#include <xdc/std.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/knl/ISemaphore.h>

#include "package/internal/SemThreadSupport.xdc.h"

/*
 *  ======== SemThreadSupport_Module_startup ========
 */
Int SemThreadSupport_Module_startup(Int state)
{
    SemThreadSupport_Handle sem;
    Int retc = 0;
    Int count;
    Int i;

    SemThreadSupport_module->mutex = malloc(sizeof(pthread_mutex_t));
    retc |= (!SemThreadSupport_module->mutex);
    retc |= pthread_mutex_init(SemThreadSupport_module->mutex, NULL);

    for (i = 0; i < SemThreadSupport_Object_count(); i++) {
        sem = SemThreadSupport_Object_get(NULL, i);
        count = (Int) sem->sem; /* where instance$static$init stores count */
        sem->sem = malloc(sizeof(sem_t));
        retc |= !sem->sem;
        retc |= sem_init(sem->sem, 0 /* unshared */, count);
    }


    Assert_isTrue(!retc, SemThreadSupport_A_POSIX_Error);
    return (Startup_DONE);
}

/*
 *  ======== SemThreadSupport_Instance_init ========
 */
Int SemThreadSupport_Instance_init(SemThreadSupport_Handle sem, Int count,
        const SemThreadSupport_Params* params, Error_Block* err)
{
    Int semCount;

    sem->sem = Memory_alloc(NULL, sizeof(sem_t), 0, err);
    if (Error_check(err)) {
        return (SemThreadSupport_ALLOC_FAILURE);
    }

    sem->mode = params->mode;

    if (sem->mode == SemThreadSupport_Mode_BINARY) {
        semCount = ~(~count);
    }
    else {
        semCount = count;
    }

    /*
     * POSIX only specifies that sem_init returns -1 on error,
     * not that it returns 0 on success
     */
    if (sem_init(sem->sem, 0 /* unshared */, semCount) == -1) {
        Error_raise(err, SemThreadSupport_E_POSIX_Error, errno, NULL);
        return (SemThreadSupport_POSIX_FAILURE);
    }

    return (0);
}

/*
 *  ======== SemThreadSupport_Instance_finalize ========
 */
Void SemThreadSupport_Instance_finalize(SemThreadSupport_Handle sem, Int status)
{
    Int retc = 0;

    /* status is equal to the return code from Instance_init */
    switch (status)
    {
        case 0:
            retc = sem_destroy((sem_t*)sem->sem);
            /* no break */

        case SemThreadSupport_POSIX_FAILURE:
            Memory_free(NULL, sem->sem, sizeof(sem_t));
            break;

        case SemThreadSupport_ALLOC_FAILURE:
        default:
            break;
    }

    Assert_isTrue(!retc, SemThreadSupport_A_POSIX_Error);
}

/*
 *  ======== SemThreadSupport_pend ========
 */
Int SemThreadSupport_pend(SemThreadSupport_Handle sem, UInt timeout,
    Error_Block* err)
{
    struct timespec abstime;
    Int secs, usecs;
    Int retc = 0;

    if (SemThreadSupport_FOREVER == timeout) {
        retc = sem_wait(sem->sem);
    }
    else {
        secs = timeout/1000000; /* timeout is in microseconds */
        usecs = timeout%1000000;
        retc = clock_gettime(CLOCK_REALTIME, &abstime);

        if ((usecs + abstime.tv_nsec/1000) >= 1000000) {
            secs++;
            usecs -= 1000000;
        }
        abstime.tv_nsec += usecs;
        abstime.tv_sec += secs;

        if (retc) {
            Error_raise(err, SemThreadSupport_E_POSIX_Error, errno, NULL);
            return (ISemaphore_PendStatus_ERROR);
        }
        retc = errno = 0;
        retc = sem_timedwait(sem->sem, &abstime);
        if (retc) {
            if (ETIMEDOUT == errno) {
                return (ISemaphore_PendStatus_TIMEOUT);
            }
            else {
                Error_raise(err, SemThreadSupport_E_POSIX_Error, errno, NULL);
                return (ISemaphore_PendStatus_ERROR);
            }
        }
    }

    if (retc) {
        Error_raise(err, SemThreadSupport_E_POSIX_Error, errno, NULL);
        return (ISemaphore_PendStatus_ERROR);
    }
    else {
        return (ISemaphore_PendStatus_SUCCESS);
    }
}

/*
 *  ======== SemThreadSupport_post ========
 */
Bool SemThreadSupport_post(SemThreadSupport_Handle sem, Error_Block* err)
{
    Int retc;
    Int sval;

    if (sem->mode == SemThreadSupport_Mode_BINARY) {
        // Lock
        retc = pthread_mutex_lock(SemThreadSupport_module->mutex);

        if (!retc) {
            retc = sem_getvalue(sem->sem, &sval);
            if (!retc && (sval == 0)) {
                retc = sem_post(sem->sem);
            }

            retc |= pthread_mutex_unlock(SemThreadSupport_module->mutex);
            //Unlock
        }
    }
    else {
        retc = sem_post(sem->sem);
    }

    if (retc) {
        Error_raise(err, SemThreadSupport_E_POSIX_Error, errno, NULL);
        return (FALSE);
    }
    else {
        return (TRUE);
    }
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

