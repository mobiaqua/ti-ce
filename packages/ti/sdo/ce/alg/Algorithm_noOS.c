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
 *  ======== Algorithm_noOS.c ========
 */

/* This define must precede inclusion of any xdc header files */
#define Registry_CURDESC ti_sdo_ce_algorithm_desc

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Registry.h>

#include <ti/xdais/idma3.h>
#include <ti/xdais/ires.h>
#include <ti/xdais/ialg.h>


#include <ti/sdo/ce/osal/Memory.h>
#include <ti/sdo/ce/osal/Global.h>

#include <ti/sdo/ce/global/CESettings.h>

#include "alg.h"
#include "_alg.h"
#include "Algorithm.h"


/*
 *  ======== Algorithm_Obj ========
 */
typedef struct Algorithm_Obj {
    IALG_Handle alg;
    Int         groupId;
    UInt32      useCachedMem;
} Algorithm_Obj;


Registry_Desc ti_sdo_ce_algorithm_desc;

static Int curInit = FALSE;
static Int regInit = 0;     /* Registry_addModule() called */

/*
 *  ======== Algorithm_acquireLock ========
 */
Void Algorithm_acquireLock(Int groupId, IALG_Handle alg)
{

    Log_print2(Diags_ENTRY, "[+E] Algorithm_acquireLock> Enter(alg=0x%x,"
            " groupId=%d)", (IArg)alg, (IArg)groupId);

    ALG_acquireLock(groupId, alg);

    if ((0 <= groupId) && (groupId < _ALG_NUMGROUPS)) {
        /* Would be NULL if noone else grabbed it, would be some other alg if
           some alg in some other thread grabbed it */
        _Algorithm_lockOwner[groupId] = alg;
    }

    Log_print0(Diags_EXIT, "[+X] Algorithm_acquireLock> Exit");
}

/*
 *  ======== Algorithm_activate ========
 */
Void Algorithm_activate(Algorithm_Handle alg)
{
    Algorithm_Obj *pObject = (Algorithm_Obj *)alg;

    Log_print1(Diags_ENTRY, "[+E] Algorithm_activate> Enter(alg=0x%x)",
            (IArg)alg);

    ALG_activate(pObject->groupId, pObject->alg);

    if ((0 <= pObject->groupId) && (pObject->groupId < _ALG_NUMGROUPS)) {
        _Algorithm_lockOwner[pObject->groupId] = pObject->alg;
    }

    Log_print0(Diags_EXIT, "[+X] Algorithm_activate> Exit");
}


/*
 *  ======== Algorithm_addGroup ========
 */
Bool Algorithm_addGroup(Int groupId)
{
    Bool    retVal;

    Log_print1(Diags_ENTRY, "[+E] Algorithm_addGroup> Enter(groupId=%d)",
            (IArg)groupId);

    retVal = ALG_addGroup(groupId);

    Log_print1(Diags_EXIT, "[+X] Algorithm_addGroup> Exit (retVal = %d)",
            (IArg)retVal);

    return (retVal);
}

/*
 *  ======== Algorithm_create ========
 */
Algorithm_Handle Algorithm_create(IALG_Fxns *fxns, Void *idma3Fxns,
        Void *iresFxns, IALG_Params *params, Algorithm_Attrs *attrs)
{
    Algorithm_Obj *pObject = NULL;
    Int         groupId;
    UInt32      useCachedMem;

    Log_print5(Diags_ENTRY, "[+E] Algorithm_create> Enter("
            "fxns=0x%x, idma3Fxns=0x%x, iresFxns=0x%x, params=0x%x, "
            "attrs=0x%x)",
            (IArg)fxns, (IArg)idma3Fxns, (IArg)iresFxns, (IArg)params,
            (IArg)attrs);

    groupId = (attrs != NULL) ? attrs->groupId : -1;
    useCachedMem = (attrs != NULL) ? attrs->useCachedMem :
            Algorithm_USECACHEDMEM_DEFAULT;

    Log_print1(Diags_USER2, "Algorithm_create> useCachedMem = %d",
            (IArg)useCachedMem);

    /* if (attrs == NULL) use default groupId */
    if ((pObject = (Algorithm_Obj *)Memory_alloc(sizeof(Algorithm_Obj),
                 NULL)) == NULL) {
        Log_print0(Diags_USER7, "[+7] Algorithm_create> "
                "Alloc for a small object FAILED -- out of memory?");
        goto Algorithm_create_return;
    }

    pObject->alg = ALG_create(groupId, fxns, NULL, params, useCachedMem);
    pObject->groupId = groupId;

    if (pObject->alg == NULL) {
        Log_print0(Diags_USER7, "[+7] Algorithm_create> "
                "Algorithm creation FAILED; make sure that 1) alg params are "
                "correct/appropriate, 2) there is enough internal and external "
                "algorithm memory available -- check DSKT2 settings for heap "
                "assignments and scratch allocation");
        Algorithm_delete(pObject);
        pObject = NULL;
        goto Algorithm_create_return;
    }

Algorithm_create_return:

    Log_print1(Diags_EXIT, "[+X] Algorithm_create> return (0x%x)",
            (IArg)pObject);

    return (pObject);
}


/*
 *  ======== Algorithm_deactivate ========
 */
