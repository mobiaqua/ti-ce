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
 *  ======== rms.c ========
 */

/* This define must precede inclusion of any xdc header files */
#define Registry_CURDESC ti_sdo_ce_rms_desc

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Registry.h>

#include <xdc/runtime/knl/Thread.h>

#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

#include <ti/sdo/ce/global/CESettings.h>
#include <ti/sdo/ce/osal/Global.h>
#include <ti/sdo/ce/osal/Memory.h>
#include <ti/sdo/ce/osal/Trace.h>
#include <ti/sdo/ce/ipc/Comm.h>
#include <ti/sdo/ce/ipc/Processor.h>

#include <ti/sdo/ce/rms.h>
#include <ti/sdo/ce/alg/Algorithm.h>
#include <ti/sdo/ce/node/node.h>
#include <ti/sdo/ce/node/_node.h>  /* RMS is a "friend" of NODE */
#include <ti/sdo/ce/Server.h>
#include <ti/sdo/ce/_Server.h>
#include <ti/sdo/ce/skel.h>

#include <ti/xdais/ialg.h>


#define MAXNUMLEN   8
#define MAXNUMSEGS  1024        /* Maximum number of heaps checked for */

/*
 *  Heap must be large enough to hold HeapMem_Header. Don't allow heaps to
 *  be re-defined to a size of 0 to avoid extra maintenance. Will check that
 *  the size is at least MINHEAPSIZE.
 */
#define MINHEAPSIZE 16

#define MODNAME "ti.sdo.ce.rms"

/*
 *  Maximum length of codec name (Should be the same as in visa.c)
 */
#define MAXNAMELEN 127          /* Maximum length of codec name */

#define HEADERSIZE  ( \
    (Char *)&(((RMS_RmsMsg *)0)->cmdBuf) - (Char *)0  \
)

/* this function is for internal use only */
#define RMS_checkUuid(uuid1, uuid2) \
    ( ((uuid1).data) == ((uuid2).data) )

/* internal description of a created node instance */
typedef struct RMS_Obj {
    NODE_Handle     node;       /* NULL means free */
    NODE_Desc       *nodeDesc;  /* ptr to entry in node database */
    Comm_Handle     nodeQueue;  /* node's input message queue */
    Comm_Id         gppQueue;   /* gpp's (client's) message queue */
    Int             instanceId; /* unique instance ID */
    String          name;       /* node's instance name */
} RMS_Obj;


static Int           initCount = 0;

static Comm_Handle   rmsMsgQueue = Comm_INVALIDHANDLE;
static RMS_RmsMsg    *rmsMsg = NULL;
static Thread_Handle rmsTsk = NULL;
static Bool traceTokenAvailable = TRUE;

/* default RMS configuration data set */
RMS_Config RMS_CONFIG = RMS_CONFIGDEFAULT;

Void RMS_run(IArg arg); /* RMS task entry function prototype */

static Void RMS_exec(Void);

static RMS_Status addAlg(RMS_CmdSetAddAlgIn *cmdIn,
        RMS_CmdSetAddAlgOut *cmdOut);
static Char *formatNum(Char *ptr, UInt32 un);
static Void freeInst(RMS_Obj *inst);
static RMS_Status getAlg(RMS_CmdSetGetAlgIn *cmdIn,
        RMS_CmdSetGetAlgOut *cmdOut);
static RMS_Status getMemRecs(RMS_CmdSetGetMemRecsIn *cmdIn,
        RMS_CmdSetGetMemRecsOut *cmdOut);
static RMS_Status getNumAlgs(RMS_CmdSetGetNumAlgsOut *cmdOut);
static RMS_Status getNumRecs(RMS_CmdSetGetNumRecsIn *cmdIn,
        RMS_CmdSetGetNumRecsOut *cmdOut);
static RMS_Status getSegStat(Int segId, RMS_CmdSetGetSegStatOut *out);
static RMS_Obj *mkInst(String nodeName, Int id);

static RMS_Status processRmsCmd(RMS_CmdBuf *cmdBuf, Int size);
static RMS_Status redefineHeap(String name, Int segId, Uint32 base,
        Uint32 size);
static RMS_Status restoreHeap(String name);

extern Void IPC_threadGeneratedInit(Void);
extern Void IPC_threadGeneratedReset(Void);

Registry_Desc ti_sdo_ce_rms_desc;

static Int regInit = 0;     /* Registry_addModule() called */

static Int detachFlag = 0;  /* Set to 1 when we need to detatch */
static Int exitFlag = 0;    /* Set to 1 when we need the rms thread to exit */

/*
 *  ======== RMS_init ========
 *  Calls to RMS_init() must be serialized.
 */
