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
/*!
 *  ======== IIMGENC ========
 *  IIMGENC-compliant image decoder interface
 *
 *  All IIMGENC-compliant image decoder modules must implement this
 *  interface.
 */
metaonly interface IIMGENC inherits ti.sdo.ce.ICodec
{
    override config String serverFxns = "IMGENC_SKEL";
    override config String stubFxns = "IMGENC_STUBS";

    override readonly config Int rpcProtocolVersion = 3;

    override readonly config Bool codecClassConfigurable = true;

    /*!
     *  ======== manageInBufsCache =======
     *  Codec Class configuration param
     *
     *  Determines whether cache will be managed on the DSP for each of the
     *  (up to 16) input buffers given to the codec's "process()" call.
     *
     *  If this flag is set to "false" for one or more
     *  elements, the cache for the corresponding input buffer will not be
     *  invalidated before the process() call. Skipping unnecessary cache
     *  invalidation improves performance, especially if a buffer is large.
     *
     *  (If element "i" in this array is set to true, cache for inBufs[i] will
     *  be invalidated only if the buffer is supplied, of course.)
     *
     *  For example, if you know that a particular codec of this class always
     *  reads the data from its inBufs[1] buffer only via DMA, you can set
     *  manageInBufsCache[1] = false;
     */
    config Bool manageInBufsCache[ 16 ] = [
        true, true, true, true, true, true, true, true,
        true, true, true, true, true, true, true, true,
    ];

    /*!
     *  ======== manageOutBufsCache =======
     *  Codec Class configuration param
     *
     *  Determines whether cache will be managed on the DSP for each of the
     *  (up to 16) output buffers given to the codec's "process()" call.
     *
     *  If this flag is set to "false" for one or more
     *  elements, the cache for the corresponding output buffer will not be
     *  invalidated before the process() call nor flushed after the process()
     *  call. Skipping unnecessary cache invalidation and flushing improves
     *  performance.
     *
     *  For example, if you know that a particular codec of this class always
     *  writes the data to its outBufs[2] buffer only via DMA, you can set
     *  manageOutBufsCache[2] = false;
     */
    config Bool manageOutBufsCache[ 16 ] = [
        true, true, true, true, true, true, true, true,
        true, true, true, true, true, true, true, true,
    ];
}
/*
 *  @(#) ti.sdo.ce.image; 1, 0, 3,3; 6-13-2013 00:15:43; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

