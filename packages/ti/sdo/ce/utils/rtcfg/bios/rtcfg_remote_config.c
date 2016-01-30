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
 * ======== utils.rtcfg.bios.rtcfg_remote_config.c ========
 */

#include <xdc/std.h>


/* CORE0-side IPC configuration
 * ==============================
 */


#include <ti/sdo/ce/ipc/Processor.h>

/*
 *  Set the Processor module defaults for communication between CORE0 and
 *  the slave cores. These will be used when no per-core value is specified
 *  in the Processor_commDescs[] array (see below).
 *
 *      Processor_defaultSharedRegionId: The shared region to create a heap
 *          for allocating messages.
 *      Processor_defaultHeapId: The id of a heap that is registered with
 *          MessageQ.
 *      Processor_defaultNumMsgs: Used for the number of blocks when creating
 *          a heap for MessageQ.
 *      Processor_defaultMsgSize: Used for the block size when creating a heap
 *          for MessageQ.
 */
Int16 ti_sdo_ce_ipc_bios__Processor_defaultSharedRegionId = 0;
Int16 ti_sdo_ce_ipc_bios__Processor_defaultHeapId = 0;
Int32 ti_sdo_ce_ipc_bios__Processor_defaultNumMsgs = 8;
Int32 ti_sdo_ce_ipc_bios__Processor_defaultMsgSize = 4096;

#if 0
Processor_CommDesc ti_sdo_ce_ipc_bios__Processor_commDescs[] = {
    {
        -1,                     /* numMsgs */
        -1,                     /* msgSize */
        -1,                     /* sharedRegionId */
        -1,                     /* heapId */
        FALSE,                  /* userCreatedHeap */
    }
};

UInt32 ti_sdo_ce_ipc_bios__Processor_numCommDescs = 1;
#endif

Processor_CommDesc ti_sdo_ce_ipc_bios__Processor_commDescs[] = {
    {
        8,
        4096,
        0,
        0,
        FALSE
    },
    {
        8,
        4096,
        0,
        1,
        FALSE
    },
    {
        8,
        4096,
        0,
        2,
        FALSE
    },
    {
        8,
        4096,
        0,
        3,
        FALSE
    },
    {
        8,
        4096,
        0,
        4,
        FALSE
    },
    {
        8,
        4096,
        0,
        5,
        FALSE
    },
};

UInt32 ti_sdo_ce_ipc_bios__Processor_numCommDescs = 6;
/*
 *  @(#) ti.sdo.ce.utils.rtcfg; 1, 0, 1,3; 6-13-2013 00:19:38; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