Void RMS_init(Void)
{
#ifndef xdc_target__os_undefined
    Thread_Priority   threadPri;
    Int               pri;
#endif
    Registry_Result   result;

    /*
     *  No need to reference count for Registry_addModule(), since there
     *  is no way to remove the module.
     */
    if (regInit == 0) {
        /* Register this module for logging */
        result = Registry_addModule(&ti_sdo_ce_rms_desc, MODNAME);
        Assert_isTrue(result == Registry_SUCCESS, (Assert_Id)NULL);

        if (result == Registry_SUCCESS) {
            /* Set the diags mask to the CE default */
            CESettings_init();
            CESettings_setDiags(MODNAME);
        }
        regInit = 1;
    }

    if (initCount++ == 0) {
        Thread_Params rmsTskAttrs;
        Comm_Attrs commAttrs;
        static char rmsCommName[32];  /* MessageQ_max length(?) */

        NODE_init();
        Comm_init();


        /* HACK: we set callFxn in advance in case we run with an
         * OSAL that does not support separate Thread threads
         */
        commAttrs = Comm_ATTRS;
        commAttrs.callFxn = (Comm_CallFxn)RMS_exec;

        /* create core-specific RMS's MSGQ for msg exchange with clients */
        sprintf(rmsCommName, RMS_CMDQNAME ":%s",
                Processor_getCoreName(Processor_myCoreId()));
        rmsMsgQueue = Comm_create(rmsCommName, &commAttrs);
        assert(rmsMsgQueue != NULL);

        /* now, create the RMS task that acts on the server's behalf */
        Thread_Params_init(&rmsTskAttrs);
#ifdef xdc_target__os_undefined
        rmsTskAttrs.osPriority  = RMS_config.tskPriority;
#else
        pri = RMS_config.tskPriority;
        threadPri = (pri <= RMS_LOWESTPRI) ? Thread_Priority_LOWEST :
            (pri <= RMS_LOWPRI) ? Thread_Priority_BELOW_NORMAL :
            (pri <= RMS_NORMALPRI) ? Thread_Priority_NORMAL :
            (pri <= RMS_HIGHPRI) ? Thread_Priority_ABOVE_NORMAL :
            Thread_Priority_HIGHEST;

        rmsTskAttrs.priority  = threadPri;
#endif
        rmsTskAttrs.stackSize = RMS_config.tskStacksize;
        rmsTsk = Thread_create((Thread_RunFxn)RMS_run, &rmsTskAttrs, NULL);
        assert(rmsTsk != NULL);
    }
    Log_print0(Diags_USER5, "[+5] RMS_init> exit");

}

/*
 *  ======== RMS_exit ========
 */
Void RMS_exit(Void)
{
    Comm_Id rmsMsgQueueId;
    RMS_RmsMsg msg;

    if (initCount-- <= 1) {
        initCount = 0;

        if ((rmsTsk != NULL) && (rmsMsgQueue != Comm_INVALIDHANDLE)) {
            rmsMsgQueueId = Comm_getId(rmsMsgQueue);
            Comm_staticMsgInit((Comm_Msg)&msg, sizeof(RMS_RmsMsg));
            msg.cmdBuf.cmd = RMS_QUIT;

            Comm_put(rmsMsgQueueId, (Comm_Msg)&msg);

            /* Wait for RMS thread to terminate */
            Thread_join(rmsTsk, NULL);
        }

        if (rmsMsgQueue != NULL) {
            Comm_delete(rmsMsgQueue);
            rmsMsgQueue = NULL;
        }
        rmsMsgQueue = Comm_INVALIDHANDLE;

        if (rmsTsk != NULL) {
            Thread_delete(&rmsTsk);
            rmsTsk = NULL;
        }

        traceTokenAvailable = TRUE;
    }
}


/*
 *  ======== RMS_run ========
 */
Void RMS_run(IArg arg)
{
    for (;;) {
        /* Note, we do any deferred thread level init here. */

        /*
         *  When ipc.bios.Ipc.manageIpc = TRUE, this function calls
         *  Ipc_attach().
         */
        IPC_threadGeneratedInit();

        /* and finally, the RMS_exec() loop can run */
        for (;;) {
            RMS_exec();
            if (detachFlag) {
                detachFlag = FALSE;
                break;
            }
            if (exitFlag) {
                /*
                 *  CERuntime_exit has been called.  We shouldn't get
                 *  here unless IPC_threadGeneratedInit and exit are NOPs
                 *  (ipc.bios.Ipc.manageIpc == FALSE, ie the app is
                 *  responsible for calling Ipc_attach() / Ipc_detatch()).
                 */
                exitFlag = FALSE;
                return;
            }
        }

        /*
         *  Calls Ipc_detatch(), Ipc_stop(), and Ipc_start(), when manageIpc
         *  is TRUE.
         */
        IPC_threadGeneratedReset();
    }
}

/*
 *  ======== RMS_exec ========
 */
