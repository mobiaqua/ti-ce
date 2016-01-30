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
 *  ======== ThreadSupport.c ========
 */

#include <pthread.h>
#include <limits.h>
#include <sched.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>

#ifdef _ANDROID_
#include <asm/page.h>
#endif

#include <xdc/std.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>

#include <xdc/runtime/knl/IThreadSupport.h>

#include "package/internal/ThreadSupport.xdc.h"

static Ptr runStub(Ptr);
static pthread_key_t key; /* used to implement ThreadSupport_self */
static Bool started;
static pthread_mutex_t start_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t start_cond = PTHREAD_COND_INITIALIZER;

/*
 *  ======== ThreadSupport_Module_startup ========
 */
Int ThreadSupport_Module_startup(Int state)
{
    ThreadSupport_Handle thread;
    pthread_attr_t attrs;
    struct sched_param priParam;
    Int retc = 0;  /* Success */
    Int i, policy, max, min;
    UInt interval, stackSize;
    ThreadSupport_Priority staticPri;

    policy = sched_getscheduler(0);
    max = sched_get_priority_max(policy);
    min = sched_get_priority_min(policy);
    interval = (max-min)/5;

    ThreadSupport_module->lowestPriority = min;
    ThreadSupport_module->belowNormalPriority = interval * 2;
    ThreadSupport_module->normalPriority = interval * 3;
    ThreadSupport_module->aboveNormalPriority = interval * 4;
    ThreadSupport_module->highestPriority = max;

    /* pthread functions return 0 <==> success */
    retc = pthread_key_create(&key, NULL);

    for (i = 0; i < ThreadSupport_Object_count(); i++) {
        thread = ThreadSupport_Object_get(NULL, i);

        retc |= pthread_attr_init(&attrs);

        retc |= pthread_attr_getschedparam(&attrs, &priParam);

        staticPri = (ThreadSupport_Priority)thread->stackBase;

        /* stackBase was used as temporary storage at config-time */
        if (thread->staticOsPri != ThreadSupport_INVALID_OS_PRIORITY) {
            priParam.sched_priority = thread->staticOsPri;
        }
        else {
            switch(staticPri) {
                case ThreadSupport_Priority_LOWEST:
                    priParam.sched_priority =
                        ThreadSupport_module->lowestPriority;
                    break;

                case ThreadSupport_Priority_BELOW_NORMAL:
                    priParam.sched_priority =
                        ThreadSupport_module->belowNormalPriority;
                    break;

                case ThreadSupport_Priority_NORMAL:
                    priParam.sched_priority =
                        ThreadSupport_module->normalPriority;
                    break;

                case ThreadSupport_Priority_ABOVE_NORMAL:
                    priParam.sched_priority =
                        ThreadSupport_module->aboveNormalPriority;
                    break;

                case ThreadSupport_Priority_HIGHEST:
                    priParam.sched_priority =
                        ThreadSupport_module->highestPriority;
                    break;

                default:
                    Error_raise(NULL, ThreadSupport_E_priority,
                            staticPri, 0);
                    return (ThreadSupport_PRI_FAILURE);
            }
        }

        retc |= pthread_attr_setschedparam(&attrs, &priParam);

        /* stackSize of 0 means use the default stackSize */
        if (thread->stackSize) {
            /* We'll get an error if we try to make the stack too small. */
            if (thread->stackSize < PTHREAD_STACK_MIN) {
                stackSize = PTHREAD_STACK_MIN;
            }
            else {
                stackSize = thread->stackSize;
            }

            pthread_attr_setstacksize(&attrs, stackSize);
        }

        thread->tid = malloc(sizeof(pthread_t));
        retc |= !thread->tid;
        retc |= pthread_create(thread->tid, &attrs, &runStub, thread);
    }


    Assert_isTrue(!retc, ThreadSupport_A_POSIX_Error);
    return (Startup_DONE);
}

/*
 *  ======== ThreadSupport_start ========
 */
