#
#  Copyright (c) 2012, Texas Instruments Incorporated
#  All rights reserved.
#
#  Redistribution and use in source and binary forms, with or without
#  modification, are permitted provided that the following conditions
#  are met:
#
#  *  Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.
#
#  *  Redistributions in binary form must reproduce the above copyright
#     notice, this list of conditions and the following disclaimer in the
#     documentation and/or other materials provided with the distribution.
#
#  *  Neither the name of Texas Instruments Incorporated nor the names of
#     its contributors may be used to endorse or promote products derived
#     from this software without specific prior written permission.
#
#  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
#  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
#  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
#  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
#  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
#  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
#  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
#  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
#  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
#  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

#
#  Examples for various platforms.  The purpose of this file is to set the
#  ARCHIVES variable to the complete list of examples applicable to a given
#  platform and configuration. This file is included by the makefile at the
#  root of the examples directory.
#
#  Within each DEVICE, special considerations are made if IPC is not set
#  (which implies 'remote' examples are not extracted).
#

ARCHIVEDIR = archive/$(DEVICE)_$(EXHOSTOS)_elf$(EXSDK)

ifeq ("$(DEVICE)","TI816X")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ifeq ("$(HOSTOS)","Linux")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_local*)
        else ifeq ("$(HOSTOS)","Bios")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_dsp*)
            ARCHIVES += $(wildcard $(ARCHIVEDIR)/ex??_*_video*)
            ARCHIVES += $(wildcard $(ARCHIVEDIR)/ex??_*_vpss*)
        else
        endif
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

else ifeq ("$(DEVICE)","TI814X")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ifeq ("$(HOSTOS)","Linux")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_local*)
        else ifeq ("$(HOSTOS)","Bios")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_dsp*)
            ARCHIVES += $(wildcard $(ARCHIVEDIR)/ex??_*_video*)
            ARCHIVES += $(wildcard $(ARCHIVEDIR)/ex??_*_vpss*)
        endif
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

else ifeq ("$(DEVICE)","TI811X")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ifeq ("$(HOSTOS)","Linux")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_local*)
        else ifeq ("$(HOSTOS)","Bios")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_dsp*)
        endif
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

else ifeq ("$(DEVICE)","OMAP3530")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ifeq ("$(HOSTOS)","Linux")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_local*)
        else ifeq ("$(HOSTOS)","Bios")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_dsp*)
        endif
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

else ifeq ("$(DEVICE)","C6472")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_core0*)
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

else ifeq ("$(DEVICE)","C6678")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_core0*)
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

else ifeq ("$(DEVICE)","C6A8149")

    ifeq ($(strip $(IPC_INSTALL_DIR)),)
        ifeq ("$(HOSTOS)","Linux")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_local*)
        else ifeq ("$(HOSTOS)","Bios")
            ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*_dsp*)
        endif
    else
        ARCHIVES = $(wildcard $(ARCHIVEDIR)/ex??_*)
    endif

endif
