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
 *  ======== Package.close ========
 *  Close this package; optionally (re)set other config parameters in the
 *  model
 */
function close()
{
    trace(this.$name + ".close() ...");
    var settings = this.Settings;
    var prog = Program;

    /* if undefined, take profile from the Settings module */
    if (this.profile == undefined) {
        this.profile = xdc.useModule('ti.sdo.ce.global.Settings').profile;
    }

    var global = xdc.useModule('ti.sdo.ce.osal.Global');

    //  If ipc is not configured in the .cfg file, attempt to do it
    //  based on ti.sdo.ce.osal.Global.runtimeEnv.
    if (settings.ipc == undefined) {
        if (global.runtimeEnv == global.DSPLINK_LINUX) {
            settings.ipc = xdc.useModule('ti.sdo.ce.ipc.dsplink.Ipc');
        }
        else if (global.runtimeEnv == global.DSPLINK_BIOS) {
            // Set the ipc to bios.
            settings.ipc = xdc.useModule('ti.sdo.ce.ipc.bios.Ipc');

            // Bring in this module for DSPLink
            xdc.useModule('ti.sdo.ce.ipc.dsplink.dsp.Settings');
        }
        else if (osalGlobal.runtimeEnv == osalGlobal.DSPBIOS) {
            // Set the ipc to bios.
            settings.ipc = xdc.useModule('ti.sdo.ce.ipc.bios.Ipc');
        }
        else if (osalGlobal.runtimeEnv == osalGlobal.LINUX) {
            // Set the ipc to linux.
            settings.ipc = xdc.useModule('ti.sdo.ce.ipc.linux.Ipc');
        }
        else {
            throw (this.$name + ".close(): Error: ipc undefined");
        }
    }

    trace(this.$name + ".close() done!");
}

/*
 *  ======== Package.validate ========
 *  Verify the config params for this package; called after close()
 */
function validate()
{
    trace(this.$name + ".validate() ...");

}

/*
 *  ======== getLibs ========
 */
function getLibs(prog)
{
    return (null);
}


/*
 *  ======== warn ========
 *  For warnings that we may not really want to print.
 */
function warn(msg)
{
    //print("WARN:  " + msg);
}

/*
 *  ======== trace ========
 */
function trace(msg)
{
    //print("TRACE:  " + msg);
}
/*
 *  @(#) ti.sdo.ce.ipc; 2, 0, 1,3; 6-13-2013 00:15:58; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

