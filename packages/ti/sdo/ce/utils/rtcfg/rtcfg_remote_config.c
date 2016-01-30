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
 * ======== utils.rtcfg.rtcfg_remote_config.c ========
 */

#include <xdc/std.h>

#include <ti/sdo/ce/osal/Memory.h>

/*
 *  ======== ti.sdo.ce Settings Configuration ========
 *  Set to TRUE for 'checked' builds.
 *  Declare VISA_checked as extern Bool in main.c, set to TRUE bofore the
 *  call to CERuntime_init().
 */
Bool VISA_checked = FALSE;

/*
 * ======== ti.sdo.ce.alg.Algorithm Configuration ========
 */

/*
 *  ======== useHeap ========
 *  Flag indicating whether algorithm memory should be allocated from
 *  a heap or from a pool.
 *
 *  This flag is currently only used when CMEM is used to allocate memory
 *  (e.g. ARM-side 'local' codecs).
 */
Bool ti_sdo_ce_alg_Algorithm_useHeap = FALSE;

/*
 *  ======== useCache ========
 *  This flag indicates whether algorithm memory should be allocated from
 *  cache-enabled buffers.
 *
 *  This flag is currently only used when CMEM is used to allocate memory
 *  (e.g. ARM-side 'local' codecs).
 *
 *  Note that when cache-enabled buffers are used, it is the application's
 *  responsibility to manage this cache.  See the various `Memory_` APIs
 *  for cache services.
 */
Bool ti_sdo_ce_alg_Algorithm_useCache = FALSE;


/*
 *  ======== Global Configuration ========
 *  Configuration parameters for remote linux apps that will probably not
 *  need to be modified.
 */

Bool ti_sdo_ce_osal_Memory_skipVirtualAddressTranslation = FALSE;

UInt32 ti_sdo_ce_osal_Memory_maxCbListSize = 100;

/* Arm-side IPC configuration
 * ==============================
 */


#include <ti/sdo/ce/ipc/Processor.h>

/*
 *  Set the Processor module defaults for communication between the
 *  ARM and the DSP. These will be used when no per-core value is specified
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
Int16 ti_sdo_ce_ipc_dsplink__Processor_defaultSharedRegionId = 1;
Int16 ti_sdo_ce_ipc_dsplink__Processor_defaultHeapId = 0;
Int32 ti_sdo_ce_ipc_dsplink__Processor_defaultNumMsgs = 64;
Int32 ti_sdo_ce_ipc_dsplink__Processor_defaultMsgSize = 4096;

Processor_CommDesc ti_sdo_ce_ipc_dsplink__Processor_commDescs[] = {
    {
        -1,                     /* numMsgs */
        -1,                     /* msgSize */
        -1,                     /* sharedRegionId */
        -1,                     /* heapId */
        FALSE,                  /* userCreatedHeap */
    }
};

UInt32 ti_sdo_ce_ipc_dsplink__Processor_numCommDescs = 1;


/* Max timeout for MessageQ_get() allowed. */
UInt32 ti_sdo_ce_ipc_dsplink_Ipc_maxTimeout = 4294967295UL; /* 0xFFFFFFFF */

/* configuration for interprocessor communication */

/* configure number of retries Comm_locate should do before giving up */
UInt32 Comm_LOCATERETRIES = 20;
/*
 *  @(#) ti.sdo.ce.utils.rtcfg; 1, 0, 1,3; 6-13-2013 00:19:39; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

