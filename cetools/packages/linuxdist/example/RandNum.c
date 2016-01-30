/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/* This define must precede inclusion of Registry.h */
#define Registry_CURDESC randDesc
#include <xdc/std.h>
#include <stdio.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Diags.h>

#include <xdc/runtime/Registry.h>

#include <RandNum.h>

Registry_Desc randDesc;
UInt randomSeed = 42;

Void randNumInit()
{
    Registry_Result   result;

    result = Registry_addModule(&randDesc, RANDNUM_MODNAME);

    if (result != Registry_SUCCESS) {
        printf("Registry_addModule failed\n");
    }
}


UInt randNum()
{
    UInt num;

    Log_print0(Diags_ENTRY, "RANDNUM randNum entered");

    randomSeed = randomSeed * 1103515245 +12345;
    num = (UInt)(randomSeed / 65536) % 32768;

    Log_print1(Diags_EXIT, "RANDNUM randNum returning %d", num);

    return (num);
}
/*
 *  @(#) linuxdist; 1, 0, 0,1; 5-20-2013 14:38:49; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

