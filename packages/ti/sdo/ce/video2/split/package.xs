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
 *  ======== getLibs ========
 */
function getLibs(prog)
{
    var suffix = prog.build.target.findSuffix(this);
    if (suffix == null) {
        /* no matching lib found in this package, return "" */
        $trace("Unable to locate a compatible library, returning none.",
                1, ['getLibs']);
        return ("");
    }

    /* the location of the libraries are in lib/<profile>/* */
    var frontname = "lib/" + this.profile + "/viddec2front.a" + suffix;
    var backname = "lib/" + this.profile + "/viddec2back.a" + suffix;


    /*
     * If the requested profile doesn't exist, we return the 'release' library.
     */
    if (!java.io.File(this.packageBase + frontname).exists()) {
        $trace("Unable to locate lib for requested '" + this.profile +
                "' profile.  Using 'release' profile.", 1, ['getLibs']);
        frontname = "lib/release/viddec2front.a" + suffix;
    }

    if (!java.io.File(this.packageBase + backname).exists()) {
        $trace("Unable to locate lib for requested '" + this.profile +
                "' profile.  Using 'release' profile.", 1, ['getLibs']);
        backname = "lib/release/viddec2back.a" + suffix;
    }

    return (frontname + ";" + backname);
}


/*
 *  ======== close ========
 */
function close()
{
    /* if undefined, take profile from the Settings module */
    if (this.profile == undefined) {
        this.profile = xdc.useModule('ti.sdo.ce.global.Settings').profile;
    }

    /* establish dependency on XDM and CE packages */
    xdc.loadPackage('ti.xdais.dm');
    xdc.loadPackage('ti.sdo.ce');

    /* find if any of the modules in the system extend IVIDDECBACK module in
     * this package, and add their names and custom params to the list of codecs
     * (and their custom params) in VIDDEC2BACKConfig.codecsList
     */
    var viddecCodecsList = {};
    var pa = xdc.om.$packages;
    for (var j = 0; j < pa.length; j++) {
        var ma = pa[j].$modules;
        for (var i = 0; i < ma.length; i++) {
            var codecFullName = ma[i].$name.replace( /\./g, "_" );
            if (ma[i] instanceof this.IVIDDEC2BACK.Module) {
                viddecCodecsList[ codecFullName ] =
                   {
                       manageInBufsCache     : ma[i].manageInBufsCache,
                       manageOutBufsCache    : ma[i].manageOutBufsCache,
                       manageIntermediateBufsCache    :
                           ma[i].manageIntermediateBufsCache,
                   };
            }
        }
    }

    if (viddecCodecsList != {}) {
        var VIDDEC2BACKConfig =
            xdc.useModule( "ti.sdo.ce.video2.split.VIDDEC2BACKConfig" );
        VIDDEC2BACKConfig.codecsList = viddecCodecsList;
    }

    /*
     * TODO: M - need to review other dependencies - XdmUtils? OSAL? GT?
     * Conditional or always?
     */
}
/*
 *  @(#) ti.sdo.ce.video2.split; 1, 0, 0,3; 6-13-2013 00:20:51; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

