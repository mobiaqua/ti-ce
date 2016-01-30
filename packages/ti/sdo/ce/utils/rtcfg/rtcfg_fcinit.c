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
 *  ======== rtcfg_fcinit.c ========
 *  FC configuration for non-RTSC config examples. Compile this file as is,
 *  with apps that don't use the individual FC components here.. For apps whose
 *  local codecs use RMAN or DMAN3 etc, copy this file and modify as needed.
 */

/*
 *  Set USE_RMAN to 1 if the app uses RMAN, otherwise set to 0. If USE_RMAN
 *  is set to 1, the user may need to modify RMAN_PARAMS structure
 */
#define USE_RMAN 0


#include <xdc/std.h>

#if USE_RMAN
#include <ti/sdo/fc/rman/rman.h>
extern Bool _ALG_allocMemory(IALG_MemRec *memTab, Int n);
extern Void _ALG_freeMemory(IALG_MemRec *memTab, Int n);
#endif

//TODO: Next FC tree will fix this
//#include <ti/sdo/fc/global/Settings.h>
extern Bool ti_sdo_fc_multiProcess;

Void Rtcfg_fcInit()
{
#if USE_RMAN
    /* Configure RMAN */
    RMAN_PARAMS.allocFxn = &_ALG_allocMemory;
    RMAN_PARAMS.freeFxn = &_ALG_freeMemory;
#endif

    /* Add other FC configuration as necessary, this is only an example */
    /* Building for Linux so set multiProcess to TRUE */
    ti_sdo_fc_multiProcess = TRUE;
}



#if USE_RMAN
#else

/* PLEASE DO NOT MODIFY CODE BELOW */

/* If not using RMAN, the RMAN functions need to be stubbed out. */

#include <ti/xdais/ires.h>   /* for IRES types */

IRES_Status RMAN_activateAllResources(IALG_Handle algHandle,
        IRES_Fxns *resFxns, Int scratchId)
{
    return (IRES_OK);
}

IRES_Status RMAN_assignResources(IALG_Handle algHandle, IRES_Fxns *resFxns,
        Int scratchGroupId)
{
    return (IRES_OK);
}

IRES_Status RMAN_deactivateAllResources(IALG_Handle algHandle,
        IRES_Fxns * resFxns, Int scratchId)
{
    return (IRES_OK);
}

IRES_Status RMAN_freeResources(IALG_Handle algHandle, IRES_Fxns * resFxns,
        Int scratchGroupId)
{
    return (IRES_OK);
}

IRES_Status RMAN_init(void)
{
    return (IRES_OK);
}

IRES_Status RMAN_exit(void)
{
    return (IRES_OK);
}

#endif
/*
 *  @(#) ti.sdo.ce.utils.rtcfg; 1, 0, 1,3; 6-13-2013 00:19:39; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

