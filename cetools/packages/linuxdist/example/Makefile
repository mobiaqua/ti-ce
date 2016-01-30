#
#  Copyright 2013 by Texas Instruments Incorporated.
#  
#

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

#
#  ======== linuxdist/example/Makefile ========
#

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard bin))
    $(shell mkdir -p bin)
endif
endif

OSAL_INSTALL_DIR ?= ../../..
XDCSOURCES ?= $(OSAL_INSTALL_DIR)/sources
LINUXOSAL ?= $(OSAL_INSTALL_DIR)/packages
OSAL_BASE ?= $(OSAL_INSTALL_DIR)/packages
SOURCES ?= $(OSAL_BASE)/linuxdist/example

XDC_TARGET ?= GCArmv5T
XDC_TYPES ?= gnu/targets/arm/std.h
SUFFIX ?= v5T

SRCDIRS = $(XDCSOURCES) $(LINUXOSAL)

OSAL_LIBS = \
	$(OSAL_BASE)/linuxdist/build/lib/osal.a$(SUFFIX) \
	$(OSAL_BASE)/linuxdist/cstubs/lib/cstubs.a$(SUFFIX)
STDLIBS = -lpthread -lrt -lstdc++

CC = $(CROSS_COMPILE)gcc
CPPFLAGS = -g -Wall -Dxdc_target_name__=$(XDC_TARGET) -Dxdc_target_types__=$(XDC_TYPES) -I. $(addprefix -I,$(SRCDIRS))

OUTPUT_OPTION = -o bin/$@

APP.srcs = 		\
	ClientApp.c	\
	RandNum.c

VPATH = $(SOURCES)

all: bin/ClientApp.x$(SUFFIX)

bin/ClientApp.x$(SUFFIX): $(patsubst %.c,%.o,$(APP.srcs))
	@echo "#"
	@echo "# Making $@ ..."
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ $(addprefix bin/,$^) \
            $(OSAL_LIBS) $(STDLIBS)


#
#  ======== clean ========
#
clean::
	rm -f bin/*
#
#  @(#) linuxdist; 1, 0, 0,1; 5-20-2013 14:38:49; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

#

