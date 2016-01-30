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
 *  ======== _imgenc1.h ========
 */
#ifndef ti_sdo_ce_image1__IMGENC1_
#define ti_sdo_ce_image1__IMGENC1_

#include <ti/sdo/ce/visa.h>
#include <ti/xdais/dm/iimgenc1.h>

#ifdef __cplusplus
extern "C" {
#endif

#define _IMGENC1_CPROCESS        0
#define _IMGENC1_CCONTROL        1

/* msgq message to encode */
typedef struct {
    VISA_MsgHeader  visa;
    union {
        struct {
            XDM1_BufDesc        inBufs;
            XDM1_BufDesc        outBufs;

            IIMGENC1_InArgs     inArgs;     /* size def'd by 1st field */

            /*
             * outArgs follows inArgs
             * IIMGENC1_OutArgs    outArgs;
             *
             * Add a pad here for outArgs so we have a correct "minimum"
             * msg size.  The IPC framework may give us bigger msgs, so
             * we can handle variable sized extended fields, but this pad
             * ensures we get at least enough for base params.
             */
            UInt8               pad[sizeof(IIMGENC1_OutArgs)];
        } process;
        struct {
            IIMGENC1_Cmd           id;

            IIMGENC1_DynamicParams params;  /* size def'd by 1st field */

            /*
             * status follows params
             * IIMGENC1_Status      status;
             *
             * Similar to above, allow for a status-sized pad here.
             */
            UInt8               pad[sizeof(IIMGENC1_Status)];
        } control;
    } cmd;
} _IMGENC1_Msg;

#ifdef __cplusplus
}
#endif

#endif
/*
 *  @(#) ti.sdo.ce.image1; 1, 0, 1,3; 6-13-2013 00:15:50; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */
