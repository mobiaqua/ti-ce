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

XDC_INSTALL_DIR ?= /your_xdc_install
OSAL_INSTALL_DIR ?= /your_osal_install
XDC_SOURCES ?= $(OSAL_INSTALL_DIR)/sources

PKGPATH := $(OSAL_INSTALL_DIR)/packages:$(XDC_INSTALL_DIR)/packages
export PKGPATH

export PATH

export XDC_INSTALL_DIR

help:
	@$(ECHO) "make all              # build all libraries"
	@$(ECHO) "make clean            # clean everything"


all: build/lib/osal.av5T
all: cstubs/lib/cstubs.av5T
all: build/lib/osal.a86U
all: cstubs/lib/cstubs.a86U

clean::
	$(MAKE) -C build clean
	$(MAKE) -C cstubs clean

# Linux86
build/lib/osal.a86U cstubs/lib/cstubs.a86U: T=Linux86
build/lib/osal.a86U cstubs/lib/cstubs.a86U: S=86U
build/lib/osal.a86U cstubs/lib/cstubs.a86U: STD=gnu/targets/std.h
build/lib/osal.a86U cstubs/lib/cstubs.a86U: CC=$(Linux86.CROSS_COMPILE)
build/lib/osal.a86U cstubs/lib/cstubs.a86U: package/.config

# GCArmv5T
build/lib/osal.av5T cstubs/lib/cstubs.av5T: T=GCArmv5T
build/lib/osal.av5T cstubs/lib/cstubs.av5T: S=v5T
build/lib/osal.av5T cstubs/lib/cstubs.av5T: STD=gnu/targets/arm/std.h
build/lib/osal.av5T cstubs/lib/cstubs.av5T: CC=$(GCArmv5T.CROSS_COMPILE)
build/lib/osal.av5T cstubs/lib/cstubs.av5T: package/.config


build/lib/osal.a%:
	$(MAKE) -C build \
            CROSS_COMPILE=$(CC) XDC_TARGET=$(T) XDC_TYPES=$(STD) SUFFIX=$(S) \
            XDCSOURCES=$(XDC_SOURCES) \
	    LINUXOSAL=$(OSAL_INSTALL_DIR)/packages \
            PRECONFIG=$(OSAL_INSTALL_DIR)/packages/linuxdist/preconfig/production

cstubs/lib/cstubs.a%:
	$(MAKE) -C cstubs \
            CROSS_COMPILE=$(CC) XDC_TARGET=$(T) XDC_TYPES=$(STD) SUFFIX=$(S) \
            XDCSOURCES=$(XDC_SOURCES) \
	    LINUXOSAL=$(OSAL_INSTALL_DIR)/packages \
	    CSTUBSSOURCES=$(OSAL_INSTALL_DIR)/packages/cstubs/posix


.executables: package/.examples

package/.examples: example/bin/ClientApp.x86U
package/.examples: example/bin/ClientApp.xv5T

package/.examples:
	-$(RM) $@
	$(TOUCH) $@

example/bin/ClientApp.x86U: T=Linux86
example/bin/ClientApp.x86U: S=86U
example/bin/ClientApp.x86U: STD=gnu/targets/std.h
example/bin/ClientApp.x86U: CC=$(Linux86.CROSS_COMPILE)

example/bin/ClientApp.xv5T: T=GCArmv5T
example/bin/ClientApp.xv5T: S=v5T
example/bin/ClientApp.xv5T: STD=gnu/targets/arm/std.h
example/bin/ClientApp.xv5T: CC=$(GCArmv5T.CROSS_COMPILE)

example/bin/ClientApp.x%:
	$(MAKE) -C example \
            CROSS_COMPILE=$(CC) XDC_TARGET=$(T) XDC_TYPES=$(STD) SUFFIX=$(S) \
            XDCSOURCES=$(XDC_SOURCES) \
            LINUXOSAL=$(OSAL_INSTALL_DIR) \
            PRECONFIG=$(OSAL_INSTALL_DIR)/packages/linuxdist/preconfig/production \
            OSAL_BASE=../..

clean::
	$(MAKE) -C example clean
#
#  @(#) linuxdist; 1, 0, 0,1; 5-20-2013 14:38:49; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

#

