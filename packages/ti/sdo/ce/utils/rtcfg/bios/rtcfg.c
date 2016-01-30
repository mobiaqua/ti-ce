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
 *  ======== rtcfg.c ========
 *  This file is used for MFP BIOS examples building with no MFP modules
 *  in the .cfg script. Other modules, such as BIOS and IPC will still need
 *  to be configured in the .cfg script.
 *  Common variables and functions that should not need any modification.
 *
 *  Use this file for local BIOS based Codec Engine apps only.  For Codec
 *  Engine servers, use svr_rtcfg.c instead of this file.
 */

#include <xdc/std.h>

#include <ti/xdais/ialg.h>

#include <ti/sdo/ce/Engine.h>


/*
 *  ======== ti.sdo.ce Settings Configuration ========
 *  Set to TRUE for 'checked' builds.
 *  Declare VISA_checked as extern Bool in main.c, set to TRUE bofore the
 *  call to CERuntime_init().
 */
Bool VISA_checked = FALSE;

/*
 *  ====================================================
 *  None of the code below this line should be modified!
 *  ====================================================
 */

#include <xdc/runtime/knl/SemProcess.h>


/*
 * ======== ti.sdo.ce.alg internal variables ========
 */

UInt32 ti_sdo_ce_alg_Algorithm_MAXGROUPID = 20;

IALG_Handle _Algorithm_lockOwner[20] = {
     NULL, NULL, NULL, NULL, NULL,
     NULL, NULL, NULL, NULL, NULL,
     NULL, NULL, NULL, NULL, NULL,
     NULL, NULL, NULL, NULL, NULL,
};

int _ALG_groupUsed[20] = {
     0, 0, 0, 0, 0,
     0, 0, 0, 0, 0,
     0, 0, 0, 0, 0,
     0, 0, 0, 0, 0,
};

int _ALG_groupRefCount[20] = {
     0, 0, 0, 0, 0,
     0, 0, 0, 0, 0,
     0, 0, 0, 0, 0,
     0, 0, 0, 0, 0,
};

/*
 * ======== ti.sdo.ce.CERuntime ========
 */

#include <xdc/runtime/Diags.h>

#include <ti/sdo/ce/global/CESettings.h>
#include <ti/sdo/fc/global/FCSettings.h>

#include <ti/sdo/ce/osal/Global.h>
#include <ti/sdo/ce/ipc/Comm.h>
#include <ti/sdo/ce/osal/Loader.h>
#include <ti/sdo/ce/osal/Memory.h>
#include <ti/sdo/ce/osal/Queue.h>
#include <ti/sdo/ce/ipc/Processor.h>
#include <ti/sdo/ce/alg/Algorithm.h>
#include <ti/sdo/ce/Server.h>
#include <ti/sdo/ce/Engine.h>
#include <ti/sdo/ce/rms.h>
#include <ti/sdo/ce/utils/xdm/XdmUtils.h>



static Int ceInit = 0;

/*
 *  ======== CERuntime_init ========
 */
