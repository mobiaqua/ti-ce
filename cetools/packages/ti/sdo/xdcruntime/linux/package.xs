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
    var profile = this.profile;
    var suffix;
    var arch;
    var lib;

    if ("findSuffix" in prog.build.target) {
        suffix = prog.build.target.findSuffix(this);
        if (suffix == null) {
            return "";  // nothing to contribute
        }
    }
    else {
        suffix = prog.build.target.suffix;
    }

    lib = "lib/" + this.profile + "/osal_linux.a" + suffix;

    if ((suffix + "").match(/86U/) != null) {
        lib = lib.replace(/linux/, "linux_86U");
    }
    else {
        /* big assumption that everything else Linux is an ARM...? */
        lib = lib.replace(/linux/, "linux_470");
    }

    /* check for library existance */
    var file = new java.io.File(this.packageBase + '/' + lib);
    if (!file.exists()) {
        /* the preferred profile doesn't exist, try "release" */
        trace(this.$name + ":  Requested profile '" +
                this.profile + "' does not exist.\n\tDefaulting to " +
                "the 'release' profile");


        lib = "lib/release/osal_linux.a" + suffix;

        if ((suffix + "").match(/86U/) != null) {
            lib = lib.replace(/linux/, "linux_86U");
        }
        else {
            lib = lib.replace(/linux/, "linux_470");
        }
    }

    return (lib);
}

function trace(str)
{
//    print(str);
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

