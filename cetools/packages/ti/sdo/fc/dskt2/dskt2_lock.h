/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 * Copyright (c) 2012, Texas Instruments Incorporated
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
/**
 *  @file               ti/sdo/fc/dskt2/dskt2_lock.h
 *
 *  @brief              Provides acquire/release lock functionality
 */

#ifndef DSKT2_LOCK
#define DSKT2_LOCK

#ifdef __cplusplus
extern "C" {
#endif

/** @ingroup ti_sdo_fc_dskt2_DSKT2 */
/*@{*/

#include <ti/xdais/ires.h>
#include "dskt2.h"


IRES_YieldContextHandle DSKT2_getContext(Int scratchId);
Void DSKT2_setContext(Int scratchId, IRES_YieldContextHandle context);
Void DSKT2_acquireLock(Int scratchId);
Void DSKT2_releaseLock(Int scratchId);
Void DSKT2_initLocks();
Void DSKT2_exitLocks();

/*@}*/

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif  /* DSKT2_LOCK*/
/*
 *  @(#) ti.sdo.fc.dskt2; 1, 0, 4,1; 6-12-2013 19:56:10; /db/atree/library/trees/fc/fc-t09/src/ xlibrary

 */