Bool ThreadSupport_start(Error_Block* eb)
{
    Int retc = 0;

    started = TRUE;
    retc = pthread_cond_broadcast(&start_cond);
    Assert_isTrue(!retc, ThreadSupport_A_POSIX_Error);

    return (TRUE);
}

/*
 *  ======== ThreadSupport_Instance_init ========
 */
Int ThreadSupport_Instance_init(ThreadSupport_Object* thread, ThreadSupport_RunFxn fxn,
        const ThreadSupport_Params* params, Error_Block* eb)
{
    pthread_attr_t pattrs;
    struct sched_param priParam;
    Int policy, max, min;
    UInt interval;
    Int retc = 0;
    UInt stackSize;

    /*
     *  Reset priorities in case scheduling policy was changed.
     */

    /* Scheduling policy of the calling process (eg, SCHED_OTHER, SCHED_RR)  */
    policy = sched_getscheduler(0);
    max = sched_get_priority_max(policy);
    min = sched_get_priority_min(policy);
    interval = (max-min)/5;

    ThreadSupport_module->lowestPriority = min;
    ThreadSupport_module->belowNormalPriority = interval * 2;
    ThreadSupport_module->normalPriority = interval * 3;
    ThreadSupport_module->aboveNormalPriority = interval * 4;
    ThreadSupport_module->highestPriority = max;

    thread->tls = params->tls;
    thread->startFxn = fxn;
    thread->startFxnArg = params->arg;
    thread->stackSize = params->stackSize;

    /* Set scheduling priority, stack size */
    retc |= pthread_attr_init(&pattrs);
    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (ThreadSupport_SETUP_FAILURE);
    }

    retc |= pthread_attr_setschedpolicy(&pattrs, policy);

    retc |= pthread_attr_getschedparam(&pattrs, &priParam);

    if (params->osPriority != ThreadSupport_INVALID_OS_PRIORITY) {
        priParam.sched_priority = params->osPriority;
    }
    else {
        switch (params->priority) {
            case ThreadSupport_Priority_LOWEST:
                priParam.sched_priority = ThreadSupport_module->lowestPriority;
                break;

            case ThreadSupport_Priority_BELOW_NORMAL:
                priParam.sched_priority =
                    ThreadSupport_module->belowNormalPriority;
                break;

            case ThreadSupport_Priority_NORMAL:
                priParam.sched_priority = ThreadSupport_module->normalPriority;
                break;

            case ThreadSupport_Priority_ABOVE_NORMAL:
                priParam.sched_priority =
                    ThreadSupport_module->aboveNormalPriority;
                break;

            case ThreadSupport_Priority_HIGHEST:
                priParam.sched_priority = ThreadSupport_module->highestPriority;
                break;

            default:
                Error_raise(eb, ThreadSupport_E_priority, params->priority, 0);
                return (ThreadSupport_PRI_FAILURE);
        }
    }

    retc |= pthread_attr_setschedparam(&pattrs, &priParam);

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (ThreadSupport_SETUP_FAILURE);
    }

    /*
     *  If params->stackSize < PTHREAD_STACK_MIN, pthread_attr_setstacksize()
     *  will return an error. It will also return an error if the stackSize
     *  exceeds an implementation defined limit.  If params->stackSize = 0,
     *  use the default stack size.
     */
    if (params->stackSize) {
        if (params->stackSize < PTHREAD_STACK_MIN) {
            stackSize = PTHREAD_STACK_MIN;
        }
        else {
            stackSize =  params->stackSize;
        }

        retc |= pthread_attr_setstacksize(&pattrs, stackSize);

        if (retc) {
            Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
            return (ThreadSupport_SETUP_FAILURE);
        }
    }

    thread->tid = Memory_alloc(NULL, sizeof(pthread_t), 0, eb);
    if (Error_check(eb)) {
        return ThreadSupport_ALLOC_FAILURE;
    }

    if (pthread_create(thread->tid, &pattrs, &runStub, thread)) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (ThreadSupport_POSIX_FAILURE);
    }
    else {
        return (0);
    }
}

/*
 *  ======== runStub ========
 */
