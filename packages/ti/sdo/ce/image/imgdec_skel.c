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
 *  ======== imgdec_skel.c ========
 *  This file contains the implemenation of the SKEL interface for the
 *  image decoder class of algorithms.
 *
 *  These functions are the "server-side" of the the stubs defined in
 *  imgdec_stubs.c
 */

/* This define must precede inclusion of any xdc header files */
#define Registry_CURDESC ti_sdo_ce_image_imgdec_desc

#include <xdc/std.h>
#include <xdc/runtime/Registry.h>

#include <ti/sdo/ce/skel.h>
#include <ti/sdo/ce/osal/Memory.h>

#include "imgdec.h"
#include "_imgdec.h"

extern Registry_Desc ti_sdo_ce_image_imgdec_desc;

/*
 *  ======== call ========
 */
static VISA_Status call(VISA_Handle visaHandle, VISA_Msg visaMsg)
{
    _IMGDEC_Msg *msg  = (_IMGDEC_Msg *)visaMsg;
    IMGDEC_Handle handle = (IMGDEC_Handle)visaHandle;
    Int i;
    XDM_BufDesc inBufs, outBufs;
    IIMGDEC_OutArgs *pOutArgs;
    IIMGDEC_Status *pStatus;
    IIMGDEC_CodecClassConfig *codecClassConfig;

    /* get stub/skeleton config data; can be NULL (for old codecs) */
    codecClassConfig = (IIMGDEC_CodecClassConfig *)
                        VISA_getCodecClassConfig( visaHandle );

    /* perform the requested IMGDEC operation by parsing message. */
    switch (msg->visa.cmd) {

        case _IMGDEC_CPROCESS: {
            /* unmarshall inBufs and outBufs since they differ in shape
             * from what their flattened versions passed in the message
             */
            inBufs.bufs      = msg->cmd.process.inBufs;
            inBufs.numBufs   = msg->cmd.process.numInBufs;
            inBufs.bufSizes  = msg->cmd.process.inBufSizes;
            outBufs.bufs     = msg->cmd.process.outBufs;
            outBufs.numBufs  = msg->cmd.process.numOutBufs;
            outBufs.bufSizes = msg->cmd.process.outBufSizes;

            if (SKEL_cachingPolicy == SKEL_LOCALBUFFERINVWB) {
                /* invalidate cache for all input buffers */
                for (i = 0; i < inBufs.numBufs; i++) {
                    if (codecClassConfig != NULL &&
                        codecClassConfig->manageInBufsCache[i] == FALSE) {
                        continue;
                    }
                    Memory_cacheInv(inBufs.bufs[i], inBufs.bufSizes[i]);
                }

                /* invalidate cache for all output buffers */
                for (i = 0; i < outBufs.numBufs; i++) {
                    if (codecClassConfig != NULL &&
                        codecClassConfig->manageOutBufsCache[i] == FALSE) {
                        continue;
                    }
                    Memory_cacheInv(outBufs.bufs[i], outBufs.bufSizes[i]);
                }
            }

            /* unmarshall outArgs based on the "size" of inArgs */
            pOutArgs = (IIMGDEC_OutArgs *)((UInt)(&(msg->cmd.process.inArgs)) +
                msg->cmd.process.inArgs.size);

            /* make the process call */
            msg->visa.status = IMGDEC_process(handle,
                &inBufs, &outBufs, &(msg->cmd.process.inArgs), pOutArgs);

            if (SKEL_cachingPolicy == SKEL_WBINVALL) {
                Memory_cacheWbInvAll();
            }
            else if (SKEL_cachingPolicy == SKEL_LOCALBUFFERINVWB) {
                /* writeback cache for all output buffers  */
                for (i = 0; i < outBufs.numBufs; i++) {
                    if (codecClassConfig != NULL &&
                        codecClassConfig->manageOutBufsCache[i] == FALSE) {
                        continue;
                    }
                    Memory_cacheWb(outBufs.bufs[i], outBufs.bufSizes[i]);
                }
            }

            /*
             * Note that any changes to individual outBufs[i] values made by
             * the codec will automatically update msg->cmd.process.outBufs
             * as we pass the outBufs array by reference.
             */

            break;
        }

        case _IMGDEC_CCONTROL: {
            /* unmarshall status based on the "size" of params */
            pStatus = (IIMGDEC_Status *)((UInt)(&(msg->cmd.control.params)) +
                msg->cmd.control.params.size);

            msg->visa.status = IMGDEC_control(handle, msg->cmd.control.id,
                &(msg->cmd.control.params), pStatus);

             break;
        }

        default: {
            msg->visa.status = VISA_EFAIL;

            break;
        }
    }
    return (VISA_EOK);
}

/*
 *  ======== IMGDEC_SKEL ========
 */
SKEL_Fxns IMGDEC_SKEL = {
    call,
    (SKEL_CREATEFXN)&IMGDEC_create,
    (SKEL_DESTROYFXN)&IMGDEC_delete,
};
/*
 *  @(#) ti.sdo.ce.image; 1, 0, 3,3; 6-13-2013 00:15:43; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

