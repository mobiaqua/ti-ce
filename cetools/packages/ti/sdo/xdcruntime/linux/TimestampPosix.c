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
 *  ======== TimestampPosix.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Types.h>

#include <sys/types.h>
#include <sys/time.h>

#include "package/internal/TimestampPosix.xdc.h"

static Bool gettimeofdayInit = FALSE;
static UInt64 initTime;

#include <stdio.h>

#ifndef xdc__INT64__
#error This module requires UInt64 support.
#endif

/*
 *  ======== TimestampPosix_get32 ========
 */
Bits32 TimestampPosix_get32()
{
    Types_Timestamp64 result;

    TimestampPosix_get64(&result);

    /* Note, we throw away the hi 32 bits */
    return ((Bits32)(result.lo));
}

/*
 *  ======== TimestampPosix_get64 ========
 */
Void TimestampPosix_get64(Types_Timestamp64 *result)
{
    UInt64 res;
    struct timeval time;

    if (gettimeofdayInit == FALSE) {
        gettimeofdayInit = TRUE;
        gettimeofday(&time, NULL);
        initTime = (time.tv_sec * (UInt64)1000000) + time.tv_usec;
    }

    gettimeofday(&time, NULL);
    res = (time.tv_sec * (UInt64)1000000) + time.tv_usec - initTime;

    result->lo = (Bits32)(res & 0xFFFFFFFF);
    result->hi = (Bits32)(res >> 32);
}

/*
 *  ======== TimestampPosix_getFreq ========
 */
Void TimestampPosix_getFreq(Types_FreqHz *freq)
{
    freq->lo = 1000000;
    freq->hi = 0;
}
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

