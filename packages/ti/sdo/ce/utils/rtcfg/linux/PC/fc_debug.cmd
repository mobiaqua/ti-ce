/*
 *  Linker command file template for run-time configuration app.
 *  Use this file to build Linux apps for the PC with debug libraries.
 */
INPUT(
    ti/sdo/fc/utils/osalsupport/lib/debug/osal_support.a86U
    ti/sdo/fc/memutils/lib/debug/memutils_std.a86U

    gnu/targets/rts86U/lib/gnu.targets.rts86U.a86U
    ti/sdo/fc/global/lib/debug/fcsettings.a86U
)
