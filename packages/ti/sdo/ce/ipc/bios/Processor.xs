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
 *  ======== Processor.xs ========
 */

function close()
{
    for (var i = 0; i < this.coreComm.length; i++) {
        var coreComm = this.coreComm[i];
        if (coreComm.heapId == undefined) {
            if (coreComm.sharedRegionId != undefined ||
                coreComm.numMsgs != undefined ||
                coreComm.msgSize != undefined ||
                coreComm.userCreatedHeap != undefined) {

                throw "Error: " + this.$name + ".coreComm.heapId is not " +
                      "defined, yet other coreComm fields are meaninglessly " +
                      "set (and will not be used).  When heapId is not " +
                      "defined, the Processor-created HeapBufMP will be used";
            }
        }
    }
}

function module$validate()
{
    var pkgList = $om.$packages;
    for (var i = 0; i < pkgList.length; i++) {
        //print("package[" + i + "] = " + pkgList[i]);
        if (pkgList[i] == "ti.sdo.ipc") {

            /* Ensure Processor and MessageQ are compatible */
            var MessageQ = xdc.module('ti.sdo.ipc.MessageQ');
            var numCommDescs = this.coreComm.length;
            if (numCommDescs == 0) {
                /* validate default heap id */
                if (this.heapId > MessageQ.numHeaps) {
                    this.$logError("Processor.heapId (" + this.heapId +
                            ") > MessageQ.numHeaps (" +
                            MessageQ.numHeaps + ").",
                            this, "heapId");
                }
            } else {
                /* validate each configured core's heap id */
                for (var i = 0; i < numCommDescs; i++) {
                    if ((this.coreComm[i].heapId != undefined) &&
                            (this.coreComm[i].heapId > MessageQ.numHeaps)) {
                        this.$logError("Processor.coreComm[" + i +
                                "].heapId (" + this.coreComm[i].heapId +
                                ") > MessageQ.numHeaps (" + MessageQ.numHeaps +
                                ").", this.coreComm[i], "heapId");
                    }
                }
            }
            break;
        }
    }
}
/*
 *  @(#) ti.sdo.ce.ipc.bios; 2, 0, 1,3; 6-13-2013 00:16:06; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

