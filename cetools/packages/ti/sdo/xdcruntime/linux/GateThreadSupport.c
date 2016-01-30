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
 *  ======== GateThreadSupport.c ========
 */

 /* necessary for pthread_mutexattr_settype.  I don't know why */
#define _XOPEN_SOURCE 500

#include <pthread.h>
#include <stdlib.h>
#include <errno.h>

#include <xdc/std.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>

#include "package/internal/GateThreadSupport.xdc.h"

/*
 *  ======== GateThreadSupport_Module_startup ========
 */
Int GateThreadSupport_Module_startup(Int state)
{
    GateThreadSupport_Handle gate;
    pthread_mutexattr_t attrs;
    Int retc;
    Int i;

    /* pthread functions return non-zero if and only if they fail */
    retc = pthread_mutexattr_init(&attrs);
    retc |= pthread_mutexattr_settype(&attrs, PTHREAD_MUTEX_RECURSIVE);

    for (i = 0; i < GateThreadSupport_Object_count(); i++) {
        gate = GateThreadSupport_Object_get(NULL, i);
        /*
         * We cannot use Memory_alloc here.  This was discovered via the
         * following scenario: the user has configured one of these GateThreadSupports
         * as the System.common$.gate - as well they should, if they're on
         * linux.  At runtime, GateThreadSupport_Module_startup is called, and has to
         * initialize that gate.  It calls Memory_alloc.  Memory_alloc calls
         * GateThreadSupport.enterSystem... which uses the System.common$ gate.  Yay
         * segfault.
         */
        gate->gate = malloc(sizeof(pthread_mutex_t));
        retc |= !gate->gate;
        retc |= pthread_mutex_init(gate->gate, &attrs);
    }

    Assert_isTrue(!retc, GateThreadSupport_A_POSIX_Error);
    return (Startup_DONE);
}

/*
 *  ======== GateThreadSupport_Instance_init ========
 */
Int GateThreadSupport_Instance_init(GateThreadSupport_Object* gate, const GateThreadSupport_Params* params,
        Error_Block* err)
{
    pthread_mutexattr_t attrs;
    Int retc = 0; /* Success */

    retc |= pthread_mutexattr_init(&attrs);
    retc |= pthread_mutexattr_settype(&attrs, PTHREAD_MUTEX_RECURSIVE);
    if (retc) {
        Error_raise(err, GateThreadSupport_E_POSIX_Error, errno, NULL);
        return (GateThreadSupport_SETUP_FAILURE);
    }

    gate->gate = Memory_alloc(NULL, sizeof(pthread_mutex_t), 0, err);
    if (Error_check(err)) {
        return (GateThreadSupport_ALLOC_FAILURE);
    }

    if (pthread_mutex_init(gate->gate, &attrs)) {
        Error_raise(err, GateThreadSupport_E_POSIX_Error, errno, NULL);
        return (GateThreadSupport_POSIX_FAILURE);
    }

    return (0);
}

/*
 *  ======== GateThreadSupport_Instance_finalize ========
 */
Void GateThreadSupport_Instance_finalize(GateThreadSupport_Object* gate,
        Int status)
{
    Int retc = 0;

    /* status is equal to the return code from Instance_init */
    switch (status) {
        case 0:
            retc |= pthread_mutex_destroy((pthread_mutex_t*)gate->gate);
        case GateThreadSupport_POSIX_FAILURE:
            Memory_free(NULL, gate->gate, sizeof(pthread_mutex_t));
            break;

        case GateThreadSupport_ALLOC_FAILURE:
        case GateThreadSupport_SETUP_FAILURE:
        default:
            break;
    }

    Assert_isTrue(!retc, GateThreadSupport_A_POSIX_Error);
}

/*
 *  ======== GateThreadSupport_enter ========
 */
IArg GateThreadSupport_enter(GateThreadSupport_Object* gate)
{
    Int retc;

    retc = pthread_mutex_lock(gate->gate);

    return (NULL);
}

/*
 *  ======== GateThreadSupport_leave ========
 */
Void GateThreadSupport_leave(GateThreadSupport_Object* gate, IArg key)
{
    Int retc;

    retc = pthread_mutex_unlock(gate->gate);
}

/*
 *  ======== GateThreadSupport_quer ========
 */
Bool GateThreadSupport_query(Int qual)
{
    return (TRUE);
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:23; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

