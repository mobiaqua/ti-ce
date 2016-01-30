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
 *  ======== SemProcessSupport.xdc ========
 */

import xdc.runtime.Assert;
import xdc.runtime.Diags;
import xdc.runtime.Error;
import xdc.runtime.Log;
import xdc.runtime.knl.ISemProcessSupport;

@ModuleStartup          /* initialize statically allocated instances */
@InstanceInitError      /* because initialization can fail */
@InstanceFinalize       /* have to clean up on delete */
module SemProcessSupport inherits ISemProcessSupport
{

    /*! Asserted in SemProcess_pend */
    config Assert.Id A_unsupportedTimeout = {
        msg: "A_unsupportedTimeout: Only SemProcess_FOREVER is supported"
    };

    /*! Asserted in SemProcess_create */
    config Assert.Id A_invalidKey = {
        msg: "A_invalidKey: params key has not been set"
    };

    config Assert.Id A_POSIX_Error = {
        msg: "A_POSIX_Error: a POSIX function returned failure"
    };

    config Error.Id E_POSIX_Error = {
        msg: "E_POSIX_Error: a POSIX function returned failure, errno is %d"
    };

    config Log.Event L_extant = {
        mask: Diags.LIFECYCLE,
        msg: "--- SemProcess(%d) already exists, incrementing reference count"
    };

    config Log.Event L_create = {
        mask: Diags.LIFECYCLE,
        msg: "--- SemProcess(%d) DNE, creating"
    };

    config Int perms = 0666; /*! unix-style RW perms for the underlying sem */

internal:

    const Int POSIX_FAILURE = 1;

    struct Instance_State {
        Int id;     /*! ID of SysV semaphore */
        Int key;    /*! Key of SysV semaphore */
        Int count;  /*! used only for data transport from red to blue code */
        Mode mode;
    };
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