static Void RMS_exec(Void)
{
    RMS_CmdBuf  *cmdBuf;
    Int         commStatus;
    Comm_Id     sendersMsgQueue;
    RMS_Status  status;

    /* get something to do */
    commStatus = Comm_get(rmsMsgQueue, (Comm_Msg *)&rmsMsg, Comm_FOREVER);

    Log_print1(Diags_USER4, "[+4] RMS_exec> got msg. status = %d",
            (IArg)commStatus);

    if (commStatus == Comm_EOK) {
        Int msgSize = Comm_getMsgSize((Comm_Msg)rmsMsg);

        /* we assume message recieved is at least as large as we require */
        assert(msgSize >= sizeof (RMS_RmsMsg));

        /* do it */
        cmdBuf = (RMS_CmdBuf *)&(rmsMsg->cmdBuf);
        status = processRmsCmd(cmdBuf, msgSize - HEADERSIZE);
        cmdBuf->status = status;

        if (!exitFlag) {
            /* find out who the sender was */
            commStatus = Comm_getSendersId((Comm_Msg)rmsMsg, &sendersMsgQueue);
            assert(commStatus == Comm_EOK);

            /* then send the message back */
            commStatus = Comm_put(sendersMsgQueue, (Comm_Msg)rmsMsg);
            assert(commStatus == Comm_EOK);
        }
    }
    else {
#if 0
        /* In some cases (like shutdown) this is expected */
        Log_print1(Diags_USER7, "[+7] RMS_exec> Comm_get failed (0x%x)",
                (IArg)commStatus);
#endif
    }
}

/*
 *  ======== addAlg ========
 */
static RMS_Status addAlg(RMS_CmdSetAddAlgIn *cmdIn,
        RMS_CmdSetAddAlgOut *cmdOut)
{
    Server_AlgDesc  algDesc;
    Server_Status   status;

    /* Set fields to defaults */
    Server_initAlgDesc(&algDesc);

    /* Server will make a copy of the name */
    algDesc.name = (String)cmdIn->name;

    Log_print1(Diags_USER4, "[+4] RMS addAlg> Name: %s", (IArg)algDesc.name);

    algDesc.fxns = (IALG_Fxns *)cmdIn->fxns;
    algDesc.idmaFxns = (Ptr)cmdIn->idmaFxns;
    algDesc.iresFxns = (Ptr)cmdIn->iresFxns;
    algDesc.isLocal = TRUE;
    algDesc.groupId = (Int)cmdIn->groupId;
    algDesc.memType = (Engine_CachedMemType)cmdIn->memType;

    algDesc.types = (String)cmdIn->typeTab;
    algDesc.stubFxnsName = (String)cmdIn->stubFxnsName;
    algDesc.skelFxns = (SKEL_Fxns *)cmdIn->skelFxns;

    Log_print1(Diags_USER4, "[+4] RMS addAlg> fxns: 0x%x",
            (IArg)algDesc.fxns);
    Log_print1(Diags_USER6, "[+4] RMS addAlg> skel: 0x%x",
            (IArg)algDesc.skelFxns);

    Log_print1(Diags_USER4, "[+4] RMS addAlg> idmaFxns: 0x%x",
            (IArg)algDesc.idmaFxns);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> iresFxns: 0x%x",
            (IArg)algDesc.iresFxns);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> groupId: %d",
            (IArg)algDesc.groupId);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> memType: %d",
            (IArg)algDesc.memType);

    Log_print1(Diags_USER4, "[+4] RMS addAlg> Types: %s", (IArg)algDesc.types);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> Stubs: %s",
            (IArg)algDesc.stubFxnsName);

    algDesc.priority = (Int)cmdIn->priority;
    algDesc.stackSize = (UInt32)cmdIn->stackSize;
    algDesc.stackSeg = (UInt32)cmdIn->stackSeg;
    algDesc.codecClassConfig = (Void *)cmdIn->codecClassConfig;

    Log_print1(Diags_USER4, "[+4] RMS addAlg> isLocal: %d",
            (IArg)algDesc.isLocal);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> priority: %d",
            (IArg)algDesc.priority);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> stackSize: 0x%x",
            (IArg)algDesc.stackSize);
    Log_print1(Diags_USER4, "[+4] RMS addAlg> codecClassConfig: 0x%x",
            (IArg)algDesc.codecClassConfig);

    status = Server_addAlg(NULL, NULL, &algDesc);

    if (status != Server_EOK) {
        Log_print1(Diags_USER7, "App-> ERROR: can't add Alg (0x%x)\n",
                (IArg)status);
        /* TODO: Convert Server_Status to RMS error */
        cmdOut->serverError = (RMS_Word)status;
        return (RMS_EFAIL);
    }

    /* Get the uuid assigned to the node to pass back to the host */
    status = Server_getNodeUuid(algDesc.name, &(cmdOut->uuid));

    if (status != Server_EOK) {
        Log_print1(Diags_USER7, "App-> ERROR: can't find alg uuid (0x%x)\n",
                (IArg)status);
        /* TODO: Convert Server_Status to RMS error */
        cmdOut->serverError = (RMS_Word)status;

        return (RMS_EFAIL);
    }

    cmdOut->serverError = (RMS_Word)status;
    return (RMS_EOK);
}

/*
 *  ======== checkStack ========
 */
