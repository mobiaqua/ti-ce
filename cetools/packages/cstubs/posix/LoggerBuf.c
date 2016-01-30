/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 * Copyright (c) 2013 Texas Instruments Incorporated - http://www.ti.com
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 *
 *   Neither the name of Texas Instruments Incorporated nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== LoggerBuf.c ========
 */
#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/knl/GateProcess.h>

#include <stdlib.h>
#include <string.h>

#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>

#include <xdcruntime/cstubs/ILoggerFlex.h>
#include <ti/sdo/xdcruntime/linux/TimestampPosix.h>

#include "LoggerBuf.h"

#define LoggerBuf_FULL      -1
#define LoggerBuf_WRAP      0
#define LoggerBuf_NEXT      1
#define LOCKKEY             0x2222

typedef struct LoggerBuf_Entry {
    Types_Timestamp64 tstamp;
    Bits32 serial;
    Types_Event evt;
    IArg arg1;
    IArg arg2;
    IArg arg3;
    IArg arg4;
}LoggerBuf_Entry;

typedef struct LoggerBuf_Attrs {
    Int curEntry;
    Int endEntry;
    Int readEntry;
    Bits32 serial;
    Char buf;
}LoggerBuf_Attrs;

typedef struct Module_State {
    LoggerBuf_Attrs *attrs;
    Int8 advance;
}Module_State;

static Module_State LoggerBuf_module;
static GateProcess_Handle LoggerBuf_gate;

/*
 *  ======== ILoggerFlex_init ========
 */
Void ILoggerFlex_init(Void)
{
    IArg gateKey;
    Int size;
    key_t key;
    Int shmid;
    Ptr buf;
    GateProcess_Params gpars;

    key = ftok("/tmp", 'R');

    /*
     * Create the segment.
     */
    size = LOGGERBUF_CONFIG.numEntries * sizeof(LoggerBuf_Entry) + 3 * sizeof(LoggerBuf_Entry *);
    size = 1024;
    if ((shmid = shmget(key, size, IPC_CREAT | 0666)) < 0) {
        // TODO
        System_printf("Failed to shmget error = %s\n", strerror(errno));
        exit(1);
    }

    /*
     * Now we attach the segment to our data space.
     */
    if ((buf = shmat(shmid, NULL, 0)) == (Char *)-1) {
        // TODO
        exit(1);
    }

    LoggerBuf_module.attrs = buf;
    System_printf("LoggerBuf_Module_startup: attrs = 0x%x\n", LoggerBuf_module.attrs);

    GateProcess_Params_init(&gpars);
    gpars.key = LOCKKEY;
    LoggerBuf_gate = GateProcess_create(&gpars, NULL);

    if (LOGGERBUF_CONFIG.master == TRUE) {
        // TODO process gate...
        gateKey = GateProcess_enter(LoggerBuf_gate);
        memset(&(LoggerBuf_module.attrs->buf), 0, LOGGERBUF_CONFIG.numEntries * sizeof (LoggerBuf_Entry));

        LoggerBuf_module.attrs->endEntry = LOGGERBUF_CONFIG.numEntries - 1;
        LoggerBuf_module.attrs->serial = 1;
        LoggerBuf_module.attrs->curEntry  = 0;
        LoggerBuf_module.attrs->readEntry = 0;
        GateProcess_leave(LoggerBuf_gate, gateKey);
    }

    return;
}

/*
 *  ======== ILoggerFlex_exit ========
 */
Void ILoggerFlex_exit(Void)
{
  /* TODO */
}

/*
 *  ======== write0 =========
 */
Void ILoggerFlex_write0(Log_Event evt, Types_ModuleId mid)
{
    ILoggerFlex_write4(evt, mid, 0, 0, 0, 0);
}

/*
 *  ======== write1 =========
 */
Void ILoggerFlex_write1(Log_Event evt, Types_ModuleId mid, IArg a1)
{
    ILoggerFlex_write4(evt, mid, a1, 0, 0, 0);
}

/*
 *  ======== write2 =========
 */
Void ILoggerFlex_write2(Log_Event evt, Types_ModuleId mid, IArg a1, IArg a2)
{
    ILoggerFlex_write4(evt, mid, a1, a2, 0, 0);
}

/*
 *  ======== write4 =========
 */
