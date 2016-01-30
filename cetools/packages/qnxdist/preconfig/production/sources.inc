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

CSRCS =                                                 \
        xdc/runtime/Assert.c                            \
        xdc/runtime/Core-label.c                        \
        xdc/runtime/Core-mem.c                          \
        xdc/runtime/Core-params.c                       \
        xdc/runtime/Diags.c                             \
        xdc/runtime/Error.c                             \
        xdc/runtime/Gate.c                              \
        xdc/runtime/GateNull.c                          \
        xdc/runtime/HeapStd.c                           \
        xdc/runtime/Log.c                               \
        xdc/runtime/LoggerBuf.c                         \
        xdc/runtime/LoggerCallback.c                    \
        xdc/runtime/LoggerSys.c                         \
        xdc/runtime/Memory.c                            \
        xdc/runtime/Registry.c                          \
        xdc/runtime/Rta.c                               \
        xdc/runtime/Startup.c                           \
        xdc/runtime/SysCallback.c                       \
        xdc/runtime/SysMin.c                            \
        xdc/runtime/SysStd.c                            \
        xdc/runtime/System.c                            \
        xdc/runtime/Text.c                              \
        xdc/runtime/Timestamp.c                         \
        xdc/runtime/TimestampNull.c                     \
        xdc/runtime/TimestampStd.c                      \
        xdc/runtime/knl/Cache.c                         \
        xdc/runtime/knl/CacheSupportNull.c              \
        xdc/runtime/knl/GateH.c                         \
        xdc/runtime/knl/GateProcess.c                   \
        xdc/runtime/knl/GateProcessSupportNull.c        \
        xdc/runtime/knl/GateThread.c                    \
        xdc/runtime/knl/GateThreadSupportNull.c         \
        xdc/runtime/knl/Semaphore.c                     \
        xdc/runtime/knl/SemProcess.c                    \
        xdc/runtime/knl/SemThread.c                     \
        xdc/runtime/knl/Sync.c                          \
        xdc/runtime/knl/SyncGeneric.c                   \
        xdc/runtime/knl/SyncNull.c                      \
        xdc/runtime/knl/SyncSemThread.c                 \
        xdc/runtime/knl/Thread.c                        \
        ti/sdo/xdcruntime/linux/GateProcessSupport.c    \
        ti/sdo/xdcruntime/linux/GateThreadSupport.c     \
        ti/sdo/xdcruntime/linux/SemProcessSupport.c     \
        ti/sdo/xdcruntime/linux/SemThreadSupport.c      \
        ti/sdo/xdcruntime/linux/ThreadSupport.c         \
        ti/sdo/xdcruntime/linux/TimestampPosix.c

CPPSRCS = xdc/runtime/xdc_init.cpp