Void CERuntime_init(Void)
{
    if (ceInit++ == 0) {

        CESettings_init();
        FCSettings_init();


        /* if CE_DEBUG is set, turn on tracing and DSP auto trace collection */
        if (Global_getenv("CE_DEBUG") != NULL) {
            extern Bool   Engine_alwaysCollectDspTrace;
            extern String Engine_ceDebugDspTraceMask;

            Engine_alwaysCollectDspTrace = TRUE;

            /*
             * Note the strategy for setting trace masks below...
             * For any mods not yet registered, we set the
             * [FC|CE]SETTINGS_MODNAME mask.  For any mods already
             * registered, we Diags_setMask() them.
             */

            if (Global_getenv("CE_DEBUG")[0] == '1') {
                /* Turn on CE/FC levels 6 and 7 */
                xdc_runtime_Diags_setMask(CESETTINGS_MODNAME"+67");
                xdc_runtime_Diags_setMask(FCSETTINGS_MODNAME"+67");
                xdc_runtime_Diags_setMask("ti.sdo.ce.%+67");
                xdc_runtime_Diags_setMask("ti.sdo.fc.%+67");

                /* Same for any Servers */
                Engine_ceDebugDspTraceMask = "ti.sdo.ce.%+67;ti.sdo.fc.%+67";
            }
            else if (Global_getenv("CE_DEBUG")[0] == '2') {
                xdc_runtime_Diags_setMask(CESETTINGS_MODNAME"+EX1234567");
                xdc_runtime_Diags_setMask(FCSETTINGS_MODNAME"+EX1234567");
                xdc_runtime_Diags_setMask("ti.sdo.ce.%+EX1234567");
                xdc_runtime_Diags_setMask("ti.sdo.fc.%+EX1234567");

                Engine_ceDebugDspTraceMask =
                    // Current Diags mask: (time=2 ==> display time in delta usec
                    "ti.sdo.ce.%+EX1234567;ti.sdo.fc.%+EX12345678;ti.sdo.ce.rms=67;ti.sdo.fc.dman3-2;ti.sdo.fc.dskt2-2;time=2";
            }
            else if (Global_getenv("CE_DEBUG")[0] == '0') {
                /* Don't set anything if someone tries to turn CE_DEBUG off */
            } else {
                xdc_runtime_Diags_setMask("ti.sdo.ce.%+EX1234567");
                xdc_runtime_Diags_setMask("ti.sdo.fc.%+EX1234567");

                Engine_ceDebugDspTraceMask =
                    "time=2;ti.sdo.fc.%+EX1234567;ti.sdo.ce.%+EX1234567;ti.sdo.fc.dskt2-2";
            }
        }
        else {
            //xdc_runtime_Diags_setMask("ti.sdo.ce.Engine-EX1234567");
            //xdc_runtime_Diags_setMask("ti.sdo.ce.VISA-EX1234567");
        }

        if (Global_getenv("CE_CHECK") != NULL) {
            extern Bool VISA_checked;

            /*
             * Currently just change _this_ processor's value... perhaps we
             * should enable remote processors as well?
             */
            if (Global_getenv("CE_CHECK")[0] == '1') {
                VISA_checked = TRUE;
                xdc_runtime_Diags_setMask("ti.sdo.ce.%+7");
            } else if (Global_getenv("CE_CHECK")[0] == '0') {
                VISA_checked = FALSE;
            } else {
                /* leave it whatever it was. maybe we should drop a warning? */
            }
        }

        /* allow user to over-ride via CE_TRACE. */
        if (Global_getenv("CE_TRACE") != NULL) {
            xdc_runtime_Diags_setMask(Global_getenv("CE_TRACE"));
        }
        Global_init();


        ti_sdo_ce_osal_Memory_init();
        Comm_init();
        Processor_init();
        Algorithm_init();
        XdmUtils_init();

        Engine_init();
        _VISA_init();
        Loader_init();
       Server_init();
        if ((Global_getenv("CE_DEBUG") != NULL) &&
                (Global_getenv("CE_DEBUG")[0] == '2')) {

            /*
             *  set up masks that must be deferred until the modules have been
             *  initialized.
             */
            //xdc_runtime_Diags_setMask(Comm_MODNAME"-EX12345");
            xdc_runtime_Diags_setMask("ti.sdo.ce.osal.%-EX123");
            //xdc_runtime_Diags_setMask(Algorithm_MODNAME"-EX12345");

            xdc_runtime_Diags_setMask("ti.sdo.ce.Engine-3");
            xdc_runtime_Diags_setMask("ti.sdo.ce.ipc.Comm=67");
        }

        /*
         *  Allow user to over-ride via CE_TRACE. Putting this after module
         *  initialization, since it will have no effect if called before.
         *  Only wildcard settings seem to work when placed before module
         *  initialization.
         */
        if (Global_getenv("CE_TRACE") != NULL) {
            xdc_runtime_Diags_setMask(Global_getenv("CE_TRACE"));
        }
    }
}


/*
 *  ======== CERuntime_exit ========
 */
Void CERuntime_exit(Void)
{
    Global_exit();
}

/* for backward compatibility with xdc-m based tools */
Void ti_sdo_ce_CERuntime_init__F(Void) {
    CERuntime_init();
}

/* Should we auto-add remote algs to the Engine? */
Bool ti_sdo_ce_Engine_initFromServer = TRUE;


/* List of all packages and their versions and paths, for diagnostics */
String Global_buildInfo[] = {
    NULL
};

#include <ti/sdo/ce/osal/bios/Global_BIOS.h>
__FAR__ Char ti_sdo_ce_osal_bios_Global_CE_DEBUG[2] = "";
__FAR__ Char ti_sdo_ce_osal_bios_Global_CE_CHECK[2] = "";
/*
 *  @(#) ti.sdo.ce.utils.rtcfg; 1, 0, 1,3; 6-13-2013 00:19:38; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

