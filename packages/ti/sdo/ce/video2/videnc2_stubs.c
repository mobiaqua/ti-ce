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
 *  ======== videnc2_stubs.c ========
 *  This file contains an implemenation of the IVIDENC2 interface for the
 *  video encoder class of algorithms.
 *
 *  These functions are the "client-side" of a "remote" implementation.
 *
 */

/* This define must precede inclusion of any xdc header files */
#define Registry_CURDESC ti_sdo_ce_video2_videnc2_desc

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Registry.h>

#include <ti/sdo/ce/visa.h>
#include <ti/xdais/dm/ividenc2.h>
#include <ti/sdo/ce/osal/Memory.h>

#include <string.h>  /* for memcpy and memset. */

#include <ti/sdo/ce/utils/xdm/XdmUtils.h>

#include "videnc2.h"
#include "_videnc2.h"

extern Registry_Desc ti_sdo_ce_video2_videnc2_desc;


static XDAS_Int32 process(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs);
static XDAS_Int32 processAsync(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs);
static XDAS_Int32 processWait(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs,
    UInt timeout);
static XDAS_Int32 control(IVIDENC2_Handle h, IVIDENC2_Cmd id,
    IVIDENC2_DynamicParams *params, IVIDENC2_Status *status);
static XDAS_Int32 marshallMsg(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs,
    _VIDENC2_Msg **pmsg);
static XDAS_Int32 unmarshallMsg(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs,
    _VIDENC2_Msg *msg, XDAS_Int32 retVal);

static XDAS_Int32 addrTranslatePlanes(XDAS_Int32 numPlanes,
        XDM2_SingleBufDesc *planeDesc);