static Ptr runStub(Ptr input)
{
    /* do as much as we can to keep the optimizer from touching this guy */
    volatile Int test = 0;
    ThreadSupport_Handle thread = (ThreadSupport_Handle)input;
    Int retc = 0;

    thread->stackBase = (Ptr)&test; /* best estimate of the top of the stack */

#ifndef _ANDROID_
    retc |= pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
#endif

    retc |= pthread_setspecific(key, thread);

    retc |= pthread_mutex_lock(&start_mutex);
    while (!started) {
        retc |= pthread_cond_wait(&start_cond, &start_mutex);
    }
    retc |= pthread_mutex_unlock(&start_mutex);

    Assert_isTrue(!retc, ThreadSupport_A_POSIX_Error);

    Log_write1(ThreadSupport_L_start, (IArg)thread);
    thread->startFxn(thread->startFxnArg);
    Log_write1(ThreadSupport_L_finish, (IArg)thread);

    return (NULL);
}

/*
 *  ======== ThreadSupport_Instance_finalize ========
 */
Void ThreadSupport_Instance_finalize(ThreadSupport_Object* thread, Int status)
{
    /* status is equal to the return code from Instance_init */
    switch (status) {
        case 0:
#ifndef _ANDROID_
            /*
             *  This call will fail if the thread has already exited, so
             *  we ignore its return value.
             */
            pthread_cancel(*(pthread_t*)thread->tid);
#endif
        case ThreadSupport_POSIX_FAILURE:
            Memory_free(NULL, thread->tid, sizeof(pthread_t));
            break;

        case ThreadSupport_ALLOC_FAILURE:
        case ThreadSupport_PRI_FAILURE:
        case ThreadSupport_SETUP_FAILURE:
        default:
            break;
    }
}

/*
 *  ======== ThreadSupport_self ========
 */
IThreadSupport_Handle ThreadSupport_self(Error_Block* eb)
{
    return (pthread_getspecific(key));
}

/*
 *  ======== ThreadSupport_yield ========
 */
Bool ThreadSupport_yield(Error_Block* eb)
{
    Int retc = sched_yield();

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (FALSE);
    }
    else {
        return (TRUE);
    }
}

/*
 *  ======== ThreadSupport_compareOsPriorities ========
 */
Int ThreadSupport_compareOsPriorities(Int p1, Int p2, Error_Block* eb)
{
    if (p1 < p2) {
        return (IThreadSupport_CompStatus_LOWER);
    }
    else if (p1 > p2) {
        return (IThreadSupport_CompStatus_HIGHER);
    }
    else {
        return (IThreadSupport_CompStatus_EQUAL);
    }
}

/*
 *  ======== ThreadSupport_sleep ========
 */
Bool ThreadSupport_sleep(UInt timeout, Error_Block* eb)
{
    usleep(timeout);

    return (TRUE);
}

/*
 *  ======== ThreadSupport_join ========
 */
Bool ThreadSupport_join(ThreadSupport_Handle thread, Error_Block* eb)
{
    Int retc = pthread_join(*(pthread_t*)thread->tid, NULL);

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (FALSE);
    }

    Log_write1(ThreadSupport_L_join, (IArg)thread);
    return (TRUE);
}

/*
 *  ======== ThreadSupport_getPriority ========
 */
ThreadSupport_Priority ThreadSupport_getPriority(ThreadSupport_Handle
    thread, Error_Block* eb)
{
    Int policy;
    Int retc;
    struct sched_param params;
    ThreadSupport_Priority threadPri;

    retc = pthread_getschedparam(*(pthread_t*)thread->tid, &policy, &params);

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (ThreadSupport_Priority_INVALID);
    }

    if (params.sched_priority == ThreadSupport_module->lowestPriority) {
        threadPri = ThreadSupport_Priority_LOWEST;
    }
    else if (params.sched_priority ==
             ThreadSupport_module->belowNormalPriority) {
        threadPri = ThreadSupport_Priority_BELOW_NORMAL;
    }
    else if (params.sched_priority == ThreadSupport_module->normalPriority) {
        threadPri = ThreadSupport_Priority_NORMAL;
    }
    else if (params.sched_priority ==
             ThreadSupport_module->aboveNormalPriority) {
        threadPri = ThreadSupport_Priority_ABOVE_NORMAL;
    }
    else if (params.sched_priority == ThreadSupport_module->highestPriority) {
        threadPri = ThreadSupport_Priority_HIGHEST;
    }
    else {
        threadPri = ThreadSupport_Priority_INVALID;
    }

    return (threadPri);
}