static Void checkStack(Void)
{
    Bits16 classId = Diags_USER5;
    Int headroom = 100;
    Thread_Stat buf;

    Thread_stat(Thread_self(NULL), &buf, NULL);

    /* check stack size to see if we are close to overrun */
    if (buf.stackSize != 0) {
        headroom = (buf.stackSize > buf.stackUsed)
            ? ((buf.stackSize - buf.stackUsed) * 100) / buf.stackSize : 0;
    }

    if (headroom < 10) {
        classId |= Diags_USER6; /* less than 10%, generate warning */
    }
    Log_print3(classId, "RMS: stack size = %d, stack used = %d(%d%%)",
            (IArg)(buf.stackSize), (IArg)(buf.stackUsed),
            (IArg)(100 - headroom));
}

/*
 *  ======== createNode ========
 */
static RMS_Status createNode(RMS_CmdSetCreateNodeIn  *cmdIn,
                              RMS_CmdSetCreateNodeOut *cmdOut)
{
    RMS_Obj     *rmsInst;
    NODE_Desc   *nodeDesc = NULL;
    NODE_Desc   desc;
    NODE_Attrs  nodeAttrs;
    NODE_Handle node;
    Int         numDynNodes;
    Int         i;
    Int         priority;
    RMS_Status  status;
    Char        tmpName[MAXNAMELEN + 1];
    String      createArgBuf;
    Int         createArgLen;

    /* instance ID -- unique across all instances */
    static Int          instanceId = 0;

    Log_print2(Diags_USER5, "[+5] RMS createNode> Enter(0x%x, 0x%x)",
            (IArg)cmdIn, (IArg)cmdOut);

    /* search the database of nodes for the given uuid       */
    for (nodeDesc = RMS_nodeTab; nodeDesc->name != NULL; nodeDesc++) {
        if (RMS_checkUuid(cmdIn->uuid, nodeDesc->uuid)) {
            break;  /* found it */
        }
    }
    numDynNodes = Server_getNumNodes();
    Log_print1(Diags_USER5, "[+5]RMS createNode> Num dynamic nodes: %d",
            (IArg)numDynNodes);

    if (nodeDesc->name == NULL) {
        /* Search in list of dynamically added nodes */
        numDynNodes = Server_getNumNodes();

        Log_print1(Diags_USER5, "[+5] RMS createNode> Searching dynamic "
                "nodes.  num nodes = %d",
                (IArg)numDynNodes);

        for (i = 0; i < numDynNodes; i++) {
            nodeDesc = Server_getNode(i);
            if ((nodeDesc != NULL) &&
                    (RMS_checkUuid(cmdIn->uuid, nodeDesc->uuid))) {
                break;  /* found it */
            }
        }
    }

    if ((nodeDesc == NULL) || (nodeDesc->name == NULL)) {
        return (RMS_EINVUUID);
    }

    Log_print2(Diags_USER5, "[+5] RMS createNode> Found match: "
            "name = %s, uuid = 0x%x",
            (IArg)nodeDesc->name, (IArg)nodeDesc->uuid.data);


    if (nodeDesc->rpcProtocolVersion != cmdIn->rpcProtocolVersion) {
        return (RMS_EINVPROT);
    }

    /* create an RMS node instance */
    rmsInst = mkInst(nodeDesc->name, instanceId);
    if (rmsInst == NULL) {
        return (RMS_ERESOURCE);
    }

    /* point to the args buffer of the in structure */
    createArgLen = cmdIn->argLength;
    if (createArgLen > 0) {
        createArgBuf = (String)(cmdIn->argBuffer);
    }
    else {
        createArgBuf = NULL;
    }

    /* Initilize desc with configured values. */
    desc = *nodeDesc;
    nodeAttrs = *(nodeDesc->nodeAttrs);
    desc.nodeAttrs = &nodeAttrs;

    /*
     *  If create parameters have priority set to -1, use configured priority,
     *  otherwise override the configured priority with the value passed in
     *  the create args.
     */
    priority = (Int)(cmdIn->nodePriority);
    if (priority != -1) {
        // TODO: (jeh) Thread_MINPRI and Thread_MAXPRI no longer exist.
        //if ((priority < Thread_MINPRI) || (priority > Thread_MAXPRI)) {
        //    return (RMS_EINVAL);
        //}
        nodeAttrs.initPriority = priority;
    }

    /*
     *  Create new name combining nodeDesc->name and ::1 if cmdIn->useExtHeap
     *  is TRUE. We need to do this because NODE_create() calls the codec's
     *  create function (which only takes its own attributes arg).
     */
    if (cmdIn->useExtHeap) {
        desc.name = tmpName;
        strncpy(tmpName, nodeDesc->name, MAXNAMELEN - strlen("::1"));
        tmpName[MAXNAMELEN - strlen("::1")] = '\0';

        strcpy(tmpName + strlen(tmpName), "::1");
        tmpName[MAXNAMELEN] = '\0';
    }

    status = NODE_create(
        &desc,                          /* in: */
        createArgLen,                   /* in: */
        createArgBuf,                   /* in: */
        cmdIn->gppQueue,                /* in:  sendQueue (to gpp msgq) */
        rmsInst->name,                  /* in:  node instance name */
        &node                           /* out: node handle */
    );

    if (status != NODE_EOK) {
        freeInst(rmsInst);
        status = (status == NODE_EOUTOFMEMORY) ? RMS_EOUTOFMEMORY :
            (status == NODE_ETASK) ? RMS_ETASK : RMS_EFAIL;
        return (status);
    }

    /* record the node instance data */
    rmsInst->node       = node;
    rmsInst->nodeDesc   = nodeDesc;
    rmsInst->nodeQueue  = NODE_getRecvQueue(node);
    rmsInst->gppQueue   = cmdIn->gppQueue;
    rmsInst->instanceId = instanceId;
    instanceId++;

    /* prepare command output  */
    cmdOut->node       = (RMS_Word)rmsInst;
    cmdOut->nodeQueue  = Comm_getId(rmsInst->nodeQueue);
    cmdOut->remoteVisa = (RMS_Word)NODE_getEnv(node);

    return (RMS_EOK);
}

/*
 *  ======== deleteNode ========
 */
static RMS_Status deleteNode(RMS_CmdSetDeleteNodeIn *cmdIn, RMS_CmdSetDeleteNodeOut *cmdOut)
{
    RMS_Obj     *rmsInst = (RMS_Obj *)cmdIn->node;
    RMS_Status  status = RMS_EOK;
    NODE_Stat   buf;

    Log_print2(Diags_USER5, "[+5] RMS deleteNode> Enter(0x%x, 0x%x)",
            (IArg)cmdIn, (IArg)cmdOut);

    /* get current stack info before deleting node */
    if (NODE_stat(rmsInst->node, &buf) == 0) {
        cmdOut->stackSize = buf.stackSize;
        cmdOut->stackUsed = buf.stackUsed;
    }
    else {
        cmdOut->stackSize = 0;
        cmdOut->stackUsed = 0;
    }

    /* delete the node object itself */
    if (NODE_delete(rmsInst->node) != NODE_EOK) {
        status = RMS_EFAIL;
    }

    freeInst(rmsInst);

    return (status);
}

/*
 *  ======== startNode ========
 */
static RMS_Status startNode(RMS_CmdSetExecuteNodeIn *cmdIn)
{
    RMS_Obj     *rmsInst = (RMS_Obj *)cmdIn->node;
    RMS_Status  status = RMS_EOK;

    Log_print1(Diags_USER5, "[+5] RMS startNode> Enter(0x%x)", (IArg)cmdIn);

    if (NODE_start(rmsInst->node) != NODE_EOK) {
        status = RMS_EFAIL;
    }

    return (status);
}

/*
 *  ======== formatNum ========
 */
static Char *formatNum(Char *ptr, UInt32 un)
{
    Int i = 0;
    UInt32 n = un;
    static const Char digtohex[] = "0123456789abcdef";

    /* compute digits in number from right to left */
    do {
        *(--ptr) = digtohex[n & 0xf];
        n = n >> 4;
        ++i;
    } while (n);

    return (ptr);
}

/*
 *  ======== freeInst ========
 */
static Void freeInst(RMS_Obj *inst)
{
    if (inst->name != NULL) {
        Memory_free(inst->name, strlen(inst->name) + 1, NULL);
    }
    Memory_free(inst, sizeof (RMS_Obj), NULL);
}

/*
 *  ======== getAlg ========
 */
static RMS_Status getAlg(RMS_CmdSetGetAlgIn *cmdIn,
        RMS_CmdSetGetAlgOut *cmdOut)
{
    NODE_Desc *desc;
    Int        len;
    Int        nodeTabLen = 0;
    Int        index = (Int)cmdIn->index;

    Log_print2(Diags_USER5, "[+5] RMS getAlg> Enter(0x%x, 0x%x)",
            (IArg)cmdIn, (IArg)cmdOut);

    /* search the database of nodes for the given uuid       */
    for (desc = RMS_nodeTab, nodeTabLen = 0; desc->name != NULL;
         desc++, nodeTabLen++) {
    }

    if (index < nodeTabLen) {
        desc = RMS_nodeTab + index;
    }
    else {
        desc = Server_getNode(index - nodeTabLen);
    }

    if (desc == NULL) {
        /* Can't find node with this index */
        Log_print3(Diags_USER6, "[+6] RMS getAlg> Failed to find node [%d]. "
                "RMS_nodeTab len = [%d], number of dynamically added "
                "nodes = [%d]", (IArg)index, (IArg)nodeTabLen,
                (IArg)Server_getNumNodes());
        return (RMS_EFAIL);
    }

    /* Copy alg name */
    len = strlen(desc->name);
    if (len >= RMS_MAXSTRLEN) {
        /* Name is too big to copy */
        Log_print1(Diags_USER7, "[+7] RMS getAlg> Length of alg name [%d] "
                "is too big to copy!", len);
        return (RMS_EFAIL);
    }
    strncpy((Char *)cmdOut->name, desc->name, RMS_MAXSTRLEN);

    /* Copy stub functions name */
    len = strlen(desc->stubFxnsName);
    if (len >= RMS_MAXSTRLEN) {
        /* Name is too big to copy */
        Log_print1(Diags_USER7, "[+7] RMS getAlg> Length of alg's stub "
                "functions name [%d] is too big to copy!", len);
        return (RMS_EFAIL);
    }
    strncpy((Char *)cmdOut->stubFxns, desc->stubFxnsName, RMS_MAXSTRLEN);

    /* Copy the typetab string */
    len = strlen(desc->typeTab);
    if (len >= RMS_MAXSTRLEN) {
        /* Name is too big to copy */
        Log_print1(Diags_USER7, "[+7] RMS getAlg> Length of alg's typeTab "
                "string [%d] is too big to copy!", len);
        return (RMS_EFAIL);
    }
    strncpy((Char *)cmdOut->typeTab, desc->typeTab, RMS_MAXSTRLEN);

    /* Copy the rest of the stuff */
    cmdOut->uuid = desc->uuid;
    cmdOut->rpcProtocolVersion = desc->rpcProtocolVersion;

    return (RMS_EOK);
}


/*
 *  ======== getMemStat ========
 */
static RMS_Status getMemStat(RMS_CmdSetGetMemStatOut *out)
{
    Int i;
    ti_sdo_ce_osal_Memory_Stat statBuf;
    UInt32 total = 0;

    for (i = 0; i < MAXNUMSEGS; i++) {
        if (Memory_segStat(i, &statBuf) != TRUE) {
            break;
        }
        total += statBuf.used;
    }

    if (i == MAXNUMSEGS) {
        /* Memory may be corrupted, print warning */
        Log_print1(Diags_USER6, "[+6] RMS> getMemStat() finding > %d heaps!!!",
                (IArg)MAXNUMSEGS);
    }
    out->used = total;

    checkStack();

    return (RMS_EOK);
}

/*
 *  ======== getMemRecs ========
 */
static RMS_Status getMemRecs(RMS_CmdSetGetMemRecsIn *cmdIn,
        RMS_CmdSetGetMemRecsOut *cmdOut)
{
    RMS_Obj         *rmsInst = (RMS_Obj *)cmdIn->node;
    Algorithm_Handle alg;
    VISA_Handle      visa;
    Int              maxRecs = cmdIn->numRecs;
    IALG_MemRec     *memTab = (IALG_MemRec *)(cmdOut->memRecs);
    RMS_Status       status = RMS_EOK;

    visa = (VISA_Handle)NODE_getEnv(rmsInst->node);
    alg = (Algorithm_Handle)VISA_getAlgorithmHandle(visa);

    cmdOut->numRecs = Algorithm_getMemRecs(alg, memTab, maxRecs);

    return (status);
}

/*
 *  ======== getNumAlgs ========
 */
static RMS_Status getNumAlgs(RMS_CmdSetGetNumAlgsOut *cmdOut)
{
    NODE_Desc   *desc;
    Int          numAlgs = 0;

    Log_print1(Diags_USER5, "[+5] RMS getNumAlgs> Enter(0x%x)", (IArg)cmdOut);

    /* Count the number of nodes in the database */
    for (desc = RMS_nodeTab; desc->name != NULL; desc++, numAlgs++) {
    }

    /* Get the number of dynamically addes algs */
    numAlgs += Server_getNumNodes();

    cmdOut->numAlgs = numAlgs;
    return (RMS_EOK);
}

/*
 *  ======== getNumRecs ========
 */
static RMS_Status getNumRecs(RMS_CmdSetGetNumRecsIn *cmdIn,
        RMS_CmdSetGetNumRecsOut *cmdOut)
{
    RMS_Obj         *rmsInst = (RMS_Obj *)cmdIn->node;
    Algorithm_Handle alg;
    VISA_Handle      visa;
    RMS_Status       status = RMS_EOK;

    visa = (VISA_Handle)NODE_getEnv(rmsInst->node);
    alg = (Algorithm_Handle)VISA_getAlgorithmHandle(visa);

    cmdOut->numRecs = Algorithm_getNumRecs(alg);

    return (status);
}

/*
 *  ======== getSegStat ========
 */
static RMS_Status getSegStat(Int segId, RMS_CmdSetGetSegStatOut *out)
{
    Memory_Stat statBuf;

    if (Memory_segStat(segId, &statBuf) != TRUE) {
        /* segId is out of range */
        Log_print1(Diags_USER6,
                "[+6] RMS> getSegStat() segment [%d] not found", (IArg)segId);
        return (RMS_ENOTFOUND);
    }
    else {
        /* Copy to out */
        out->base = statBuf.base;
        out->size = statBuf.size;
        out->used = statBuf.used;
        out->maxBlockLen = statBuf.length;

        /* Copy memory segment name */
        // TODO: Find a way to get segment name.
        if (statBuf.name != NULL) {
            strncpy((Char *)out->name, statBuf.name, RMS_MAXSEGNAMELENGTH);
            ((Char *)(out->name))[RMS_MAXSEGNAMELENGTH] = '\0';
        }
        else {
            ((Char *)(out->name))[0] = 0;
        }
    }

    return (RMS_EOK);
}

/*
 *  ======== getCpuStat ========
 */
static RMS_Status getCpuStat(RMS_CmdSetGetCpuStatOut *out)
{
    out->cpuLoad = Global_getCpuLoad();
    return (RMS_EOK);
}

/*
 *  ======== getTrace ========
 */
static RMS_Status getTrace(RMS_CmdSetGetTraceOut *out, Int size)
{
    UInt32  avail;
    UInt32  lost;

    Log_print2(Diags_USER5, "[+5] RMS getTrace> Enter(0x%x, 0x%x)",
            (IArg)out, (IArg)size);

    out->max = Trace_getSize();
    out->size = Trace_fillBuf((Char *)out->buf, size, &avail, &lost);
    out->avail = avail;
    out->lost = lost;

    return (RMS_EOK);
}

/*
 *  ======== setTraceMask ========
 */
static RMS_Status setTraceMask(RMS_CmdSetSetTraceMaskIn *in)
{
    String mask = (String)in->traceMask;

    mask[RMS_MAXTRACEMASKSIZE + 1] = '\0';

    Log_print1(Diags_ENTRY, "[+E] setting trace mask to %s", (IArg)mask);

    Diags_setMask(mask);

    Global_setSpecialTrace(mask);

    return (RMS_EOK);
}

/*
 *  ======== getVers ========
 */
static RMS_Status getVers(RMS_CmdSetGetVersOut *out)
{
    extern String ti_sdo_ce__versionString;

    if (ti_sdo_ce__versionString != NULL) {
        /* The CE version */
        strncpy((Char *)out->vers, ti_sdo_ce__versionString,
            RMS_READBUFSIZE - 1);
        ((Char *)out->vers)[RMS_READBUFSIZE - 1] = '\0';

        /* The RMS Protocol version */
        out->rpcMajor = RMS_VERSION_MAJOR;
        out->rpcSource = RMS_VERSION_SOURCE;
        out->rpcMinor = RMS_VERSION_MINOR;

        return (RMS_EOK);
    }

    return (RMS_EFAIL);
}

/*
 *  ======== mkInst ========
 */
static RMS_Obj *mkInst(String nodeName, Int id)
{
    Char idBuf[MAXNUMLEN + 1];  /* +1 for terminating '\0' */
    String idString;
    Int len;
    RMS_Obj *inst;

    inst = Memory_alloc(sizeof (RMS_Obj), NULL);
    if (inst == NULL) {
        return (NULL);
    }

    idBuf[MAXNUMLEN] = '\0';
    idString = formatNum(idBuf + MAXNUMLEN, id);

    len = strlen(nodeName) + strlen(idString) + 2;  /* +2 for '\0' and '#' */
    inst->name = (String)Memory_alloc(len, NULL);
    if (inst->name == NULL) {
        freeInst(inst);
        return (NULL);
    }

    strcpy(inst->name, nodeName);
    strcat(inst->name, "#");
    strcat(inst->name, idString);

    return (inst);
}

/*
 *  ======== processRmsCmd ========
 */
static RMS_Status processRmsCmd(RMS_CmdBuf *cmdBuf, Int cmdBufSize)
{
    Log_print3(Diags_ENTRY, "[+E] processRmsCmd(0x%x, %d): cmd = %d",
            (IArg)cmdBuf, (IArg)cmdBufSize, (IArg)(cmdBuf->cmd));

    switch (cmdBuf->cmd) {
        case RMS_CREATENODE:
            return createNode(&cmdBuf->data.createNodeIn,
                               &cmdBuf->data.createNodeOut);
        case RMS_STARTNODE:
            return startNode(&cmdBuf->data.startNodeIn);

        case RMS_DELETENODE:
            return deleteNode(&cmdBuf->data.deleteNodeIn,
                &cmdBuf->data.deleteNodeOut);

        case RMS_GETMEMSTAT:
            return getMemStat(&cmdBuf->data.getMemStatOut);

        case RMS_GETNUMSEGS:
            cmdBuf->data.getNumSegsOut.numSegs = Memory_getNumHeaps();
            return (RMS_EOK);

        case RMS_GETSEGSTAT:
            return getSegStat((Int)(cmdBuf->data.getSegStatIn.segId),
                    &cmdBuf->data.getSegStatOut);

        case RMS_GETCPUSTAT:
            return getCpuStat(&cmdBuf->data.getCpuStatOut);

        case RMS_GETTRACE: {
            Int traceSize = cmdBufSize - (
                (Char *)cmdBuf->data.getTraceOut.buf - (Char *)cmdBuf
            );
            Log_print2(Diags_ENTRY,
                    "[+E] remote time = 0x%x, trace buffer size = %d",
                    (IArg)(cmdBuf->data.getTraceIn.curTime), (IArg)traceSize);
            return getTrace(&cmdBuf->data.getTraceOut, traceSize);
        }

        case RMS_SETTRACEMASK:
            return setTraceMask(&cmdBuf->data.setTraceMaskIn);

        case RMS_GETVERS:
            return getVers(&cmdBuf->data.getVersOut);

        case RMS_REDEFINEHEAP:
            return redefineHeap((String)(cmdBuf->data.redefineHeapIn.name),
                    -1, /* Redefine heap by name, not segid */
                    cmdBuf->data.redefineHeapIn.base,
                    cmdBuf->data.redefineHeapIn.size);

        case RMS_RELTRACETOKEN:
            traceTokenAvailable = TRUE;
            return (RMS_EOK);

        case RMS_REQTRACETOKEN:
            if (traceTokenAvailable == TRUE) {
                traceTokenAvailable = FALSE;
                return (RMS_EOK);
            }
            else {
                return (RMS_ERESOURCE);
            }

        case RMS_RESTOREHEAP:
            return restoreHeap((String)(cmdBuf->data.redefineHeapIn.name));

        case RMS_WRITEWORD:
            *(Int *)(cmdBuf->data.writeWordIn.addr) =
                (Int)cmdBuf->data.writeWordIn.value;
            return (RMS_EOK);

        case RMS_GETNUMMEMRECS:
            return getNumRecs(&cmdBuf->data.getNumRecsIn,
                               &cmdBuf->data.getNumRecsOut);

        case RMS_GETMEMRECS:
            return getMemRecs(&cmdBuf->data.getMemRecsIn,
                               &cmdBuf->data.getMemRecsOut);
        case RMS_GETALG:
            return (getAlg(&cmdBuf->data.getAlgIn, &cmdBuf->data.getAlgOut));

        case RMS_ADDALG:
            return (addAlg(&cmdBuf->data.addAlgIn, &cmdBuf->data.addAlgOut));

        case RMS_GETNUMALGS:
            return (getNumAlgs(&cmdBuf->data.getNumAlgsOut));

       case RMS_DETACH:
           detachFlag = 1;
           return (RMS_EOK);

       case RMS_QUIT:
           exitFlag = 1;
           return (RMS_EOK);

        default:
            return (RMS_EFAIL);
    }
}

/*
 *  ======== redefineHeap ========
 *  Redefine the heap defined by either name (if not NULL), or by segId
 *  (if name is NULL).
 */
static RMS_Status redefineHeap(String name, Int segId, UInt32 base,
        UInt32 size)
{
    Memory_Stat stat;
    Uint32      end = base + size - 1;
    Int         i;

    if (name != NULL) {
        if ((segId = Memory_getHeapId(name)) < 0) {
            Log_print1(Diags_USER6, "[+6] RMS> redefineHeap() heap %s not "
                    "found.", (IArg)name);
            return (RMS_ENOTFOUND);
        }
    }

    Assert_isTrue(Memory_segStat(segId, &stat), (Assert_Id)NULL);

    /*
     *  Check for memory overlap with another heap, if size > 0.
     *  (This check still does not guarentee that [base, base + size - 1]
     *  is a valid memory segment.)
     */
    if (size > MINHEAPSIZE) {
        for (i = 0; Memory_segStat(i, &stat); i++) {
            if (i == segId) {
                continue;
            }

            if (((stat.base <= base) && (base < stat.base + stat.size)) ||
                    ((base <= stat.base) && (stat.base <= end))) {
                /* Memory overlap */
                Log_print2(Diags_USER6, "[+6] RMS> redefineHeap() cannot "
                        "redefine heap %s, since this would cause overlap "
                        "with heap %s", (IArg)name, (IArg)stat.name);
                return (RMS_EINVAL);
            }
        }
    }
    else {
        Log_print3(Diags_USER6, "[+6] RMS> redefineHeap() cannot redefine "
                "heap %s, since new size (0x%x) is too small. Size should "
                "be at least %d.",
                (IArg)name, (IArg)size, (IArg)MINHEAPSIZE);
        return (RMS_EINVAL);
    }

    if (!Memory_redefine(segId, base, size)) {
        /*
         *  Should not get here unless memory is in use, since we've
         *  already checked that segment exists.
         */
        return (RMS_EFREE);
    }

    return (RMS_EOK);
}

/*
 *  ======== restoreHeap ========
 */
static RMS_Status restoreHeap(String name)
{
    Int         segId;

    if ((segId = Memory_getHeapId(name)) < 0) {
        Log_print1(Diags_USER6, "[+6] RMS> restoreHeap() heap %s not found",
                (IArg)name);
        return (RMS_ENOTFOUND);
    }

    if (!Memory_restoreHeap(segId)) {
        /*
         *  Should not get here unless memory is in use, since we've
         *  already checked that segment exists.
         */
        return (RMS_EFREE);
    }

    return (RMS_EOK);
}
/*
 *  @(#) ti.sdo.ce; 1, 0, 6,3; 6-13-2013 00:10:04; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

