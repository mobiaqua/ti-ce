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
 *  ======== viddec1.c ========
 *  The XDM IVIDDEC1-compliant video decode APIs
 *
 *  The methods defined here must be independent of whether the underlying
 *  algorithm is executed locally or remotely.
 *
 *  In fact, these methods must exist on *both* the client and server; the
 *  VIDDEC1 skeletons (viddec1_skel.c) call these API's to create instances on
 *  the remote CPU.
 */

/* This define must precede inclusion of any xdc header files */
#define Registry_CURDESC ti_sdo_ce_video1_viddec1_desc

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Registry.h>

#include <string.h>  /* for memcpy and memset. */

#include <ti/sdo/ce/visa.h>
#include <ti/sdo/ce/global/CESettings.h>

#include <ti/xdais/ialg.h>
#include <ti/xdais/dm/ividdec1.h>

#include <ti/sdo/ce/utils/xdm/XdmUtils.h>

#include "viddec1.h"
#include "_viddec1.h"

#define MODNAME "ti.sdo.ce.video1.VIDDEC1"

Registry_Desc ti_sdo_ce_video1_viddec1_desc;

static Int regInit = 0;     /* Registry_addModule() called */

/*
 *  ======== VIDDEC1_control ========
 *  This method must be the same for both local and remote invocation;
 *  each call site in the client might be calling different implementations
 *  (one that marshalls & sends and one that simply calls).  This API
 *  abstracts *all* video decoders (both high and low complexity
 *  decoders are envoked using this method).
 */
XDAS_Int32 VIDDEC1_control(VIDDEC1_Handle handle, VIDDEC1_Cmd id,
    VIDDEC1_DynamicParams *dynParams, VIDDEC1_Status *status)
{
    XDAS_Int32 retVal = VIDDEC1_EFAIL;

    VIDDEC1_DynamicParams refDynParams;
    XDAS_Int32 refStatusSize;
    XDAS_Int32 refStatusDataBufSize;

    /*
     * Note, we assign "VISA_isChecked()" results to a local variable
     * rather than repeatedly query it throughout this fxn because
     * someday we may allow dynamically changing the global
     * 'VISA_isChecked()' value on the fly.  If we allow that, we need
     * to ensure the value stays consistent in the context of this
     * call.
     */
    Bool checked = VISA_isChecked();

    if (checked) {
        /* Ensure dynParams and status are non-NULL, per the XDM spec */

        if ((!(XdmUtils_validateExtendedStruct(dynParams, sizeof(*dynParams),
                "dynParams"))) || (!(XdmUtils_validateExtendedStruct(status,
                sizeof(*status), "status")))) {
            /* for safety, return here before dereferencing and crashing */
            return (retVal);
        }
    }

    Log_print6(Diags_ENTRY, "[+E] VIDDEC1_control> "
            "Enter (handle=0x%x, id=%d, dynParams=0x%x (size=0x%x), "
            "status=0x%x (size=0x%x)",
            (IArg)handle, (IArg)id, (IArg)dynParams, (IArg)(dynParams->size),
            (IArg)status, (IArg)(status->size));

    if (handle) {
        IVIDDEC1_Fxns *fxns =
            (IVIDDEC1_Fxns *)VISA_getAlgFxns((VISA_Handle)handle);
        IVIDDEC1_Handle alg = VISA_getAlgHandle((VISA_Handle)handle);

        if ((fxns != NULL) && (alg != NULL)) {
            if (checked) {

                /*
                 * Make a reference copy of dynParams, status->size, and
                 * status->data.bufSize so we can check that the codec
                 * didn't modify these read-only fields during control().
                 */
                refDynParams = *dynParams;
                refStatusSize = status->size;
                refStatusDataBufSize = status->data.bufSize;
            }

            //Log_printf(ti_sdo_ce_dvtLog, "%s", (Arg)"VIDDEC1:control",
            //    (Arg)handle, (Arg)0);

            VISA_enter((VISA_Handle)handle);
            retVal = fxns->control(alg, id, dynParams, status);
            VISA_exit((VISA_Handle)handle);

            if (checked) {
                /* ensure the codec didn't modify the read-only dynParams */
                if (memcmp(&refDynParams, dynParams, sizeof(*dynParams)) != 0) {
                    Log_print1(Diags_USER7,
                            "[+7] ERROR> codec (0x%x) modified read-only dynParams "
                            "struct!", (IArg)handle);
                }

                /* ensure the codec didn't change status->size */
                if (status->size != refStatusSize) {
                    Log_print1(Diags_USER7,
                            "[+7] ERROR> codec (0x%x) modified read-only status->size "
                            "field!", (IArg)handle);
                }

                /* ensure the codec didn't change status->data.bufSize */
                if (status->data.bufSize != refStatusDataBufSize) {
                    Log_print1(Diags_USER7,
                            "[+7] ERROR> codec (0x%x) modified read-only "
                            "status->data.bufSize field!", (IArg)handle);
                }
            }
        }
    }

    Log_print2(Diags_EXIT, "[+X] VIDDEC1_control> "
            "Exit (handle=0x%x, retVal=0x%x)", (IArg)handle, (IArg)retVal);

    return (retVal);
}


/*
 *  ======== VIDDEC1_create ========
 */
VIDDEC1_Handle VIDDEC1_create(Engine_Handle engine, String name,
    VIDDEC1_Params *params)
{
    Registry_Result   result;
    VIDDEC1_Handle visa;

    /* TODO:M  Race here!  Do we need ATM_Increment in our OSAL? */
    if (regInit == 0) {
        /* Register this module for logging */
        result = Registry_addModule(&ti_sdo_ce_video1_viddec1_desc, MODNAME);
        Assert_isTrue(result == Registry_SUCCESS, (Assert_Id)NULL);

        if (result == Registry_SUCCESS) {
            /* Set the diags mask to the CE default */
            CESettings_init();
            CESettings_setDiags(MODNAME);
        }
        regInit = 1;
    }

    Log_print3(Diags_ENTRY, "[+E] VIDDEC1_create> "
            "Enter (engine=0x%x, name='%s', params=0x%x)",
            (IArg)engine, (IArg)name, (IArg)params);

    visa = VISA_create(engine, name, (IALG_Params *)params,
        sizeof (_VIDDEC1_Msg), VIDDEC1_VISATYPE);

    Log_print1(Diags_EXIT, "[+X] VIDDEC1_create> return (0x%x)", (IArg)visa);

    return (visa);
}


/*
 *  ======== VIDDEC1_delete ========
 */
Void VIDDEC1_delete(VIDDEC1_Handle handle)
{
    Log_print1(Diags_ENTRY, "[+E] VIDDEC1_delete> Enter (handle=0x%x)",
            (IArg)handle);

    VISA_delete(handle);

    Log_print0(Diags_EXIT, "[+X] VIDDEC1_delete> return");
}


/*
 *  ======== VIDDEC1_process ========
 *  This method must be the same for both local and remote invocation;
 *  each call site in the client might be calling different implementations
 *  (one that marshalls & sends and one that simply calls).  This API
 *  abstracts *all* video decoders (both high and low complexity
 *  decoders are invoked using this method).
 */
XDAS_Int32 VIDDEC1_process(VIDDEC1_Handle handle, XDM1_BufDesc *inBufs,
    XDM_BufDesc *outBufs, VIDDEC1_InArgs *inArgs, VIDDEC1_OutArgs *outArgs)
{
    XDAS_Int32 retVal = VIDDEC1_EFAIL;

    VIDDEC1_InArgs refInArgs;
    Int32 i;

    /*
     * Note, we assign "VISA_isChecked()" results to a local variable
     * rather than repeatedly query it throughout this fxn because
     * someday we may allow dynamically changing the global
     * 'VISA_isChecked()' value on the fly.  If we allow that, we need
     * to ensure the value stays consistent in the context of this
     * call.
     */
    Bool checked = VISA_isChecked();

    if (checked) {
        /* Ensure inArgs and outArgs are non-NULL, per the XDM spec */

        if ((!(XdmUtils_validateExtendedStruct(inArgs, sizeof(*inArgs),
                "inArgs"))) || (!(XdmUtils_validateExtendedStruct(outArgs,
                sizeof(*outArgs), "outArgs")))) {
            /* for safety, return here before dereferencing and crashing */
            return (retVal);
        }
    }

    Log_print5(Diags_ENTRY, "[+E] VIDDEC1_process> "
            "Enter (handle=0x%x, inBufs=0x%x, outBufs=0x%x, inArgs=0x%x, "
            "outArgs=0x%x)",
            (IArg)handle, (IArg)inBufs, (IArg)outBufs, (IArg)inArgs,
            (IArg)outArgs);

    if (handle) {
        IVIDDEC1_Fxns *fxns =
            (IVIDDEC1_Fxns *)VISA_getAlgFxns((VISA_Handle)handle);
        IVIDDEC1_Handle alg = VISA_getAlgHandle((VISA_Handle)handle);

        if ((fxns != NULL) && (alg != NULL)) {
            if (checked) {
                /* validate inArgs with ranges. */
                if (inArgs->inputID == 0) {
                    Log_print2(Diags_USER7,
                            "[+7] ERROR> app provided codec (0x%x) with out of range "
                            "inArgs->inputID field (0x%x)",
                            (IArg)alg, (IArg)(inArgs->inputID));
                }

                /*
                 * Validate inBufs and outBufs.
                 */
                XdmUtils_validateSparseBufDesc1(inBufs, "inBufs");
                XdmUtils_validateSparseBufDesc(outBufs, "outBufs");

                /*
                 * Make a reference copy of inArgs so we can check that
                 * the codec didn't modify them during process().
                 */
                refInArgs = *inArgs;
            }

            //Log_printf(ti_sdo_ce_dvtLog, "%s", (Arg)"VIDDEC1:process",
            //    (Arg)handle, (Arg)0);

            VISA_enter((VISA_Handle)handle);
            retVal = fxns->process(alg, inBufs, outBufs, inArgs, outArgs);
            VISA_exit((VISA_Handle)handle);

            if (checked) {
                /* ensure the codec didn't modify the read-only inArgs */
                if (memcmp(&refInArgs, inArgs, sizeof(*inArgs)) != 0) {
                    Log_print1(Diags_USER7,
                            "[+7] ERROR> codec (0x%x) modified read-only inArgs "
                            "struct!", (IArg)handle);
                }

                /* only check these on successful return */
                if ((retVal == IVIDDEC1_EOK) || (!(XDM_ISFATALERROR(
                        outArgs->decodedBufs.extendedError)))) {
                    /* Validate outArgs->decodedBufs */
                    XdmUtils_validateVideo1BufDesc(&(outArgs->decodedBufs),
                            "decodedBufs");
                }

                /* Validate outArgs->displayBufs */
                for (i = 0; ((outArgs->outputID[i] != 0) &&
                        (i < XDM_MAX_IO_BUFFERS)); i++) {

                    if ((retVal == IVIDDEC1_EOK) ||
                            (!(XDM_ISFATALERROR(outArgs->
                            displayBufs[i].extendedError)))) {
                        XdmUtils_validateVideo1BufDesc(&(outArgs->displayBufs[i]),
                                "displayBufs");
                    }
                }
            }
        }
    }

    Log_print2(Diags_EXIT, "[+X] VIDDEC1_process> "
            "Exit (handle=0x%x, retVal=0x%x)", (IArg)handle, (IArg)retVal);

    return (retVal);
}
/*
 *  @(#) ti.sdo.ce.video1; 1, 0, 2,3; 6-13-2013 00:20:24; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

