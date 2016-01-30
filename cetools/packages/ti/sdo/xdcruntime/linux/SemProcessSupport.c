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
 *  ======== SemProcessSupport.c ========
 */

#include <pthread.h>
#include <stdlib.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#include <xdc/std.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/knl/ISemaphore.h>

#include "ThreadSupport.h"

#include "package/internal/SemProcessSupport.xdc.h"


/*
 *  Linux IPC semaphores are identified by a 32 bit key, and the same semaphore
 *  can be obtained accross processes by calling semget() with the same key.
 *  These semaphores actually consist of an array of semaphores. We use a
 *  semaphore with an array of 3 semaphores to implement the SemProcessSupport
 *  object. The first semaphore will be used to guard access to the data
 *  structure. The second semaphore in the array will hold the semaphore count,
 *  and the third semaphore in the array will hold a reference count of the
 *  number of times that the semaphore has been "created" (ie the number of
 *  times semget() has been called for the given key).
 */
#define SEMCS       0  /* SemProcessSupport data structure guard */
#define SEMCOUNT    1  /* SemProcessSupport count */
#define SEMREFCOUNT 2  /* SemProcessSupport reference count */
#define NUMSEMS     3  /* Total number of semaphores */

static Void atfork(Void);
static Void cleanup(Int);

/*
 * QNX doesn't support multiprocess environments yet, but builds this code
 * to resolve linker issues.  For now, these just return error, so at least
 * you know something went south if you try to use them
 */
#if defined(__QNX__)
int semctl(int __semid, int __semnum, int __cmd, ...)
{
    Assert_isTrue(FALSE, SemProcessSupport_A_POSIX_Error);

    return (-1);
}
int semget(key_t __key, int __nsems, int __semflg)
{
    Assert_isTrue(FALSE, SemProcessSupport_A_POSIX_Error);

    return (-1);
}
int semop(int __semid, struct sembuf *__sops, size_t __nsops)
{
    Assert_isTrue(FALSE, SemProcessSupport_A_POSIX_Error);

    return (-1);
}
#endif

/*
 *  ======== SemProcessSupport_Module_startup ========
 */
Int SemProcessSupport_Module_startup(Int state)
{
    SemProcessSupport_Handle sem;
    SemProcessSupport_Params params;
    Int retc = 0;
    Int i;

    /* System_atexit() returns FALSE on failure, retc is 0 on success. */
    retc |= !System_atexit(&cleanup);

    SemProcessSupport_Params_init(&params);

    for (i = 0; i < SemProcessSupport_Object_count(); i++) {
        sem = SemProcessSupport_Object_get(NULL, i);

        /*
         *  Note: the function instance$static$init() has stored the config
         *  key value in sem->key.
         */
        retc |= SemProcessSupport_Instance_init(sem, sem->count, sem->key,
                &params, NULL);
    }

    /* register function to duplicate references on fork */
#ifndef _ANDROID_
    retc |= pthread_atfork(NULL, NULL, &atfork);
#endif

    Assert_isTrue(!retc, SemProcessSupport_A_POSIX_Error);
    return (Startup_DONE);
}

/*
 *  ======== atfork ========
 */
static Void atfork(Void)
{
    SemProcessSupport_Handle sem;
    struct sembuf sbuf;
    Int retc = 0;
    Int i;

    sbuf.sem_num = SEMREFCOUNT;
    sbuf.sem_op = 1;
    sbuf.sem_flg = SEM_UNDO;

    /*
     *  Increment the reference count of statically allocated and dynamically
     *  allocated semaphores.
     */

    /* Iterate through statically allocated instances */
    for (i = 0; i < SemProcessSupport_Object_count(); i++) {
        sem = SemProcessSupport_Object_get(NULL, i);
        retc |= semop(sem->id, &sbuf, 1);
    }

    /* iterate through dynamically allocated instances */
    sem = SemProcessSupport_Object_first();
    while (sem) {
        retc |= semop(sem->id, &sbuf, 1);
        sem = SemProcessSupport_Object_next(sem);
    }

    Assert_isTrue(!retc, SemProcessSupport_A_POSIX_Error);
}

/*
 *  ======== cleanup ========
 */
static Void cleanup(Int discard) {
    SemProcessSupport_Handle sem;
    Int i;

    /* iterate through statically allocated instances */
    for (i = 0; i < SemProcessSupport_Object_count(); i++) {
        sem = SemProcessSupport_Object_get(NULL, i);
        SemProcessSupport_Instance_finalize(sem, 0);
    }

    /* iterate through dynamically allocated instances */
    sem = SemProcessSupport_Object_first();
    while (sem) {
        SemProcessSupport_Instance_finalize(sem, 0);
        sem = SemProcessSupport_Object_next(sem);
    }
}

/*
 *  ======== SemProcessSupport_Instance_init ========
 */
