/*
 *  Linker command file template for run-time configuration app.
 *  Copy this file to your build directory, and add codec libraries, to
 *  build Linux apps for the PC with release libraries.
 */
INPUT(
    ti/sdo/fc/utils/osalsupport/lib/release/osal_support.a86U
    ti/sdo/fc/memutils/lib/release/memutils_std.a86U

    gnu/targets/rts86U/lib/gnu.targets.rts86U.a86U
    ti/sdo/fc/global/lib/release/fcsettings.a86U
)
