#
#  Copyright (c) 2013, Texas Instruments Incorporated
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

ifndef QCONFIG
QCONFIG=qconfig.mk
endif
include $(QCONFIG)

NAME = cstubs

define PINFO
PINFO DESCRIPTION=OSAL qnxdist cstubs
endef

# don't install the binaries, they are copied in base makefile
INSTALLDIR = /dev/null

# source path
EXTRA_SRCVPATH += $(PROJECT_ROOT)/..
EXTRA_SRCVPATH += $(CSTUBSSOURCES)

EXCLUDE_OBJS = LoggerBuf.o

# include path (needed to remove SRCVPATH from INCVPATH to avoid confusion wrt
# xdc/runtime/knl/Semaphore.h vs. QNX's own semaphore.h)
INCVPATH = $(USE_ROOT_INCLUDE)
EXTRA_INCVPATH = $(subst +, ,$(PKGPATH))
EXTRA_INCVPATH += $(XDC_INSTALL_DIR)/packages
EXTRA_INCVPATH += $(OSALSOURCES)/packages

include $(MKFILES_ROOT)/qtargets.mk

LDFLAGS += -M
CCFLAGS += -Dxdc_target_name__=Qnx -Dxdc_target_types__=qnx/targets/arm/std.h
