/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== simple.c ========
 */

#include <stdio.h>

#include <xdc/std.h>

#include <xdc/runtime/knl/Thread.h>
#include <xdc/runtime/knl/SemThread.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <RandNum.h>

#include <linuxdist/cstubs/LoggerBuf.h>

#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>

SemThread_Handle readDone;
SemThread_Handle writeDone;

const LoggerBuf_Config LOGGERBUF_CONFIG = {
    64, LoggerBuf_BufType_CIRCULAR, TRUE
};

/*
 *  ======== main ========
 */
extern Int main(Int argc, String argv[])
{
    Thread_start(NULL);
    return (smain(argc, argv));
}

/*
 *  ======== smain ========
 */
extern Int smain(int argc, char *argv[])
{
    SemThread_Params spars;
    Int size;
    key_t key;
    Int shmid;
    Int *buf;
    Int i, j;

    printf("smain-> Test started.\n");

    Diags_setMask("%+EX");

    /* Create with semaphores with count 0 */
    SemThread_Params_init(&spars);
    spars.instance->name = "mysem";

    writeDone = SemThread_create(0, &spars, NULL);
    readDone = SemThread_create(0, &spars, NULL);

    for (i = 0; i < 5; i++) {
        SemThread_post(writeDone, NULL);
    }

    /* Set the semaphore count back to 0 */
    for (i = 5; i > 0; i--) {
        SemThread_pend(writeDone, SemThread_FOREVER, NULL);
    }

    printf("smain-> SemThread_getCount test passed.\n");

    printf("smain-> Using RandNum\n");

    Diags_setMask(RANDNUM_MODNAME"+EX1234567");
    randNumInit();
    randNum();

// For Todd
#if 0
    /* generate Log events */
    Diags_setMask("%+F");
    for (i = 0; i < 10; i++) {
        Log_info1("hello world %d", i);
    }

    /* dump logger */
    key = ftok("/tmp", 'R');

    /*
     * Create the segment.
     */
    size = 1024;
    if ((shmid = shmget(key, size, IPC_CREAT | 0666)) < 0) {
        // TODO
        printf("Failed to shmget error = %s\n", strerror(errno));
        exit(1);
    }

    /*
     * Now we attach the segment to our data space.
     */
    if ((buf = shmat(shmid, NULL, 0)) == (Int *)-1) {
        // TODO
        exit(1);
    }


    printf("curEntry  = %d\n", *buf);
    buf++;
    printf("endEntry  = %d\n", *buf);
    buf++;
    printf("readEntry = %d\n", *buf);
    buf++;
    printf("serial    = %d\n", *buf);
    buf++;

    for (i = 0; i < (1024/32) - 4; i++) {
        printf("(0x%x) ", (UInt)buf);
        for (j = 0; j < 8; j++) {
            printf("0x%x ", *buf);
            buf++;
        }
        printf("\n");
    }
#endif
//end for Todd

    return (0);
}
/*
 *  @(#) linuxdist; 1, 0, 0,1; 5-20-2013 14:38:49; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