/*
 *  ======== ThreadSupport_setPriority ========
 */
Bool ThreadSupport_setPriority(ThreadSupport_Handle thread, \
    ThreadSupport_Priority newPri, Error_Block* eb)
{
    struct sched_param params;
    Int retc = 0;

    retc = sched_getparam(getpid(), &params);

    switch (newPri) {
        case ThreadSupport_Priority_LOWEST:
            params.sched_priority = ThreadSupport_module->lowestPriority;
            break;

        case ThreadSupport_Priority_BELOW_NORMAL:
            params.sched_priority = ThreadSupport_module->belowNormalPriority;
            break;

        case ThreadSupport_Priority_NORMAL:
            params.sched_priority = ThreadSupport_module->normalPriority;
            break;

        case ThreadSupport_Priority_ABOVE_NORMAL:
            params.sched_priority = ThreadSupport_module->aboveNormalPriority;
            break;

        case ThreadSupport_Priority_HIGHEST:
            params.sched_priority = ThreadSupport_module->highestPriority;
            break;

        default:
            Error_raise(NULL, ThreadSupport_E_priority, newPri, 0);
            return (FALSE);
    }

    retc |= sched_setparam(getpid(), &params);

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (FALSE);
    }
    else {
        return (TRUE);
    }
}
/*
 *  ======== ThreadSupport_getOsPriority ========
 */
Int ThreadSupport_getOsPriority(ThreadSupport_Handle thread, Error_Block* eb)
{
    Int policy;
    Int retc;
    struct sched_param params;

    retc = pthread_getschedparam(*(pthread_t*)thread->tid, &policy, &params);

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (IThreadSupport_GETPRI_FAILED);
    }
    return (params.sched_priority);
}

/*
 *  ======== ThreadSupport_setOsPriority ========
 */
Bool ThreadSupport_setOsPriority(ThreadSupport_Handle thread, Int newPri, Error_Block* eb)
{
    Int policy;
    struct sched_param params;
    Int retc = 0;

    retc = pthread_getschedparam(*(pthread_t*)thread->tid, &policy, &params);

    params.sched_priority = newPri;
    retc |= sched_setparam(getpid(), &params);

    if (retc) {
        Error_raise(eb, ThreadSupport_E_POSIX_Error, errno, NULL);
        return (FALSE);
    }
    else {
        return (TRUE);
    }
}

/*
 *  ======== ThreadSupport_getOsHandle ========
 */
Ptr ThreadSupport_getOsHandle(ThreadSupport_Handle thread)
{
    return (thread->tid);
}

/*
 *  ======== ThreadSupport_getTls ========
 */
Ptr ThreadSupport_getTls(ThreadSupport_Handle thread)
{
    return (thread->tls);
}

/*
 *  ======== ThreadSupport_setTls ========
 */
Void ThreadSupport_setTls(ThreadSupport_Handle thread, Ptr tls)
{
    thread->tls = tls;
}

/*
 *  ======== ThreadSupport_stat ========
 */
Bool ThreadSupport_stat(ThreadSupport_Handle thread,
    ThreadSupport_Stat* buf, Error_Block* eb)
{
    // for now, we have to assume thread == thread_self
    volatile Int test = 0;
    Ptr stackPtr = (Ptr)&test; // reasonable approximation

    buf->stackSize = thread->stackSize;
    // Assumes downward growing stack
    buf->stackUsed = thread->stackBase - stackPtr;

    return (TRUE);
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