Int SemProcessSupport_Instance_init(SemProcessSupport_Object* sem, Int count, Int key,
        const SemProcessSupport_Params* params, Error_Block* err)
{
    struct sembuf sbuf; /* array of semaphore operations to be performed */
    Int retc = 0;
    Int semCount;

    // Assert that key param has been set.
    Assert_isTrue(key != -1, SemProcessSupport_A_invalidKey);

    sem->mode = params->mode;

    if (sem->mode == SemProcessSupport_Mode_BINARY) {
        semCount = ~(~count);
    }
    else {
        semCount = count;
    }

    /* attempt to create the semaphore for the first time */
    sem->id = semget(key, NUMSEMS, IPC_CREAT | IPC_EXCL | SemProcessSupport_perms);

    if (sem->id != -1) { /* we succeeded */
        Log_write1(SemProcessSupport_L_create, key);

        /* the third semaphore acts as a multiprocess reference count */
        sbuf.sem_num = SEMREFCOUNT;
        sbuf.sem_op = 1;
        sbuf.sem_flg = SEM_UNDO;
        retc |= semop(sem->id, &sbuf, 1);

        /* the second semaphore implements the actual counting operation */
        sbuf.sem_num = SEMCOUNT;
        sbuf.sem_op = semCount;
        sbuf.sem_flg = 0;
        retc |= semop(sem->id, &sbuf, 1);

        /* the first semaphore guards access to the gate data structure */
        sbuf.sem_num = SEMCS;
        sbuf.sem_op = 1;
        retc |= semop(sem->id, &sbuf, 1);
    }
    else {
        Log_write1(SemProcessSupport_L_extant, key);

        /* attempt to create a link to the alread-extant semaphore */
        sem->id = semget(key, NUMSEMS, IPC_CREAT | SemProcessSupport_perms);
        if (sem->id == -1) { /* still failed */
            Error_raise(err, SemProcessSupport_E_POSIX_Error, errno, NULL);
            return (SemProcessSupport_POSIX_FAILURE);
        }

        /* only need to increment reference count */
        sbuf.sem_num = SEMREFCOUNT;
        sbuf.sem_op = 1;
        sbuf.sem_flg = SEM_UNDO;
        retc |= semop(sem->id, &sbuf, 1);
    }

    Assert_isTrue(!retc, SemProcessSupport_A_POSIX_Error);
    return (0);
}

/*
 *  ======== SemProcessSupport_Instance_finalize ========
 */
Void SemProcessSupport_Instance_finalize(SemProcessSupport_Object* sem, Int status)
{
    struct sembuf sbuf;
    Int     retc = 0;
    Int     count;

    /* status is equal to the return code from Instance_init */
    switch (status) {
        case 0:
            /* lock access to semaphore */
            sbuf.sem_num = SEMCS;
            sbuf.sem_op = -1;
            sbuf.sem_flg = SEM_UNDO;
            retc |= semop(sem->id, &sbuf, 1);

            /* decrement reference count */
            sbuf.sem_num = SEMREFCOUNT;
            retc |= semop(sem->id, &sbuf, 1);

            /* check if reference count is 0, if so delete from system */
            count = semctl(sem->id, SEMREFCOUNT, GETVAL);
            if (count < 0) {
                retc |= count;
            }
            else if (count == 0) {
                retc |= semctl(sem->id, 0, IPC_RMID);
            }
            else {
                /* unlock access to semaphore */
                sbuf.sem_num = SEMCS;
                sbuf.sem_op = 1;
                retc |= semop(sem->id, &sbuf, 1);
            }
            break;

        case SemProcessSupport_POSIX_FAILURE:
        default:
            break;
    }

    Assert_isTrue(!retc, SemProcessSupport_A_POSIX_Error);
}

/*
 *  ======== SemProcessSupport_pend ========
 */
Int SemProcessSupport_pend(SemProcessSupport_Object* sem, UInt timeout,
        Error_Block* err)
{
    struct sembuf   sbuf;
    Int             retc;

    /* Currently, SemProcessSupport_FOREVER is the only timeout value supported */
    Assert_isTrue((timeout == SemProcessSupport_FOREVER),
            SemProcessSupport_A_unsupportedTimeout);

    sbuf.sem_num = SEMCOUNT;
    sbuf.sem_op = -1;
    sbuf.sem_flg = SEM_UNDO;

    if (timeout == SemProcessSupport_FOREVER) {
        retc = semop(sem->id, &sbuf, 1);
    }
    else {
        retc = semop(sem->id, &sbuf, 1);
    }

    if (retc) {
        Error_raise(err, SemProcessSupport_E_POSIX_Error, errno, NULL);
        return (ISemaphore_PendStatus_ERROR);
    }

    return (ISemaphore_PendStatus_SUCCESS);
}

/*
 *  ======== SemProcessSupport_post ========
 */
Bool SemProcessSupport_post(SemProcessSupport_Object* sem, Error_Block* err)
{
    struct sembuf sbuf;
    Int retc;
    Int sval;

    sbuf.sem_num = SEMCOUNT;
    sbuf.sem_op = 1;
    sbuf.sem_flg = SEM_UNDO;


    if (sem->mode == SemProcessSupport_Mode_BINARY) {
        /* lock access to semaphore */
        sbuf.sem_num = SEMCS;
        sbuf.sem_op = -1;
        sbuf.sem_flg = SEM_UNDO;
        retc = semop(sem->id, &sbuf, 1);

        if (!retc) {
            sval = semctl(sem->id, SEMCOUNT, GETVAL);
            if (sval == 0) {
                retc = semop(sem->id, &sbuf, 1);
            }

            /* unlock access to semaphore */
            sbuf.sem_num = SEMCS;
            sbuf.sem_op = 1;
            retc |= semop(sem->id, &sbuf, 1);
        }
    }
    else {
        retc = semop(sem->id, &sbuf, 1);
    }

    if (retc) {
        Error_raise(err, SemProcessSupport_E_POSIX_Error, errno, NULL);
        return (FALSE);
    }
    else {
        return (TRUE);
    }
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:23; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

