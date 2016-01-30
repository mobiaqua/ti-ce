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
 *  ======== SemThreadSupport.xdc ========
 */

import xdc.runtime.Assert;
import xdc.runtime.Error;
import xdc.runtime.knl.ISemThreadSupport;

@ModuleStartup          /* initialize statically allocated instances */
@InstanceInitError      /* because initialization can fail */
@InstanceFinalize       /* have to sem_destroy on delete */
module SemThreadSupport inherits ISemThreadSupport
{

    config Assert.Id A_POSIX_Error = {
        msg: "A_POSIX_Error: a POSIX function returned failure"
    };

    config Error.Id E_POSIX_Error = {
        msg: "E_POSIX_Error: a POSIX function returned failure, errno is %d"
    };

    config Error.Id E_resetError = {
        msg: "E_resetError: %s returned failure"
    };

internal:

    const Int ALLOC_FAILURE = 2;
    const Int POSIX_FAILURE = 1;

    struct Instance_State {
        //struct sem_t* sem;
        void* sem;
        Mode mode;
    };

    struct Module_State {
        //pthread_mutex_t mutex;
        void * mutex;
    }
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