Void Algorithm_deactivate(Algorithm_Handle alg)
{
    Algorithm_Obj *pObject = (Algorithm_Obj *)alg;

    Log_print1(Diags_ENTRY, "[+E] Algorithm_deactivate> Enter(alg=0x%x)",
            (IArg)alg);

    /*
     * At this stage, Algorithm could already have released
     * scratch group lock (using new APIs above). Which means they saved all
     * scratch context, and some other alg now have control of scratch group,
     * Need to keep track of what ALG called release lock and probably not do
     * anything in deactivate for those ALG(s) ??!!
     */

    /* Need to actually deactivate if _Algorithm_lockOwner[groupId] == alg
     * If _Algorithm_lockOwner[groupId] == NULL, some other process may have
     * lock, i.e, alg is already deactivated
     * If _Algorithm_lockOwner[groupId] != NULL and != alg, some other
     * thread in this process has the group lock, and this alg is
     * deactive. In both of the above cases, do nothing here !!
     */


    if (_Algorithm_lockOwner[pObject->groupId] == pObject->alg) {

       _Algorithm_lockOwner[pObject->groupId] = NULL;

        ALG_deactivate(pObject->groupId, pObject->alg);
    }

    Log_print0(Diags_EXIT, "[+X] Algorithm_deactivate> Exit");
}


/*
 *  ======== Algorithm_delete ========
 */
Void Algorithm_delete(Algorithm_Handle alg)
{
    Algorithm_Obj *pObject = (Algorithm_Obj *)alg;

    Log_print1(Diags_ENTRY, "[+E] Algorithm_delete> Enter(alg=0x%x)",
            (IArg)alg);

    if (pObject != NULL) {

        if (pObject->alg) {
            ALG_delete(pObject->groupId, pObject->alg, pObject->useCachedMem);
        }

        Memory_free(pObject, sizeof (*pObject), NULL);
    }

    Log_print0(Diags_EXIT, "[+X] Algorithm_delete> Exit");
}


/*
 *  ======== Algorithm_exit ========
 */
Void Algorithm_exit()
{
    Assert_isTrue(curInit > 0, (Assert_Id)NULL);

    if (--curInit == 0) {
        ALG_exit();

    }
}


/*
 *  ======== Algorithm_getAlgHandle ========
 */
IALG_Handle Algorithm_getAlgHandle(Algorithm_Handle handle)
{
    Algorithm_Obj *pObject = (Algorithm_Obj *)handle;

    /* reach into the internal object and return the iAlg handle */
    return (pObject->alg);
}


/*
 *  ======== Algorithm_getMemRecs ========
 */
Int Algorithm_getMemRecs(Algorithm_Handle alg, IALG_MemRec *memTab,
        Int size)
{
    /* This API is not supported */
    return (-1);
}

/*
 *  ======== Algorithm_getNumRecs ========
 */
Int Algorithm_getNumRecs(Algorithm_Handle handle)
{
    /* This API is not supported */
    return (-1);
}

/*
 *  ======== Algorithm_init ========
 */
Void Algorithm_init()
{
    Registry_Result   result;

    /*
     *  No need to reference count for Registry_addModule(), since there
     *  is no way to remove the module.
     */
    if (regInit == 0) {
        /* Register this module for logging */
        result = Registry_addModule(&ti_sdo_ce_algorithm_desc,
                Algorithm_MODNAME);
        Assert_isTrue(result == Registry_SUCCESS, (Assert_Id)NULL);

        if (result == Registry_SUCCESS) {
            /* Set the diags mask to the CE default */
            CESettings_init();
            CESettings_setDiags(Algorithm_MODNAME);
        }
        regInit = 1;
    }

    if (curInit++ == 0) {

        /*
         *  NOTE: We are calling ALG_init() here rather than calling it in
         *  CERuntime_init(). This simplifies the auto-generation of
         *  CERuntime_init(), since ALG is not used in Algorithm_BIOS.c.
         *  Since ALG_init() is called here, to keep the symmetry, we will
         *  also call ALG_exit() from Algorithm_exit(), rather than having
         *  ALG_init() register its exit function through Global_atexit().
         */
        ALG_init();
        Global_atexit((Fxn)Algorithm_exit);
    }
}


/*
 *  ======== Algorithm_releaseLock ========
 */
Void Algorithm_releaseLock(Int groupId, IALG_Handle alg)
{
    Log_print2(Diags_ENTRY, "[+E] Algorithm_releaseLock> Enter(alg=0x%x,"
            " groupId=%d)", (IArg)alg, (IArg)groupId);

    /* Make sure the alg releasing the lock, is the alg that owns it  */
    Assert_isTrue(_Algorithm_lockOwner[groupId] == alg, (Assert_Id)NULL);

    _Algorithm_lockOwner[groupId] = NULL;
    ALG_releaseLock(groupId, alg);

    Log_print0(Diags_EXIT, "[+X] Algorithm_releaseLock> Exit");
}

/*
 *  ======== Algorithm_removeGroup ========
 */
Void Algorithm_removeGroup(Int groupId)
{
    Log_print1(Diags_ENTRY, "[+E] Algorithm_removeGroup> Enter(groupId=%d)",
            (IArg)groupId);

    ALG_removeGroup(groupId);

    Log_print0(Diags_EXIT, "[+X] Algorithm_removeGroup> Exit");
}
/*
 *  @(#) ti.sdo.ce.alg; 1, 0, 1,3; 6-13-2013 00:10:12; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