Void ILoggerFlex_write4(Log_Event evt, Types_ModuleId mid, IArg a1, IArg a2,
                      IArg a3, IArg a4)
{
    IArg key;
    Int adv;
    Int32 ser;
    LoggerBuf_Entry *e;

    //key = GateProcess_enter(LoggerBuf_gate);

    /*
     * Record new serial number even if the buffer is FULL.  We do this
     * because a reader (decoder) of the buffer needs to know if events
     * have been missed, and the buffer might become un-FULL at some
     * later time.
     */
    ser = LoggerBuf_module.attrs->serial;
    LoggerBuf_module.attrs->serial += 2;

    adv = LoggerBuf_module.advance;
    if (adv == LoggerBuf_FULL) {
        //goto leave;
        return;
    }

    e = (LoggerBuf_Entry  *)(&(LoggerBuf_module.attrs->buf) + LoggerBuf_module.attrs->curEntry * sizeof(LoggerBuf_Entry));
    if (LoggerBuf_module.attrs->curEntry == LoggerBuf_module.attrs->endEntry) {

        if (adv == LoggerBuf_WRAP) {
            LoggerBuf_module.attrs->curEntry = 0;
        }
        else {
            LoggerBuf_module.advance = LoggerBuf_FULL;
        }
    }
    else {
        LoggerBuf_module.attrs->curEntry++;
    }

    TimestampPosix_get64(&e->tstamp);

    e->serial = ser;
    e->evt = Types_makeEvent(Log_getEventId(evt), mid);
    e->arg1 = a1;
    e->arg2 = a2;
    e->arg3 = a3;
    e->arg4 = a4;
    System_printf("LoggerBuf_write4: ser = %d, curEnty = %d, readEntry = %d arg1=%d\n", ser, LoggerBuf_module.attrs->curEntry, LoggerBuf_module.attrs->readEntry, a2);

//leave:
    //GateProcess_leave(LoggerBuf_gate, key);
}

/*
 *  ======== write8 =========
 *
 *  Odd serial numbers indicate a new record, even serial numbers indicate
 *  an "extension" to the previous record.  0 is a sentinal for no record,
 *  but only if it doesn't follow a -1 (0xffffffff).  If a serial number
 *  of 0 follows a serial number of 0xffffffff, it's an extension, otherwise
 *  it's a "no record".
 */
Void ILoggerFlex_write8(Log_Event evt,
                      Types_ModuleId mid, IArg a1, IArg a2, IArg a3, IArg a4,
                      IArg a5, IArg a6, IArg a7, IArg a8)
{
    /* part1 */

    IArg key;
    Int adv;
    Int32 ser;
    LoggerBuf_Entry *e;

    //key = GateProcess_enter(LoggerBuf_gate);

    /*
     * Record new serial number even if the buffer is FULL.  We do this
     * because the buffer might become un-FULL at some later time, and
     * a reader (decoder) of the buffer needs to know if events have
     * been missed.
     */
    ser = LoggerBuf_module.attrs->serial;
    LoggerBuf_module.attrs->serial += 2;

    adv = LoggerBuf_module.advance;
    if (adv == LoggerBuf_FULL) {
        //goto leave;
        return;
    }

    e = (LoggerBuf_Entry *)(&(LoggerBuf_module.attrs->buf) + LoggerBuf_module.attrs->curEntry * sizeof(LoggerBuf_Entry));
    if (LoggerBuf_module.attrs->curEntry == LoggerBuf_module.attrs->endEntry) {
        if (adv == LoggerBuf_WRAP) {
            LoggerBuf_module.attrs->curEntry = 0;
        }
        else {
            LoggerBuf_module.advance = LoggerBuf_FULL;
        }
    }
    else {
        LoggerBuf_module.attrs->curEntry++;
    }

    TimestampPosix_get64(&e->tstamp);

    e->serial = ser;
    e->evt = Types_makeEvent(Log_getEventId(evt), mid);
    e->arg1 = a1;
    e->arg2 = a2;
    e->arg3 = a3;
    e->arg4 = a4;

    /* part 2 */

    /*
     * We intentionally don't check for a "new" FULL condition here
     * since we want to write only the "extension" record, so a decoder
     * can know that this is an incomplete record and therefore throw
     * it away.  By not checking for FULL here, we end up just overwriting
     * the "starter" record (that was written above) of a two-entry record
     * with the "extension" record.
     */

    e = (LoggerBuf_Entry *)(&(LoggerBuf_module.attrs->buf) + LoggerBuf_module.attrs->curEntry * sizeof(LoggerBuf_Entry));
    if (LoggerBuf_module.attrs->curEntry == LoggerBuf_module.attrs->endEntry) {
        if (adv == LoggerBuf_WRAP) {
            LoggerBuf_module.attrs->curEntry = 0;
        }
        else {
            LoggerBuf_module.advance = LoggerBuf_FULL;
        }
    }
    else {
        LoggerBuf_module.attrs->curEntry++;
    }

    e->serial = ser + 1;
    e->evt = ~0;
    e->arg1 = a5;
    e->arg2 = a6;
    e->arg3 = a7;
    e->arg4 = a8;

//leave:
    //GateProcess_leave(LoggerBuf_gate, key);
}

/*
 *  ======== LoggerBuf_getNextEntry ========
 *  "atomically" read and clear the next entry in the log
 *
 *  Returns:
 *      0   - no entry in the log
 *      1,2 - read one or two complete entries (write4, write8)
 *      -1  - read one but there may be another
 *
 *  Below are some notes on the implementation.
 *
 *  Pointers:
 *  - cureEntry points to the next entry to write
 *  - endEntry points to the last entry (not past it)
 *  - readEntry points to the entry that will be read on the next call to
 *    getNextEntry.
 *
 *  Edge cases:
 *  - An extension record can be orphaned (the base can be missing)
 *  - A base record cannot be missing its extension (the records are written in
 *    order, so the base is always overwritten first)
 *  - The serial number can wrap from 0xFFFFFFFF to 0x0.
 *  - If a base record is at the end of the buffer, its extension may be at
 *    the beginning.
 */
