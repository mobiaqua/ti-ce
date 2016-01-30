/* 
 *  Copyright (c) 2008 Texas Instruments and others.
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 *
 * */
import xdc.bld.ITarget2;

/*!
 *  ======== IM.xdc ========
 *  Common interface for Cortex M bare metal targets
 *
 *  This defines common parameters of Cortex M bare metal targets. The targets
 *  generate code compatible with the "v7M" architecture.
 */
metaonly interface IM inherits gnu.targets.ITarget {
    override readonly config xdc.bld.ITarget.Model model= {
        endian: "little",
        codeModel: "thumb2",
        shortEnums: true
    };

    override readonly config Bool alignDirectiveSupported = true;
    override readonly config string rts = "gnu.targets.arm.rtsv7M";
    override config string platform     = "ti.platforms.stellaris:LM4F232H5QD";

    override config string LONGNAME = "bin/arm-none-eabi-gcc";

    override readonly config String stdInclude = "gnu/targets/arm/std.h";

    override config ITarget2.Options ccOpts = {
        prefix: "-Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections",
        suffix: "-Dfar= -D__DYNAMIC_REENT__ "
    };

    /*!
     *  ======== ccConfigOpts ========
     *  User configurable compiler options for the generated config C file.
     */
    override config ITarget2.Options ccConfigOpts = {
        prefix: "-Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections",
        suffix: "-Dfar= -D__DYNAMIC_REENT__ "
    };

    readonly config ITarget2.Command arBin = {
        cmd: "bin/arm-none-eabi-ar ",
        opts: ""
    };

    /*
     *  ======== profiles ========
     */
    override config xdc.bld.ITarget.OptionSet profiles[string] = [
        ["debug", {
            compileOpts: {
                copts: "-g",
                defs:  "-D_DEBUG_=1",
            },
            linkOpts: "-g",
        }],

        ["release", {
            compileOpts: {
                copts: " -O2 ",
            },
            linkOpts: " ",
        }],
    ];

    /*
     *  ======== compatibleSuffixes ========
     */
    override config String compatibleSuffixes[] = [];

    override readonly config xdc.bld.ITarget.StdTypes stdTypes = {
        t_IArg          : { size: 4, align: 4 },
        t_Char          : { size: 1, align: 1 },
        t_Double        : { size: 8, align: 8 },
        t_Float         : { size: 4, align: 4 },
        t_Fxn           : { size: 4, align: 4 },
        t_Int           : { size: 4, align: 4 },
        t_Int8          : { size: 1, align: 1 },
        t_Int16         : { size: 2, align: 2 },
        t_Int32         : { size: 4, align: 4 },
        t_Int64         : { size: 8, align: 8 },
        t_Long          : { size: 4, align: 4 },
        t_LDouble       : { size: 8, align: 8 },
        t_LLong         : { size: 8, align: 8 },
        t_Ptr           : { size: 4, align: 4 },
        t_Short         : { size: 2, align: 2 },
        t_Size          : { size: 4, align: 4 },
    };
}
/*
 *  @(#) gnu.targets.arm; 1, 0, 0,408; 3-12-2013 15:04:43; /db/ztree/library/trees/xdctargets/xdctargets-g22x/src/ xlibrary

 */