IVIDENC2_Fxns VIDENC2_STUBS = {
    {&VIDENC2_STUBS, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    process, control,
};


/*
 *  ======== marshallMsg ========
 */
static XDAS_Int32 marshallMsg(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs,
    _VIDENC2_Msg **pmsg)
{
    XDAS_Int32 retVal = IVIDENC2_EOK;
    VISA_Handle visa = (VISA_Handle)h;
    _VIDENC2_Msg *msg;
    Int i;
    IVIDENC2_OutArgs *pMsgOutArgs;
    Int numBufs;
    Int payloadSize;

    /*
     * Validate arguments.  Do we want to do this _every_ time, or just in
     * checked builds?
     */
    if ((inArgs == NULL) || (inArgs->size < sizeof(IVIDENC2_InArgs)) ||
            (outArgs == NULL) || (outArgs->size < sizeof(IVIDENC2_OutArgs))) {

        /* invalid args, could even assert here, it's a spec violation. */
        return (IVIDENC2_EFAIL);
    }

    /*
     * Initialize extendedError to zero so we don't return something
     * uninitialized in extendedError.
     */
    outArgs->extendedError = 0;

    if (pmsg == NULL) {
        return (IVIDENC2_EFAIL);
    }

    /* make sure it'll all fit! */
    payloadSize = sizeof(VISA_MsgHeader) + sizeof(*inBufs) + sizeof(*outBufs) +
            inArgs->size + outArgs->size;

    if (payloadSize > VISA_getMaxMsgSize(visa)) {
        /* Can't handle these large extended args. */
        Log_print2(Diags_USER6,
                "[+6] process> invalid arguments - too big (0x%x > 0x%x).  "
                "Validate .size fields", payloadSize,
                VISA_getMaxMsgSize(visa));

        return (IVIDENC2_EUNSUPPORTED);
    }

    if ((inBufs->numPlanes > IVIDEO_MAX_NUM_PLANES) ||
            (inBufs->numMetaPlanes > IVIDEO_MAX_NUM_METADATA_PLANES)) {

        /* Invalid inBufs. */
        Log_print2(Diags_USER6,
                "[+6] process> invalid inBufs - validate .numPlanes (0x%x) "
                "and .numMetaPlanes (0x%x) fields", inBufs->numPlanes,
                inBufs->numMetaPlanes);

        return (IVIDENC2_EUNSUPPORTED);
    }

    /* get a message appropriate for this algorithm */
    if ((msg = (_VIDENC2_Msg *)VISA_allocMsg(visa)) == NULL) {
        return (IVIDENC2_EFAIL);
    }

    /* zero out msg->cmd (not msg->visa!) */
    memset(&(msg->cmd), 0, sizeof(msg->cmd));

    /*
     * Marshall the command: copy the client-passed arguments into flattened
     * message data structures, converting every pointer address to alg.
     * data buffer into physical address.
     */

    /* First specify the processing command that the skeleton should do */
    msg->visa.cmd = _VIDENC2_CPROCESS;

    /* commentary follows for marshalling the inBufs argument: */

    /* 1) initialize the whole inBufs struct */
    msg->cmd.process.inBufs = *inBufs;

    /* 2) translate plane arrays present in the inBufs */

    retVal = addrTranslatePlanes(inBufs->numPlanes,
            &(msg->cmd.process.inBufs.planeDesc[0]));
    if (retVal != IVIDENC2_EOK) {
        goto exit;
    }

    retVal = addrTranslatePlanes(inBufs->numMetaPlanes,
            &(msg->cmd.process.inBufs.metadataPlaneDesc[0]));
    if (retVal != IVIDENC2_EOK) {
        goto exit;
    }


    /* we're done (with inBufs). Because msg->cmd.process is non-cacheable
     * and contiguous (it has been allocated by MSGQ), we don't have to do
     * anything else.
     */

    /* translate outBufs. */
    msg->cmd.process.outBufs.numBufs = outBufs->numBufs;

    for (i = 0, numBufs = 0; i < XDM_MAX_IO_BUFFERS; i++) {
        if (outBufs->descs[i].buf != NULL) {
            /* initialize the buf desc, then translate the addr if needed */
            msg->cmd.process.outBufs.descs[i] = outBufs->descs[i];

            /* valid member of sparse array, convert it */
            if (outBufs->descs[i].memType == XDM_MEMTYPE_ROW) {
                msg->cmd.process.outBufs.descs[i].buf =  (XDAS_Int8 *)
                    Memory_getBufferPhysicalAddress(outBufs->descs[i].buf,
                        outBufs->descs[i].bufSize.bytes, NULL);
            }
            else {
                /* Does tiled memory need to be tranlated?!? */
                Log_print1(Diags_USER4,
                        "[+4] Tiled memory buffer detected (0x%x), no addr "
                        "translation", (IArg)outBufs->descs[i].buf);
            }

            if (msg->cmd.process.outBufs.descs[i].buf == NULL) {
                /* TODO:M - should add at least a trace statement when trace
                 * is supported.  Another good idea is to return something
                 * more clear than EFAIL.
                 */
                retVal = IVIDENC2_EFAIL;
                goto exit;
            }

            /* found, and handled, another buffer.  See if it's the last one */
            if (++numBufs == outBufs->numBufs) {
                break;
            }
        }
        else {
            /* empty member of sparse array, no conversion needed */
            msg->cmd.process.outBufs.descs[i].bufSize.bytes = 0;
            msg->cmd.process.outBufs.descs[i].buf = NULL;
        }
    }

    /* inArgs has no pointers so simply memcpy "size" bytes into the msg */
    memcpy(&(msg->cmd.process.inArgs), inArgs, inArgs->size);

    /* point at outArgs and set the "size" */
    pMsgOutArgs = (IVIDENC2_OutArgs *)((UInt)(&(msg->cmd.process.inArgs)) +
        inArgs->size);

    /* set the size field - the rest is filled in by the codec */
    pMsgOutArgs->size = outArgs->size;

    /*
     * Note that although outArgs contains pointers, they're not provided
     * by the application via the outArgs struct.  Rather the actual buffers
     * are provided by the application to the algorithm via outBufs.
     * So, the addresses in outArgs are output only, and do not require
     * address translation _before_ calling process().  They _do_ require
     * adress translation _after_ process(), as the algorithm may have written
     * physical addresses into the pointers.
     */

    *pmsg = msg;

    return (retVal);

exit:
    VISA_freeMsg(visa, (VISA_Msg)msg);

    return (retVal);
}

/*
 *  ======== unmarshallMsg ========
 */
static XDAS_Int32 unmarshallMsg(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs,
    _VIDENC2_Msg *msg, XDAS_Int32 retVal)
{
    VISA_Handle visa = (VISA_Handle)h;
    IVIDENC2_OutArgs *pMsgOutArgs;

    /*
     * Do a wholesale replace of skeleton returned structure.
     * Pointer conversion of fields in outArgs is done below (only
     * in the case of a successful return value).
     */
    pMsgOutArgs = (IVIDENC2_OutArgs *)((UInt)(&(msg->cmd.process.inArgs)) +
        inArgs->size);

    if (VISA_isChecked()) {
        /* ensure the codec didn't change outArgs->size */
        Assert_isTrue(pMsgOutArgs->size == outArgs->size, (Assert_Id)NULL);
    }

    memcpy(outArgs, pMsgOutArgs, outArgs->size);

    /* if VISA_call was successful, also unmarshall outBufs and outArgs */
    if (retVal == IVIDENC2_EOK) {
        /* unmarshall the output data: outBufs and outArgs. */

        retVal = addrTranslatePlanes(outArgs->reconBufs.numPlanes,
                outArgs->reconBufs.planeDesc);
        if (retVal != IVIDENC2_EOK) {
            goto exit;
        }

        retVal = addrTranslatePlanes(outArgs->reconBufs.numMetaPlanes,
                outArgs->reconBufs.metadataPlaneDesc);
        if (retVal != IVIDENC2_EOK) {
            goto exit;
        }
    }

    /* Note that we did *nothing* with inBufs nor inArgs.  This should be ok. */

exit:
    VISA_freeMsg(visa, (VISA_Msg)msg);

    return (retVal);
}

/*
 *  ======== process ========
 *  This is the sync stub implementation for the process method
 */
static XDAS_Int32 process(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs)
{
    XDAS_Int32 retVal;
    _VIDENC2_Msg *msg;
    VISA_Handle visa = (VISA_Handle)h;

    retVal = marshallMsg(h, inBufs, outBufs, inArgs, outArgs, &msg);
    if (retVal != IVIDENC2_EOK) {
        return (retVal);
    }

    /* send the message to the skeleton and wait for completion */
    retVal = VISA_call(visa, (VISA_Msg *)&msg);

    /* Regardless of return value, unmarshall outArgs. */
    retVal = unmarshallMsg(h, inBufs, outBufs, inArgs, outArgs, msg, retVal);

    return (retVal);
}

/*
 *  ======== processAsync ========
 *  This is the async stub implementation for the process method
 */
static XDAS_Int32 processAsync(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs)
{
    XDAS_Int32 retVal;
    _VIDENC2_Msg *msg;
    VISA_Handle visa = (VISA_Handle)h;

    retVal = marshallMsg(h, inBufs, outBufs, inArgs, outArgs, &msg);
    if (retVal != IVIDENC2_EOK) {
        return (retVal);
    }

    /* send the message to the skeleton without waiting for completion */
    retVal = VISA_callAsync(visa, (VISA_Msg *)&msg);

    return (retVal);
}

/*
 *  ======== processWait ========
 */
static XDAS_Int32 processWait(IVIDENC2_Handle h, IVIDEO2_BufDesc *inBufs,
    XDM2_BufDesc *outBufs, IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs,
    UInt timeout)
{
    XDAS_Int32 retVal;
    _VIDENC2_Msg *msg;
    VISA_Handle visa = (VISA_Handle)h;

    Assert_isTrue(!VISA_isLocal(visa), (Assert_Id)NULL);

    /* wait for completion of "last" message */
    retVal = VISA_wait(visa, (VISA_Msg *)&msg, timeout);

    /* Unmarshall outArgs if there is a msg to unmarshall. */
    if (msg != NULL) {
        Assert_isTrue(msg->visa.cmd == _VIDENC2_CPROCESS, (Assert_Id)NULL);

        retVal = unmarshallMsg(h, inBufs, outBufs, inArgs, outArgs, msg,
                retVal);
    }

    return (retVal);
}

/*
 *  ======== control ========
 *  This is the stub-implementation for the control method
 */
static XDAS_Int32 control(IVIDENC2_Handle h, IVIDENC2_Cmd id,
     IVIDENC2_DynamicParams *params, IVIDENC2_Status *status)
{
    XDAS_Int32 retVal;
    VISA_Handle visa = (VISA_Handle)h;
    _VIDENC2_Msg *msg;
    IVIDENC2_Status *pMsgStatus;
    XDAS_Int8 *virtAddr = NULL;
    Int payloadSize;

    /*
     * Validate arguments.  Do we want to do this _every_ time, or just in
     * checked builds?
     */
    if ((params == NULL) || (params->size < sizeof(IVIDENC2_DynamicParams)) ||
            (status == NULL) || (status->size < sizeof(IVIDENC2_Status))) {

        /* invalid args, could even assert here, it's a spec violation. */
        return (IVIDENC2_EFAIL);
    }

    /*
     * Initialize extendedError to zero so we don't return something
     * uninitialized in extendedError.
     */
    status->extendedError = 0;

    /* make sure it'll all fit! */
    payloadSize = sizeof(VISA_MsgHeader) + sizeof(id) + params->size +
            status->size;

    if (payloadSize > VISA_getMaxMsgSize(visa)) {
        /* Can't handle these large extended args. */
        Log_print2(Diags_USER6,
                "[+6] control> invalid arguments - too big (0x%x > 0x%x).  "
                "Validate .size fields", payloadSize,
                VISA_getMaxMsgSize(visa));

        return (IVIDENC2_EUNSUPPORTED);
    }

    /* get a message appropriate for this algorithm */
    if ((msg = (_VIDENC2_Msg *)VISA_allocMsg(visa)) == NULL) {
        return (IVIDENC2_EFAIL);
    }

    /* marshall the command */
    msg->visa.cmd = _VIDENC2_CCONTROL;

    msg->cmd.control.id = id;

    /* params has no pointers so simply memcpy "size" bytes into the msg */
    memcpy(&(msg->cmd.control.params), params, params->size);

    /* unmarshall status based on the "size" of params */
    pMsgStatus = (IVIDENC2_Status *)((UInt)(&(msg->cmd.control.params)) +
            params->size);

    /*
     * Initialize the .size and .data fields - the rest are filled in by
     * the codec.
     */
    pMsgStatus->size = status->size;

    if (status->data.buf != NULL) {
        pMsgStatus->data.bufSize = status->data.bufSize;

        /* save it for later */
        virtAddr = status->data.buf;

        pMsgStatus->data.buf = (XDAS_Int8 *)
            Memory_getBufferPhysicalAddress(status->data.buf,
                status->data.bufSize, NULL);

        if (pMsgStatus->data.buf == NULL) {
            retVal = IVIDENC2_EFAIL;
            goto exit;
        }
    }
    else {
        /* Place null into the msg so the skel knows it's invalid */
        pMsgStatus->data.buf = NULL;
    }

    /* send the message to the skeleton and wait for completion */
    retVal = VISA_call(visa, (VISA_Msg *)&msg);

    /* ensure we get CCONTROL msg (ensure async CPROCESS pipeline drained) */
    Assert_isTrue(msg->visa.cmd == _VIDENC2_CCONTROL, (Assert_Id)NULL);

    /* unmarshall status */
    pMsgStatus = (IVIDENC2_Status *)((UInt)(&(msg->cmd.control.params)) +
        params->size);

    if (VISA_isChecked()) {
        /* ensure codec didn't modify status->size */
        Assert_isTrue(pMsgStatus->size == status->size, (Assert_Id)NULL);

        /*
         * TODO:L  Should we also check that pMsgStatus->data.buf is the same
         * after the call as before?
         */
    }
    memcpy(status, pMsgStatus, status->size);

    /*
     * And finally, restore status->data.buf to its original value.  Note that
     * this works even when status->data.buf was NULL because virtAddr is
     * initialized to NULL.
     *
     * While potentially more confusing, this is just as correct as
     * (and faster than!) calling Memory_getVirtualBuffer().
     */
    status->data.buf = virtAddr;

    /* Clear .accessMask; the local processor didn't access the buffer */
    status->data.accessMask = 0;

exit:
    VISA_freeMsg(visa, (VISA_Msg)msg);

    return (retVal);
}

/*
 *  ======== VIDENC2_processAsync ========
 */
XDAS_Int32 VIDENC2_processAsync(VIDENC2_Handle handle,
    IVIDEO2_BufDesc *inBufs, XDM2_BufDesc *outBufs,
    IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs)
{
    XDAS_Int32 retVal = VIDENC2_EFAIL;

    /*
     * Note, we do this because someday we may allow dynamically changing
     * the global 'VISA_isChecked()' value on the fly.  If we allow that,
     * we need to ensure the value stays consistent in the context of this call.
     */
    Bool checked = VISA_isChecked();

    Log_print5(Diags_ENTRY, "[+E] VIDENC1_processAsync> "
            "Enter (handle=0x%x, inBufs=0x%x, outBufs=0x%x, inArgs=0x%x, "
            "outArgs=0x%x)",
            (IArg)handle, (IArg)inBufs, (IArg)outBufs, (IArg)inArgs,
            (IArg)outArgs);

    if (handle) {
        IVIDENC2_Handle alg = VISA_getAlgHandle((VISA_Handle)handle);

        if (alg != NULL) {
            if (checked) {

                /* validate inArgs with ranges. */
                if (inArgs->inputID == 0) {
                    Log_print2(Diags_USER7,
                            "[+7] ERROR> app provided codec (0x%x) with out of range "
                            "inArgs->inputID field (0x%x)",
                            (IArg)alg, (IArg)(inArgs->inputID));
                }

                /* Validate inBufs and outBufs. */
/* TBD             XdmUtils_validateVideoBufDesc1(inBufs, "inBufs"); */
/* TBD             XdmUtils_validateSparseBufDesc(outBufs, "outBufs"); */
            }

            retVal = processAsync(alg, inBufs, outBufs, inArgs, outArgs);
        }
    }

    Log_print2(Diags_EXIT, "[+X] VIDENC1_processAsync> "
            "Exit (handle=0x%x, retVal=0x%x)", (IArg)handle, (IArg)retVal);

    return (retVal);
}


/*
 *  ======== VIDENC2_processWait ========
 */
XDAS_Int32 VIDENC2_processWait(VIDENC2_Handle handle,
    IVIDEO2_BufDesc *inBufs, XDM2_BufDesc *outBufs,
    IVIDENC2_InArgs *inArgs, IVIDENC2_OutArgs *outArgs, UInt timeout)
{
    XDAS_Int32 retVal = VIDENC2_EFAIL;
    VIDENC2_InArgs refInArgs;

    /*
     * Note, we do this because someday we may allow dynamically changing
     * the global 'VISA_isChecked()' value on the fly.  If we allow that,
     * we need to ensure the value stays consistent in the context of this call.
     */
    Bool checked = VISA_isChecked();

    Log_print5(Diags_ENTRY, "[+E] VIDENC1_processWait> "
            "Enter (handle=0x%x, inBufs=0x%x, outBufs=0x%x, inArgs=0x%x, "
            "outArgs=0x%x)",
            (IArg)handle, (IArg)inBufs, (IArg)outBufs, (IArg)inArgs,
            (IArg)outArgs);

    if (handle) {
        IVIDENC2_Handle alg = VISA_getAlgHandle((VISA_Handle)handle);

        if (alg != NULL) {
            if (checked) {
                /*
                 * Make a reference copy of inArgs so we can check that
                 * the codec didn't modify them during process().
                 */
                refInArgs = *inArgs;
            }

            retVal = processWait(alg, inBufs, outBufs, inArgs, outArgs,
                    timeout);

            if (checked) {
                /* ensure the codec didn't modify the read-only inArgs */
                if (memcmp(&refInArgs, inArgs, sizeof(*inArgs)) != 0) {
                    Log_print1(Diags_USER7,
                            "[+7] ERROR> codec (0x%x) modified read-only inArgs "
                            "struct!", (IArg)handle);
                }
            }
        }
    }

    Log_print2(Diags_EXIT, "[+X] VIDENC1_processWait> "
            "Exit (handle=0x%x, retVal=0x%x)", (IArg)handle, (IArg)retVal);

    return (retVal);
}


XDAS_Int32 addrTranslatePlanes(XDAS_Int32 numPlanes,
        XDM2_SingleBufDesc *planeDesc)
{
    Int i;
    XDAS_Int32 retval = IVIDENC2_EOK;

    for (i = 0; i < numPlanes; i++) {
        if (planeDesc[i].buf != NULL) {
            /* found a virtual buffer address, translate it. */
            if (planeDesc[i].memType == XDM_MEMTYPE_ROW) {
                planeDesc[i].buf =  (XDAS_Int8 *)
                    Memory_getBufferPhysicalAddress(planeDesc[i].buf,
                        planeDesc[i].bufSize.bytes, NULL);
            }
            else {
                /* Does tiled memory need to be tranlated?!? */
                Log_print1(Diags_USER4,
                        "[+4] Tiled memory buffer detected (0x%x), no addr "
                        "translation", (IArg)planeDesc[i].buf);
            }

            if (planeDesc[i].buf == NULL) {
                return(IVIDENC2_EFAIL);
            }

            /* Clear .accessMask; the local processor won't access this buf */
            planeDesc[i].accessMask = 0;
        }
        else {
            /* numPlanes said there'd be a buffer here, but there's not! */
            Log_print2(Diags_USER6,
                    "[+6] %d buffers indicated, but buffer %d is NULL",
                    numPlanes, i);
            return(IVIDENC2_EUNSUPPORTED);
        }
    }

    return (retval);
}
/*
 *  @(#) ti.sdo.ce.video2; 1, 0, 3,3; 6-13-2013 00:20:39; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

