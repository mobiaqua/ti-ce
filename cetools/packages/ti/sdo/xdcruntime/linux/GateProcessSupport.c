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
 *  ======== GateProcessSupport.c ========
 */

#include <pthread.h>
#include <stdlib.h>
#include <sys/sem.h>
#include <errno.h>

#include <xdc/std.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>

#include "ThreadSupport.h"

#include "package/internal/GateProcessSupport.xdc.h"

/*
 *  We use Linux IPC semaphores to implement a GateProcessSupport object.
 *  Linux IPC semaphores are identified by a 32 bit key, and the same semaphore
 *  can be obtained accross processes by calling semget() with the same key.
 *  These semaphores actually consist of an array of semaphores. We use a
 *  semaphore with an array of 3 semaphores to implement the GateProcessSupport
 *  object. The first semaphore will be used to guard access to the data
 *  structure. The second semaphore in the array will hold the semaphore count,
 *  and the third semaphore in the array will hold a reference count of the
 *  number of times that the semaphore has been "created" (ie the number of
 *  times semget() has been called for the given key).
 */
#define SEMCS       0  /* SemaphoreMP data structure guard */
#define SEMCOUNT    1  /* SemaphoreMP count */
#define SEMREFCOUNT 2  /* SemaphoreMP reference count */
#define NSEMS       3  /* Total number of semaphores */

static Void atfork(Void);
static Void cleanup(Int);

/*
 *  ======== GateProcessSupport_Module_startup ========
 */
Int GateProcessSupport_Module_startup(Int state)
{
    GateProcessSupport_Handle gate;
    GateProcessSupport_Params params;
    Int           retc;
    Int           i;

    /* System_atexit() returns TRUE on success */
    retc = !System_atexit(&cleanup);

    GateProcessSupport_Params_init(&params);

    for (i = 0; i < GateProcessSupport_Object_count(); i++) {
        gate = GateProcessSupport_Object_get(NULL, i);
        params.key = gate->id;
        retc |= GateProcessSupport_Instance_init(gate, &params, NULL);
    }

    /* register function to duplicate references on fork */
#ifndef _ANDROID_
    retc |= pthread_atfork(NULL, NULL, &atfork);
#endif

    Assert_isTrue(!retc, GateProcessSupport_A_POSIX_Error);
    return (Startup_DONE);
}

/*
 *  ======== atfork ========
 */
static Void atfork(Void)
{
    GateProcessSupport_Handle gate;
    struct sembuf sbuf;
    Int retc = 0;
    Int i;

    sbuf.sem_num = SEMREFCOUNT;
    sbuf.sem_op = 1;
    sbuf.sem_flg = SEM_UNDO;

    /*
     *  Increment the reference count of all statically and dynamically
     *  created gates.
     */

    /* iterate through statically allocated instances */
    for (i = 0; i < GateProcessSupport_Object_count(); i++) {
        gate = GateProcessSupport_Object_get(NULL, i);
            /* post Semaphore */
        retc |= semop(gate->id, &sbuf, 1); /* semop() == 0 <==> success */
    }

    /* iterate through dynamically allocated instances */
    gate = GateProcessSupport_Object_first();
    while (gate) {
        retc |= semop(gate->id, &sbuf, 1); /* semop() == 0 <==> success */
        gate = GateProcessSupport_Object_next(gate);
    }

    Assert_isTrue(!retc, GateProcessSupport_A_POSIX_Error);
}

/*
 *  ======== cleanup ========
 */
static Void cleanup(Int discard) {
    GateProcessSupport_Handle gate;
    Int i;

    /* iterate through statically allocated instances */
    for (i = 0; i < GateProcessSupport_Object_count(); i++) {
        gate = GateProcessSupport_Object_get(NULL, i);
        GateProcessSupport_Instance_finalize(gate, 0);
    }

    /* iterate through dynamically allocated instances */
    gate = GateProcessSupport_Object_first();
    while (gate) {
        GateProcessSupport_Instance_finalize(gate, 0);
        gate = GateProcessSupport_Object_next(gate);
    }
}

/*
 *  ======== GateProcessSupport_Instance_init ========
 */
Int GateProcessSupport_Instance_init(GateProcessSupport_Object* gate,
        const GateProcessSupport_Params* params, Error_Block* err)
{
    struct sembuf sbuf[3]; /* array of semaphore operations to be performed */
    Int retc = 0;          /* Success */

    // Assert that key param has been set.
    Assert_isTrue(params->key != -1, GateProcessSupport_A_invalidKey);

    /* the first semaphore guards access to the gate data structure */
    sbuf[0].sem_num = SEMCS;
    sbuf[0].sem_op = 1;
    sbuf[0].sem_flg = 0;

    /* the second semaphore implements the actual locking operation */
    sbuf[1].sem_num = SEMCOUNT;
    sbuf[1].sem_op = 1;
    sbuf[1].sem_flg = 0;

    /* the third semaphore acts as a multiprocess reference count */
    sbuf[2].sem_num = SEMREFCOUNT;
    sbuf[2].sem_op = 1;
    sbuf[2].sem_flg = SEM_UNDO;

    /* attempt to create the semaphore for the first time */
    gate->id = semget(params->key, NSEMS, IPC_CREAT | IPC_EXCL | GateProcessSupport_perms);

    if (gate->id != -1) {
        /* we succeeded */
        Log_write1(GateProcessSupport_L_create, params->key);
        retc |= semop(gate->id, sbuf, NSEMS); /* apply to all semaphores */
    }
    else {
        Log_write1(GateProcessSupport_L_extant, params->key);
        /* attempt to create a link to the alread-extant semaphore */
        gate->id = semget(params->key, NSEMS, IPC_CREAT | GateProcessSupport_perms);

        if (gate->id == -1) {
            /* still failed */
            Error_raise(err, GateProcessSupport_E_POSIX_Error, errno, NULL);
            return (GateProcessSupport_POSIX_FAILURE);
        }

        /* only increment reference count */
        retc |= semop(gate->id, sbuf + 2, 1);
    }

    gate->count = 0;
    gate->owner = NULL;

    Assert_isTrue(!retc, GateProcessSupport_A_POSIX_Error);
    return (0);
}

