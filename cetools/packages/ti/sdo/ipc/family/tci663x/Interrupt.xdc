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
 * */
/*
 *  ======== Interrupt.xdc ========
 */

import xdc.rov.ViewInfo;

/*!
 *  ======== Interrupt ======== 
 *  TCI663x based interrupt manager
 */
@ModuleStartup

module Interrupt inherits ti.sdo.ipc.notifyDrivers.IInterrupt
{
    /* @_nodoc */
    metaonly struct InterruptDataStruct {
        UInt    remoteCoreId;
        String  isrFxn;
        String  isrArg;
        Bool    isFlagged;
    }
    
    /*!
     *  ======== rovViewInfo ========
     */
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo =
        ViewInfo.create({
            viewMap: [
                ['Registered Interrupts',
                    {
                        type: ViewInfo.MODULE_DATA,
                        viewInitFxn: 'viewInterruptsData',
                        structName: 'InterruptDataStruct'
                    }
                ],
            ]
        });

internal:

    /*! Shift value used for setting/identifying interrupt source */
    const UInt SRCSx_SHIFT = 4;
    
    /*! Ptr to the IPC Generation Registers */
    config Ptr IPCGR0;

    /*! Ptr to the IPC Acknowledgment Registers */
    config Ptr IPCAR0;
    
    /*! Inter-processor interrupt id (varies per device) */
    config UInt INTERDSPINT;

    /*!
     *  ======== intShmStub ========
     *  Stub function plugged as interrupt handler
     */
    Void intShmStub(UArg arg);

    struct Module_State {
        Fxn     func;
        UArg    args[];     /* One entry for each core */
        UInt    numPlugged; /* # of times the interrupt was registered */
    };
}
/*
 *  @(#) ti.sdo.ipc.family.tci663x; 1, 0, 0, 0,; 1-23-2013 13:25:20; /db/vtree/library/trees/ipc/ipc-i12/src/ xlibrary

 */

