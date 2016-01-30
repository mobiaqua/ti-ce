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
 *  ======== Server.c ========
 */

/* This define must precede inclusion of any xdc header files */
#define Registry_CURDESC ti_sdo_ce_Server_desc

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/knl/GateThread.h>

#include <ti/sdo/ce/osal/Global.h>
#include <ti/sdo/ce/osal/Memory.h>
#include <ti/sdo/ce/osal/Queue.h>
#include <ti/sdo/ce/global/CESettings.h>


#include <ti/sdo/ce/Engine.h>
#include <ti/sdo/ce/_Engine.h>
#include <ti/sdo/ce/Server.h>

#include <ti/sdo/ce/node/_node.h>

#include <string.h>
#include <assert.h>

#define GETENGINEHANDLE(s) (Engine_Handle)(s)

#define LOCAL_ENGINE "local"  /* Name of local engine with server algs */

/*
 *  This will form the upper 16 bits of the uuid for an alg dynamically
 *  added with Server_addAlg().
 */
#define DALGMASK 0xDA190000

static Server_Status getServerStatus(Engine_Error err);

static Void cleanup(Void);

/*
 *  List element for keeping track of dynamically added Server algs.
 */
typedef struct NodeElem {
    Queue_Elem  link;
    NODE_Desc   desc;
    NODE_Attrs  attrs;
} NodeElem;

/* List of dynamically added server algs. */
Queue_Elem Server_nodeList;

extern Int Global_useLinkArbiter;


/* REMEMBER: if you add an initialized static var, reinitialize it at cleanup */
Bool Server_holdingTraceToken = FALSE;
static Bool init = FALSE;

Registry_Desc ti_sdo_ce_Server_desc;

static Int regInit = 0;     /* Registry_addModule() called */

static Int numNodes = 0;     /* Number of dynamically added local algs */


/*
 *  ======== Server_addAlg ========
 */
Server_Status Server_addAlg(Server_Handle server, String location,
        Server_AlgDesc *pAlgDesc)
{
    Engine_AlgDesc       engAlgDesc;
    Engine_AlgRemoteDesc remoteDesc;
    NodeElem            *nodeElem = NULL;
    Engine_Error         engErr;
    Int                  bufLen;
    Server_Status        status = Server_EOK;

    Log_print3(Diags_ENTRY, "[+E] Server_addAlg(0x%x, 0x%x, 0x%x)",
            (IArg)server, (IArg)location, (IArg)pAlgDesc);

    /*
     *  Initialize engErr to a failure value, to indicate that Engine_addAlg()
     *  has not succeeded yet.  Ideally, an Engine_EFAIL might have been a
     *  better choice, but that failure code does not exist.
     */
    engErr = Engine_EEXIST;

    if (pAlgDesc == NULL) {
        Log_print0(Diags_USER7, "[+7] Server_addAlg: pAlgDesc must non-NULL!");
        status = Server_EINVAL;
        goto addAlgCleanup;
    }

    /*
     *  Adding alg from a DLL to remote server not supported yet.  Setting
     *  location to NULL for adding a remote alg is allowed for testing.
     */
    if ((status == Server_EOK) && (pAlgDesc->isLocal == FALSE) &&
            (location != NULL)) {
        Log_print0(Diags_USER7, "[+7] Server_addAlg: pAlgDesc->isLocal = FALSE"
                    " is currently not supported!");
        status = Server_ENOTSUPPORTED;
        goto addAlgCleanup;
    }

    /*
     *  Skel functions must not be NULL for local algs.  For algs that
     *  will be dynamically loaded onto a remote server, the skel functions
     *  will be obtained from the dll.
     */
    if ((pAlgDesc->isLocal || !location) && (pAlgDesc->skelFxns == NULL)) {
        Log_print0(Diags_USER7, "[+7] Server_addAlg: pAlgDesc->skelFxns "
                    "must not be NULL for local algorithm!");
        status = Server_EINVAL;
        goto addAlgCleanup;
    }

    /*
     *  Stub functions name must not be NULL for local alg.  For remote alg,
     *  the stub functions name will come from the dll.
     */
    if ((pAlgDesc->isLocal || !location) && (pAlgDesc->stubFxnsName == NULL)) {
        Log_print0(Diags_USER7, "[+7] Server_addAlg: pAlgDesc->stubFxnsName "
                    "must not be NULL for local alg!");
        status = Server_EINVAL;
        goto addAlgCleanup;
    }

    /*
     *  types must be non-NULL for local algs.  For dynamically loaded remote
     *  algs, types will come from the dll.
     */
    if ((pAlgDesc->isLocal || !location) && (pAlgDesc->types == NULL) ) {
        Log_print0(Diags_USER7, "[+7] Server_addAlg: pAlgDesc->types "
                    "must not be NULL for local algorithm!");
        status = Server_EINVAL;
        goto addAlgCleanup;
    }

    /*
     *  IALG functions name must not be NULL for local alg.  For remote alg,
     *  the IALG functions will be set to the stub functions that are
     *  determined by the stub fxns name in the dll.
     */
    if ((pAlgDesc->isLocal || !location) && (pAlgDesc->fxns == NULL)) {
        Log_print0(Diags_USER7, "[+7] Server_addAlg: pAlgDesc->fxns "
                    "must not be NULL for local alg!");
        status = Server_EINVAL;
        goto addAlgCleanup;
    }

    /* priority and stackSize must be initialized */
    if ((pAlgDesc->priority <= 0) || (pAlgDesc->stackSize == 0)) {
        Log_print2(Diags_USER7, "[+7] Server_addAlg: pAlgDesc->priority [%d] "
                "and pAlgDesc->stackSize [0x%x] must be set to "
                "positive values!", (IArg)pAlgDesc->priority,
                (IArg)pAlgDesc->stackSize);
        status = Server_EINVAL;
        goto addAlgCleanup;
    }

    Engine_initAlgDesc(&engAlgDesc);

    /* Copy the user supplied fields */
    engAlgDesc.name = pAlgDesc->name;
    engAlgDesc.isLocal = pAlgDesc->isLocal;
    engAlgDesc.groupId = pAlgDesc->groupId;
    engAlgDesc.codecClassConfig = pAlgDesc->codecClassConfig;
    engAlgDesc.memType = pAlgDesc->memType;
    engAlgDesc.types = pAlgDesc->types;
    engAlgDesc.rpcProtocolVersion = 0;  // Not used for dynamic algs

    // TODO: Recycle numbers when nodes are removed from the server.
    engAlgDesc.uuid.data =  DALGMASK | numNodes;

    /*
     *  Note: If adding a remote alg and 'location' for a DLL is non-NULL,
     *  these will be overridden.
     *  We set them here for testing of adding to remote server without using
     *  a DLL.
     */
    engAlgDesc.fxns = pAlgDesc->fxns;
    engAlgDesc.idmaFxns = pAlgDesc->idmaFxns;
    engAlgDesc.iresFxns = pAlgDesc->iresFxns;

    if (pAlgDesc->isLocal) {
        /* Add alg to local engine */
        engErr = Engine_addAlg(LOCAL_ENGINE, NULL, NULL, &engAlgDesc);
        status = getServerStatus(engErr);
    }
    else {
        /*
         *  We currently only use codecClassConfig in the SKEL functions,
         *  so we set the STUB functions codecClassConfig to NULL here.  If
         *  we wanted to ever support a codecClassConfig in the STUB
         *  functions, we can set this to pAlgDesc->stubsCodecClassConfig
         */
        engAlgDesc.codecClassConfig = NULL;

        remoteDesc.stubFxnsName = pAlgDesc->stubFxnsName;
        remoteDesc.skelFxns = pAlgDesc->skelFxns;
        remoteDesc.priority = pAlgDesc->priority;
        remoteDesc.stackSize = pAlgDesc->stackSize;
        remoteDesc.stackSeg = pAlgDesc->stackSeg;
        remoteDesc.codecClassConfig = pAlgDesc->codecClassConfig;

        engErr = Engine_addAlgRemote(GETENGINEHANDLE(server), location,
                &engAlgDesc, &remoteDesc);
        status = getServerStatus(engErr);
    }

    if (status != Server_EOK) {
        goto addAlgCleanup;
    }

    /* Allocate a nodeElem object and put it on the list */
    if (pAlgDesc->isLocal) {
        nodeElem = Memory_alloc(sizeof(NodeElem), NULL);
        if (nodeElem == NULL) {
            Log_print0(Diags_USER7, "[+7] Server_addAlg> Memory allocation "
                  "failed!");
            status = Server_ENOMEM;
            goto addAlgCleanup;
        }

        nodeElem->desc.name = NULL;
        nodeElem->desc.typeTab = NULL;
        nodeElem->desc.stubFxnsName = NULL;

        /*
         *  TODO: Engine_addAlg() has already made copies of alg name,
         *  and types, so we should be able to get them from Engine.
         */

        /*
         *  Allocate memory for NODE decriptor name.  This is necessary,
         *  in case the name is coming from an RMS command buffer.
         */
        bufLen = strlen(pAlgDesc->name) + 1;
        nodeElem->desc.name = Memory_alloc(bufLen, NULL);
        if (nodeElem->desc.name == NULL) {
            Log_print1(Diags_USER7, "[+7] Server_addAlg> Memory allocation "
                  "[size: 0x%x] (alg name) failed!", (IArg)bufLen);
            status = Server_ENOMEM;
            goto addAlgCleanup;
        }

        /* Allocate memory for NODE decriptor typeTab */
        bufLen = strlen(pAlgDesc->types) + 1;
        nodeElem->desc.typeTab = Memory_alloc(bufLen, NULL);
        if (nodeElem->desc.typeTab == NULL) {
            Log_print1(Diags_USER7, "[+7] Server_addAlg> Memory allocation "
                  "[size: 0x%x] (alg types) failed!", (IArg)bufLen);
            status = Server_ENOMEM;
            goto addAlgCleanup;
        }

        /* Allocate memory for NODE decriptor stub functions name */
        bufLen = strlen(pAlgDesc->stubFxnsName) + 1;
        nodeElem->desc.stubFxnsName = Memory_alloc(bufLen, NULL);
        if (nodeElem->desc.stubFxnsName == NULL) {
            Log_print1(Diags_USER7, "[+7] Server_addAlg> Memory allocation "
                  "[size: 0x%x] (alg stubFxnsName) failed!", (IArg)bufLen);
            status = Server_ENOMEM;
            goto addAlgCleanup;
        }

        Queue_new(&nodeElem->link);

        /* Initialize the NODE_Desc */
        strcpy(nodeElem->desc.name, pAlgDesc->name);
        strcpy(nodeElem->desc.stubFxnsName, pAlgDesc->stubFxnsName);
        strcpy(nodeElem->desc.typeTab, pAlgDesc->types);

        nodeElem->desc.uuid.data = engAlgDesc.uuid.data;
        nodeElem->desc.skelFxns = pAlgDesc->skelFxns;
        nodeElem->desc.nodeAttrs = &(nodeElem->attrs);
        nodeElem->desc.rpcProtocolVersion = 0;

        /* Initialize the NODE_Attrs */
        nodeElem->attrs.initPriority = pAlgDesc->priority;
        nodeElem->attrs.stackSize = pAlgDesc->stackSize;
        nodeElem->attrs.stackSeg = pAlgDesc->stackSeg;

        /*
         *  Put node on the Server_nodeList
         *
         *  NOTE: This function is either called in main(), before any BIOS
         *  tasks are running, or by the RMS thread.  Therefore, we don't
         *  need to protect numNodes.
         */
        Queue_put(&Server_nodeList, &nodeElem->link);
        numNodes++;
    }

addAlgCleanup:
    if (status != Server_EOK) {
        if (engErr == Engine_EOK) {
            if (pAlgDesc->isLocal) {
                Engine_removeAlg(LOCAL_ENGINE, NULL, pAlgDesc->name);
            }
            else {
                // TODO
            }
        }
        if (nodeElem) {
            if (nodeElem->desc.name) {
                bufLen = strlen(nodeElem->desc.name) + 1;
                Memory_free(nodeElem->desc.name, bufLen, NULL);
            }
            if (nodeElem->desc.typeTab) {
                bufLen = strlen(nodeElem->desc.typeTab) + 1;
                Memory_free(nodeElem->desc.typeTab, bufLen, NULL);
            }
            if (nodeElem->desc.stubFxnsName) {
                bufLen = strlen(nodeElem->desc.stubFxnsName) + 1;
                Memory_free(nodeElem->desc.stubFxnsName, bufLen, NULL);
            }
            Memory_free(nodeElem, sizeof(NodeElem), NULL);
        }

        /* Remove engine if it was added */
    }

    Log_print1(Diags_EXIT, "[+X] Server_addAlg() returning %d", (IArg)status);

    return (status);
}


/*
 *  ======== Server_connectTrace ========
 */
Server_Status Server_connectTrace(Server_Handle server, Int * token)
{
    Engine_Error engineStatus;
    Server_Status status;
    Int gotToken = FALSE;

    Log_print2(Diags_ENTRY, "[+E] Server_connectTrace('0x%x', 0x%x)",
            (IArg)server, (IArg)token);

    Assert_isTrue(((server != NULL) && (token != NULL)), (Assert_Id)NULL);

    /* first check if process already connected for trace */
    if (Server_holdingTraceToken == TRUE) {
        status = Server_EINUSE;
    }

    /* else, request connect token from RMS */
    else {

        /* call Engine function to attempt connection */
        engineStatus = Engine_requestTraceToken(server);
        status = getServerStatus(engineStatus);

        /* if success, set flag indicating this process holds trace token */
        if (status == Server_EOK) {
            Server_holdingTraceToken = TRUE;
            gotToken = TRUE;
        }
    }

    /* set token value to return to caller: TRUE if *this* call got token */
    *token = gotToken;

    Log_print2(Diags_EXIT, "[+X] Server_connectTrace> token(%d), return(%d)",
            (IArg)gotToken, (IArg)status);

    return (status);
}

/*
 *  ======== Server_disconnectTrace ========
 */
Server_Status Server_disconnectTrace(Server_Handle server, Int token)
{
    Server_Status status = Server_EOK;

    Log_print2(Diags_ENTRY, "[+E] Server_disconnectTrace('0x%x', 0x%x)",
            (IArg)server, (IArg)token);

    Assert_isTrue((server != NULL), (Assert_Id)NULL);

    /*
     * if client passes token == TRUE, then companion call to connect actually
     * acquired the trace token, so release it back to RMS; else, if
     * token === FALSE, can simply ignore the request, and return Server_EOK
     */
    if (token == TRUE) {

        /* call Engine function to attempt disconnect */
        if (Engine_releaseTraceToken(server)) {
            /* if success, reset process-holding-token flag */
            Server_holdingTraceToken = FALSE;
        }
        else {
            status = Server_ERUNTIME;
        }
    }

    Log_print1(Diags_EXIT, "[+X] Server_connectTrace> return(%d)",
            (IArg)status);

    return (status);
}

/*
 *  ======== Server_fwriteTrace ========
 */
Int Server_fwriteTrace(Server_Handle server, String prefix, FILE *out)
{
    Log_print3(Diags_ENTRY, "[+E] Server_fwriteTrace('0x%x', %s, 0x%x)",
            (IArg)server, (IArg)prefix, (IArg)out);

    Assert_isTrue((server != NULL), (Assert_Id)NULL);

    /* call Engine function to write the trace data */
    return(Engine_fwriteTrace(GETENGINEHANDLE(server), prefix, out));
}

/*
 *  ======== Server_getNumNodes ========
 *  Get the number of dynamically added algs.
 */
Int Server_getNumNodes()
{
    return (numNodes);
}

/*
 *  ======== Server_getNode ========
 *  Get the NODE_Desc of the ith dynamically added alg.
 */
NODE_Desc *Server_getNode(Int n)
{
    NodeElem  *next;
    Int        i;
    NODE_Desc *desc = NULL;

    /*
     *  NOTE:  This function is only called by the RMS thread, so we don't
     *  need to enter a gate when going through the Server node list.
     */

    if (n >= numNodes) {
        Log_print2(Diags_USER6, "[+6] Server_getNode(): Requested NODE_Desc "
                "for alg %d, but only %d algs have been added.", (IArg)n,
                (IArg)numNodes);
        return (NULL);
    }

    next = (NodeElem *)Server_nodeList.next;

    for (i = 0; (i < n) && (next != (NodeElem *)&Server_nodeList); i++) {
        next = (NodeElem *)Queue_next(next);
    }

    if (next == (NodeElem *)&Server_nodeList) {
        /* Inconsistent state:  numNodes > number of nodes in list */
        Log_print2(Diags_USER7, "[+7] Server_getNode(): Number of algs "
                "added is %d, but list of added NODE_Desc elements "
                "has length %d!", (IArg)numNodes, (IArg)i);
    }
    else {
        desc = &(next->desc);
    }

    return (desc);
}

/*
 *  ======== Server_getNodeUuid ========
 *  Get the uuid of a node, given the name.
 */
Server_Status Server_getNodeUuid(String name, NODE_Uuid *uuid)
{
    NodeElem  *next;
    Int        i;
    Server_Status status = Server_ENOTFOUND;

    /*
     *  NOTE:  This function is only called by the RMS thread, so we don't
     *  need to enter a gate when going through the Server node list.
     */

    next = (NodeElem *)Server_nodeList.next;

    for (i = 0; next != (NodeElem *)&Server_nodeList; i++) {
        if (strcmp(name, next->desc.name) == 0) {
            uuid->data = next->desc.uuid.data;
            return (Server_EOK);
        }
        next = (NodeElem *)Queue_next(next);
    }

    return (status);
}

/*
 *  ======== Server_getCpuLoad ========
 */
Int Server_getCpuLoad(Server_Handle server)
{
    Int load;

    Log_print1(Diags_ENTRY, "[+E] Server_getCpuLoad('0x%x')", (IArg)server);

    Assert_isTrue((server != NULL), (Assert_Id)NULL);

    /* call Engine function to get server's CPU load */
    load = Engine_getCpuLoad(GETENGINEHANDLE(server));

    return (load);
}

/*
 *  ======== Server_getMemStat ========
 */
Server_Status Server_getMemStat(Server_Handle server, Int segId,
    Server_MemStat *stat)
{
    Engine_Error    err = Engine_EOK;
    Server_Status   status = Server_EOK;

    Log_print3(Diags_ENTRY, "[+E] Server_getMemStat('0x%x', %d, 0x%x)",
            (IArg)server, (IArg)segId, (IArg)stat);

    Assert_isTrue((server != NULL) && (stat != NULL), (Assert_Id)NULL);

    /* Call Engine function to get heap info */
    err = Engine_getMemStat(server, segId, (Engine_MemStat *)stat);
    status = getServerStatus(err);

    Assert_isTrue((status == Server_EOK) || (status == Server_ENOTFOUND)
            || (status == Server_ERUNTIME), (Assert_Id)NULL);

    return (status);
}

/*
 *  ======== Server_getNumMemSegs ========
 */
Server_Status Server_getNumMemSegs(Server_Handle server, Int *numSegs)
{
    Engine_Error    err = Engine_EOK;
    Server_Status   status = Server_EOK;

    Log_print2(Diags_ENTRY, "[+E] Server_getNumMemSegs('0x%x', 0x%x)",
            (IArg)server, (IArg)numSegs);

    Assert_isTrue((server != NULL) && (numSegs != NULL), (Assert_Id)NULL);

    /* Call Engine function to get number of memory heaps on the DSP */
    err = Engine_getNumMemSegs(server, numSegs);
    status = getServerStatus(err);

    Assert_isTrue((status == Server_EOK) || (status == Server_ERUNTIME),
            (Assert_Id)NULL);

    if (status != Server_EOK) {
        *numSegs = 0;
    }

    return (status);
}

/*
 *  ======== Server_init ========
 */
Void Server_init(Void)
{
    Registry_Result   result;

    /*
     *  No need to reference count for Registry_addModule(), since there
     *  is no way to remove the module.
     */
    if (regInit == 0) {
        /* Register this module for logging */
        result = Registry_addModule(&ti_sdo_ce_Server_desc,
                Server_MODNAME);
        Assert_isTrue(result == Registry_SUCCESS, (Assert_Id)NULL);

        if (result == Registry_SUCCESS) {
            /* Set the diags mask to the CE default */
            CESettings_init();
            CESettings_setDiags(Server_MODNAME);
        }
        regInit = 1;
    }

    if (init == FALSE) {
        init = TRUE;

        Log_print0(Diags_ENTRY, "[+E] Server_init()");

        /*
         * TODO:M - though benign, should we grab Server_holdingTraceToken
         * if we're a single processor app?  Should Server_init() even be
         * called?
         */

        Queue_new(&Server_nodeList);

        /* For non-LAD systems, set flag, this process owns all DSP trace */
        Server_holdingTraceToken = TRUE;

        Global_atexit((Fxn)cleanup);
    }
}

/*
 *  ======== Server_initAlgDesc ========
 */
Void Server_initAlgDesc(Server_AlgDesc *pAlgDesc)
{
    Log_print1(Diags_ENTRY, "[+E] Server_initAlgDesc('0x%x')", (IArg)pAlgDesc);

    pAlgDesc->types = NULL;
    pAlgDesc->stubFxnsName = NULL;
    pAlgDesc->skelFxns = NULL;

    pAlgDesc->name = NULL;
    pAlgDesc->fxns = NULL;
    pAlgDesc->idmaFxns = NULL;
    pAlgDesc->isLocal = TRUE;
    pAlgDesc->groupId = 0;
    pAlgDesc->iresFxns = NULL;
    pAlgDesc->codecClassConfig = NULL;
    pAlgDesc->memType = Engine_USECACHEDMEM_DEFAULT;

    pAlgDesc->priority = 0;
    pAlgDesc->stackSize = 0;
    pAlgDesc->stackSeg = 0;
}

/*
 *  ======== Server_redefineHeap ========
 */
Server_Status Server_redefineHeap(Server_Handle server, String name,
        Uint32 base, Uint32 size)
{
    Engine_Error    err = Engine_EOK;
    Server_Status   status = Server_EOK;

    Log_print4(Diags_ENTRY, "[+E] Server_redefineHeap('0x%x', %s, 0x%x, 0x%x)",
            (IArg)server, (IArg)name, (IArg)base, (IArg)size);

    Assert_isTrue(server != NULL, (Assert_Id)NULL);
    Assert_isTrue(!(base & 0x7), (Assert_Id)NULL);    /* base must be 8-byte aligned */

    /* Call engine function to change algorithm heap base and size */
    err = Engine_redefineHeap(server, name, base, size);
    status = getServerStatus(err);

    Assert_isTrue((status == Server_EOK) || (status == Server_EINVAL) ||
            (status == Server_ENOTFOUND) || (status == Server_EINUSE) ||
            (status == Server_ERUNTIME), (Assert_Id)NULL);

    return (status);
}

/*
 *  ======== Server_restoreHeap ========
 */
Server_Status Server_restoreHeap(Server_Handle server, String name)
{
    Engine_Error    err = Engine_EOK;
    Server_Status   status = Server_EOK;

    Log_print2(Diags_ENTRY, "[+E] Server_restoreHeap('0x%x %s)",
            (IArg)server, (IArg)name);

    Assert_isTrue(server != NULL, (Assert_Id)NULL);

    /* Call Engine function to reset the named heap's base and size */
    err = Engine_restoreHeap(server, name);
    status = getServerStatus(err);

    Assert_isTrue((status == Server_EOK) || (status == Server_EINVAL) ||
            (status == Server_ENOTFOUND) || (status == Server_EINUSE) ||
            (status == Server_ERUNTIME), (Assert_Id)NULL);

    return (status);
}

/*
 *  ======== Server_setTrace ========
 */
Int Server_setTrace(Server_Handle server, String mask)
{
    Engine_Error engineStatus;

    Log_print2(Diags_ENTRY, "[+E] Server_setTrace('0x%x', %s)",
            (IArg)server, (IArg)mask);

    Assert_isTrue((server != NULL), (Assert_Id)NULL);

    /* call Engine function set the server's trace mask */
    engineStatus = Engine_setTrace(GETENGINEHANDLE(server), mask);

    return(getServerStatus(engineStatus));
}

/*
 *  ======== cleanup ========
 */
static Void cleanup(Void)
{
    Int       bufLen;
    NodeElem *node;

    if (init != FALSE) {
        init = FALSE;

        /* reinitialize static vars */
        Server_holdingTraceToken = FALSE;

        /* Cleanup Server_nodeList */
        while (Queue_head(&Server_nodeList) != &Server_nodeList) {
            /*
             *  Engine cleanup will remove the added alg, so just free the
             *  memory.
             */
            node = (NodeElem *)Queue_get(&Server_nodeList);
            if (node->desc.name) {
                bufLen = strlen(node->desc.name) + 1;
                Memory_free(node->desc.name, bufLen, NULL);
            }
            if (node->desc.typeTab) {
                bufLen = strlen(node->desc.typeTab) + 1;
                Memory_free(node->desc.typeTab, bufLen, NULL);
            }
            if (node->desc.stubFxnsName) {
                bufLen = strlen(node->desc.stubFxnsName) + 1;
                Memory_free(node->desc.stubFxnsName, bufLen, NULL);
            }
            Memory_free(node, sizeof(NodeElem), NULL);
        }
        numNodes = 0;
    }
}

/*
 *  ======== getServerStatus ========
 *  Convert Engine error code to server status.
 */
static Server_Status getServerStatus(Engine_Error err)
{
    switch (err) {
        case Engine_EOK:
            return (Server_EOK);
        case Engine_ENOSERVER:
            return (Server_ENOSERVER);
        case Engine_ENOMEM:
            return (Server_ENOMEM);
        case Engine_ERUNTIME:
            return (Server_ERUNTIME);
        case Engine_EINVAL:
            return (Server_EINVAL);
        case Engine_EWRONGSTATE:
            return (Server_EWRONGSTATE);
        case Engine_EINUSE:
            return (Server_EINUSE);
        case Engine_ENOTFOUND:
            return (Server_ENOTFOUND);
        default:
            return (Server_EFAIL);
    }
}
/*
 *  @(#) ti.sdo.ce; 1, 0, 6,3; 6-13-2013 00:10:03; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

