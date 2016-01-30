/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 * Copyright (c) 2011, Texas Instruments Incorporated
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
 *  ======== svr_config.c ========
 *  Server config for non-RTSC Codec Engine example.
 */

#include <xdc/std.h>


/*
 *  ======== Server Configuration ========
 */
#include <ti/sdo/ce/node/node.h>
#include <ti/sdo/ce/rms.h>

Int ti_sdo_ce_Server_skelCachingPolicy = 0;

RMS_Config RMS_config = {
    1,       /* RMS server's priority */
    4096,    /* RMS server's stack size */
    0,       /* RMS server's stack memory seg */
};


/* PLEASE DO NOT MODIFY CODE BELOW THIS LINE */
NODE_Desc RMS_nodeTab[] = {
    {NULL}  /* NULL terminate RMS_nodeTab[] */
};

static Engine_Desc engineTab[] = {
    {"local",    /* Engine name */
     NULL,       /* algTab */
     NULL,       /* Remote server name */
     NULL,       /* Map file name */
     FALSE,      /* Use external loader? */
     0,          /* Number of algs in algTab */
     0           /* Heap id for engine allocs */
    },
    {NULL, NULL, NULL, NULL, 0, 0, 0}  /* Null terminate the engine table */
};

Engine_Config Engine_config = {
    engineTab, /* Table of all engines */
    "local"    /* Local RMS engine name */
};
/*
 *  @(#) ti.sdo.ce.utils.rtcfg; 1, 0, 1,3; 6-13-2013 00:19:39; /db/atree/library/trees/ce/ce-w08/src/ xlibrary

 */

