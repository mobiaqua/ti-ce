#
#  Copyright 2013 by Texas Instruments Incorporated.
#  
#

#
#  Copyright (c) 2013 Texas Instruments Incorporated
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
#  ======== Makefile ========
#
EXBASE = .
-include $(EXBASE)/products.mak

QNX_INSTALL_DIR ?= /apps/qnx/6.5.0
XDC_INSTALL_DIR ?= /your_xdc_install
OSAL_INSTALL_DIR ?= /your_osal_install
XDC_SOURCES ?= $(OSAL_INSTALL_DIR)/sources

PKGPATH := $(OSAL_INSTALL_DIR)/packages:$(XDC_INSTALL_DIR)/packages
export PKGPATH

QNX_PATH := $(QNX_INSTALL_DIR)/host/linux/x86/usr/bin
QNX_PATH := $(QNX_PATH):$(QNX_INSTALL_DIR)/host/linux/x86/bin
QNX_PATH := $(QNX_PATH):$(QNX_INSTALL_DIR)/host/linux/x86/sbin
QNX_PATH := $(QNX_PATH):$(QNX_INSTALL_DIR)/host/linux/x86/usr/sbin
QNX_PATH := $(QNX_PATH):$(QNX_INSTALL_DIR)/linux/x86/usr/photon/appbuilder
PATH := $(QNX_PATH):$(PATH)
export PATH

export XDC_INSTALL_DIR
export QNX_CONFIGURATION=$(QNX_INSTALL_DIR)/etc/qnx
export QNX_HOST=$(QNX_INSTALL_DIR)/host/linux/x86
export QNX_TARGET=$(QNX_INSTALL_DIR)/target/qnx6
export MAKEFLAGS:=-I$(QNX_INSTALL_DIR)/target/qnx6/usr/include
unexport MAKEOVERRIDES
export LD_LIBRARY_PATH=$(QNX_INSTALL_DIR)/host/linux/x86/usr/lib

help:
	@$(ECHO) "make all              # build all libraries"
	@$(ECHO) "make clean            # clean everything"


all: build/lib/osal.aqv7
all: cstubs/lib/cstubs.aqv7

clean::
	$(MAKE) -C build/Qnx clean
	$(MAKE) -C cstubs/Qnx clean
	$(RMDIR) build/lib
	$(RMDIR) cstubs/lib

build/lib/osal.a%:
	$(MAKE) -C build/Qnx \
	XDCSOURCES=$(XDC_SOURCES) \
	OSALSOURCES=$(OSAL_INSTALL_DIR) \
	PRECONFIG=$(OSAL_INSTALL_DIR)/packages/qnxdist/preconfig/production all
#	$(MKDIR) build/lib
#	$(CP) build/Qnx/arm/a.le.v7/libosal.a build/lib/osal.qv7


cstubs/lib/cstubs.a%:
	$(MAKE) -C cstubs/Qnx \
	XDCSOURCES=$(XDC_SOURCES) \
	OSALSOURCES=$(OSAL_INSTALL_DIR) \
	CSTUBSSOURCES=$(OSAL_INSTALL_DIR)/packages/cstubs/posix
#	$(MKDIR) cstubs/lib
#	$(CP) cstubs/Qnx/arm/a.le.v7/libcstubs.a cstubs/lib/cstubs.qv7


#  ======== standard macros ========
ifneq (,$(wildcard $(XDC_INSTALL_DIR)/bin/echo.exe))
    # use these on Windows
    CP      = $(XDC_INSTALL_DIR)/bin/cp
    ECHO    = $(XDC_INSTALL_DIR)/bin/echo
    MKDIR   = $(XDC_INSTALL_DIR)/bin/mkdir -p
    RM      = $(XDC_INSTALL_DIR)/bin/rm -f
    RMDIR   = $(XDC_INSTALL_DIR)/bin/rm -rf
else
    # use these on Linux
    CP      = cp
    ECHO    = echo
    MKDIR   = mkdir -p
    RM      = rm -f
    RMDIR   = rm -rf
endif
#
#  @(#) qnxdist; 1, 0, 0,1; 5-20-2013 14:38:59; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

#