/*
 *  ======== GateProcessSupport_Instance_finalize ========
 */
Void GateProcessSupport_Instance_finalize(GateProcessSupport_Object* gate, Int status)
{
    struct sembuf sbuf;
    Int retc = 0;
    Int count;

    sbuf.sem_op = -1;

    /* status is equal to the return code from Instance_init */
    /* switch/case fallthrough is intentional */
    switch (status) {
        case 0:
            /* lock access to semaphore */
            sbuf.sem_num = SEMCS;
            sbuf.sem_flg = SEM_UNDO;
            retc |= semop(gate->id, &sbuf, 1);

            /* decrement reference count */
            sbuf.sem_num = SEMREFCOUNT;
            retc |= semop(gate->id, &sbuf, 1);

            /* check if reference count is 0, if so delete from system */
            count = semctl(gate->id, SEMREFCOUNT, GETVAL);
            if (count < 0) {
                /* An error */
                retc |= count;
            }
            else if (count == 0) {
                /* Remove the semaphore */
                retc |= semctl(gate->id, 0, IPC_RMID);
            }
            else {
                /* unlock access to semaphore */
                sbuf.sem_num = SEMCS;
                sbuf.sem_op = 1;
                retc |= semop(gate->id, &sbuf, 1);
            }
            break;

        case GateProcessSupport_POSIX_FAILURE:
        default:
            break;
    }

    Assert_isTrue(!retc, GateProcessSupport_A_POSIX_Error);
}

/*
 *  ======== GateProcessSupport_enter ========
 */
IArg GateProcessSupport_enter(GateProcessSupport_Object* gate)
{
    struct sembuf sbuf;
    Int retc = 0;

    /* lock access to gate data structure */
    sbuf.sem_num = SEMCS;
    sbuf.sem_op = -1;
    sbuf.sem_flg = SEM_UNDO;
    retc = semop(gate->id, &sbuf, 1);

    /* if we're entering this gate for the first time */
    if (pthread_self() != gate->owner) {
        /* unlock access to this gate */
        sbuf.sem_op = 1;
        retc |= semop(gate->id, &sbuf, 1);

        /* pend on the real semaphore */
        sbuf.sem_num = SEMCOUNT;
        sbuf.sem_op = -1;
        retc |= semop(gate->id, &sbuf, 1);

        /* relock access to this gate */
        sbuf.sem_num = SEMCS;
        retc |= semop(gate->id, &sbuf, 1);

        gate->owner = pthread_self();
    }

    gate->count++;

    /* unlock access to this gate */
    sbuf.sem_op = 1;
    retc |= semop(gate->id, &sbuf, 1);

    return (NULL);
}

/*
 *  ======== GateProcessSupport_leave ========
 */
Void GateProcessSupport_leave(GateProcessSupport_Object* gate, IArg key)
{
    struct sembuf sbuf;
    Int           retc = 0;  /* Success */

    /* lock access to gate data structure */
    sbuf.sem_num = SEMCS;
    sbuf.sem_op = -1;
    sbuf.sem_flg = SEM_UNDO;
    retc = semop(gate->id, &sbuf, 1);

    /* if we've now left as many times as entered */
    if (!--gate->count) {
        gate->owner = NULL;

        /* post to the real semaphore */
        sbuf.sem_num = SEMCOUNT;
        sbuf.sem_op = 1;
        retc |= semop(gate->id, &sbuf, 1);
    }

    /* unlock access to this gate */
    sbuf.sem_num = SEMCS;
    sbuf.sem_op = 1;
    retc |= semop(gate->id, &sbuf, 1);
}

/*
 *  ======== GateProcessSupport_getReferenceCount ========
 */
Int GateProcessSupport_getReferenceCount(GateProcessSupport_Object* gate, Error_Block* err)
{
    Int retc = semctl(gate->id, SEMREFCOUNT, GETVAL);

    if (-1 == retc) {
        Error_raise(err, GateProcessSupport_E_POSIX_Error, errno, NULL);
    }
    return (retc);
}

/*
 *  ======== GateProcessSupport_query ========
 */
Bool GateProcessSupport_query(Int qual)
{
    return (TRUE);
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:23; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