Int LoggerBuf_getNextEntry(Ptr addr, Log_EventRec *evtRec)
{
    Int entIndex;
    Int nextEntIndex = 0;
    LoggerBuf_Entry *ent;
    LoggerBuf_Entry *nextEnt;
    Int nEntries;
    Bits32 serA;
    IArg key;
    LoggerBuf_Attrs *attrs = LoggerBuf_module.attrs;

    nEntries = 0;
    System_printf("LoggerBuf_getNextEntry: curEnty = %d, readEntry = %d\n", LoggerBuf_module.attrs->curEntry, LoggerBuf_module.attrs->readEntry);

    //key = GateProcess_enter(LoggerBuf_gate);

    entIndex = attrs->readEntry;
    ent = (LoggerBuf_Entry *)(&(attrs->buf) + entIndex * sizeof(LoggerBuf_Entry));

    serA = ent->serial;
    if ((serA & 1) != 0) {
        /* serial numbers are odd and start at 1 */
        nEntries++;

        /* reduce two-spaced serial numbers to consecutive ints */
        evtRec->serial = (serA + 1) / 2;
        evtRec->evt = ent->evt;
        evtRec->tstamp = ent->tstamp;
        evtRec->arg[0] = ent->arg1;
        evtRec->arg[1] = ent->arg2;
        evtRec->arg[2] = ent->arg3;
        evtRec->arg[3] = ent->arg4;

        memset(ent, 0, sizeof (LoggerBuf_Entry));

        /* get pointer to next entry */
        if (entIndex == attrs->endEntry) {
            nextEntIndex = 0;
        }
        else {
            nextEntIndex = entIndex + 1;
        }

        nextEnt = (LoggerBuf_Entry *)(&(attrs->buf) + nextEntIndex * sizeof(LoggerBuf_Entry));

        if (nextEnt->serial == (serA + 1)) {

            /* continuation record */
            nEntries++;

            evtRec->arg[4] = nextEnt->arg1;
            evtRec->arg[5] = nextEnt->arg2;
            evtRec->arg[6] = nextEnt->arg3;
            evtRec->arg[7] = nextEnt->arg4;

            memset(nextEnt, 0, sizeof (LoggerBuf_Entry));

            /* get pointer to next entry */
            if (nextEntIndex == attrs->endEntry) {
                nextEntIndex = 0;
            }
            else {
                nextEntIndex = entIndex + 1;
            }
            nextEnt = (LoggerBuf_Entry *)(&(attrs->buf) + nextEntIndex * sizeof(LoggerBuf_Entry));
        }
        else {
            evtRec->arg[4] = 0;
            evtRec->arg[5] = 0;
            evtRec->arg[6] = 0;
            evtRec->arg[7] = 0;
        }
    }
    else {
        /*
         * readEntry has an even sequence number, so it's either an
         * incomplete record, or it's empty.  If it's incomplete, we
         * need to toss it by advancing readEntry, but if it's empty
         * we want to do nothing.  We need to be able to distinguish
         * between an incomplete "extension" record that has a serial
         * number of 0 (since it's base record was 0xffffffff) and
         * an empty record, and we do this by checking the evt field,
         * which gets set to ~0 for extension records in write8.
         */
        if ((ent->evt == 0) && (ent->serial == 0)) {
            /* empty record, don't advance read pointer */
            nextEntIndex = attrs->readEntry;
            nextEnt = (LoggerBuf_Entry *)(&(attrs->buf) + nextEntIndex * sizeof(LoggerBuf_Entry));
        }
        else if (ent->evt == ~0) {
            /* extension record */
            /* return -1 to indicate there may be more to go */
            nEntries = -1;

            if (entIndex == attrs->endEntry) {
                nextEntIndex = 0;
            }
            else {
                nextEntIndex = entIndex + 1;
            }
            nextEnt = (LoggerBuf_Entry *)(&(attrs->buf) + nextEntIndex * sizeof(LoggerBuf_Entry));
        }
        else {
            /* return -1 to indicate there may be more to go */
            nEntries = -1;

            /* bogus extension record, clear & advance read pointer */
            memset(ent, 0, sizeof (LoggerBuf_Entry));

            if (entIndex == attrs->endEntry) {
                nextEnt = 0;
            }
            else {
                nextEntIndex = entIndex + 1;
            }
            nextEnt = (LoggerBuf_Entry *)(&(attrs->buf) + nextEntIndex * sizeof(LoggerBuf_Entry));
        }
    }

    attrs->readEntry = nextEntIndex;

    //GateProcess_leave(LoggerBuf_gate, key);

    return (nEntries);
}
/*
 *  @(#) cstubs.posix; 1, 0, 0,; 5-20-2013 12:11:34; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

