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
#  ======== ti.sdo.ce.examples.apps.rtcfg.osal/makefile ========
#

#
# EXAMPLES_ROOTDIR should be set to the examples directory under your
# CE_INSTALL_DIR.
#
EXAMPLES_ROOTDIR ?= $(CURDIR)/../../../../../../..

#
#  Include xdcpaths.mak if it exists. This file defines package paths and
#  build rules.  If xdcpaths.mak does not exist the variables must be set on
#  the command line.
#
-include $(EXAMPLES_ROOTDIR)/xdcpaths.mak


# define the osal install directory
OSAL_INSTALL_DIR ?= <____your_OSAL_install_directory____>

CE_APPS_DIR ?= $(EXAMPLES_ROOTDIR)/ti/sdo/ce/examples/apps

# define the tool chain
#export CROSS_COMPILE = /db/toolsrc/library/vendors2005/opensource/gcc/4.1.0/Linux/gcc-4.1.0-glibc-2.3.6/i686-unknown-linux-gnu/bin/
#export CROSS_COMPILE = $(CGTOOLS_LINUX86)/bin/
CGTOOLS_LINUX86 ?= <__your_CGTOOLS_LINUX86__>
CC_LINUX86 ?= <__your_CC_LINUX86__>
AR_LINUX86 ?= $(subst gcc,ar,$(CC_LINUX86))

#export CROSS_COMPILE = $(CGTOOLS_V5T)/bin/arm-none-linux-gnueabi-
export CC = $(CGTOOLS_LINUX86)/$(CC_LINUX86)
export AR = $(CGTOOLS_LINUX86)/$(AR_LINUX86)
export XDC_TARGET = Linux86
export XDC_TYPES = gnu/targets/std.h

export SUFFIX = 86U

#
#  ======== standard macros ========
#
ECHO    ?= echo
MKDIR   ?= mkdir
RM      ?= rm -f
RMDIR   ?= rm -rf


#
#  ======== make commands ========
#
.PHONY: osal_dev osal_rel

all: osal_dev
all: osal_rel

osal_dev:
	@$(ECHO) "#"
	@$(ECHO) "# Making $@ ...OSAL_INSTALL_DIR=$(OSAL_INSTALL_DIR)"
	@$(MAKE) PROFILE=$@ .outdir
	@$(MAKE) -C $@ \
            -f ../cstubs.mk \
            OSAL_INSTALL_DIR=$(OSAL_INSTALL_DIR) CFLAGS=-g
	@$(MAKE) -C $@ \
            -f ../linuxdist.mk \
            OSAL_INSTALL_DIR=$(OSAL_INSTALL_DIR) \
            CFLAGS=-g

osal_rel:
	@$(ECHO) "#"
	@$(ECHO) "# Making $@ ..."
	@$(MAKE) PROFILE=$@ .outdir
	@$(MAKE) -C $@ \
            -f ../cstubs.mk \
            OSAL_INSTALL_DIR=$(OSAL_INSTALL_DIR) CFLAGS=-O2
	@$(MAKE) -C $@ \
            -f ../linuxdist.mk \
            OSAL_INSTALL_DIR=$(OSAL_INSTALL_DIR) \
            CFLAGS=-O2


#
#  ======== clean ========
#
clean::
	$(RMDIR) osal_dev osal_rel
