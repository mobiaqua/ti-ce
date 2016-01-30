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
#  ======== linuxdist.preconfig.development/Makefile ========
#

#
#  ======== define all the repositories ========
#
OSAL = $(CURDIR)/../../../

XSCMD = $(XDCROOT)/xs

Linux86.ROOTDIR ?= < _your_Linux86_rootdir_>
GCArmv5T.ROOTDIR ?= <_your_GCArmv5T_rootdir_>

all:
	@echo "#"
	@echo "# Making preConfig [config: development]..."
	$(XSCMD) --xdcpath="$(OSAL)" xdc.tools.configuro \
	    -t gnu.targets.Linux86 -c $(Linux86.ROOTDIR) \
	    -o configPkg_86U -r debug preConfig.cfg
	rm -f preConfig_p86U.c
	cp  configPkg_86U/package/cfg/preConfig_p86U.c .

	$(XSCMD) --xdcpath="$(OSAL)" xdc.tools.configuro \
	    -t gnu.targets.arm.GCArmv5T -c $(GCArmv5T.ROOTDIR) \
	    -o configPkg_v5T -b ../config.bld \
	    -r debug preConfig.cfg
	rm -f preConfig_pv5T.c
	cp  configPkg_v5T/package/cfg/preConfig_pv5T.c .

clean::
	rm -rf configPkg_86U configPkg_v5T
	rm -f preConfig_*.c
#
#  @(#) linuxdist; 1, 0, 0,1; 5-20-2013 14:38:49; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

#

