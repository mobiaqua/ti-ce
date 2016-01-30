/*
 *  Copyright 2013 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z44
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sdo/xdcruntime/linux/GateProcessSupport.h>
#include <ti/sdo/xdcruntime/linux/GateThreadSupport.h>
#include <ti/sdo/xdcruntime/linux/SemProcessSupport.h>
#include <ti/sdo/xdcruntime/linux/SemThreadSupport.h>
#include <ti/sdo/xdcruntime/linux/ThreadSupport.h>
#include <ti/sdo/xdcruntime/linux/TimestampPosix.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/GateNull.h>
#include <xdc/runtime/HeapStd.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerCallback.h>
#include <xdc/runtime/LoggerSys.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Rta.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysStd.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/knl/GateH.h>
#include <xdc/runtime/knl/GateProcess.h>
#include <xdc/runtime/knl/GateThread.h>
#include <xdc/runtime/knl/SemProcess.h>
#include <xdc/runtime/knl/SemThread.h>
#include <xdc/runtime/knl/Semaphore.h>
#include <xdc/runtime/knl/Sync.h>
#include <xdc/runtime/knl/SyncGeneric.h>
#include <xdc/runtime/knl/SyncNull.h>
#include <xdc/runtime/knl/SyncSemThread.h>
#include <xdc/runtime/knl/Thread.h>


/*
 * ======== ti.sdo.xdcruntime.linux.GateProcessSupport INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_xdcruntime_linux_GateProcessSupport_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sdo_xdcruntime_linux_GateProcessSupport_Module__;

/* Module__root__V */
extern ti_sdo_xdcruntime_linux_GateProcessSupport_Module__ ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V;

/* Object__ */
typedef struct ti_sdo_xdcruntime_linux_GateProcessSupport_Object__ {
    const ti_sdo_xdcruntime_linux_GateProcessSupport_Fxns__* __fxns;
    xdc_Int id;
    xdc_Int count;
    xdc_Int owner;
} ti_sdo_xdcruntime_linux_GateProcessSupport_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_xdcruntime_linux_GateProcessSupport_Object__ obj;
} ti_sdo_xdcruntime_linux_GateProcessSupport_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_xdcruntime_linux_GateProcessSupport___VERS
    #define ti_sdo_xdcruntime_linux_GateProcessSupport___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_xdcruntime_linux_GateProcessSupport___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.xdcruntime.linux.GateThreadSupport INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_xdcruntime_linux_GateThreadSupport_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sdo_xdcruntime_linux_GateThreadSupport_Module__;

/* Module__root__V */
extern ti_sdo_xdcruntime_linux_GateThreadSupport_Module__ ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V;

/* Object__ */
typedef struct ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ {
    const ti_sdo_xdcruntime_linux_GateThreadSupport_Fxns__* __fxns;
    xdc_Void* gate;
} ti_sdo_xdcruntime_linux_GateThreadSupport_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ obj;
} ti_sdo_xdcruntime_linux_GateThreadSupport_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_xdcruntime_linux_GateThreadSupport___VERS
    #define ti_sdo_xdcruntime_linux_GateThreadSupport___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_xdcruntime_linux_GateThreadSupport___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.xdcruntime.linux.SemProcessSupport INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_xdcruntime_linux_SemProcessSupport_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sdo_xdcruntime_linux_SemProcessSupport_Module__;

/* Module__root__V */
extern ti_sdo_xdcruntime_linux_SemProcessSupport_Module__ ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V;

/* Object__ */
typedef struct ti_sdo_xdcruntime_linux_SemProcessSupport_Object__ {
    const ti_sdo_xdcruntime_linux_SemProcessSupport_Fxns__* __fxns;
    xdc_Int id;
    xdc_Int key;
    xdc_Int count;
    ti_sdo_xdcruntime_linux_SemProcessSupport_Mode mode;
} ti_sdo_xdcruntime_linux_SemProcessSupport_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_xdcruntime_linux_SemProcessSupport_Object__ obj;
} ti_sdo_xdcruntime_linux_SemProcessSupport_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_xdcruntime_linux_SemProcessSupport___VERS
    #define ti_sdo_xdcruntime_linux_SemProcessSupport___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_xdcruntime_linux_SemProcessSupport___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.xdcruntime.linux.SemThreadSupport INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_xdcruntime_linux_SemThreadSupport_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sdo_xdcruntime_linux_SemThreadSupport_Module__;

/* Module__root__V */
extern ti_sdo_xdcruntime_linux_SemThreadSupport_Module__ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V;

/* Object__ */
typedef struct ti_sdo_xdcruntime_linux_SemThreadSupport_Object__ {
    const ti_sdo_xdcruntime_linux_SemThreadSupport_Fxns__* __fxns;
    xdc_Void* sem;
    ti_sdo_xdcruntime_linux_SemThreadSupport_Mode mode;
} ti_sdo_xdcruntime_linux_SemThreadSupport_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_xdcruntime_linux_SemThreadSupport_Object__ obj;
} ti_sdo_xdcruntime_linux_SemThreadSupport_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_xdcruntime_linux_SemThreadSupport___VERS
    #define ti_sdo_xdcruntime_linux_SemThreadSupport___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_xdcruntime_linux_SemThreadSupport___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.xdcruntime.linux.ThreadSupport INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_xdcruntime_linux_ThreadSupport_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sdo_xdcruntime_linux_ThreadSupport_Module__;

/* Module__root__V */
extern ti_sdo_xdcruntime_linux_ThreadSupport_Module__ ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V;

/* Object__ */
typedef struct ti_sdo_xdcruntime_linux_ThreadSupport_Object__ {
    const ti_sdo_xdcruntime_linux_ThreadSupport_Fxns__* __fxns;
    xdc_Ptr tls;
    ti_sdo_xdcruntime_linux_ThreadSupport_RunFxn startFxn;
    xdc_IArg startFxnArg;
    xdc_SizeT stackSize;
    xdc_Void* tid;
    xdc_Ptr stackBase;
    xdc_Int staticOsPri;
} ti_sdo_xdcruntime_linux_ThreadSupport_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_xdcruntime_linux_ThreadSupport_Object__ obj;
} ti_sdo_xdcruntime_linux_ThreadSupport_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_xdcruntime_linux_ThreadSupport___VERS
    #define ti_sdo_xdcruntime_linux_ThreadSupport___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_xdcruntime_linux_ThreadSupport___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Defaults_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Defaults_Module__;

/* Module__root__V */
extern xdc_runtime_Defaults_Module__ xdc_runtime_Defaults_Module__root__V;


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Error_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Error_Module__;

/* Module__root__V */
extern xdc_runtime_Error_Module__ xdc_runtime_Error_Module__root__V;


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.GateNull INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_GateNull_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_GateNull_Module__;

/* Module__root__V */
extern xdc_runtime_GateNull_Module__ xdc_runtime_GateNull_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_GateNull_Object__ {
    const xdc_runtime_GateNull_Fxns__* __fxns;
} xdc_runtime_GateNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_GateNull_Object__ obj;
} xdc_runtime_GateNull_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_GateNull___VERS
    #define xdc_runtime_GateNull___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_GateNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.HeapStd INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_HeapStd_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_HeapStd_Module__;

/* Module__root__V */
extern xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_HeapStd_Object__ {
    const xdc_runtime_HeapStd_Fxns__* __fxns;
    xdc_runtime_Memory_Size remainSize;
    xdc_runtime_Memory_Size startSize;
} xdc_runtime_HeapStd_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_HeapStd_Object__ obj;
} xdc_runtime_HeapStd_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_HeapStd___VERS
    #define xdc_runtime_HeapStd___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_HeapStd___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerCallback INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerCallback_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerCallback_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerCallback_Module__ xdc_runtime_LoggerCallback_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerCallback_Object__ {
    const xdc_runtime_LoggerCallback_Fxns__* __fxns;
    xdc_Bool enabled;
    xdc_UArg context;
    xdc_UArg arg;
} xdc_runtime_LoggerCallback_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerCallback_Object__ obj;
} xdc_runtime_LoggerCallback_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerCallback___VERS
    #define xdc_runtime_LoggerCallback___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerCallback___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerSys INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerSys_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerSys_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerSys_Module__ xdc_runtime_LoggerSys_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerSys_Object__ {
    const xdc_runtime_LoggerSys_Fxns__* __fxns;
    xdc_Bool enabled;
} xdc_runtime_LoggerSys_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerSys_Object__ obj;
} xdc_runtime_LoggerSys_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerSys___VERS
    #define xdc_runtime_LoggerSys___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerSys___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerSys_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_GateThreadSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- xdc_runtime_HeapStd_Object */

/* Object */
typedef xdc_runtime_HeapStd_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Registry_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Registry_Module__;

/* Module__root__V */
extern xdc_runtime_Registry_Module__ xdc_runtime_Registry_Module__root__V;


/*
 * ======== xdc.runtime.Rta INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysStd INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_GateThreadSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.knl.GateH INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_GateH_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_GateH_Module__;

/* Module__root__V */
extern xdc_runtime_knl_GateH_Module__ xdc_runtime_knl_GateH_Module__root__V;


/*
 * ======== xdc.runtime.knl.GateH_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_GateH_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_GateH_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_GateH_Proxy_Module__ xdc_runtime_knl_GateH_Proxy_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_GateThread_Object__ {
    const xdc_runtime_knl_GateThread_Fxns__* __fxns;
    xdc_runtime_knl_GateThread_Proxy_Handle proxyHandle;
} xdc_runtime_knl_GateThread_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_GateThread_Object__ obj;
} xdc_runtime_knl_GateThread_Object2__;

/* Object */
typedef xdc_runtime_knl_GateThread_Object__ xdc_runtime_knl_GateH_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_GateH_Proxy_Object__ obj;
} xdc_runtime_knl_GateH_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_GateH_Proxy___VERS
    #define xdc_runtime_knl_GateH_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_GateH_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.GateProcess INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_GateProcess_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_GateProcess_Module__;

/* Module__root__V */
extern xdc_runtime_knl_GateProcess_Module__ xdc_runtime_knl_GateProcess_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_GateProcess_Object__ {
    const xdc_runtime_knl_GateProcess_Fxns__* __fxns;
    xdc_runtime_knl_GateProcess_Proxy_Handle proxyHandle;
} xdc_runtime_knl_GateProcess_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_GateProcess_Object__ obj;
} xdc_runtime_knl_GateProcess_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_GateProcess___VERS
    #define xdc_runtime_knl_GateProcess___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_GateProcess___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.GateProcess_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_GateProcess_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_GateProcess_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_GateProcess_Proxy_Module__ xdc_runtime_knl_GateProcess_Proxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_GateProcessSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_GateProcessSupport_Object__ xdc_runtime_knl_GateProcess_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_GateProcess_Proxy_Object__ obj;
} xdc_runtime_knl_GateProcess_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_GateProcess_Proxy___VERS
    #define xdc_runtime_knl_GateProcess_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_GateProcess_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.GateThread INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_GateThread_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_GateThread_Module__;

/* Module__root__V */
extern xdc_runtime_knl_GateThread_Module__ xdc_runtime_knl_GateThread_Module__root__V;

/* <-- xdc_runtime_knl_GateThread_Object */

/* __ParamsPtr */
#ifdef xdc_runtime_knl_GateThread___VERS
    #define xdc_runtime_knl_GateThread___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_GateThread___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.GateThread_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_GateThread_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_GateThread_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_GateThread_Proxy_Module__ xdc_runtime_knl_GateThread_Proxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_GateThreadSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ xdc_runtime_knl_GateThread_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_GateThread_Proxy_Object__ obj;
} xdc_runtime_knl_GateThread_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_GateThread_Proxy___VERS
    #define xdc_runtime_knl_GateThread_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_GateThread_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SemProcess INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SemProcess_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_SemProcess_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SemProcess_Module__ xdc_runtime_knl_SemProcess_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SemProcess_Object__ {
    const xdc_runtime_knl_SemProcess_Fxns__* __fxns;
    xdc_runtime_knl_SemProcess_Proxy_Handle proxyHandle;
} xdc_runtime_knl_SemProcess_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SemProcess_Object__ obj;
} xdc_runtime_knl_SemProcess_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SemProcess___VERS
    #define xdc_runtime_knl_SemProcess___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SemProcess___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SemProcess_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SemProcess_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_SemProcess_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SemProcess_Proxy_Module__ xdc_runtime_knl_SemProcess_Proxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_SemProcessSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_SemProcessSupport_Object__ xdc_runtime_knl_SemProcess_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SemProcess_Proxy_Object__ obj;
} xdc_runtime_knl_SemProcess_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SemProcess_Proxy___VERS
    #define xdc_runtime_knl_SemProcess_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SemProcess_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SemThread INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SemThread_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_SemThread_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SemThread_Module__ xdc_runtime_knl_SemThread_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SemThread_Object__ {
    const xdc_runtime_knl_SemThread_Fxns__* __fxns;
    xdc_runtime_knl_SemThread_Proxy_Handle proxyHandle;
} xdc_runtime_knl_SemThread_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SemThread_Object__ obj;
} xdc_runtime_knl_SemThread_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SemThread___VERS
    #define xdc_runtime_knl_SemThread___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SemThread___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SemThread_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SemThread_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_SemThread_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SemThread_Proxy_Module__ xdc_runtime_knl_SemThread_Proxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_SemThreadSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_SemThreadSupport_Object__ xdc_runtime_knl_SemThread_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SemThread_Proxy_Object__ obj;
} xdc_runtime_knl_SemThread_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SemThread_Proxy___VERS
    #define xdc_runtime_knl_SemThread_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SemThread_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Semaphore_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_Semaphore_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Semaphore_Module__ xdc_runtime_knl_Semaphore_Module__root__V;


/*
 * ======== xdc.runtime.knl.Semaphore_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Semaphore_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_Semaphore_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Semaphore_Proxy_Module__ xdc_runtime_knl_Semaphore_Proxy_Module__root__V;

/* <-- xdc_runtime_knl_SemThread_Object */

/* Object */
typedef xdc_runtime_knl_SemThread_Object__ xdc_runtime_knl_Semaphore_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_Semaphore_Proxy_Object__ obj;
} xdc_runtime_knl_Semaphore_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_Semaphore_Proxy___VERS
    #define xdc_runtime_knl_Semaphore_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_Semaphore_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Sync INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Sync_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_Sync_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Sync_Module__ xdc_runtime_knl_Sync_Module__root__V;


/*
 * ======== xdc.runtime.knl.SyncGeneric INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SyncGeneric_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_SyncGeneric_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SyncGeneric_Module__ xdc_runtime_knl_SyncGeneric_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SyncGeneric_Object__ {
    const xdc_runtime_knl_SyncGeneric_Fxns__* __fxns;
    xdc_runtime_knl_SyncGeneric_SignalFunc userSignal;
    xdc_UArg signalArg;
    xdc_runtime_knl_SyncGeneric_WaitFunc userWait;
    xdc_UArg waitArg;
    xdc_runtime_knl_SyncGeneric_QueryFunc userQuery;
} xdc_runtime_knl_SyncGeneric_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SyncGeneric_Object__ obj;
} xdc_runtime_knl_SyncGeneric_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SyncGeneric___VERS
    #define xdc_runtime_knl_SyncGeneric___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SyncGeneric___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SyncNull INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SyncNull_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_SyncNull_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SyncNull_Module__ xdc_runtime_knl_SyncNull_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SyncNull_Object__ {
    const xdc_runtime_knl_SyncNull_Fxns__* __fxns;
} xdc_runtime_knl_SyncNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SyncNull_Object__ obj;
} xdc_runtime_knl_SyncNull_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SyncNull___VERS
    #define xdc_runtime_knl_SyncNull___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SyncNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SyncSemThread INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SyncSemThread_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_SyncSemThread_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SyncSemThread_Module__ xdc_runtime_knl_SyncSemThread_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SyncSemThread_Object__ {
    const xdc_runtime_knl_SyncSemThread_Fxns__* __fxns;
    xdc_runtime_knl_SemThread_Handle semThread;
} xdc_runtime_knl_SyncSemThread_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SyncSemThread_Object__ obj;
} xdc_runtime_knl_SyncSemThread_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SyncSemThread___VERS
    #define xdc_runtime_knl_SyncSemThread___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SyncSemThread___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Sync_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Sync_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_Sync_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Sync_Proxy_Module__ xdc_runtime_knl_Sync_Proxy_Module__root__V;

/* <-- xdc_runtime_knl_SyncNull_Object */

/* Object */
typedef xdc_runtime_knl_SyncNull_Object__ xdc_runtime_knl_Sync_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_Sync_Proxy_Object__ obj;
} xdc_runtime_knl_Sync_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_Sync_Proxy___VERS
    #define xdc_runtime_knl_Sync_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_Sync_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Thread INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Thread_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_knl_Thread_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Thread_Module__ xdc_runtime_knl_Thread_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_Thread_Object__ {
    xdc_runtime_knl_Thread_Proxy_Handle proxyHandle;
    xdc_Ptr tls;
} xdc_runtime_knl_Thread_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_Thread_Object__ obj;
} xdc_runtime_knl_Thread_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_Thread___VERS
    #define xdc_runtime_knl_Thread___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_Thread___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Thread_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Thread_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_Thread_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Thread_Proxy_Module__ xdc_runtime_knl_Thread_Proxy_Module__root__V;

/* <-- ti_sdo_xdcruntime_linux_ThreadSupport_Object */

/* Object */
typedef ti_sdo_xdcruntime_linux_ThreadSupport_Object__ xdc_runtime_knl_Thread_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_Thread_Proxy_Object__ obj;
} xdc_runtime_knl_Thread_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_Thread_Proxy___VERS
    #define xdc_runtime_knl_Thread_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_Thread_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {(void*)&xdc_runtime_ITimestampClient_Interface__BASE__C};


/*
 * ======== xdc.runtime.GateNull INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.HeapStd INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.LoggerCallback INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.LoggerSys INHERITS ========
 */



/*
 * ======== xdc.runtime.SysStd INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */



/*
 * ======== xdc.runtime.knl.GateProcess INHERITS ========
 */



/*
 * ======== xdc.runtime.knl.GateThread INHERITS ========
 */



/*
 * ======== xdc.runtime.knl.SemProcess INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_knl_ISemaphore_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.knl.SemThread INHERITS ========
 */



/*
 * ======== xdc.runtime.knl.SyncGeneric INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_knl_ISync_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.knl.SyncNull INHERITS ========
 */



/*
 * ======== xdc.runtime.knl.SyncSemThread INHERITS ========
 */



/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix VTABLE ========
 */

/* Module__FXNS__C */
const ti_sdo_xdcruntime_linux_TimestampPosix_Fxns__ ti_sdo_xdcruntime_linux_TimestampPosix_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampProvider_Interface__BASE__C, /* base__ */
    &ti_sdo_xdcruntime_linux_TimestampPosix_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sdo_xdcruntime_linux_TimestampPosix_get32__E,
    ti_sdo_xdcruntime_linux_TimestampPosix_get64__E,
    ti_sdo_xdcruntime_linux_TimestampPosix_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.GateNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_GateNull_Fxns__ xdc_runtime_GateNull_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_GateNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_GateNull_query__E,
    xdc_runtime_GateNull_enter__E,
    xdc_runtime_GateNull_leave__E,
    {
        xdc_runtime_GateNull_Object__create__S,
        xdc_runtime_GateNull_Object__delete__S,
        xdc_runtime_GateNull_Handle__label__S,
        0x8008, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.HeapStd VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_HeapStd_Fxns__ xdc_runtime_HeapStd_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &xdc_runtime_HeapStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_HeapStd_alloc__E,
    xdc_runtime_HeapStd_free__E,
    xdc_runtime_HeapStd_isBlocking__E,
    xdc_runtime_HeapStd_getStats__E,
    {
        xdc_runtime_HeapStd_Object__create__S,
        xdc_runtime_HeapStd_Object__delete__S,
        xdc_runtime_HeapStd_Handle__label__S,
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerCallback VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_LoggerCallback_Fxns__ xdc_runtime_LoggerCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ILogger_Interface__BASE__C, /* base__ */
    &xdc_runtime_LoggerCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerCallback_enable__E,
    xdc_runtime_LoggerCallback_disable__E,
    xdc_runtime_LoggerCallback_write0__E,
    xdc_runtime_LoggerCallback_write1__E,
    xdc_runtime_LoggerCallback_write2__E,
    xdc_runtime_LoggerCallback_write4__E,
    xdc_runtime_LoggerCallback_write8__E,
    {
        xdc_runtime_LoggerCallback_Object__create__S,
        xdc_runtime_LoggerCallback_Object__delete__S,
        xdc_runtime_LoggerCallback_Handle__label__S,
        0x800a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerSys VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_LoggerSys_Fxns__ xdc_runtime_LoggerSys_Module__FXNS__C = {
    (void*)&xdc_runtime_ILogger_Interface__BASE__C, /* base__ */
    &xdc_runtime_LoggerSys_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerSys_enable__E,
    xdc_runtime_LoggerSys_disable__E,
    xdc_runtime_LoggerSys_write0__E,
    xdc_runtime_LoggerSys_write1__E,
    xdc_runtime_LoggerSys_write2__E,
    xdc_runtime_LoggerSys_write4__E,
    xdc_runtime_LoggerSys_write8__E,
    {
        xdc_runtime_LoggerSys_Object__create__S,
        xdc_runtime_LoggerSys_Object__delete__S,
        xdc_runtime_LoggerSys_Handle__label__S,
        0x800b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysStd VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysStd_Fxns__ xdc_runtime_SysStd_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysStd_abort__E,
    xdc_runtime_SysStd_exit__E,
    xdc_runtime_SysStd_flush__E,
    xdc_runtime_SysStd_putch__E,
    xdc_runtime_SysStd_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8013, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8015, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.GateProcess VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_GateProcess_Fxns__ xdc_runtime_knl_GateProcess_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_GateProcess_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_GateProcess_query__E,
    xdc_runtime_knl_GateProcess_enter__E,
    xdc_runtime_knl_GateProcess_leave__E,
    {
        xdc_runtime_knl_GateProcess_Object__create__S,
        xdc_runtime_knl_GateProcess_Object__delete__S,
        xdc_runtime_knl_GateProcess_Handle__label__S,
        0x801c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.GateThread VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_GateThread_Fxns__ xdc_runtime_knl_GateThread_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_GateThread_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_GateThread_query__E,
    xdc_runtime_knl_GateThread_enter__E,
    xdc_runtime_knl_GateThread_leave__E,
    {
        xdc_runtime_knl_GateThread_Object__create__S,
        xdc_runtime_knl_GateThread_Object__delete__S,
        xdc_runtime_knl_GateThread_Handle__label__S,
        0x801b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SemProcess VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SemProcess_Fxns__ xdc_runtime_knl_SemProcess_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISemaphore_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SemProcess_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SemProcess_pend__E,
    xdc_runtime_knl_SemProcess_post__E,
    {
        xdc_runtime_knl_SemProcess_Object__create__S,
        xdc_runtime_knl_SemProcess_Object__delete__S,
        xdc_runtime_knl_SemProcess_Handle__label__S,
        0x801e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SemThread VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SemThread_Fxns__ xdc_runtime_knl_SemThread_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISemaphore_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SemThread_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SemThread_pend__E,
    xdc_runtime_knl_SemThread_post__E,
    {
        xdc_runtime_knl_SemThread_Object__create__S,
        xdc_runtime_knl_SemThread_Object__delete__S,
        xdc_runtime_knl_SemThread_Handle__label__S,
        0x801d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SyncGeneric VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SyncGeneric_Fxns__ xdc_runtime_knl_SyncGeneric_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISync_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SyncGeneric_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SyncGeneric_query__E,
    xdc_runtime_knl_SyncGeneric_signal__E,
    xdc_runtime_knl_SyncGeneric_wait__E,
    {
        xdc_runtime_knl_SyncGeneric_Object__create__S,
        xdc_runtime_knl_SyncGeneric_Object__delete__S,
        xdc_runtime_knl_SyncGeneric_Handle__label__S,
        0x801f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SyncNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SyncNull_Fxns__ xdc_runtime_knl_SyncNull_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISync_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SyncNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SyncNull_query__E,
    xdc_runtime_knl_SyncNull_signal__E,
    xdc_runtime_knl_SyncNull_wait__E,
    {
        xdc_runtime_knl_SyncNull_Object__create__S,
        xdc_runtime_knl_SyncNull_Object__delete__S,
        xdc_runtime_knl_SyncNull_Handle__label__S,
        0x8020, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SyncSemThread VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SyncSemThread_Fxns__ xdc_runtime_knl_SyncSemThread_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISync_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SyncSemThread_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SyncSemThread_query__E,
    xdc_runtime_knl_SyncSemThread_signal__E,
    xdc_runtime_knl_SyncSemThread_wait__E,
    {
        xdc_runtime_knl_SyncSemThread_Object__create__S,
        xdc_runtime_knl_SyncSemThread_Object__delete__S,
        xdc_runtime_knl_SyncSemThread_Handle__label__S,
        0x8021, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sdo.xdcruntime.linux.GateProcessSupport DECLARATIONS ========
 */


/*
 * ======== ti.sdo.xdcruntime.linux.GateThreadSupport DECLARATIONS ========
 */

/* Object__table__V */
ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__V[1];


/*
 * ======== ti.sdo.xdcruntime.linux.SemProcessSupport DECLARATIONS ========
 */


/*
 * ======== ti.sdo.xdcruntime.linux.SemThreadSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_xdcruntime_linux_SemThreadSupport_Module_State__ {
    xdc_Void* mutex;
} ti_sdo_xdcruntime_linux_SemThreadSupport_Module_State__;

/* Module__state__V */
ti_sdo_xdcruntime_linux_SemThreadSupport_Module_State__ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__state__V;


/*
 * ======== ti.sdo.xdcruntime.linux.ThreadSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_xdcruntime_linux_ThreadSupport_Module_State__ {
    xdc_Int lowestPriority;
    xdc_Int belowNormalPriority;
    xdc_Int normalPriority;
    xdc_Int aboveNormalPriority;
    xdc_Int highestPriority;
} ti_sdo_xdcruntime_linux_ThreadSupport_Module_State__;

/* Module__state__V */
ti_sdo_xdcruntime_linux_ThreadSupport_Module_State__ ti_sdo_xdcruntime_linux_ThreadSupport_Module__state__V;


/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.GateNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.HeapStd DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_HeapStd_Module_State__ {
    xdc_runtime_Memory_Size remainRTSSize;
} xdc_runtime_HeapStd_Module_State__;

/* Module__state__V */
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V;


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerCallback DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_LoggerCallback_Object__ xdc_runtime_LoggerCallback_Object__table__V[1];

/* --> LoggerPosix_outputFxn */
extern xdc_Void LoggerPosix_outputFxn(xdc_UArg,xdc_runtime_Log_EventRec*,xdc_Int);

/* --> xdc_runtime_LoggerCallback_defaultCreate */
extern xdc_UArg xdc_runtime_LoggerCallback_defaultCreate(xdc_UArg);


/*
 * ======== xdc.runtime.LoggerSys DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerSys_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Rta DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_LoggerCallback_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerCallback_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sdo_xdcruntime_linux_GateThreadSupport_Module_startup__E */
extern xdc_Int ti_sdo_xdcruntime_linux_GateThreadSupport_Module_startup__E(xdc_Int);

/* --> ti_sdo_xdcruntime_linux_GateProcessSupport_Module_startup__E */
extern xdc_Int ti_sdo_xdcruntime_linux_GateProcessSupport_Module_startup__E(xdc_Int);

/* --> ti_sdo_xdcruntime_linux_SemThreadSupport_Module_startup__E */
extern xdc_Int ti_sdo_xdcruntime_linux_SemThreadSupport_Module_startup__E(xdc_Int);

/* --> ti_sdo_xdcruntime_linux_SemProcessSupport_Module_startup__E */
extern xdc_Int ti_sdo_xdcruntime_linux_SemProcessSupport_Module_startup__E(xdc_Int);

/* --> ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E */
extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[7];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[7];


/*
 * ======== xdc.runtime.SysStd DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[3554];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[43];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.GateH DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.GateH_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.GateProcess DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.GateProcess_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.GateThread DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.GateThread_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SemProcess DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SemProcess_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SemThread DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SemThread_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Semaphore_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Sync DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SyncGeneric DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SyncNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SyncSemThread DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Sync_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Thread DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Thread_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/atree/library/trees/osal/osal-g09/src/packages/qnxdist/preconfig/production/configPkg_qv7/package/cfg/preConfig_pqv7");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7A");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = host.platforms.arm");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = qnx.targets.arm.Qnx");


/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32772, &xdc_runtime_Defaults_Module__root__V.mask},
    {32774, &xdc_runtime_Error_Module__root__V.mask},
    {32780, &xdc_runtime_Main_Module__root__V.mask},
    {32783, &xdc_runtime_Registry_Module__root__V.mask},
    {32791, &xdc_runtime_knl_GateH_Module__root__V.mask},
    {32792, &xdc_runtime_knl_Semaphore_Module__root__V.mask},
    {32793, &xdc_runtime_knl_Thread_Module__root__V.mask},
    {32794, &xdc_runtime_knl_Sync_Module__root__V.mask},
    {32795, &xdc_runtime_knl_GateThread_Module__root__V.mask},
    {32796, &xdc_runtime_knl_GateProcess_Module__root__V.mask},
    {32797, &xdc_runtime_knl_SemThread_Module__root__V.mask},
    {32798, &xdc_runtime_knl_SemProcess_Module__root__V.mask},
    {32799, &xdc_runtime_knl_SyncGeneric_Module__root__V.mask},
    {32800, &xdc_runtime_knl_SyncNull_Module__root__V.mask},
    {32801, &xdc_runtime_knl_SyncSemThread_Module__root__V.mask},
    {32805, &ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.mask},
    {32806, &ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.mask},
    {32807, &ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.mask},
    {32808, &ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.mask},
    {32809, &ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerCallback_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[7];
    xdc_runtime_Startup_startModsFxn__C(state, 7);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sdo.xdcruntime.linux.GateProcessSupport INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_GateProcessSupport_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_xdcruntime_linux_GateProcessSupport_Params ti_sdo_xdcruntime_linux_GateProcessSupport_Object__PARAMS__C = {
    sizeof (ti_sdo_xdcruntime_linux_GateProcessSupport_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_xdcruntime_linux_GateProcessSupport_Object__PARAMS__C.__iprms, /* instance */
    (xdc_Int)(-0x0 - 1),  /* key */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_xdcruntime_linux_GateProcessSupport_Module__ ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V = {
    {&ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.link,  /* link.next */
    &ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsEnabled ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsIncluded ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsMask ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsMask__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsMask)((void*)&ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gateObj ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gateObj__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gatePrms ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gatePrms__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__id ti_sdo_xdcruntime_linux_GateProcessSupport_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerDefined ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerObj ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerObj__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn0 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn0__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn1 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn1__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn2 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn2__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn4 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn4__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn8 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn8__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDoneFxn ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDoneFxn__C = ((CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Object__count ti_sdo_xdcruntime_linux_GateProcessSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Object__heap ti_sdo_xdcruntime_linux_GateProcessSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Object__sizeof ti_sdo_xdcruntime_linux_GateProcessSupport_Object__sizeof__C = sizeof(ti_sdo_xdcruntime_linux_GateProcessSupport_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_Object__table ti_sdo_xdcruntime_linux_GateProcessSupport_Object__table__C = 0;

/* A_invalidKey__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_A_invalidKey ti_sdo_xdcruntime_linux_GateProcessSupport_A_invalidKey__C = (((xdc_runtime_Assert_Id)549) << 16 | 16);

/* A_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_GateProcessSupport_A_POSIX_Error__C = (((xdc_runtime_Assert_Id)500) << 16 | 16);

/* E_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_GateProcessSupport_E_POSIX_Error__C = (((xdc_runtime_Error_Id)890) << 16 | 0);

/* L_extant__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_L_extant ti_sdo_xdcruntime_linux_GateProcessSupport_L_extant__C = (((xdc_runtime_Log_Event)2881) << 16 | 4);

/* L_create__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_L_create ti_sdo_xdcruntime_linux_GateProcessSupport_L_create__C = (((xdc_runtime_Log_Event)2946) << 16 | 4);

/* perms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateProcessSupport_perms ti_sdo_xdcruntime_linux_GateProcessSupport_perms__C = (xdc_Int)0x1b6;


/*
 * ======== ti.sdo.xdcruntime.linux.GateThreadSupport INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_GateThreadSupport_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_xdcruntime_linux_GateThreadSupport_Params ti_sdo_xdcruntime_linux_GateThreadSupport_Object__PARAMS__C = {
    sizeof (ti_sdo_xdcruntime_linux_GateThreadSupport_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_xdcruntime_linux_GateThreadSupport_Module__ ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V = {
    {&ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.link,  /* link.next */
    &ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Object__table__V */
ti_sdo_xdcruntime_linux_GateThreadSupport_Object__ ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ((xdc_Void*)0),  /* gate */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsEnabled ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsIncluded ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsMask ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsMask__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsMask)((void*)&ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gateObj ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gateObj__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gatePrms ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gatePrms__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__id ti_sdo_xdcruntime_linux_GateThreadSupport_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerDefined ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerObj ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerObj__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn0 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn0__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn1 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn1__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn2 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn2__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn4 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn4__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn8 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn8__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDoneFxn ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDoneFxn__C = ((CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Object__count ti_sdo_xdcruntime_linux_GateThreadSupport_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Object__heap ti_sdo_xdcruntime_linux_GateThreadSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Object__sizeof ti_sdo_xdcruntime_linux_GateThreadSupport_Object__sizeof__C = sizeof(ti_sdo_xdcruntime_linux_GateThreadSupport_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__C = ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__V;

/* A_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_GateThreadSupport_A_POSIX_Error__C = (((xdc_runtime_Assert_Id)500) << 16 | 16);

/* E_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_GateThreadSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_GateThreadSupport_E_POSIX_Error__C = (((xdc_runtime_Error_Id)890) << 16 | 0);


/*
 * ======== ti.sdo.xdcruntime.linux.SemProcessSupport INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_SemProcessSupport_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_xdcruntime_linux_SemProcessSupport_Params ti_sdo_xdcruntime_linux_SemProcessSupport_Object__PARAMS__C = {
    sizeof (ti_sdo_xdcruntime_linux_SemProcessSupport_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_xdcruntime_linux_SemProcessSupport_Object__PARAMS__C.__iprms, /* instance */
    xdc_runtime_knl_ISemaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_xdcruntime_linux_SemProcessSupport_Module__ ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V = {
    {&ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.link,  /* link.next */
    &ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsEnabled ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsIncluded ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsMask ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsMask__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsMask)((void*)&ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gateObj ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gateObj__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gatePrms ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gatePrms__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__id ti_sdo_xdcruntime_linux_SemProcessSupport_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerDefined ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerObj ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerObj__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn0 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn0__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn1 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn1__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn2 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn2__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn4 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn4__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn8 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn8__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDoneFxn ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDoneFxn__C = ((CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Object__count ti_sdo_xdcruntime_linux_SemProcessSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Object__heap ti_sdo_xdcruntime_linux_SemProcessSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Object__sizeof ti_sdo_xdcruntime_linux_SemProcessSupport_Object__sizeof__C = sizeof(ti_sdo_xdcruntime_linux_SemProcessSupport_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_Object__table ti_sdo_xdcruntime_linux_SemProcessSupport_Object__table__C = 0;

/* A_unsupportedTimeout__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_A_unsupportedTimeout ti_sdo_xdcruntime_linux_SemProcessSupport_A_unsupportedTimeout__C = (((xdc_runtime_Assert_Id)591) << 16 | 16);

/* A_invalidKey__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_A_invalidKey ti_sdo_xdcruntime_linux_SemProcessSupport_A_invalidKey__C = (((xdc_runtime_Assert_Id)549) << 16 | 16);

/* A_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_SemProcessSupport_A_POSIX_Error__C = (((xdc_runtime_Assert_Id)500) << 16 | 16);

/* E_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_SemProcessSupport_E_POSIX_Error__C = (((xdc_runtime_Error_Id)890) << 16 | 0);

/* L_extant__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_L_extant ti_sdo_xdcruntime_linux_SemProcessSupport_L_extant__C = (((xdc_runtime_Log_Event)2980) << 16 | 4);

/* L_create__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_L_create ti_sdo_xdcruntime_linux_SemProcessSupport_L_create__C = (((xdc_runtime_Log_Event)3044) << 16 | 4);

/* perms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemProcessSupport_perms ti_sdo_xdcruntime_linux_SemProcessSupport_perms__C = (xdc_Int)0x1b6;


/*
 * ======== ti.sdo.xdcruntime.linux.SemThreadSupport INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_SemThreadSupport_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_xdcruntime_linux_SemThreadSupport_Params ti_sdo_xdcruntime_linux_SemThreadSupport_Object__PARAMS__C = {
    sizeof (ti_sdo_xdcruntime_linux_SemThreadSupport_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_xdcruntime_linux_SemThreadSupport_Object__PARAMS__C.__iprms, /* instance */
    xdc_runtime_knl_ISemaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_xdcruntime_linux_SemThreadSupport_Module__ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V = {
    {&ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.link,  /* link.next */
    &ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__state__V */
ti_sdo_xdcruntime_linux_SemThreadSupport_Module_State__ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__state__V = {
    ((xdc_Void*)0),  /* mutex */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsEnabled ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsIncluded ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsMask ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsMask__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsMask)((void*)&ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gateObj ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gateObj__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gatePrms ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gatePrms__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__id ti_sdo_xdcruntime_linux_SemThreadSupport_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerDefined ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerObj ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerObj__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn0 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn0__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn1 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn1__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn2 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn2__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn4 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn4__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn8 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn8__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDoneFxn ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDoneFxn__C = ((CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Object__count ti_sdo_xdcruntime_linux_SemThreadSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Object__heap ti_sdo_xdcruntime_linux_SemThreadSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Object__sizeof ti_sdo_xdcruntime_linux_SemThreadSupport_Object__sizeof__C = sizeof(ti_sdo_xdcruntime_linux_SemThreadSupport_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_Object__table ti_sdo_xdcruntime_linux_SemThreadSupport_Object__table__C = 0;

/* A_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_SemThreadSupport_A_POSIX_Error__C = (((xdc_runtime_Assert_Id)500) << 16 | 16);

/* E_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_SemThreadSupport_E_POSIX_Error__C = (((xdc_runtime_Error_Id)890) << 16 | 0);

/* E_resetError__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_SemThreadSupport_E_resetError ti_sdo_xdcruntime_linux_SemThreadSupport_E_resetError__C = (((xdc_runtime_Error_Id)952) << 16 | 0);


/*
 * ======== ti.sdo.xdcruntime.linux.ThreadSupport INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_ThreadSupport_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_xdcruntime_linux_ThreadSupport_Params ti_sdo_xdcruntime_linux_ThreadSupport_Object__PARAMS__C = {
    sizeof (ti_sdo_xdcruntime_linux_ThreadSupport_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_xdcruntime_linux_ThreadSupport_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_IArg)0),  /* arg */
    xdc_runtime_knl_IThreadSupport_Priority_NORMAL,  /* priority */
    (xdc_Int)0x0,  /* osPriority */
    (xdc_SizeT)0x0,  /* stackSize */
    ((xdc_Ptr)0),  /* tls */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_xdcruntime_linux_ThreadSupport_Module__ ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V = {
    {&ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.link,  /* link.next */
    &ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__state__V */
ti_sdo_xdcruntime_linux_ThreadSupport_Module_State__ ti_sdo_xdcruntime_linux_ThreadSupport_Module__state__V = {
    (xdc_Int)0x0,  /* lowestPriority */
    (xdc_Int)0x0,  /* belowNormalPriority */
    (xdc_Int)0x0,  /* normalPriority */
    (xdc_Int)0x0,  /* aboveNormalPriority */
    (xdc_Int)0x0,  /* highestPriority */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask)((void*)&ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__id ti_sdo_xdcruntime_linux_ThreadSupport_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDoneFxn ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDoneFxn__C = ((CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__count ti_sdo_xdcruntime_linux_ThreadSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__sizeof ti_sdo_xdcruntime_linux_ThreadSupport_Object__sizeof__C = sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__table ti_sdo_xdcruntime_linux_ThreadSupport_Object__table__C = 0;

/* E_priority__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_E_priority ti_sdo_xdcruntime_linux_ThreadSupport_E_priority__C = (((xdc_runtime_Error_Id)986) << 16 | 0);

/* A_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error__C = (((xdc_runtime_Assert_Id)500) << 16 | 16);

/* E_POSIX_Error__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error__C = (((xdc_runtime_Error_Id)890) << 16 | 0);

/* L_start__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_start ti_sdo_xdcruntime_linux_ThreadSupport_L_start__C = (((xdc_runtime_Log_Event)3077) << 16 | 4);

/* L_finish__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_finish ti_sdo_xdcruntime_linux_ThreadSupport_L_finish__C = (((xdc_runtime_Log_Event)3093) << 16 | 4);

/* L_join__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_join ti_sdo_xdcruntime_linux_ThreadSupport_L_join__C = (((xdc_runtime_Log_Event)3110) << 16 | 4);


/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsEnabled ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsIncluded ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsMask ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsMask__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__gateObj ti_sdo_xdcruntime_linux_TimestampPosix_Module__gateObj__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__gatePrms ti_sdo_xdcruntime_linux_TimestampPosix_Module__gatePrms__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__id ti_sdo_xdcruntime_linux_TimestampPosix_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerDefined ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerObj ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerObj__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn0 ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn0__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn1 ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn1__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn2 ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn2__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn4 ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn4__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn8 ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn8__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__startupDoneFxn ti_sdo_xdcruntime_linux_TimestampPosix_Module__startupDoneFxn__C = ((CT__ti_sdo_xdcruntime_linux_TimestampPosix_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Object__count ti_sdo_xdcruntime_linux_TimestampPosix_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Object__heap ti_sdo_xdcruntime_linux_TimestampPosix_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Object__sizeof ti_sdo_xdcruntime_linux_TimestampPosix_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sdo_xdcruntime_linux_TimestampPosix_Object__table ti_sdo_xdcruntime_linux_TimestampPosix_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)650) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Defaults_Module__ xdc_runtime_Defaults_Module__root__V = {
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)((void*)&xdc_runtime_Defaults_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Error_Module__ xdc_runtime_Error_Module__root__V = {
    0,  /* mask */
};

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)((void*)&xdc_runtime_Error_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)672) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)676) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)710) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)xdc_runtime_Error_print__E));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.GateNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_GateNull_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_GateNull_Params xdc_runtime_GateNull_Object__PARAMS__C = {
    sizeof (xdc_runtime_GateNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_GateNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_GateNull_Module__ xdc_runtime_GateNull_Module__root__V = {
    {&xdc_runtime_GateNull_Module__root__V.link,  /* link.next */
    &xdc_runtime_GateNull_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsEnabled xdc_runtime_GateNull_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsIncluded xdc_runtime_GateNull_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsMask xdc_runtime_GateNull_Module__diagsMask__C = ((CT__xdc_runtime_GateNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__gateObj xdc_runtime_GateNull_Module__gateObj__C = ((CT__xdc_runtime_GateNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__gatePrms xdc_runtime_GateNull_Module__gatePrms__C = ((CT__xdc_runtime_GateNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__id xdc_runtime_GateNull_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerDefined xdc_runtime_GateNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerObj xdc_runtime_GateNull_Module__loggerObj__C = ((CT__xdc_runtime_GateNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn0 xdc_runtime_GateNull_Module__loggerFxn0__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn1 xdc_runtime_GateNull_Module__loggerFxn1__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn2 xdc_runtime_GateNull_Module__loggerFxn2__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn4 xdc_runtime_GateNull_Module__loggerFxn4__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn8 xdc_runtime_GateNull_Module__loggerFxn8__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_GateNull_Module__startupDoneFxn xdc_runtime_GateNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_GateNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__count xdc_runtime_GateNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__heap xdc_runtime_GateNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__sizeof xdc_runtime_GateNull_Object__sizeof__C = sizeof(xdc_runtime_GateNull_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_GateNull_Object__table xdc_runtime_GateNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.HeapStd INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_HeapStd_Params xdc_runtime_HeapStd_Object__PARAMS__C = {
    sizeof (xdc_runtime_HeapStd_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_HeapStd_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V = {
    {&xdc_runtime_HeapStd_Module__root__V.link,  /* link.next */
    &xdc_runtime_HeapStd_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_HeapStd_Module__FXNS__C,
        ((xdc_UArg)(0xffffffff)),  /* remainSize */
        ((xdc_UArg)(0xffffffff)),  /* startSize */
    },
};

/* Module__state__V */
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V = {
    ((xdc_UArg)(0x0)),  /* remainRTSSize */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsEnabled xdc_runtime_HeapStd_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsIncluded xdc_runtime_HeapStd_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsMask xdc_runtime_HeapStd_Module__diagsMask__C = ((CT__xdc_runtime_HeapStd_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__gateObj xdc_runtime_HeapStd_Module__gateObj__C = ((CT__xdc_runtime_HeapStd_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__gatePrms xdc_runtime_HeapStd_Module__gatePrms__C = ((CT__xdc_runtime_HeapStd_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__id xdc_runtime_HeapStd_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerDefined xdc_runtime_HeapStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerObj xdc_runtime_HeapStd_Module__loggerObj__C = ((CT__xdc_runtime_HeapStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn0 xdc_runtime_HeapStd_Module__loggerFxn0__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn1 xdc_runtime_HeapStd_Module__loggerFxn1__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn2 xdc_runtime_HeapStd_Module__loggerFxn2__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn4 xdc_runtime_HeapStd_Module__loggerFxn4__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn8 xdc_runtime_HeapStd_Module__loggerFxn8__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_HeapStd_Module__startupDoneFxn xdc_runtime_HeapStd_Module__startupDoneFxn__C = ((CT__xdc_runtime_HeapStd_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_HeapStd_Object__count xdc_runtime_HeapStd_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_HeapStd_Object__heap xdc_runtime_HeapStd_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_HeapStd_Object__sizeof xdc_runtime_HeapStd_Object__sizeof__C = sizeof(xdc_runtime_HeapStd_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_HeapStd_Object__table xdc_runtime_HeapStd_Object__table__C = xdc_runtime_HeapStd_Object__table__V;

/* E_noRTSMemory__C */
__FAR__ const CT__xdc_runtime_HeapStd_E_noRTSMemory xdc_runtime_HeapStd_E_noRTSMemory__C = (((xdc_runtime_Error_Id)795) << 16 | 0);

/* A_zeroSize__C */
__FAR__ const CT__xdc_runtime_HeapStd_A_zeroSize xdc_runtime_HeapStd_A_zeroSize__C = (((xdc_runtime_Assert_Id)95) << 16 | 16);

/* A_align__C */
__FAR__ const CT__xdc_runtime_HeapStd_A_align xdc_runtime_HeapStd_A_align__C = (((xdc_runtime_Assert_Id)140) << 16 | 16);

/* A_invalidTotalFreeSize__C */
__FAR__ const CT__xdc_runtime_HeapStd_A_invalidTotalFreeSize xdc_runtime_HeapStd_A_invalidTotalFreeSize__C = (((xdc_runtime_Assert_Id)185) << 16 | 16);

/* A_invalidAlignment__C */
__FAR__ const CT__xdc_runtime_HeapStd_A_invalidAlignment xdc_runtime_HeapStd_A_invalidAlignment__C = (((xdc_runtime_Assert_Id)246) << 16 | 16);


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)1338) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)1362) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)1383) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)1402) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)1419) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)1433) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)1449) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)1456) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)1467) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)1477) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)1496) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerCallback INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerCallback_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_LoggerCallback_Params xdc_runtime_LoggerCallback_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerCallback_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerCallback_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_LoggerCallback_Module__ xdc_runtime_LoggerCallback_Module__root__V = {
    {&xdc_runtime_LoggerCallback_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerCallback_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerCallback_Object__ xdc_runtime_LoggerCallback_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerCallback_Module__FXNS__C,
        1,  /* enabled */
        ((xdc_UArg)(0x0)),  /* context */
        ((xdc_UArg)(0x0)),  /* arg */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsEnabled xdc_runtime_LoggerCallback_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsIncluded xdc_runtime_LoggerCallback_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__diagsMask xdc_runtime_LoggerCallback_Module__diagsMask__C = ((CT__xdc_runtime_LoggerCallback_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__gateObj xdc_runtime_LoggerCallback_Module__gateObj__C = ((CT__xdc_runtime_LoggerCallback_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__gatePrms xdc_runtime_LoggerCallback_Module__gatePrms__C = ((CT__xdc_runtime_LoggerCallback_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__id xdc_runtime_LoggerCallback_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerDefined xdc_runtime_LoggerCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerObj xdc_runtime_LoggerCallback_Module__loggerObj__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn0 xdc_runtime_LoggerCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn1 xdc_runtime_LoggerCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn2 xdc_runtime_LoggerCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn4 xdc_runtime_LoggerCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__loggerFxn8 xdc_runtime_LoggerCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Module__startupDoneFxn xdc_runtime_LoggerCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerCallback_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__count xdc_runtime_LoggerCallback_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__heap xdc_runtime_LoggerCallback_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__sizeof xdc_runtime_LoggerCallback_Object__sizeof__C = sizeof(xdc_runtime_LoggerCallback_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_Object__table xdc_runtime_LoggerCallback_Object__table__C = xdc_runtime_LoggerCallback_Object__table__V;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_outputFxn xdc_runtime_LoggerCallback_outputFxn__C = ((CT__xdc_runtime_LoggerCallback_outputFxn)((xdc_Fxn)LoggerPosix_outputFxn));

/* createInstFxn__C */
__FAR__ const CT__xdc_runtime_LoggerCallback_createInstFxn xdc_runtime_LoggerCallback_createInstFxn__C = ((CT__xdc_runtime_LoggerCallback_createInstFxn)((xdc_Fxn)xdc_runtime_LoggerCallback_defaultCreate));


/*
 * ======== xdc.runtime.LoggerSys INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerSys_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_LoggerSys_Params xdc_runtime_LoggerSys_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerSys_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerSys_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_LoggerSys_Module__ xdc_runtime_LoggerSys_Module__root__V = {
    {&xdc_runtime_LoggerSys_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerSys_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__diagsEnabled xdc_runtime_LoggerSys_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__diagsIncluded xdc_runtime_LoggerSys_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__diagsMask xdc_runtime_LoggerSys_Module__diagsMask__C = ((CT__xdc_runtime_LoggerSys_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__gateObj xdc_runtime_LoggerSys_Module__gateObj__C = ((CT__xdc_runtime_LoggerSys_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__gatePrms xdc_runtime_LoggerSys_Module__gatePrms__C = ((CT__xdc_runtime_LoggerSys_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__id xdc_runtime_LoggerSys_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerDefined xdc_runtime_LoggerSys_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerObj xdc_runtime_LoggerSys_Module__loggerObj__C = ((CT__xdc_runtime_LoggerSys_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerFxn0 xdc_runtime_LoggerSys_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerSys_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerFxn1 xdc_runtime_LoggerSys_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerSys_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerFxn2 xdc_runtime_LoggerSys_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerSys_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerFxn4 xdc_runtime_LoggerSys_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerSys_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__loggerFxn8 xdc_runtime_LoggerSys_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerSys_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Module__startupDoneFxn xdc_runtime_LoggerSys_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerSys_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Object__count xdc_runtime_LoggerSys_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Object__heap xdc_runtime_LoggerSys_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Object__sizeof xdc_runtime_LoggerSys_Object__sizeof__C = sizeof(xdc_runtime_LoggerSys_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_LoggerSys_Object__table xdc_runtime_LoggerSys_Object__table__C = 0;


/*
 * ======== xdc.runtime.LoggerSys_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x4,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&xdc_runtime_HeapStd_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Registry_Module__ xdc_runtime_Registry_Module__root__V = {
    0,  /* mask */
};

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0xff9f;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)((void*)&xdc_runtime_Registry_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Rta INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Rta_Module__diagsEnabled xdc_runtime_Rta_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Rta_Module__diagsIncluded xdc_runtime_Rta_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Rta_Module__diagsMask xdc_runtime_Rta_Module__diagsMask__C = ((CT__xdc_runtime_Rta_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Rta_Module__gateObj xdc_runtime_Rta_Module__gateObj__C = ((CT__xdc_runtime_Rta_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Rta_Module__gatePrms xdc_runtime_Rta_Module__gatePrms__C = ((CT__xdc_runtime_Rta_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Rta_Module__id xdc_runtime_Rta_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerDefined xdc_runtime_Rta_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerObj xdc_runtime_Rta_Module__loggerObj__C = ((CT__xdc_runtime_Rta_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerFxn0 xdc_runtime_Rta_Module__loggerFxn0__C = ((CT__xdc_runtime_Rta_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerFxn1 xdc_runtime_Rta_Module__loggerFxn1__C = ((CT__xdc_runtime_Rta_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerFxn2 xdc_runtime_Rta_Module__loggerFxn2__C = ((CT__xdc_runtime_Rta_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerFxn4 xdc_runtime_Rta_Module__loggerFxn4__C = ((CT__xdc_runtime_Rta_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Rta_Module__loggerFxn8 xdc_runtime_Rta_Module__loggerFxn8__C = ((CT__xdc_runtime_Rta_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Rta_Module__startupDoneFxn xdc_runtime_Rta_Module__startupDoneFxn__C = ((CT__xdc_runtime_Rta_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Rta_Object__count xdc_runtime_Rta_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Rta_Object__heap xdc_runtime_Rta_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Rta_Object__sizeof xdc_runtime_Rta_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Rta_Object__table xdc_runtime_Rta_Object__table__C = 0;

/* LD_cmdRcvd__C */
__FAR__ const CT__xdc_runtime_Rta_LD_cmdRcvd xdc_runtime_Rta_LD_cmdRcvd__C = (((xdc_runtime_Log_Event)1912) << 16 | 512);

/* LD_writeMask__C */
__FAR__ const CT__xdc_runtime_Rta_LD_writeMask xdc_runtime_Rta_LD_writeMask__C = (((xdc_runtime_Log_Event)1969) << 16 | 512);

/* A_invalidLogger__C */
__FAR__ const CT__xdc_runtime_Rta_A_invalidLogger xdc_runtime_Rta_A_invalidLogger__C = (((xdc_runtime_Assert_Id)306) << 16 | 16);

/* E_badCommand__C */
__FAR__ const CT__xdc_runtime_Rta_E_badCommand xdc_runtime_Rta_E_badCommand__C = (((xdc_runtime_Error_Id)842) << 16 | 0);

/* dataTransportClassName__C */
__FAR__ const CT__xdc_runtime_Rta_dataTransportClassName xdc_runtime_Rta_dataTransportClassName__C = "";

/* controlTransportClassName__C */
__FAR__ const CT__xdc_runtime_Rta_controlTransportClassName xdc_runtime_Rta_controlTransportClassName__C = "";


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[7] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerCallback_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_xdcruntime_linux_GateThreadSupport_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_xdcruntime_linux_GateProcessSupport_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_xdcruntime_linux_SemThreadSupport_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_xdcruntime_linux_SemProcessSupport_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E)),  /* [6] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[7] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    1,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {0, 0};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysStd INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsEnabled xdc_runtime_SysStd_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsIncluded xdc_runtime_SysStd_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsMask xdc_runtime_SysStd_Module__diagsMask__C = ((CT__xdc_runtime_SysStd_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__gateObj xdc_runtime_SysStd_Module__gateObj__C = ((CT__xdc_runtime_SysStd_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__gatePrms xdc_runtime_SysStd_Module__gatePrms__C = ((CT__xdc_runtime_SysStd_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__id xdc_runtime_SysStd_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerDefined xdc_runtime_SysStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerObj xdc_runtime_SysStd_Module__loggerObj__C = ((CT__xdc_runtime_SysStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn0 xdc_runtime_SysStd_Module__loggerFxn0__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn1 xdc_runtime_SysStd_Module__loggerFxn1__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn2 xdc_runtime_SysStd_Module__loggerFxn2__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn4 xdc_runtime_SysStd_Module__loggerFxn4__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn8 xdc_runtime_SysStd_Module__loggerFxn8__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__startupDoneFxn xdc_runtime_SysStd_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysStd_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__count xdc_runtime_SysStd_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__heap xdc_runtime_SysStd_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__sizeof xdc_runtime_SysStd_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__table xdc_runtime_SysStd_Object__table__C = 0;


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[3554] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x7a,  /* [402] */
    (xdc_Char)0x65,  /* [403] */
    (xdc_Char)0x72,  /* [404] */
    (xdc_Char)0x6f,  /* [405] */
    (xdc_Char)0x54,  /* [406] */
    (xdc_Char)0x69,  /* [407] */
    (xdc_Char)0x6d,  /* [408] */
    (xdc_Char)0x65,  /* [409] */
    (xdc_Char)0x6f,  /* [410] */
    (xdc_Char)0x75,  /* [411] */
    (xdc_Char)0x74,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x54,  /* [415] */
    (xdc_Char)0x69,  /* [416] */
    (xdc_Char)0x6d,  /* [417] */
    (xdc_Char)0x65,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x75,  /* [420] */
    (xdc_Char)0x74,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x76,  /* [423] */
    (xdc_Char)0x61,  /* [424] */
    (xdc_Char)0x6c,  /* [425] */
    (xdc_Char)0x75,  /* [426] */
    (xdc_Char)0x65,  /* [427] */
    (xdc_Char)0x20,  /* [428] */
    (xdc_Char)0x61,  /* [429] */
    (xdc_Char)0x6e,  /* [430] */
    (xdc_Char)0x6e,  /* [431] */
    (xdc_Char)0x6f,  /* [432] */
    (xdc_Char)0x74,  /* [433] */
    (xdc_Char)0x20,  /* [434] */
    (xdc_Char)0x62,  /* [435] */
    (xdc_Char)0x65,  /* [436] */
    (xdc_Char)0x20,  /* [437] */
    (xdc_Char)0x7a,  /* [438] */
    (xdc_Char)0x65,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x6f,  /* [441] */
    (xdc_Char)0x0,  /* [442] */
    (xdc_Char)0x41,  /* [443] */
    (xdc_Char)0x5f,  /* [444] */
    (xdc_Char)0x69,  /* [445] */
    (xdc_Char)0x6e,  /* [446] */
    (xdc_Char)0x76,  /* [447] */
    (xdc_Char)0x61,  /* [448] */
    (xdc_Char)0x6c,  /* [449] */
    (xdc_Char)0x69,  /* [450] */
    (xdc_Char)0x64,  /* [451] */
    (xdc_Char)0x4b,  /* [452] */
    (xdc_Char)0x65,  /* [453] */
    (xdc_Char)0x79,  /* [454] */
    (xdc_Char)0x3a,  /* [455] */
    (xdc_Char)0x20,  /* [456] */
    (xdc_Char)0x74,  /* [457] */
    (xdc_Char)0x68,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6b,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x79,  /* [463] */
    (xdc_Char)0x20,  /* [464] */
    (xdc_Char)0x6d,  /* [465] */
    (xdc_Char)0x75,  /* [466] */
    (xdc_Char)0x73,  /* [467] */
    (xdc_Char)0x74,  /* [468] */
    (xdc_Char)0x20,  /* [469] */
    (xdc_Char)0x62,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x20,  /* [472] */
    (xdc_Char)0x73,  /* [473] */
    (xdc_Char)0x65,  /* [474] */
    (xdc_Char)0x74,  /* [475] */
    (xdc_Char)0x20,  /* [476] */
    (xdc_Char)0x74,  /* [477] */
    (xdc_Char)0x6f,  /* [478] */
    (xdc_Char)0x20,  /* [479] */
    (xdc_Char)0x61,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x6e,  /* [482] */
    (xdc_Char)0x6f,  /* [483] */
    (xdc_Char)0x6e,  /* [484] */
    (xdc_Char)0x2d,  /* [485] */
    (xdc_Char)0x64,  /* [486] */
    (xdc_Char)0x65,  /* [487] */
    (xdc_Char)0x66,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x75,  /* [490] */
    (xdc_Char)0x6c,  /* [491] */
    (xdc_Char)0x74,  /* [492] */
    (xdc_Char)0x20,  /* [493] */
    (xdc_Char)0x76,  /* [494] */
    (xdc_Char)0x61,  /* [495] */
    (xdc_Char)0x6c,  /* [496] */
    (xdc_Char)0x75,  /* [497] */
    (xdc_Char)0x65,  /* [498] */
    (xdc_Char)0x0,  /* [499] */
    (xdc_Char)0x41,  /* [500] */
    (xdc_Char)0x5f,  /* [501] */
    (xdc_Char)0x50,  /* [502] */
    (xdc_Char)0x4f,  /* [503] */
    (xdc_Char)0x53,  /* [504] */
    (xdc_Char)0x49,  /* [505] */
    (xdc_Char)0x58,  /* [506] */
    (xdc_Char)0x5f,  /* [507] */
    (xdc_Char)0x45,  /* [508] */
    (xdc_Char)0x72,  /* [509] */
    (xdc_Char)0x72,  /* [510] */
    (xdc_Char)0x6f,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x3a,  /* [513] */
    (xdc_Char)0x20,  /* [514] */
    (xdc_Char)0x61,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x50,  /* [517] */
    (xdc_Char)0x4f,  /* [518] */
    (xdc_Char)0x53,  /* [519] */
    (xdc_Char)0x49,  /* [520] */
    (xdc_Char)0x58,  /* [521] */
    (xdc_Char)0x20,  /* [522] */
    (xdc_Char)0x66,  /* [523] */
    (xdc_Char)0x75,  /* [524] */
    (xdc_Char)0x6e,  /* [525] */
    (xdc_Char)0x63,  /* [526] */
    (xdc_Char)0x74,  /* [527] */
    (xdc_Char)0x69,  /* [528] */
    (xdc_Char)0x6f,  /* [529] */
    (xdc_Char)0x6e,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x72,  /* [532] */
    (xdc_Char)0x65,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x75,  /* [535] */
    (xdc_Char)0x72,  /* [536] */
    (xdc_Char)0x6e,  /* [537] */
    (xdc_Char)0x65,  /* [538] */
    (xdc_Char)0x64,  /* [539] */
    (xdc_Char)0x20,  /* [540] */
    (xdc_Char)0x66,  /* [541] */
    (xdc_Char)0x61,  /* [542] */
    (xdc_Char)0x69,  /* [543] */
    (xdc_Char)0x6c,  /* [544] */
    (xdc_Char)0x75,  /* [545] */
    (xdc_Char)0x72,  /* [546] */
    (xdc_Char)0x65,  /* [547] */
    (xdc_Char)0x0,  /* [548] */
    (xdc_Char)0x41,  /* [549] */
    (xdc_Char)0x5f,  /* [550] */
    (xdc_Char)0x69,  /* [551] */
    (xdc_Char)0x6e,  /* [552] */
    (xdc_Char)0x76,  /* [553] */
    (xdc_Char)0x61,  /* [554] */
    (xdc_Char)0x6c,  /* [555] */
    (xdc_Char)0x69,  /* [556] */
    (xdc_Char)0x64,  /* [557] */
    (xdc_Char)0x4b,  /* [558] */
    (xdc_Char)0x65,  /* [559] */
    (xdc_Char)0x79,  /* [560] */
    (xdc_Char)0x3a,  /* [561] */
    (xdc_Char)0x20,  /* [562] */
    (xdc_Char)0x70,  /* [563] */
    (xdc_Char)0x61,  /* [564] */
    (xdc_Char)0x72,  /* [565] */
    (xdc_Char)0x61,  /* [566] */
    (xdc_Char)0x6d,  /* [567] */
    (xdc_Char)0x73,  /* [568] */
    (xdc_Char)0x20,  /* [569] */
    (xdc_Char)0x6b,  /* [570] */
    (xdc_Char)0x65,  /* [571] */
    (xdc_Char)0x79,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x68,  /* [574] */
    (xdc_Char)0x61,  /* [575] */
    (xdc_Char)0x73,  /* [576] */
    (xdc_Char)0x20,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x6f,  /* [579] */
    (xdc_Char)0x74,  /* [580] */
    (xdc_Char)0x20,  /* [581] */
    (xdc_Char)0x62,  /* [582] */
    (xdc_Char)0x65,  /* [583] */
    (xdc_Char)0x65,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x20,  /* [586] */
    (xdc_Char)0x73,  /* [587] */
    (xdc_Char)0x65,  /* [588] */
    (xdc_Char)0x74,  /* [589] */
    (xdc_Char)0x0,  /* [590] */
    (xdc_Char)0x41,  /* [591] */
    (xdc_Char)0x5f,  /* [592] */
    (xdc_Char)0x75,  /* [593] */
    (xdc_Char)0x6e,  /* [594] */
    (xdc_Char)0x73,  /* [595] */
    (xdc_Char)0x75,  /* [596] */
    (xdc_Char)0x70,  /* [597] */
    (xdc_Char)0x70,  /* [598] */
    (xdc_Char)0x6f,  /* [599] */
    (xdc_Char)0x72,  /* [600] */
    (xdc_Char)0x74,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x64,  /* [603] */
    (xdc_Char)0x54,  /* [604] */
    (xdc_Char)0x69,  /* [605] */
    (xdc_Char)0x6d,  /* [606] */
    (xdc_Char)0x65,  /* [607] */
    (xdc_Char)0x6f,  /* [608] */
    (xdc_Char)0x75,  /* [609] */
    (xdc_Char)0x74,  /* [610] */
    (xdc_Char)0x3a,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x4f,  /* [613] */
    (xdc_Char)0x6e,  /* [614] */
    (xdc_Char)0x6c,  /* [615] */
    (xdc_Char)0x79,  /* [616] */
    (xdc_Char)0x20,  /* [617] */
    (xdc_Char)0x53,  /* [618] */
    (xdc_Char)0x65,  /* [619] */
    (xdc_Char)0x6d,  /* [620] */
    (xdc_Char)0x50,  /* [621] */
    (xdc_Char)0x72,  /* [622] */
    (xdc_Char)0x6f,  /* [623] */
    (xdc_Char)0x63,  /* [624] */
    (xdc_Char)0x65,  /* [625] */
    (xdc_Char)0x73,  /* [626] */
    (xdc_Char)0x73,  /* [627] */
    (xdc_Char)0x5f,  /* [628] */
    (xdc_Char)0x46,  /* [629] */
    (xdc_Char)0x4f,  /* [630] */
    (xdc_Char)0x52,  /* [631] */
    (xdc_Char)0x45,  /* [632] */
    (xdc_Char)0x56,  /* [633] */
    (xdc_Char)0x45,  /* [634] */
    (xdc_Char)0x52,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x73,  /* [638] */
    (xdc_Char)0x20,  /* [639] */
    (xdc_Char)0x73,  /* [640] */
    (xdc_Char)0x75,  /* [641] */
    (xdc_Char)0x70,  /* [642] */
    (xdc_Char)0x70,  /* [643] */
    (xdc_Char)0x6f,  /* [644] */
    (xdc_Char)0x72,  /* [645] */
    (xdc_Char)0x74,  /* [646] */
    (xdc_Char)0x65,  /* [647] */
    (xdc_Char)0x64,  /* [648] */
    (xdc_Char)0x0,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x73,  /* [651] */
    (xdc_Char)0x73,  /* [652] */
    (xdc_Char)0x65,  /* [653] */
    (xdc_Char)0x72,  /* [654] */
    (xdc_Char)0x74,  /* [655] */
    (xdc_Char)0x69,  /* [656] */
    (xdc_Char)0x6f,  /* [657] */
    (xdc_Char)0x6e,  /* [658] */
    (xdc_Char)0x20,  /* [659] */
    (xdc_Char)0x66,  /* [660] */
    (xdc_Char)0x61,  /* [661] */
    (xdc_Char)0x69,  /* [662] */
    (xdc_Char)0x6c,  /* [663] */
    (xdc_Char)0x75,  /* [664] */
    (xdc_Char)0x72,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x25,  /* [667] */
    (xdc_Char)0x73,  /* [668] */
    (xdc_Char)0x25,  /* [669] */
    (xdc_Char)0x73,  /* [670] */
    (xdc_Char)0x0,  /* [671] */
    (xdc_Char)0x25,  /* [672] */
    (xdc_Char)0x24,  /* [673] */
    (xdc_Char)0x53,  /* [674] */
    (xdc_Char)0x0,  /* [675] */
    (xdc_Char)0x6f,  /* [676] */
    (xdc_Char)0x75,  /* [677] */
    (xdc_Char)0x74,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x6f,  /* [680] */
    (xdc_Char)0x66,  /* [681] */
    (xdc_Char)0x20,  /* [682] */
    (xdc_Char)0x6d,  /* [683] */
    (xdc_Char)0x65,  /* [684] */
    (xdc_Char)0x6d,  /* [685] */
    (xdc_Char)0x6f,  /* [686] */
    (xdc_Char)0x72,  /* [687] */
    (xdc_Char)0x79,  /* [688] */
    (xdc_Char)0x3a,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x68,  /* [691] */
    (xdc_Char)0x65,  /* [692] */
    (xdc_Char)0x61,  /* [693] */
    (xdc_Char)0x70,  /* [694] */
    (xdc_Char)0x3d,  /* [695] */
    (xdc_Char)0x30,  /* [696] */
    (xdc_Char)0x78,  /* [697] */
    (xdc_Char)0x25,  /* [698] */
    (xdc_Char)0x78,  /* [699] */
    (xdc_Char)0x2c,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x73,  /* [702] */
    (xdc_Char)0x69,  /* [703] */
    (xdc_Char)0x7a,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x3d,  /* [706] */
    (xdc_Char)0x25,  /* [707] */
    (xdc_Char)0x75,  /* [708] */
    (xdc_Char)0x0,  /* [709] */
    (xdc_Char)0x25,  /* [710] */
    (xdc_Char)0x73,  /* [711] */
    (xdc_Char)0x20,  /* [712] */
    (xdc_Char)0x30,  /* [713] */
    (xdc_Char)0x78,  /* [714] */
    (xdc_Char)0x25,  /* [715] */
    (xdc_Char)0x78,  /* [716] */
    (xdc_Char)0x0,  /* [717] */
    (xdc_Char)0x45,  /* [718] */
    (xdc_Char)0x5f,  /* [719] */
    (xdc_Char)0x62,  /* [720] */
    (xdc_Char)0x61,  /* [721] */
    (xdc_Char)0x64,  /* [722] */
    (xdc_Char)0x4c,  /* [723] */
    (xdc_Char)0x65,  /* [724] */
    (xdc_Char)0x76,  /* [725] */
    (xdc_Char)0x65,  /* [726] */
    (xdc_Char)0x6c,  /* [727] */
    (xdc_Char)0x3a,  /* [728] */
    (xdc_Char)0x20,  /* [729] */
    (xdc_Char)0x42,  /* [730] */
    (xdc_Char)0x61,  /* [731] */
    (xdc_Char)0x64,  /* [732] */
    (xdc_Char)0x20,  /* [733] */
    (xdc_Char)0x66,  /* [734] */
    (xdc_Char)0x69,  /* [735] */
    (xdc_Char)0x6c,  /* [736] */
    (xdc_Char)0x74,  /* [737] */
    (xdc_Char)0x65,  /* [738] */
    (xdc_Char)0x72,  /* [739] */
    (xdc_Char)0x20,  /* [740] */
    (xdc_Char)0x6c,  /* [741] */
    (xdc_Char)0x65,  /* [742] */
    (xdc_Char)0x76,  /* [743] */
    (xdc_Char)0x65,  /* [744] */
    (xdc_Char)0x6c,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x76,  /* [747] */
    (xdc_Char)0x61,  /* [748] */
    (xdc_Char)0x6c,  /* [749] */
    (xdc_Char)0x75,  /* [750] */
    (xdc_Char)0x65,  /* [751] */
    (xdc_Char)0x3a,  /* [752] */
    (xdc_Char)0x20,  /* [753] */
    (xdc_Char)0x25,  /* [754] */
    (xdc_Char)0x64,  /* [755] */
    (xdc_Char)0x0,  /* [756] */
    (xdc_Char)0x66,  /* [757] */
    (xdc_Char)0x72,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x65,  /* [760] */
    (xdc_Char)0x28,  /* [761] */
    (xdc_Char)0x29,  /* [762] */
    (xdc_Char)0x20,  /* [763] */
    (xdc_Char)0x69,  /* [764] */
    (xdc_Char)0x6e,  /* [765] */
    (xdc_Char)0x76,  /* [766] */
    (xdc_Char)0x61,  /* [767] */
    (xdc_Char)0x6c,  /* [768] */
    (xdc_Char)0x69,  /* [769] */
    (xdc_Char)0x64,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x69,  /* [772] */
    (xdc_Char)0x6e,  /* [773] */
    (xdc_Char)0x20,  /* [774] */
    (xdc_Char)0x67,  /* [775] */
    (xdc_Char)0x72,  /* [776] */
    (xdc_Char)0x6f,  /* [777] */
    (xdc_Char)0x77,  /* [778] */
    (xdc_Char)0x74,  /* [779] */
    (xdc_Char)0x68,  /* [780] */
    (xdc_Char)0x2d,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x6e,  /* [783] */
    (xdc_Char)0x6c,  /* [784] */
    (xdc_Char)0x79,  /* [785] */
    (xdc_Char)0x20,  /* [786] */
    (xdc_Char)0x48,  /* [787] */
    (xdc_Char)0x65,  /* [788] */
    (xdc_Char)0x61,  /* [789] */
    (xdc_Char)0x70,  /* [790] */
    (xdc_Char)0x4d,  /* [791] */
    (xdc_Char)0x69,  /* [792] */
    (xdc_Char)0x6e,  /* [793] */
    (xdc_Char)0x0,  /* [794] */
    (xdc_Char)0x54,  /* [795] */
    (xdc_Char)0x68,  /* [796] */
    (xdc_Char)0x65,  /* [797] */
    (xdc_Char)0x20,  /* [798] */
    (xdc_Char)0x52,  /* [799] */
    (xdc_Char)0x54,  /* [800] */
    (xdc_Char)0x53,  /* [801] */
    (xdc_Char)0x20,  /* [802] */
    (xdc_Char)0x68,  /* [803] */
    (xdc_Char)0x65,  /* [804] */
    (xdc_Char)0x61,  /* [805] */
    (xdc_Char)0x70,  /* [806] */
    (xdc_Char)0x20,  /* [807] */
    (xdc_Char)0x69,  /* [808] */
    (xdc_Char)0x73,  /* [809] */
    (xdc_Char)0x20,  /* [810] */
    (xdc_Char)0x75,  /* [811] */
    (xdc_Char)0x73,  /* [812] */
    (xdc_Char)0x65,  /* [813] */
    (xdc_Char)0x64,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x75,  /* [816] */
    (xdc_Char)0x70,  /* [817] */
    (xdc_Char)0x2e,  /* [818] */
    (xdc_Char)0x20,  /* [819] */
    (xdc_Char)0x45,  /* [820] */
    (xdc_Char)0x78,  /* [821] */
    (xdc_Char)0x61,  /* [822] */
    (xdc_Char)0x6d,  /* [823] */
    (xdc_Char)0x69,  /* [824] */
    (xdc_Char)0x6e,  /* [825] */
    (xdc_Char)0x65,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x50,  /* [828] */
    (xdc_Char)0x72,  /* [829] */
    (xdc_Char)0x6f,  /* [830] */
    (xdc_Char)0x67,  /* [831] */
    (xdc_Char)0x72,  /* [832] */
    (xdc_Char)0x61,  /* [833] */
    (xdc_Char)0x6d,  /* [834] */
    (xdc_Char)0x2e,  /* [835] */
    (xdc_Char)0x68,  /* [836] */
    (xdc_Char)0x65,  /* [837] */
    (xdc_Char)0x61,  /* [838] */
    (xdc_Char)0x70,  /* [839] */
    (xdc_Char)0x2e,  /* [840] */
    (xdc_Char)0x0,  /* [841] */
    (xdc_Char)0x45,  /* [842] */
    (xdc_Char)0x5f,  /* [843] */
    (xdc_Char)0x62,  /* [844] */
    (xdc_Char)0x61,  /* [845] */
    (xdc_Char)0x64,  /* [846] */
    (xdc_Char)0x43,  /* [847] */
    (xdc_Char)0x6f,  /* [848] */
    (xdc_Char)0x6d,  /* [849] */
    (xdc_Char)0x6d,  /* [850] */
    (xdc_Char)0x61,  /* [851] */
    (xdc_Char)0x6e,  /* [852] */
    (xdc_Char)0x64,  /* [853] */
    (xdc_Char)0x3a,  /* [854] */
    (xdc_Char)0x20,  /* [855] */
    (xdc_Char)0x52,  /* [856] */
    (xdc_Char)0x65,  /* [857] */
    (xdc_Char)0x63,  /* [858] */
    (xdc_Char)0x65,  /* [859] */
    (xdc_Char)0x69,  /* [860] */
    (xdc_Char)0x76,  /* [861] */
    (xdc_Char)0x65,  /* [862] */
    (xdc_Char)0x64,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x69,  /* [865] */
    (xdc_Char)0x6e,  /* [866] */
    (xdc_Char)0x76,  /* [867] */
    (xdc_Char)0x61,  /* [868] */
    (xdc_Char)0x6c,  /* [869] */
    (xdc_Char)0x69,  /* [870] */
    (xdc_Char)0x64,  /* [871] */
    (xdc_Char)0x20,  /* [872] */
    (xdc_Char)0x63,  /* [873] */
    (xdc_Char)0x6f,  /* [874] */
    (xdc_Char)0x6d,  /* [875] */
    (xdc_Char)0x6d,  /* [876] */
    (xdc_Char)0x61,  /* [877] */
    (xdc_Char)0x6e,  /* [878] */
    (xdc_Char)0x64,  /* [879] */
    (xdc_Char)0x2c,  /* [880] */
    (xdc_Char)0x20,  /* [881] */
    (xdc_Char)0x69,  /* [882] */
    (xdc_Char)0x64,  /* [883] */
    (xdc_Char)0x3a,  /* [884] */
    (xdc_Char)0x20,  /* [885] */
    (xdc_Char)0x25,  /* [886] */
    (xdc_Char)0x64,  /* [887] */
    (xdc_Char)0x2e,  /* [888] */
    (xdc_Char)0x0,  /* [889] */
    (xdc_Char)0x45,  /* [890] */
    (xdc_Char)0x5f,  /* [891] */
    (xdc_Char)0x50,  /* [892] */
    (xdc_Char)0x4f,  /* [893] */
    (xdc_Char)0x53,  /* [894] */
    (xdc_Char)0x49,  /* [895] */
    (xdc_Char)0x58,  /* [896] */
    (xdc_Char)0x5f,  /* [897] */
    (xdc_Char)0x45,  /* [898] */
    (xdc_Char)0x72,  /* [899] */
    (xdc_Char)0x72,  /* [900] */
    (xdc_Char)0x6f,  /* [901] */
    (xdc_Char)0x72,  /* [902] */
    (xdc_Char)0x3a,  /* [903] */
    (xdc_Char)0x20,  /* [904] */
    (xdc_Char)0x61,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x50,  /* [907] */
    (xdc_Char)0x4f,  /* [908] */
    (xdc_Char)0x53,  /* [909] */
    (xdc_Char)0x49,  /* [910] */
    (xdc_Char)0x58,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x66,  /* [913] */
    (xdc_Char)0x75,  /* [914] */
    (xdc_Char)0x6e,  /* [915] */
    (xdc_Char)0x63,  /* [916] */
    (xdc_Char)0x74,  /* [917] */
    (xdc_Char)0x69,  /* [918] */
    (xdc_Char)0x6f,  /* [919] */
    (xdc_Char)0x6e,  /* [920] */
    (xdc_Char)0x20,  /* [921] */
    (xdc_Char)0x72,  /* [922] */
    (xdc_Char)0x65,  /* [923] */
    (xdc_Char)0x74,  /* [924] */
    (xdc_Char)0x75,  /* [925] */
    (xdc_Char)0x72,  /* [926] */
    (xdc_Char)0x6e,  /* [927] */
    (xdc_Char)0x65,  /* [928] */
    (xdc_Char)0x64,  /* [929] */
    (xdc_Char)0x20,  /* [930] */
    (xdc_Char)0x66,  /* [931] */
    (xdc_Char)0x61,  /* [932] */
    (xdc_Char)0x69,  /* [933] */
    (xdc_Char)0x6c,  /* [934] */
    (xdc_Char)0x75,  /* [935] */
    (xdc_Char)0x72,  /* [936] */
    (xdc_Char)0x65,  /* [937] */
    (xdc_Char)0x2c,  /* [938] */
    (xdc_Char)0x20,  /* [939] */
    (xdc_Char)0x65,  /* [940] */
    (xdc_Char)0x72,  /* [941] */
    (xdc_Char)0x72,  /* [942] */
    (xdc_Char)0x6e,  /* [943] */
    (xdc_Char)0x6f,  /* [944] */
    (xdc_Char)0x20,  /* [945] */
    (xdc_Char)0x69,  /* [946] */
    (xdc_Char)0x73,  /* [947] */
    (xdc_Char)0x20,  /* [948] */
    (xdc_Char)0x25,  /* [949] */
    (xdc_Char)0x64,  /* [950] */
    (xdc_Char)0x0,  /* [951] */
    (xdc_Char)0x45,  /* [952] */
    (xdc_Char)0x5f,  /* [953] */
    (xdc_Char)0x72,  /* [954] */
    (xdc_Char)0x65,  /* [955] */
    (xdc_Char)0x73,  /* [956] */
    (xdc_Char)0x65,  /* [957] */
    (xdc_Char)0x74,  /* [958] */
    (xdc_Char)0x45,  /* [959] */
    (xdc_Char)0x72,  /* [960] */
    (xdc_Char)0x72,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x3a,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x25,  /* [966] */
    (xdc_Char)0x73,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x72,  /* [969] */
    (xdc_Char)0x65,  /* [970] */
    (xdc_Char)0x74,  /* [971] */
    (xdc_Char)0x75,  /* [972] */
    (xdc_Char)0x72,  /* [973] */
    (xdc_Char)0x6e,  /* [974] */
    (xdc_Char)0x65,  /* [975] */
    (xdc_Char)0x64,  /* [976] */
    (xdc_Char)0x20,  /* [977] */
    (xdc_Char)0x66,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x69,  /* [980] */
    (xdc_Char)0x6c,  /* [981] */
    (xdc_Char)0x75,  /* [982] */
    (xdc_Char)0x72,  /* [983] */
    (xdc_Char)0x65,  /* [984] */
    (xdc_Char)0x0,  /* [985] */
    (xdc_Char)0x45,  /* [986] */
    (xdc_Char)0x5f,  /* [987] */
    (xdc_Char)0x70,  /* [988] */
    (xdc_Char)0x72,  /* [989] */
    (xdc_Char)0x69,  /* [990] */
    (xdc_Char)0x6f,  /* [991] */
    (xdc_Char)0x72,  /* [992] */
    (xdc_Char)0x69,  /* [993] */
    (xdc_Char)0x74,  /* [994] */
    (xdc_Char)0x79,  /* [995] */
    (xdc_Char)0x3a,  /* [996] */
    (xdc_Char)0x20,  /* [997] */
    (xdc_Char)0x54,  /* [998] */
    (xdc_Char)0x68,  /* [999] */
    (xdc_Char)0x72,  /* [1000] */
    (xdc_Char)0x65,  /* [1001] */
    (xdc_Char)0x61,  /* [1002] */
    (xdc_Char)0x64,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x70,  /* [1005] */
    (xdc_Char)0x72,  /* [1006] */
    (xdc_Char)0x69,  /* [1007] */
    (xdc_Char)0x6f,  /* [1008] */
    (xdc_Char)0x72,  /* [1009] */
    (xdc_Char)0x69,  /* [1010] */
    (xdc_Char)0x74,  /* [1011] */
    (xdc_Char)0x79,  /* [1012] */
    (xdc_Char)0x20,  /* [1013] */
    (xdc_Char)0x69,  /* [1014] */
    (xdc_Char)0x73,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x69,  /* [1017] */
    (xdc_Char)0x6e,  /* [1018] */
    (xdc_Char)0x76,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x6c,  /* [1021] */
    (xdc_Char)0x69,  /* [1022] */
    (xdc_Char)0x64,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x25,  /* [1025] */
    (xdc_Char)0x64,  /* [1026] */
    (xdc_Char)0x0,  /* [1027] */
    (xdc_Char)0x2d,  /* [1028] */
    (xdc_Char)0x2d,  /* [1029] */
    (xdc_Char)0x3e,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x63,  /* [1032] */
    (xdc_Char)0x68,  /* [1033] */
    (xdc_Char)0x65,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x6b,  /* [1036] */
    (xdc_Char)0x3a,  /* [1037] */
    (xdc_Char)0x20,  /* [1038] */
    (xdc_Char)0x28,  /* [1039] */
    (xdc_Char)0x25,  /* [1040] */
    (xdc_Char)0x70,  /* [1041] */
    (xdc_Char)0x29,  /* [1042] */
    (xdc_Char)0x0,  /* [1043] */
    (xdc_Char)0x3c,  /* [1044] */
    (xdc_Char)0x2d,  /* [1045] */
    (xdc_Char)0x2d,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x63,  /* [1048] */
    (xdc_Char)0x68,  /* [1049] */
    (xdc_Char)0x65,  /* [1050] */
    (xdc_Char)0x63,  /* [1051] */
    (xdc_Char)0x6b,  /* [1052] */
    (xdc_Char)0x3a,  /* [1053] */
    (xdc_Char)0x20,  /* [1054] */
    (xdc_Char)0x25,  /* [1055] */
    (xdc_Char)0x64,  /* [1056] */
    (xdc_Char)0x0,  /* [1057] */
    (xdc_Char)0x2d,  /* [1058] */
    (xdc_Char)0x2d,  /* [1059] */
    (xdc_Char)0x3e,  /* [1060] */
    (xdc_Char)0x20,  /* [1061] */
    (xdc_Char)0x67,  /* [1062] */
    (xdc_Char)0x65,  /* [1063] */
    (xdc_Char)0x74,  /* [1064] */
    (xdc_Char)0x44,  /* [1065] */
    (xdc_Char)0x61,  /* [1066] */
    (xdc_Char)0x74,  /* [1067] */
    (xdc_Char)0x61,  /* [1068] */
    (xdc_Char)0x3a,  /* [1069] */
    (xdc_Char)0x20,  /* [1070] */
    (xdc_Char)0x28,  /* [1071] */
    (xdc_Char)0x25,  /* [1072] */
    (xdc_Char)0x70,  /* [1073] */
    (xdc_Char)0x29,  /* [1074] */
    (xdc_Char)0x0,  /* [1075] */
    (xdc_Char)0x3c,  /* [1076] */
    (xdc_Char)0x2d,  /* [1077] */
    (xdc_Char)0x2d,  /* [1078] */
    (xdc_Char)0x20,  /* [1079] */
    (xdc_Char)0x67,  /* [1080] */
    (xdc_Char)0x65,  /* [1081] */
    (xdc_Char)0x74,  /* [1082] */
    (xdc_Char)0x44,  /* [1083] */
    (xdc_Char)0x61,  /* [1084] */
    (xdc_Char)0x74,  /* [1085] */
    (xdc_Char)0x61,  /* [1086] */
    (xdc_Char)0x3a,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x25,  /* [1089] */
    (xdc_Char)0x70,  /* [1090] */
    (xdc_Char)0x0,  /* [1091] */
    (xdc_Char)0x2d,  /* [1092] */
    (xdc_Char)0x2d,  /* [1093] */
    (xdc_Char)0x3e,  /* [1094] */
    (xdc_Char)0x20,  /* [1095] */
    (xdc_Char)0x67,  /* [1096] */
    (xdc_Char)0x65,  /* [1097] */
    (xdc_Char)0x74,  /* [1098] */
    (xdc_Char)0x43,  /* [1099] */
    (xdc_Char)0x6f,  /* [1100] */
    (xdc_Char)0x64,  /* [1101] */
    (xdc_Char)0x65,  /* [1102] */
    (xdc_Char)0x3a,  /* [1103] */
    (xdc_Char)0x20,  /* [1104] */
    (xdc_Char)0x28,  /* [1105] */
    (xdc_Char)0x25,  /* [1106] */
    (xdc_Char)0x70,  /* [1107] */
    (xdc_Char)0x29,  /* [1108] */
    (xdc_Char)0x0,  /* [1109] */
    (xdc_Char)0x3c,  /* [1110] */
    (xdc_Char)0x2d,  /* [1111] */
    (xdc_Char)0x2d,  /* [1112] */
    (xdc_Char)0x20,  /* [1113] */
    (xdc_Char)0x67,  /* [1114] */
    (xdc_Char)0x65,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x43,  /* [1117] */
    (xdc_Char)0x6f,  /* [1118] */
    (xdc_Char)0x64,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x3a,  /* [1121] */
    (xdc_Char)0x20,  /* [1122] */
    (xdc_Char)0x30,  /* [1123] */
    (xdc_Char)0x78,  /* [1124] */
    (xdc_Char)0x25,  /* [1125] */
    (xdc_Char)0x78,  /* [1126] */
    (xdc_Char)0x0,  /* [1127] */
    (xdc_Char)0x2d,  /* [1128] */
    (xdc_Char)0x2d,  /* [1129] */
    (xdc_Char)0x3e,  /* [1130] */
    (xdc_Char)0x20,  /* [1131] */
    (xdc_Char)0x67,  /* [1132] */
    (xdc_Char)0x65,  /* [1133] */
    (xdc_Char)0x74,  /* [1134] */
    (xdc_Char)0x49,  /* [1135] */
    (xdc_Char)0x64,  /* [1136] */
    (xdc_Char)0x3a,  /* [1137] */
    (xdc_Char)0x20,  /* [1138] */
    (xdc_Char)0x28,  /* [1139] */
    (xdc_Char)0x25,  /* [1140] */
    (xdc_Char)0x70,  /* [1141] */
    (xdc_Char)0x29,  /* [1142] */
    (xdc_Char)0x0,  /* [1143] */
    (xdc_Char)0x3c,  /* [1144] */
    (xdc_Char)0x2d,  /* [1145] */
    (xdc_Char)0x2d,  /* [1146] */
    (xdc_Char)0x20,  /* [1147] */
    (xdc_Char)0x67,  /* [1148] */
    (xdc_Char)0x65,  /* [1149] */
    (xdc_Char)0x74,  /* [1150] */
    (xdc_Char)0x49,  /* [1151] */
    (xdc_Char)0x64,  /* [1152] */
    (xdc_Char)0x3a,  /* [1153] */
    (xdc_Char)0x20,  /* [1154] */
    (xdc_Char)0x76,  /* [1155] */
    (xdc_Char)0x6f,  /* [1156] */
    (xdc_Char)0x69,  /* [1157] */
    (xdc_Char)0x64,  /* [1158] */
    (xdc_Char)0x0,  /* [1159] */
    (xdc_Char)0x2d,  /* [1160] */
    (xdc_Char)0x2d,  /* [1161] */
    (xdc_Char)0x3e,  /* [1162] */
    (xdc_Char)0x20,  /* [1163] */
    (xdc_Char)0x67,  /* [1164] */
    (xdc_Char)0x65,  /* [1165] */
    (xdc_Char)0x74,  /* [1166] */
    (xdc_Char)0x4d,  /* [1167] */
    (xdc_Char)0x73,  /* [1168] */
    (xdc_Char)0x67,  /* [1169] */
    (xdc_Char)0x3a,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x28,  /* [1172] */
    (xdc_Char)0x25,  /* [1173] */
    (xdc_Char)0x70,  /* [1174] */
    (xdc_Char)0x29,  /* [1175] */
    (xdc_Char)0x0,  /* [1176] */
    (xdc_Char)0x3c,  /* [1177] */
    (xdc_Char)0x2d,  /* [1178] */
    (xdc_Char)0x2d,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x67,  /* [1181] */
    (xdc_Char)0x65,  /* [1182] */
    (xdc_Char)0x74,  /* [1183] */
    (xdc_Char)0x4d,  /* [1184] */
    (xdc_Char)0x73,  /* [1185] */
    (xdc_Char)0x67,  /* [1186] */
    (xdc_Char)0x3a,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x22,  /* [1189] */
    (xdc_Char)0x25,  /* [1190] */
    (xdc_Char)0x73,  /* [1191] */
    (xdc_Char)0x22,  /* [1192] */
    (xdc_Char)0x0,  /* [1193] */
    (xdc_Char)0x2d,  /* [1194] */
    (xdc_Char)0x2d,  /* [1195] */
    (xdc_Char)0x3e,  /* [1196] */
    (xdc_Char)0x20,  /* [1197] */
    (xdc_Char)0x67,  /* [1198] */
    (xdc_Char)0x65,  /* [1199] */
    (xdc_Char)0x74,  /* [1200] */
    (xdc_Char)0x53,  /* [1201] */
    (xdc_Char)0x69,  /* [1202] */
    (xdc_Char)0x74,  /* [1203] */
    (xdc_Char)0x65,  /* [1204] */
    (xdc_Char)0x3a,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x28,  /* [1207] */
    (xdc_Char)0x25,  /* [1208] */
    (xdc_Char)0x70,  /* [1209] */
    (xdc_Char)0x29,  /* [1210] */
    (xdc_Char)0x0,  /* [1211] */
    (xdc_Char)0x3c,  /* [1212] */
    (xdc_Char)0x2d,  /* [1213] */
    (xdc_Char)0x2d,  /* [1214] */
    (xdc_Char)0x20,  /* [1215] */
    (xdc_Char)0x67,  /* [1216] */
    (xdc_Char)0x65,  /* [1217] */
    (xdc_Char)0x74,  /* [1218] */
    (xdc_Char)0x53,  /* [1219] */
    (xdc_Char)0x69,  /* [1220] */
    (xdc_Char)0x74,  /* [1221] */
    (xdc_Char)0x65,  /* [1222] */
    (xdc_Char)0x3a,  /* [1223] */
    (xdc_Char)0x20,  /* [1224] */
    (xdc_Char)0x25,  /* [1225] */
    (xdc_Char)0x70,  /* [1226] */
    (xdc_Char)0x0,  /* [1227] */
    (xdc_Char)0x2d,  /* [1228] */
    (xdc_Char)0x2d,  /* [1229] */
    (xdc_Char)0x3e,  /* [1230] */
    (xdc_Char)0x20,  /* [1231] */
    (xdc_Char)0x69,  /* [1232] */
    (xdc_Char)0x6e,  /* [1233] */
    (xdc_Char)0x69,  /* [1234] */
    (xdc_Char)0x74,  /* [1235] */
    (xdc_Char)0x3a,  /* [1236] */
    (xdc_Char)0x20,  /* [1237] */
    (xdc_Char)0x28,  /* [1238] */
    (xdc_Char)0x25,  /* [1239] */
    (xdc_Char)0x70,  /* [1240] */
    (xdc_Char)0x29,  /* [1241] */
    (xdc_Char)0x0,  /* [1242] */
    (xdc_Char)0x3c,  /* [1243] */
    (xdc_Char)0x2d,  /* [1244] */
    (xdc_Char)0x2d,  /* [1245] */
    (xdc_Char)0x20,  /* [1246] */
    (xdc_Char)0x69,  /* [1247] */
    (xdc_Char)0x6e,  /* [1248] */
    (xdc_Char)0x69,  /* [1249] */
    (xdc_Char)0x74,  /* [1250] */
    (xdc_Char)0x3a,  /* [1251] */
    (xdc_Char)0x20,  /* [1252] */
    (xdc_Char)0x76,  /* [1253] */
    (xdc_Char)0x6f,  /* [1254] */
    (xdc_Char)0x69,  /* [1255] */
    (xdc_Char)0x64,  /* [1256] */
    (xdc_Char)0x0,  /* [1257] */
    (xdc_Char)0x2d,  /* [1258] */
    (xdc_Char)0x2d,  /* [1259] */
    (xdc_Char)0x3e,  /* [1260] */
    (xdc_Char)0x20,  /* [1261] */
    (xdc_Char)0x70,  /* [1262] */
    (xdc_Char)0x72,  /* [1263] */
    (xdc_Char)0x69,  /* [1264] */
    (xdc_Char)0x6e,  /* [1265] */
    (xdc_Char)0x74,  /* [1266] */
    (xdc_Char)0x3a,  /* [1267] */
    (xdc_Char)0x20,  /* [1268] */
    (xdc_Char)0x28,  /* [1269] */
    (xdc_Char)0x25,  /* [1270] */
    (xdc_Char)0x70,  /* [1271] */
    (xdc_Char)0x29,  /* [1272] */
    (xdc_Char)0x0,  /* [1273] */
    (xdc_Char)0x3c,  /* [1274] */
    (xdc_Char)0x2d,  /* [1275] */
    (xdc_Char)0x2d,  /* [1276] */
    (xdc_Char)0x20,  /* [1277] */
    (xdc_Char)0x70,  /* [1278] */
    (xdc_Char)0x72,  /* [1279] */
    (xdc_Char)0x69,  /* [1280] */
    (xdc_Char)0x6e,  /* [1281] */
    (xdc_Char)0x74,  /* [1282] */
    (xdc_Char)0x3a,  /* [1283] */
    (xdc_Char)0x20,  /* [1284] */
    (xdc_Char)0x76,  /* [1285] */
    (xdc_Char)0x6f,  /* [1286] */
    (xdc_Char)0x69,  /* [1287] */
    (xdc_Char)0x64,  /* [1288] */
    (xdc_Char)0x0,  /* [1289] */
    (xdc_Char)0x2d,  /* [1290] */
    (xdc_Char)0x2d,  /* [1291] */
    (xdc_Char)0x3e,  /* [1292] */
    (xdc_Char)0x20,  /* [1293] */
    (xdc_Char)0x72,  /* [1294] */
    (xdc_Char)0x61,  /* [1295] */
    (xdc_Char)0x69,  /* [1296] */
    (xdc_Char)0x73,  /* [1297] */
    (xdc_Char)0x65,  /* [1298] */
    (xdc_Char)0x58,  /* [1299] */
    (xdc_Char)0x3a,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x28,  /* [1302] */
    (xdc_Char)0x25,  /* [1303] */
    (xdc_Char)0x70,  /* [1304] */
    (xdc_Char)0x2c,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x25,  /* [1307] */
    (xdc_Char)0x64,  /* [1308] */
    (xdc_Char)0x2c,  /* [1309] */
    (xdc_Char)0x20,  /* [1310] */
    (xdc_Char)0x30,  /* [1311] */
    (xdc_Char)0x78,  /* [1312] */
    (xdc_Char)0x25,  /* [1313] */
    (xdc_Char)0x78,  /* [1314] */
    (xdc_Char)0x2c,  /* [1315] */
    (xdc_Char)0x20,  /* [1316] */
    (xdc_Char)0x25,  /* [1317] */
    (xdc_Char)0x64,  /* [1318] */
    (xdc_Char)0x29,  /* [1319] */
    (xdc_Char)0x0,  /* [1320] */
    (xdc_Char)0x3c,  /* [1321] */
    (xdc_Char)0x2d,  /* [1322] */
    (xdc_Char)0x2d,  /* [1323] */
    (xdc_Char)0x20,  /* [1324] */
    (xdc_Char)0x72,  /* [1325] */
    (xdc_Char)0x61,  /* [1326] */
    (xdc_Char)0x69,  /* [1327] */
    (xdc_Char)0x73,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x58,  /* [1330] */
    (xdc_Char)0x3a,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x76,  /* [1333] */
    (xdc_Char)0x6f,  /* [1334] */
    (xdc_Char)0x69,  /* [1335] */
    (xdc_Char)0x64,  /* [1336] */
    (xdc_Char)0x0,  /* [1337] */
    (xdc_Char)0x3c,  /* [1338] */
    (xdc_Char)0x2d,  /* [1339] */
    (xdc_Char)0x2d,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x63,  /* [1342] */
    (xdc_Char)0x6f,  /* [1343] */
    (xdc_Char)0x6e,  /* [1344] */
    (xdc_Char)0x73,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x72,  /* [1347] */
    (xdc_Char)0x75,  /* [1348] */
    (xdc_Char)0x63,  /* [1349] */
    (xdc_Char)0x74,  /* [1350] */
    (xdc_Char)0x3a,  /* [1351] */
    (xdc_Char)0x20,  /* [1352] */
    (xdc_Char)0x25,  /* [1353] */
    (xdc_Char)0x70,  /* [1354] */
    (xdc_Char)0x28,  /* [1355] */
    (xdc_Char)0x27,  /* [1356] */
    (xdc_Char)0x25,  /* [1357] */
    (xdc_Char)0x73,  /* [1358] */
    (xdc_Char)0x27,  /* [1359] */
    (xdc_Char)0x29,  /* [1360] */
    (xdc_Char)0x0,  /* [1361] */
    (xdc_Char)0x3c,  /* [1362] */
    (xdc_Char)0x2d,  /* [1363] */
    (xdc_Char)0x2d,  /* [1364] */
    (xdc_Char)0x20,  /* [1365] */
    (xdc_Char)0x63,  /* [1366] */
    (xdc_Char)0x72,  /* [1367] */
    (xdc_Char)0x65,  /* [1368] */
    (xdc_Char)0x61,  /* [1369] */
    (xdc_Char)0x74,  /* [1370] */
    (xdc_Char)0x65,  /* [1371] */
    (xdc_Char)0x3a,  /* [1372] */
    (xdc_Char)0x20,  /* [1373] */
    (xdc_Char)0x25,  /* [1374] */
    (xdc_Char)0x70,  /* [1375] */
    (xdc_Char)0x28,  /* [1376] */
    (xdc_Char)0x27,  /* [1377] */
    (xdc_Char)0x25,  /* [1378] */
    (xdc_Char)0x73,  /* [1379] */
    (xdc_Char)0x27,  /* [1380] */
    (xdc_Char)0x29,  /* [1381] */
    (xdc_Char)0x0,  /* [1382] */
    (xdc_Char)0x2d,  /* [1383] */
    (xdc_Char)0x2d,  /* [1384] */
    (xdc_Char)0x3e,  /* [1385] */
    (xdc_Char)0x20,  /* [1386] */
    (xdc_Char)0x64,  /* [1387] */
    (xdc_Char)0x65,  /* [1388] */
    (xdc_Char)0x73,  /* [1389] */
    (xdc_Char)0x74,  /* [1390] */
    (xdc_Char)0x72,  /* [1391] */
    (xdc_Char)0x75,  /* [1392] */
    (xdc_Char)0x63,  /* [1393] */
    (xdc_Char)0x74,  /* [1394] */
    (xdc_Char)0x3a,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x28,  /* [1397] */
    (xdc_Char)0x25,  /* [1398] */
    (xdc_Char)0x70,  /* [1399] */
    (xdc_Char)0x29,  /* [1400] */
    (xdc_Char)0x0,  /* [1401] */
    (xdc_Char)0x2d,  /* [1402] */
    (xdc_Char)0x2d,  /* [1403] */
    (xdc_Char)0x3e,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x64,  /* [1406] */
    (xdc_Char)0x65,  /* [1407] */
    (xdc_Char)0x6c,  /* [1408] */
    (xdc_Char)0x65,  /* [1409] */
    (xdc_Char)0x74,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x3a,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x28,  /* [1414] */
    (xdc_Char)0x25,  /* [1415] */
    (xdc_Char)0x70,  /* [1416] */
    (xdc_Char)0x29,  /* [1417] */
    (xdc_Char)0x0,  /* [1418] */
    (xdc_Char)0x45,  /* [1419] */
    (xdc_Char)0x52,  /* [1420] */
    (xdc_Char)0x52,  /* [1421] */
    (xdc_Char)0x4f,  /* [1422] */
    (xdc_Char)0x52,  /* [1423] */
    (xdc_Char)0x3a,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x25,  /* [1426] */
    (xdc_Char)0x24,  /* [1427] */
    (xdc_Char)0x46,  /* [1428] */
    (xdc_Char)0x25,  /* [1429] */
    (xdc_Char)0x24,  /* [1430] */
    (xdc_Char)0x53,  /* [1431] */
    (xdc_Char)0x0,  /* [1432] */
    (xdc_Char)0x57,  /* [1433] */
    (xdc_Char)0x41,  /* [1434] */
    (xdc_Char)0x52,  /* [1435] */
    (xdc_Char)0x4e,  /* [1436] */
    (xdc_Char)0x49,  /* [1437] */
    (xdc_Char)0x4e,  /* [1438] */
    (xdc_Char)0x47,  /* [1439] */
    (xdc_Char)0x3a,  /* [1440] */
    (xdc_Char)0x20,  /* [1441] */
    (xdc_Char)0x25,  /* [1442] */
    (xdc_Char)0x24,  /* [1443] */
    (xdc_Char)0x46,  /* [1444] */
    (xdc_Char)0x25,  /* [1445] */
    (xdc_Char)0x24,  /* [1446] */
    (xdc_Char)0x53,  /* [1447] */
    (xdc_Char)0x0,  /* [1448] */
    (xdc_Char)0x25,  /* [1449] */
    (xdc_Char)0x24,  /* [1450] */
    (xdc_Char)0x46,  /* [1451] */
    (xdc_Char)0x25,  /* [1452] */
    (xdc_Char)0x24,  /* [1453] */
    (xdc_Char)0x53,  /* [1454] */
    (xdc_Char)0x0,  /* [1455] */
    (xdc_Char)0x53,  /* [1456] */
    (xdc_Char)0x74,  /* [1457] */
    (xdc_Char)0x61,  /* [1458] */
    (xdc_Char)0x72,  /* [1459] */
    (xdc_Char)0x74,  /* [1460] */
    (xdc_Char)0x3a,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x25,  /* [1463] */
    (xdc_Char)0x24,  /* [1464] */
    (xdc_Char)0x53,  /* [1465] */
    (xdc_Char)0x0,  /* [1466] */
    (xdc_Char)0x53,  /* [1467] */
    (xdc_Char)0x74,  /* [1468] */
    (xdc_Char)0x6f,  /* [1469] */
    (xdc_Char)0x70,  /* [1470] */
    (xdc_Char)0x3a,  /* [1471] */
    (xdc_Char)0x20,  /* [1472] */
    (xdc_Char)0x25,  /* [1473] */
    (xdc_Char)0x24,  /* [1474] */
    (xdc_Char)0x53,  /* [1475] */
    (xdc_Char)0x0,  /* [1476] */
    (xdc_Char)0x53,  /* [1477] */
    (xdc_Char)0x74,  /* [1478] */
    (xdc_Char)0x61,  /* [1479] */
    (xdc_Char)0x72,  /* [1480] */
    (xdc_Char)0x74,  /* [1481] */
    (xdc_Char)0x49,  /* [1482] */
    (xdc_Char)0x6e,  /* [1483] */
    (xdc_Char)0x73,  /* [1484] */
    (xdc_Char)0x74,  /* [1485] */
    (xdc_Char)0x61,  /* [1486] */
    (xdc_Char)0x6e,  /* [1487] */
    (xdc_Char)0x63,  /* [1488] */
    (xdc_Char)0x65,  /* [1489] */
    (xdc_Char)0x3a,  /* [1490] */
    (xdc_Char)0x20,  /* [1491] */
    (xdc_Char)0x25,  /* [1492] */
    (xdc_Char)0x24,  /* [1493] */
    (xdc_Char)0x53,  /* [1494] */
    (xdc_Char)0x0,  /* [1495] */
    (xdc_Char)0x53,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x6f,  /* [1498] */
    (xdc_Char)0x70,  /* [1499] */
    (xdc_Char)0x49,  /* [1500] */
    (xdc_Char)0x6e,  /* [1501] */
    (xdc_Char)0x73,  /* [1502] */
    (xdc_Char)0x74,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x63,  /* [1506] */
    (xdc_Char)0x65,  /* [1507] */
    (xdc_Char)0x3a,  /* [1508] */
    (xdc_Char)0x20,  /* [1509] */
    (xdc_Char)0x25,  /* [1510] */
    (xdc_Char)0x24,  /* [1511] */
    (xdc_Char)0x53,  /* [1512] */
    (xdc_Char)0x0,  /* [1513] */
    (xdc_Char)0x2d,  /* [1514] */
    (xdc_Char)0x2d,  /* [1515] */
    (xdc_Char)0x3e,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x61,  /* [1518] */
    (xdc_Char)0x64,  /* [1519] */
    (xdc_Char)0x64,  /* [1520] */
    (xdc_Char)0x4d,  /* [1521] */
    (xdc_Char)0x6f,  /* [1522] */
    (xdc_Char)0x64,  /* [1523] */
    (xdc_Char)0x75,  /* [1524] */
    (xdc_Char)0x6c,  /* [1525] */
    (xdc_Char)0x65,  /* [1526] */
    (xdc_Char)0x3a,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x28,  /* [1529] */
    (xdc_Char)0x25,  /* [1530] */
    (xdc_Char)0x70,  /* [1531] */
    (xdc_Char)0x2c,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x30,  /* [1534] */
    (xdc_Char)0x78,  /* [1535] */
    (xdc_Char)0x25,  /* [1536] */
    (xdc_Char)0x78,  /* [1537] */
    (xdc_Char)0x29,  /* [1538] */
    (xdc_Char)0x0,  /* [1539] */
    (xdc_Char)0x3c,  /* [1540] */
    (xdc_Char)0x2d,  /* [1541] */
    (xdc_Char)0x2d,  /* [1542] */
    (xdc_Char)0x20,  /* [1543] */
    (xdc_Char)0x61,  /* [1544] */
    (xdc_Char)0x64,  /* [1545] */
    (xdc_Char)0x64,  /* [1546] */
    (xdc_Char)0x4d,  /* [1547] */
    (xdc_Char)0x6f,  /* [1548] */
    (xdc_Char)0x64,  /* [1549] */
    (xdc_Char)0x75,  /* [1550] */
    (xdc_Char)0x6c,  /* [1551] */
    (xdc_Char)0x65,  /* [1552] */
    (xdc_Char)0x3a,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x25,  /* [1555] */
    (xdc_Char)0x64,  /* [1556] */
    (xdc_Char)0x0,  /* [1557] */
    (xdc_Char)0x2d,  /* [1558] */
    (xdc_Char)0x2d,  /* [1559] */
    (xdc_Char)0x3e,  /* [1560] */
    (xdc_Char)0x20,  /* [1561] */
    (xdc_Char)0x66,  /* [1562] */
    (xdc_Char)0x69,  /* [1563] */
    (xdc_Char)0x6e,  /* [1564] */
    (xdc_Char)0x64,  /* [1565] */
    (xdc_Char)0x42,  /* [1566] */
    (xdc_Char)0x79,  /* [1567] */
    (xdc_Char)0x4e,  /* [1568] */
    (xdc_Char)0x61,  /* [1569] */
    (xdc_Char)0x6d,  /* [1570] */
    (xdc_Char)0x65,  /* [1571] */
    (xdc_Char)0x3a,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x28,  /* [1574] */
    (xdc_Char)0x30,  /* [1575] */
    (xdc_Char)0x78,  /* [1576] */
    (xdc_Char)0x25,  /* [1577] */
    (xdc_Char)0x78,  /* [1578] */
    (xdc_Char)0x29,  /* [1579] */
    (xdc_Char)0x0,  /* [1580] */
    (xdc_Char)0x3c,  /* [1581] */
    (xdc_Char)0x2d,  /* [1582] */
    (xdc_Char)0x2d,  /* [1583] */
    (xdc_Char)0x20,  /* [1584] */
    (xdc_Char)0x66,  /* [1585] */
    (xdc_Char)0x69,  /* [1586] */
    (xdc_Char)0x6e,  /* [1587] */
    (xdc_Char)0x64,  /* [1588] */
    (xdc_Char)0x42,  /* [1589] */
    (xdc_Char)0x79,  /* [1590] */
    (xdc_Char)0x4e,  /* [1591] */
    (xdc_Char)0x61,  /* [1592] */
    (xdc_Char)0x6d,  /* [1593] */
    (xdc_Char)0x65,  /* [1594] */
    (xdc_Char)0x3a,  /* [1595] */
    (xdc_Char)0x20,  /* [1596] */
    (xdc_Char)0x25,  /* [1597] */
    (xdc_Char)0x70,  /* [1598] */
    (xdc_Char)0x0,  /* [1599] */
    (xdc_Char)0x2d,  /* [1600] */
    (xdc_Char)0x2d,  /* [1601] */
    (xdc_Char)0x3e,  /* [1602] */
    (xdc_Char)0x20,  /* [1603] */
    (xdc_Char)0x66,  /* [1604] */
    (xdc_Char)0x69,  /* [1605] */
    (xdc_Char)0x6e,  /* [1606] */
    (xdc_Char)0x64,  /* [1607] */
    (xdc_Char)0x42,  /* [1608] */
    (xdc_Char)0x79,  /* [1609] */
    (xdc_Char)0x4e,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x6d,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x50,  /* [1614] */
    (xdc_Char)0x61,  /* [1615] */
    (xdc_Char)0x74,  /* [1616] */
    (xdc_Char)0x74,  /* [1617] */
    (xdc_Char)0x65,  /* [1618] */
    (xdc_Char)0x72,  /* [1619] */
    (xdc_Char)0x6e,  /* [1620] */
    (xdc_Char)0x3a,  /* [1621] */
    (xdc_Char)0x20,  /* [1622] */
    (xdc_Char)0x28,  /* [1623] */
    (xdc_Char)0x30,  /* [1624] */
    (xdc_Char)0x78,  /* [1625] */
    (xdc_Char)0x25,  /* [1626] */
    (xdc_Char)0x78,  /* [1627] */
    (xdc_Char)0x2c,  /* [1628] */
    (xdc_Char)0x20,  /* [1629] */
    (xdc_Char)0x25,  /* [1630] */
    (xdc_Char)0x64,  /* [1631] */
    (xdc_Char)0x2c,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x25,  /* [1634] */
    (xdc_Char)0x70,  /* [1635] */
    (xdc_Char)0x29,  /* [1636] */
    (xdc_Char)0x0,  /* [1637] */
    (xdc_Char)0x3c,  /* [1638] */
    (xdc_Char)0x2d,  /* [1639] */
    (xdc_Char)0x2d,  /* [1640] */
    (xdc_Char)0x20,  /* [1641] */
    (xdc_Char)0x66,  /* [1642] */
    (xdc_Char)0x69,  /* [1643] */
    (xdc_Char)0x6e,  /* [1644] */
    (xdc_Char)0x64,  /* [1645] */
    (xdc_Char)0x42,  /* [1646] */
    (xdc_Char)0x79,  /* [1647] */
    (xdc_Char)0x4e,  /* [1648] */
    (xdc_Char)0x61,  /* [1649] */
    (xdc_Char)0x6d,  /* [1650] */
    (xdc_Char)0x65,  /* [1651] */
    (xdc_Char)0x50,  /* [1652] */
    (xdc_Char)0x61,  /* [1653] */
    (xdc_Char)0x74,  /* [1654] */
    (xdc_Char)0x74,  /* [1655] */
    (xdc_Char)0x65,  /* [1656] */
    (xdc_Char)0x72,  /* [1657] */
    (xdc_Char)0x6e,  /* [1658] */
    (xdc_Char)0x3a,  /* [1659] */
    (xdc_Char)0x20,  /* [1660] */
    (xdc_Char)0x25,  /* [1661] */
    (xdc_Char)0x70,  /* [1662] */
    (xdc_Char)0x0,  /* [1663] */
    (xdc_Char)0x2d,  /* [1664] */
    (xdc_Char)0x2d,  /* [1665] */
    (xdc_Char)0x3e,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x66,  /* [1668] */
    (xdc_Char)0x69,  /* [1669] */
    (xdc_Char)0x6e,  /* [1670] */
    (xdc_Char)0x64,  /* [1671] */
    (xdc_Char)0x42,  /* [1672] */
    (xdc_Char)0x79,  /* [1673] */
    (xdc_Char)0x49,  /* [1674] */
    (xdc_Char)0x64,  /* [1675] */
    (xdc_Char)0x3a,  /* [1676] */
    (xdc_Char)0x20,  /* [1677] */
    (xdc_Char)0x28,  /* [1678] */
    (xdc_Char)0x25,  /* [1679] */
    (xdc_Char)0x64,  /* [1680] */
    (xdc_Char)0x29,  /* [1681] */
    (xdc_Char)0x0,  /* [1682] */
    (xdc_Char)0x3c,  /* [1683] */
    (xdc_Char)0x2d,  /* [1684] */
    (xdc_Char)0x2d,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x66,  /* [1687] */
    (xdc_Char)0x69,  /* [1688] */
    (xdc_Char)0x6e,  /* [1689] */
    (xdc_Char)0x64,  /* [1690] */
    (xdc_Char)0x42,  /* [1691] */
    (xdc_Char)0x79,  /* [1692] */
    (xdc_Char)0x49,  /* [1693] */
    (xdc_Char)0x64,  /* [1694] */
    (xdc_Char)0x3a,  /* [1695] */
    (xdc_Char)0x20,  /* [1696] */
    (xdc_Char)0x25,  /* [1697] */
    (xdc_Char)0x70,  /* [1698] */
    (xdc_Char)0x0,  /* [1699] */
    (xdc_Char)0x2d,  /* [1700] */
    (xdc_Char)0x2d,  /* [1701] */
    (xdc_Char)0x3e,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x67,  /* [1704] */
    (xdc_Char)0x65,  /* [1705] */
    (xdc_Char)0x74,  /* [1706] */
    (xdc_Char)0x4d,  /* [1707] */
    (xdc_Char)0x61,  /* [1708] */
    (xdc_Char)0x73,  /* [1709] */
    (xdc_Char)0x6b,  /* [1710] */
    (xdc_Char)0x3a,  /* [1711] */
    (xdc_Char)0x20,  /* [1712] */
    (xdc_Char)0x28,  /* [1713] */
    (xdc_Char)0x30,  /* [1714] */
    (xdc_Char)0x78,  /* [1715] */
    (xdc_Char)0x25,  /* [1716] */
    (xdc_Char)0x78,  /* [1717] */
    (xdc_Char)0x2c,  /* [1718] */
    (xdc_Char)0x20,  /* [1719] */
    (xdc_Char)0x25,  /* [1720] */
    (xdc_Char)0x70,  /* [1721] */
    (xdc_Char)0x29,  /* [1722] */
    (xdc_Char)0x0,  /* [1723] */
    (xdc_Char)0x3c,  /* [1724] */
    (xdc_Char)0x2d,  /* [1725] */
    (xdc_Char)0x2d,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x67,  /* [1728] */
    (xdc_Char)0x65,  /* [1729] */
    (xdc_Char)0x74,  /* [1730] */
    (xdc_Char)0x4d,  /* [1731] */
    (xdc_Char)0x61,  /* [1732] */
    (xdc_Char)0x73,  /* [1733] */
    (xdc_Char)0x6b,  /* [1734] */
    (xdc_Char)0x3a,  /* [1735] */
    (xdc_Char)0x20,  /* [1736] */
    (xdc_Char)0x25,  /* [1737] */
    (xdc_Char)0x64,  /* [1738] */
    (xdc_Char)0x0,  /* [1739] */
    (xdc_Char)0x2d,  /* [1740] */
    (xdc_Char)0x2d,  /* [1741] */
    (xdc_Char)0x3e,  /* [1742] */
    (xdc_Char)0x20,  /* [1743] */
    (xdc_Char)0x69,  /* [1744] */
    (xdc_Char)0x73,  /* [1745] */
    (xdc_Char)0x4d,  /* [1746] */
    (xdc_Char)0x65,  /* [1747] */
    (xdc_Char)0x6d,  /* [1748] */
    (xdc_Char)0x62,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x72,  /* [1751] */
    (xdc_Char)0x3a,  /* [1752] */
    (xdc_Char)0x20,  /* [1753] */
    (xdc_Char)0x28,  /* [1754] */
    (xdc_Char)0x25,  /* [1755] */
    (xdc_Char)0x64,  /* [1756] */
    (xdc_Char)0x29,  /* [1757] */
    (xdc_Char)0x0,  /* [1758] */
    (xdc_Char)0x3c,  /* [1759] */
    (xdc_Char)0x2d,  /* [1760] */
    (xdc_Char)0x2d,  /* [1761] */
    (xdc_Char)0x20,  /* [1762] */
    (xdc_Char)0x69,  /* [1763] */
    (xdc_Char)0x73,  /* [1764] */
    (xdc_Char)0x4d,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x6d,  /* [1767] */
    (xdc_Char)0x62,  /* [1768] */
    (xdc_Char)0x65,  /* [1769] */
    (xdc_Char)0x72,  /* [1770] */
    (xdc_Char)0x3a,  /* [1771] */
    (xdc_Char)0x20,  /* [1772] */
    (xdc_Char)0x25,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x0,  /* [1775] */
    (xdc_Char)0x2d,  /* [1776] */
    (xdc_Char)0x2d,  /* [1777] */
    (xdc_Char)0x3e,  /* [1778] */
    (xdc_Char)0x20,  /* [1779] */
    (xdc_Char)0x67,  /* [1780] */
    (xdc_Char)0x65,  /* [1781] */
    (xdc_Char)0x74,  /* [1782] */
    (xdc_Char)0x4e,  /* [1783] */
    (xdc_Char)0x65,  /* [1784] */
    (xdc_Char)0x78,  /* [1785] */
    (xdc_Char)0x74,  /* [1786] */
    (xdc_Char)0x4d,  /* [1787] */
    (xdc_Char)0x6f,  /* [1788] */
    (xdc_Char)0x64,  /* [1789] */
    (xdc_Char)0x75,  /* [1790] */
    (xdc_Char)0x6c,  /* [1791] */
    (xdc_Char)0x65,  /* [1792] */
    (xdc_Char)0x3a,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x28,  /* [1795] */
    (xdc_Char)0x25,  /* [1796] */
    (xdc_Char)0x70,  /* [1797] */
    (xdc_Char)0x29,  /* [1798] */
    (xdc_Char)0x0,  /* [1799] */
    (xdc_Char)0x3c,  /* [1800] */
    (xdc_Char)0x2d,  /* [1801] */
    (xdc_Char)0x2d,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x67,  /* [1804] */
    (xdc_Char)0x65,  /* [1805] */
    (xdc_Char)0x74,  /* [1806] */
    (xdc_Char)0x4e,  /* [1807] */
    (xdc_Char)0x65,  /* [1808] */
    (xdc_Char)0x78,  /* [1809] */
    (xdc_Char)0x74,  /* [1810] */
    (xdc_Char)0x4d,  /* [1811] */
    (xdc_Char)0x6f,  /* [1812] */
    (xdc_Char)0x64,  /* [1813] */
    (xdc_Char)0x75,  /* [1814] */
    (xdc_Char)0x6c,  /* [1815] */
    (xdc_Char)0x65,  /* [1816] */
    (xdc_Char)0x3a,  /* [1817] */
    (xdc_Char)0x20,  /* [1818] */
    (xdc_Char)0x25,  /* [1819] */
    (xdc_Char)0x70,  /* [1820] */
    (xdc_Char)0x0,  /* [1821] */
    (xdc_Char)0x2d,  /* [1822] */
    (xdc_Char)0x2d,  /* [1823] */
    (xdc_Char)0x3e,  /* [1824] */
    (xdc_Char)0x20,  /* [1825] */
    (xdc_Char)0x67,  /* [1826] */
    (xdc_Char)0x65,  /* [1827] */
    (xdc_Char)0x74,  /* [1828] */
    (xdc_Char)0x4d,  /* [1829] */
    (xdc_Char)0x6f,  /* [1830] */
    (xdc_Char)0x64,  /* [1831] */
    (xdc_Char)0x75,  /* [1832] */
    (xdc_Char)0x6c,  /* [1833] */
    (xdc_Char)0x65,  /* [1834] */
    (xdc_Char)0x4e,  /* [1835] */
    (xdc_Char)0x61,  /* [1836] */
    (xdc_Char)0x6d,  /* [1837] */
    (xdc_Char)0x65,  /* [1838] */
    (xdc_Char)0x3a,  /* [1839] */
    (xdc_Char)0x20,  /* [1840] */
    (xdc_Char)0x28,  /* [1841] */
    (xdc_Char)0x25,  /* [1842] */
    (xdc_Char)0x70,  /* [1843] */
    (xdc_Char)0x29,  /* [1844] */
    (xdc_Char)0x0,  /* [1845] */
    (xdc_Char)0x3c,  /* [1846] */
    (xdc_Char)0x2d,  /* [1847] */
    (xdc_Char)0x2d,  /* [1848] */
    (xdc_Char)0x20,  /* [1849] */
    (xdc_Char)0x67,  /* [1850] */
    (xdc_Char)0x65,  /* [1851] */
    (xdc_Char)0x74,  /* [1852] */
    (xdc_Char)0x4d,  /* [1853] */
    (xdc_Char)0x6f,  /* [1854] */
    (xdc_Char)0x64,  /* [1855] */
    (xdc_Char)0x75,  /* [1856] */
    (xdc_Char)0x6c,  /* [1857] */
    (xdc_Char)0x65,  /* [1858] */
    (xdc_Char)0x4e,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x6d,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x3a,  /* [1863] */
    (xdc_Char)0x20,  /* [1864] */
    (xdc_Char)0x30,  /* [1865] */
    (xdc_Char)0x78,  /* [1866] */
    (xdc_Char)0x25,  /* [1867] */
    (xdc_Char)0x78,  /* [1868] */
    (xdc_Char)0x0,  /* [1869] */
    (xdc_Char)0x2d,  /* [1870] */
    (xdc_Char)0x2d,  /* [1871] */
    (xdc_Char)0x3e,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x67,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x74,  /* [1876] */
    (xdc_Char)0x4d,  /* [1877] */
    (xdc_Char)0x6f,  /* [1878] */
    (xdc_Char)0x64,  /* [1879] */
    (xdc_Char)0x75,  /* [1880] */
    (xdc_Char)0x6c,  /* [1881] */
    (xdc_Char)0x65,  /* [1882] */
    (xdc_Char)0x49,  /* [1883] */
    (xdc_Char)0x64,  /* [1884] */
    (xdc_Char)0x3a,  /* [1885] */
    (xdc_Char)0x20,  /* [1886] */
    (xdc_Char)0x28,  /* [1887] */
    (xdc_Char)0x25,  /* [1888] */
    (xdc_Char)0x70,  /* [1889] */
    (xdc_Char)0x29,  /* [1890] */
    (xdc_Char)0x0,  /* [1891] */
    (xdc_Char)0x3c,  /* [1892] */
    (xdc_Char)0x2d,  /* [1893] */
    (xdc_Char)0x2d,  /* [1894] */
    (xdc_Char)0x20,  /* [1895] */
    (xdc_Char)0x67,  /* [1896] */
    (xdc_Char)0x65,  /* [1897] */
    (xdc_Char)0x74,  /* [1898] */
    (xdc_Char)0x4d,  /* [1899] */
    (xdc_Char)0x6f,  /* [1900] */
    (xdc_Char)0x64,  /* [1901] */
    (xdc_Char)0x75,  /* [1902] */
    (xdc_Char)0x6c,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x49,  /* [1905] */
    (xdc_Char)0x64,  /* [1906] */
    (xdc_Char)0x3a,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x25,  /* [1909] */
    (xdc_Char)0x64,  /* [1910] */
    (xdc_Char)0x0,  /* [1911] */
    (xdc_Char)0x4c,  /* [1912] */
    (xdc_Char)0x44,  /* [1913] */
    (xdc_Char)0x5f,  /* [1914] */
    (xdc_Char)0x63,  /* [1915] */
    (xdc_Char)0x6d,  /* [1916] */
    (xdc_Char)0x64,  /* [1917] */
    (xdc_Char)0x52,  /* [1918] */
    (xdc_Char)0x63,  /* [1919] */
    (xdc_Char)0x76,  /* [1920] */
    (xdc_Char)0x64,  /* [1921] */
    (xdc_Char)0x3a,  /* [1922] */
    (xdc_Char)0x20,  /* [1923] */
    (xdc_Char)0x52,  /* [1924] */
    (xdc_Char)0x65,  /* [1925] */
    (xdc_Char)0x63,  /* [1926] */
    (xdc_Char)0x65,  /* [1927] */
    (xdc_Char)0x69,  /* [1928] */
    (xdc_Char)0x76,  /* [1929] */
    (xdc_Char)0x65,  /* [1930] */
    (xdc_Char)0x64,  /* [1931] */
    (xdc_Char)0x20,  /* [1932] */
    (xdc_Char)0x63,  /* [1933] */
    (xdc_Char)0x6f,  /* [1934] */
    (xdc_Char)0x6d,  /* [1935] */
    (xdc_Char)0x6d,  /* [1936] */
    (xdc_Char)0x61,  /* [1937] */
    (xdc_Char)0x6e,  /* [1938] */
    (xdc_Char)0x64,  /* [1939] */
    (xdc_Char)0x3a,  /* [1940] */
    (xdc_Char)0x20,  /* [1941] */
    (xdc_Char)0x25,  /* [1942] */
    (xdc_Char)0x64,  /* [1943] */
    (xdc_Char)0x2c,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x61,  /* [1946] */
    (xdc_Char)0x72,  /* [1947] */
    (xdc_Char)0x67,  /* [1948] */
    (xdc_Char)0x30,  /* [1949] */
    (xdc_Char)0x3a,  /* [1950] */
    (xdc_Char)0x20,  /* [1951] */
    (xdc_Char)0x30,  /* [1952] */
    (xdc_Char)0x78,  /* [1953] */
    (xdc_Char)0x25,  /* [1954] */
    (xdc_Char)0x78,  /* [1955] */
    (xdc_Char)0x2c,  /* [1956] */
    (xdc_Char)0x20,  /* [1957] */
    (xdc_Char)0x61,  /* [1958] */
    (xdc_Char)0x72,  /* [1959] */
    (xdc_Char)0x67,  /* [1960] */
    (xdc_Char)0x31,  /* [1961] */
    (xdc_Char)0x3a,  /* [1962] */
    (xdc_Char)0x20,  /* [1963] */
    (xdc_Char)0x30,  /* [1964] */
    (xdc_Char)0x78,  /* [1965] */
    (xdc_Char)0x25,  /* [1966] */
    (xdc_Char)0x78,  /* [1967] */
    (xdc_Char)0x0,  /* [1968] */
    (xdc_Char)0x4c,  /* [1969] */
    (xdc_Char)0x44,  /* [1970] */
    (xdc_Char)0x5f,  /* [1971] */
    (xdc_Char)0x77,  /* [1972] */
    (xdc_Char)0x72,  /* [1973] */
    (xdc_Char)0x69,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x4d,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x73,  /* [1979] */
    (xdc_Char)0x6b,  /* [1980] */
    (xdc_Char)0x3a,  /* [1981] */
    (xdc_Char)0x20,  /* [1982] */
    (xdc_Char)0x4d,  /* [1983] */
    (xdc_Char)0x61,  /* [1984] */
    (xdc_Char)0x73,  /* [1985] */
    (xdc_Char)0x6b,  /* [1986] */
    (xdc_Char)0x20,  /* [1987] */
    (xdc_Char)0x61,  /* [1988] */
    (xdc_Char)0x64,  /* [1989] */
    (xdc_Char)0x64,  /* [1990] */
    (xdc_Char)0x72,  /* [1991] */
    (xdc_Char)0x65,  /* [1992] */
    (xdc_Char)0x73,  /* [1993] */
    (xdc_Char)0x3a,  /* [1994] */
    (xdc_Char)0x20,  /* [1995] */
    (xdc_Char)0x30,  /* [1996] */
    (xdc_Char)0x78,  /* [1997] */
    (xdc_Char)0x25,  /* [1998] */
    (xdc_Char)0x78,  /* [1999] */
    (xdc_Char)0x2c,  /* [2000] */
    (xdc_Char)0x20,  /* [2001] */
    (xdc_Char)0x4e,  /* [2002] */
    (xdc_Char)0x65,  /* [2003] */
    (xdc_Char)0x77,  /* [2004] */
    (xdc_Char)0x20,  /* [2005] */
    (xdc_Char)0x6d,  /* [2006] */
    (xdc_Char)0x61,  /* [2007] */
    (xdc_Char)0x73,  /* [2008] */
    (xdc_Char)0x6b,  /* [2009] */
    (xdc_Char)0x20,  /* [2010] */
    (xdc_Char)0x76,  /* [2011] */
    (xdc_Char)0x61,  /* [2012] */
    (xdc_Char)0x6c,  /* [2013] */
    (xdc_Char)0x75,  /* [2014] */
    (xdc_Char)0x65,  /* [2015] */
    (xdc_Char)0x3a,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x30,  /* [2018] */
    (xdc_Char)0x78,  /* [2019] */
    (xdc_Char)0x25,  /* [2020] */
    (xdc_Char)0x78,  /* [2021] */
    (xdc_Char)0x0,  /* [2022] */
    (xdc_Char)0x2d,  /* [2023] */
    (xdc_Char)0x2d,  /* [2024] */
    (xdc_Char)0x3e,  /* [2025] */
    (xdc_Char)0x20,  /* [2026] */
    (xdc_Char)0x65,  /* [2027] */
    (xdc_Char)0x6e,  /* [2028] */
    (xdc_Char)0x74,  /* [2029] */
    (xdc_Char)0x65,  /* [2030] */
    (xdc_Char)0x72,  /* [2031] */
    (xdc_Char)0x3a,  /* [2032] */
    (xdc_Char)0x20,  /* [2033] */
    (xdc_Char)0x28,  /* [2034] */
    (xdc_Char)0x25,  /* [2035] */
    (xdc_Char)0x70,  /* [2036] */
    (xdc_Char)0x29,  /* [2037] */
    (xdc_Char)0x0,  /* [2038] */
    (xdc_Char)0x3c,  /* [2039] */
    (xdc_Char)0x2d,  /* [2040] */
    (xdc_Char)0x2d,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x65,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x74,  /* [2045] */
    (xdc_Char)0x65,  /* [2046] */
    (xdc_Char)0x72,  /* [2047] */
    (xdc_Char)0x3a,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x25,  /* [2050] */
    (xdc_Char)0x70,  /* [2051] */
    (xdc_Char)0x0,  /* [2052] */
    (xdc_Char)0x2d,  /* [2053] */
    (xdc_Char)0x2d,  /* [2054] */
    (xdc_Char)0x3e,  /* [2055] */
    (xdc_Char)0x20,  /* [2056] */
    (xdc_Char)0x6c,  /* [2057] */
    (xdc_Char)0x65,  /* [2058] */
    (xdc_Char)0x61,  /* [2059] */
    (xdc_Char)0x76,  /* [2060] */
    (xdc_Char)0x65,  /* [2061] */
    (xdc_Char)0x3a,  /* [2062] */
    (xdc_Char)0x20,  /* [2063] */
    (xdc_Char)0x28,  /* [2064] */
    (xdc_Char)0x25,  /* [2065] */
    (xdc_Char)0x70,  /* [2066] */
    (xdc_Char)0x2c,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x25,  /* [2069] */
    (xdc_Char)0x70,  /* [2070] */
    (xdc_Char)0x29,  /* [2071] */
    (xdc_Char)0x0,  /* [2072] */
    (xdc_Char)0x3c,  /* [2073] */
    (xdc_Char)0x2d,  /* [2074] */
    (xdc_Char)0x2d,  /* [2075] */
    (xdc_Char)0x20,  /* [2076] */
    (xdc_Char)0x6c,  /* [2077] */
    (xdc_Char)0x65,  /* [2078] */
    (xdc_Char)0x61,  /* [2079] */
    (xdc_Char)0x76,  /* [2080] */
    (xdc_Char)0x65,  /* [2081] */
    (xdc_Char)0x3a,  /* [2082] */
    (xdc_Char)0x20,  /* [2083] */
    (xdc_Char)0x76,  /* [2084] */
    (xdc_Char)0x6f,  /* [2085] */
    (xdc_Char)0x69,  /* [2086] */
    (xdc_Char)0x64,  /* [2087] */
    (xdc_Char)0x0,  /* [2088] */
    (xdc_Char)0x2d,  /* [2089] */
    (xdc_Char)0x2d,  /* [2090] */
    (xdc_Char)0x3e,  /* [2091] */
    (xdc_Char)0x20,  /* [2092] */
    (xdc_Char)0x70,  /* [2093] */
    (xdc_Char)0x65,  /* [2094] */
    (xdc_Char)0x6e,  /* [2095] */
    (xdc_Char)0x64,  /* [2096] */
    (xdc_Char)0x3a,  /* [2097] */
    (xdc_Char)0x20,  /* [2098] */
    (xdc_Char)0x28,  /* [2099] */
    (xdc_Char)0x25,  /* [2100] */
    (xdc_Char)0x70,  /* [2101] */
    (xdc_Char)0x2c,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x30,  /* [2104] */
    (xdc_Char)0x78,  /* [2105] */
    (xdc_Char)0x25,  /* [2106] */
    (xdc_Char)0x78,  /* [2107] */
    (xdc_Char)0x2c,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x25,  /* [2110] */
    (xdc_Char)0x70,  /* [2111] */
    (xdc_Char)0x29,  /* [2112] */
    (xdc_Char)0x0,  /* [2113] */
    (xdc_Char)0x3c,  /* [2114] */
    (xdc_Char)0x2d,  /* [2115] */
    (xdc_Char)0x2d,  /* [2116] */
    (xdc_Char)0x20,  /* [2117] */
    (xdc_Char)0x70,  /* [2118] */
    (xdc_Char)0x65,  /* [2119] */
    (xdc_Char)0x6e,  /* [2120] */
    (xdc_Char)0x64,  /* [2121] */
    (xdc_Char)0x3a,  /* [2122] */
    (xdc_Char)0x20,  /* [2123] */
    (xdc_Char)0x25,  /* [2124] */
    (xdc_Char)0x64,  /* [2125] */
    (xdc_Char)0x0,  /* [2126] */
    (xdc_Char)0x2d,  /* [2127] */
    (xdc_Char)0x2d,  /* [2128] */
    (xdc_Char)0x3e,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x70,  /* [2131] */
    (xdc_Char)0x6f,  /* [2132] */
    (xdc_Char)0x73,  /* [2133] */
    (xdc_Char)0x74,  /* [2134] */
    (xdc_Char)0x3a,  /* [2135] */
    (xdc_Char)0x20,  /* [2136] */
    (xdc_Char)0x28,  /* [2137] */
    (xdc_Char)0x25,  /* [2138] */
    (xdc_Char)0x70,  /* [2139] */
    (xdc_Char)0x2c,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x25,  /* [2142] */
    (xdc_Char)0x70,  /* [2143] */
    (xdc_Char)0x29,  /* [2144] */
    (xdc_Char)0x0,  /* [2145] */
    (xdc_Char)0x3c,  /* [2146] */
    (xdc_Char)0x2d,  /* [2147] */
    (xdc_Char)0x2d,  /* [2148] */
    (xdc_Char)0x20,  /* [2149] */
    (xdc_Char)0x70,  /* [2150] */
    (xdc_Char)0x6f,  /* [2151] */
    (xdc_Char)0x73,  /* [2152] */
    (xdc_Char)0x74,  /* [2153] */
    (xdc_Char)0x3a,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x25,  /* [2156] */
    (xdc_Char)0x64,  /* [2157] */
    (xdc_Char)0x0,  /* [2158] */
    (xdc_Char)0x2d,  /* [2159] */
    (xdc_Char)0x2d,  /* [2160] */
    (xdc_Char)0x3e,  /* [2161] */
    (xdc_Char)0x20,  /* [2162] */
    (xdc_Char)0x73,  /* [2163] */
    (xdc_Char)0x74,  /* [2164] */
    (xdc_Char)0x61,  /* [2165] */
    (xdc_Char)0x72,  /* [2166] */
    (xdc_Char)0x74,  /* [2167] */
    (xdc_Char)0x3a,  /* [2168] */
    (xdc_Char)0x20,  /* [2169] */
    (xdc_Char)0x28,  /* [2170] */
    (xdc_Char)0x25,  /* [2171] */
    (xdc_Char)0x70,  /* [2172] */
    (xdc_Char)0x29,  /* [2173] */
    (xdc_Char)0x0,  /* [2174] */
    (xdc_Char)0x3c,  /* [2175] */
    (xdc_Char)0x2d,  /* [2176] */
    (xdc_Char)0x2d,  /* [2177] */
    (xdc_Char)0x20,  /* [2178] */
    (xdc_Char)0x73,  /* [2179] */
    (xdc_Char)0x74,  /* [2180] */
    (xdc_Char)0x61,  /* [2181] */
    (xdc_Char)0x72,  /* [2182] */
    (xdc_Char)0x74,  /* [2183] */
    (xdc_Char)0x3a,  /* [2184] */
    (xdc_Char)0x20,  /* [2185] */
    (xdc_Char)0x25,  /* [2186] */
    (xdc_Char)0x64,  /* [2187] */
    (xdc_Char)0x0,  /* [2188] */
    (xdc_Char)0x2d,  /* [2189] */
    (xdc_Char)0x2d,  /* [2190] */
    (xdc_Char)0x3e,  /* [2191] */
    (xdc_Char)0x20,  /* [2192] */
    (xdc_Char)0x79,  /* [2193] */
    (xdc_Char)0x69,  /* [2194] */
    (xdc_Char)0x65,  /* [2195] */
    (xdc_Char)0x6c,  /* [2196] */
    (xdc_Char)0x64,  /* [2197] */
    (xdc_Char)0x3a,  /* [2198] */
    (xdc_Char)0x20,  /* [2199] */
    (xdc_Char)0x28,  /* [2200] */
    (xdc_Char)0x25,  /* [2201] */
    (xdc_Char)0x70,  /* [2202] */
    (xdc_Char)0x29,  /* [2203] */
    (xdc_Char)0x0,  /* [2204] */
    (xdc_Char)0x3c,  /* [2205] */
    (xdc_Char)0x2d,  /* [2206] */
    (xdc_Char)0x2d,  /* [2207] */
    (xdc_Char)0x20,  /* [2208] */
    (xdc_Char)0x79,  /* [2209] */
    (xdc_Char)0x69,  /* [2210] */
    (xdc_Char)0x65,  /* [2211] */
    (xdc_Char)0x6c,  /* [2212] */
    (xdc_Char)0x64,  /* [2213] */
    (xdc_Char)0x3a,  /* [2214] */
    (xdc_Char)0x20,  /* [2215] */
    (xdc_Char)0x25,  /* [2216] */
    (xdc_Char)0x64,  /* [2217] */
    (xdc_Char)0x0,  /* [2218] */
    (xdc_Char)0x2d,  /* [2219] */
    (xdc_Char)0x2d,  /* [2220] */
    (xdc_Char)0x3e,  /* [2221] */
    (xdc_Char)0x20,  /* [2222] */
    (xdc_Char)0x63,  /* [2223] */
    (xdc_Char)0x6f,  /* [2224] */
    (xdc_Char)0x6d,  /* [2225] */
    (xdc_Char)0x70,  /* [2226] */
    (xdc_Char)0x61,  /* [2227] */
    (xdc_Char)0x72,  /* [2228] */
    (xdc_Char)0x65,  /* [2229] */
    (xdc_Char)0x4f,  /* [2230] */
    (xdc_Char)0x73,  /* [2231] */
    (xdc_Char)0x50,  /* [2232] */
    (xdc_Char)0x72,  /* [2233] */
    (xdc_Char)0x69,  /* [2234] */
    (xdc_Char)0x6f,  /* [2235] */
    (xdc_Char)0x72,  /* [2236] */
    (xdc_Char)0x69,  /* [2237] */
    (xdc_Char)0x74,  /* [2238] */
    (xdc_Char)0x69,  /* [2239] */
    (xdc_Char)0x65,  /* [2240] */
    (xdc_Char)0x73,  /* [2241] */
    (xdc_Char)0x3a,  /* [2242] */
    (xdc_Char)0x20,  /* [2243] */
    (xdc_Char)0x28,  /* [2244] */
    (xdc_Char)0x25,  /* [2245] */
    (xdc_Char)0x64,  /* [2246] */
    (xdc_Char)0x2c,  /* [2247] */
    (xdc_Char)0x20,  /* [2248] */
    (xdc_Char)0x25,  /* [2249] */
    (xdc_Char)0x64,  /* [2250] */
    (xdc_Char)0x2c,  /* [2251] */
    (xdc_Char)0x20,  /* [2252] */
    (xdc_Char)0x25,  /* [2253] */
    (xdc_Char)0x70,  /* [2254] */
    (xdc_Char)0x29,  /* [2255] */
    (xdc_Char)0x0,  /* [2256] */
    (xdc_Char)0x3c,  /* [2257] */
    (xdc_Char)0x2d,  /* [2258] */
    (xdc_Char)0x2d,  /* [2259] */
    (xdc_Char)0x20,  /* [2260] */
    (xdc_Char)0x63,  /* [2261] */
    (xdc_Char)0x6f,  /* [2262] */
    (xdc_Char)0x6d,  /* [2263] */
    (xdc_Char)0x70,  /* [2264] */
    (xdc_Char)0x61,  /* [2265] */
    (xdc_Char)0x72,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x4f,  /* [2268] */
    (xdc_Char)0x73,  /* [2269] */
    (xdc_Char)0x50,  /* [2270] */
    (xdc_Char)0x72,  /* [2271] */
    (xdc_Char)0x69,  /* [2272] */
    (xdc_Char)0x6f,  /* [2273] */
    (xdc_Char)0x72,  /* [2274] */
    (xdc_Char)0x69,  /* [2275] */
    (xdc_Char)0x74,  /* [2276] */
    (xdc_Char)0x69,  /* [2277] */
    (xdc_Char)0x65,  /* [2278] */
    (xdc_Char)0x73,  /* [2279] */
    (xdc_Char)0x3a,  /* [2280] */
    (xdc_Char)0x20,  /* [2281] */
    (xdc_Char)0x25,  /* [2282] */
    (xdc_Char)0x64,  /* [2283] */
    (xdc_Char)0x0,  /* [2284] */
    (xdc_Char)0x2d,  /* [2285] */
    (xdc_Char)0x2d,  /* [2286] */
    (xdc_Char)0x3e,  /* [2287] */
    (xdc_Char)0x20,  /* [2288] */
    (xdc_Char)0x73,  /* [2289] */
    (xdc_Char)0x6c,  /* [2290] */
    (xdc_Char)0x65,  /* [2291] */
    (xdc_Char)0x65,  /* [2292] */
    (xdc_Char)0x70,  /* [2293] */
    (xdc_Char)0x3a,  /* [2294] */
    (xdc_Char)0x20,  /* [2295] */
    (xdc_Char)0x28,  /* [2296] */
    (xdc_Char)0x30,  /* [2297] */
    (xdc_Char)0x78,  /* [2298] */
    (xdc_Char)0x25,  /* [2299] */
    (xdc_Char)0x78,  /* [2300] */
    (xdc_Char)0x2c,  /* [2301] */
    (xdc_Char)0x20,  /* [2302] */
    (xdc_Char)0x25,  /* [2303] */
    (xdc_Char)0x70,  /* [2304] */
    (xdc_Char)0x29,  /* [2305] */
    (xdc_Char)0x0,  /* [2306] */
    (xdc_Char)0x3c,  /* [2307] */
    (xdc_Char)0x2d,  /* [2308] */
    (xdc_Char)0x2d,  /* [2309] */
    (xdc_Char)0x20,  /* [2310] */
    (xdc_Char)0x73,  /* [2311] */
    (xdc_Char)0x6c,  /* [2312] */
    (xdc_Char)0x65,  /* [2313] */
    (xdc_Char)0x65,  /* [2314] */
    (xdc_Char)0x70,  /* [2315] */
    (xdc_Char)0x3a,  /* [2316] */
    (xdc_Char)0x20,  /* [2317] */
    (xdc_Char)0x25,  /* [2318] */
    (xdc_Char)0x64,  /* [2319] */
    (xdc_Char)0x0,  /* [2320] */
    (xdc_Char)0x2d,  /* [2321] */
    (xdc_Char)0x2d,  /* [2322] */
    (xdc_Char)0x3e,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x6a,  /* [2325] */
    (xdc_Char)0x6f,  /* [2326] */
    (xdc_Char)0x69,  /* [2327] */
    (xdc_Char)0x6e,  /* [2328] */
    (xdc_Char)0x3a,  /* [2329] */
    (xdc_Char)0x20,  /* [2330] */
    (xdc_Char)0x28,  /* [2331] */
    (xdc_Char)0x25,  /* [2332] */
    (xdc_Char)0x70,  /* [2333] */
    (xdc_Char)0x2c,  /* [2334] */
    (xdc_Char)0x20,  /* [2335] */
    (xdc_Char)0x25,  /* [2336] */
    (xdc_Char)0x70,  /* [2337] */
    (xdc_Char)0x29,  /* [2338] */
    (xdc_Char)0x0,  /* [2339] */
    (xdc_Char)0x3c,  /* [2340] */
    (xdc_Char)0x2d,  /* [2341] */
    (xdc_Char)0x2d,  /* [2342] */
    (xdc_Char)0x20,  /* [2343] */
    (xdc_Char)0x6a,  /* [2344] */
    (xdc_Char)0x6f,  /* [2345] */
    (xdc_Char)0x69,  /* [2346] */
    (xdc_Char)0x6e,  /* [2347] */
    (xdc_Char)0x3a,  /* [2348] */
    (xdc_Char)0x20,  /* [2349] */
    (xdc_Char)0x25,  /* [2350] */
    (xdc_Char)0x64,  /* [2351] */
    (xdc_Char)0x0,  /* [2352] */
    (xdc_Char)0x2d,  /* [2353] */
    (xdc_Char)0x2d,  /* [2354] */
    (xdc_Char)0x3e,  /* [2355] */
    (xdc_Char)0x20,  /* [2356] */
    (xdc_Char)0x67,  /* [2357] */
    (xdc_Char)0x65,  /* [2358] */
    (xdc_Char)0x74,  /* [2359] */
    (xdc_Char)0x50,  /* [2360] */
    (xdc_Char)0x72,  /* [2361] */
    (xdc_Char)0x69,  /* [2362] */
    (xdc_Char)0x6f,  /* [2363] */
    (xdc_Char)0x72,  /* [2364] */
    (xdc_Char)0x69,  /* [2365] */
    (xdc_Char)0x74,  /* [2366] */
    (xdc_Char)0x79,  /* [2367] */
    (xdc_Char)0x3a,  /* [2368] */
    (xdc_Char)0x20,  /* [2369] */
    (xdc_Char)0x28,  /* [2370] */
    (xdc_Char)0x25,  /* [2371] */
    (xdc_Char)0x70,  /* [2372] */
    (xdc_Char)0x2c,  /* [2373] */
    (xdc_Char)0x20,  /* [2374] */
    (xdc_Char)0x25,  /* [2375] */
    (xdc_Char)0x70,  /* [2376] */
    (xdc_Char)0x29,  /* [2377] */
    (xdc_Char)0x0,  /* [2378] */
    (xdc_Char)0x3c,  /* [2379] */
    (xdc_Char)0x2d,  /* [2380] */
    (xdc_Char)0x2d,  /* [2381] */
    (xdc_Char)0x20,  /* [2382] */
    (xdc_Char)0x67,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x74,  /* [2385] */
    (xdc_Char)0x50,  /* [2386] */
    (xdc_Char)0x72,  /* [2387] */
    (xdc_Char)0x69,  /* [2388] */
    (xdc_Char)0x6f,  /* [2389] */
    (xdc_Char)0x72,  /* [2390] */
    (xdc_Char)0x69,  /* [2391] */
    (xdc_Char)0x74,  /* [2392] */
    (xdc_Char)0x79,  /* [2393] */
    (xdc_Char)0x3a,  /* [2394] */
    (xdc_Char)0x20,  /* [2395] */
    (xdc_Char)0x25,  /* [2396] */
    (xdc_Char)0x64,  /* [2397] */
    (xdc_Char)0x0,  /* [2398] */
    (xdc_Char)0x2d,  /* [2399] */
    (xdc_Char)0x2d,  /* [2400] */
    (xdc_Char)0x3e,  /* [2401] */
    (xdc_Char)0x20,  /* [2402] */
    (xdc_Char)0x73,  /* [2403] */
    (xdc_Char)0x65,  /* [2404] */
    (xdc_Char)0x74,  /* [2405] */
    (xdc_Char)0x50,  /* [2406] */
    (xdc_Char)0x72,  /* [2407] */
    (xdc_Char)0x69,  /* [2408] */
    (xdc_Char)0x6f,  /* [2409] */
    (xdc_Char)0x72,  /* [2410] */
    (xdc_Char)0x69,  /* [2411] */
    (xdc_Char)0x74,  /* [2412] */
    (xdc_Char)0x79,  /* [2413] */
    (xdc_Char)0x3a,  /* [2414] */
    (xdc_Char)0x20,  /* [2415] */
    (xdc_Char)0x28,  /* [2416] */
    (xdc_Char)0x25,  /* [2417] */
    (xdc_Char)0x70,  /* [2418] */
    (xdc_Char)0x2c,  /* [2419] */
    (xdc_Char)0x20,  /* [2420] */
    (xdc_Char)0x25,  /* [2421] */
    (xdc_Char)0x64,  /* [2422] */
    (xdc_Char)0x2c,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x25,  /* [2425] */
    (xdc_Char)0x70,  /* [2426] */
    (xdc_Char)0x29,  /* [2427] */
    (xdc_Char)0x0,  /* [2428] */
    (xdc_Char)0x3c,  /* [2429] */
    (xdc_Char)0x2d,  /* [2430] */
    (xdc_Char)0x2d,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x73,  /* [2433] */
    (xdc_Char)0x65,  /* [2434] */
    (xdc_Char)0x74,  /* [2435] */
    (xdc_Char)0x50,  /* [2436] */
    (xdc_Char)0x72,  /* [2437] */
    (xdc_Char)0x69,  /* [2438] */
    (xdc_Char)0x6f,  /* [2439] */
    (xdc_Char)0x72,  /* [2440] */
    (xdc_Char)0x69,  /* [2441] */
    (xdc_Char)0x74,  /* [2442] */
    (xdc_Char)0x79,  /* [2443] */
    (xdc_Char)0x3a,  /* [2444] */
    (xdc_Char)0x20,  /* [2445] */
    (xdc_Char)0x25,  /* [2446] */
    (xdc_Char)0x64,  /* [2447] */
    (xdc_Char)0x0,  /* [2448] */
    (xdc_Char)0x2d,  /* [2449] */
    (xdc_Char)0x2d,  /* [2450] */
    (xdc_Char)0x3e,  /* [2451] */
    (xdc_Char)0x20,  /* [2452] */
    (xdc_Char)0x67,  /* [2453] */
    (xdc_Char)0x65,  /* [2454] */
    (xdc_Char)0x74,  /* [2455] */
    (xdc_Char)0x4f,  /* [2456] */
    (xdc_Char)0x73,  /* [2457] */
    (xdc_Char)0x50,  /* [2458] */
    (xdc_Char)0x72,  /* [2459] */
    (xdc_Char)0x69,  /* [2460] */
    (xdc_Char)0x6f,  /* [2461] */
    (xdc_Char)0x72,  /* [2462] */
    (xdc_Char)0x69,  /* [2463] */
    (xdc_Char)0x74,  /* [2464] */
    (xdc_Char)0x79,  /* [2465] */
    (xdc_Char)0x3a,  /* [2466] */
    (xdc_Char)0x20,  /* [2467] */
    (xdc_Char)0x28,  /* [2468] */
    (xdc_Char)0x25,  /* [2469] */
    (xdc_Char)0x70,  /* [2470] */
    (xdc_Char)0x2c,  /* [2471] */
    (xdc_Char)0x20,  /* [2472] */
    (xdc_Char)0x25,  /* [2473] */
    (xdc_Char)0x70,  /* [2474] */
    (xdc_Char)0x29,  /* [2475] */
    (xdc_Char)0x0,  /* [2476] */
    (xdc_Char)0x3c,  /* [2477] */
    (xdc_Char)0x2d,  /* [2478] */
    (xdc_Char)0x2d,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x67,  /* [2481] */
    (xdc_Char)0x65,  /* [2482] */
    (xdc_Char)0x74,  /* [2483] */
    (xdc_Char)0x4f,  /* [2484] */
    (xdc_Char)0x73,  /* [2485] */
    (xdc_Char)0x50,  /* [2486] */
    (xdc_Char)0x72,  /* [2487] */
    (xdc_Char)0x69,  /* [2488] */
    (xdc_Char)0x6f,  /* [2489] */
    (xdc_Char)0x72,  /* [2490] */
    (xdc_Char)0x69,  /* [2491] */
    (xdc_Char)0x74,  /* [2492] */
    (xdc_Char)0x79,  /* [2493] */
    (xdc_Char)0x3a,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x25,  /* [2496] */
    (xdc_Char)0x64,  /* [2497] */
    (xdc_Char)0x0,  /* [2498] */
    (xdc_Char)0x2d,  /* [2499] */
    (xdc_Char)0x2d,  /* [2500] */
    (xdc_Char)0x3e,  /* [2501] */
    (xdc_Char)0x20,  /* [2502] */
    (xdc_Char)0x73,  /* [2503] */
    (xdc_Char)0x65,  /* [2504] */
    (xdc_Char)0x74,  /* [2505] */
    (xdc_Char)0x4f,  /* [2506] */
    (xdc_Char)0x73,  /* [2507] */
    (xdc_Char)0x50,  /* [2508] */
    (xdc_Char)0x72,  /* [2509] */
    (xdc_Char)0x69,  /* [2510] */
    (xdc_Char)0x6f,  /* [2511] */
    (xdc_Char)0x72,  /* [2512] */
    (xdc_Char)0x69,  /* [2513] */
    (xdc_Char)0x74,  /* [2514] */
    (xdc_Char)0x79,  /* [2515] */
    (xdc_Char)0x3a,  /* [2516] */
    (xdc_Char)0x20,  /* [2517] */
    (xdc_Char)0x28,  /* [2518] */
    (xdc_Char)0x25,  /* [2519] */
    (xdc_Char)0x70,  /* [2520] */
    (xdc_Char)0x2c,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x25,  /* [2523] */
    (xdc_Char)0x64,  /* [2524] */
    (xdc_Char)0x2c,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x25,  /* [2527] */
    (xdc_Char)0x70,  /* [2528] */
    (xdc_Char)0x29,  /* [2529] */
    (xdc_Char)0x0,  /* [2530] */
    (xdc_Char)0x3c,  /* [2531] */
    (xdc_Char)0x2d,  /* [2532] */
    (xdc_Char)0x2d,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x73,  /* [2535] */
    (xdc_Char)0x65,  /* [2536] */
    (xdc_Char)0x74,  /* [2537] */
    (xdc_Char)0x4f,  /* [2538] */
    (xdc_Char)0x73,  /* [2539] */
    (xdc_Char)0x50,  /* [2540] */
    (xdc_Char)0x72,  /* [2541] */
    (xdc_Char)0x69,  /* [2542] */
    (xdc_Char)0x6f,  /* [2543] */
    (xdc_Char)0x72,  /* [2544] */
    (xdc_Char)0x69,  /* [2545] */
    (xdc_Char)0x74,  /* [2546] */
    (xdc_Char)0x79,  /* [2547] */
    (xdc_Char)0x3a,  /* [2548] */
    (xdc_Char)0x20,  /* [2549] */
    (xdc_Char)0x25,  /* [2550] */
    (xdc_Char)0x64,  /* [2551] */
    (xdc_Char)0x0,  /* [2552] */
    (xdc_Char)0x2d,  /* [2553] */
    (xdc_Char)0x2d,  /* [2554] */
    (xdc_Char)0x3e,  /* [2555] */
    (xdc_Char)0x20,  /* [2556] */
    (xdc_Char)0x67,  /* [2557] */
    (xdc_Char)0x65,  /* [2558] */
    (xdc_Char)0x74,  /* [2559] */
    (xdc_Char)0x4f,  /* [2560] */
    (xdc_Char)0x73,  /* [2561] */
    (xdc_Char)0x48,  /* [2562] */
    (xdc_Char)0x61,  /* [2563] */
    (xdc_Char)0x6e,  /* [2564] */
    (xdc_Char)0x64,  /* [2565] */
    (xdc_Char)0x6c,  /* [2566] */
    (xdc_Char)0x65,  /* [2567] */
    (xdc_Char)0x3a,  /* [2568] */
    (xdc_Char)0x20,  /* [2569] */
    (xdc_Char)0x28,  /* [2570] */
    (xdc_Char)0x25,  /* [2571] */
    (xdc_Char)0x70,  /* [2572] */
    (xdc_Char)0x29,  /* [2573] */
    (xdc_Char)0x0,  /* [2574] */
    (xdc_Char)0x3c,  /* [2575] */
    (xdc_Char)0x2d,  /* [2576] */
    (xdc_Char)0x2d,  /* [2577] */
    (xdc_Char)0x20,  /* [2578] */
    (xdc_Char)0x67,  /* [2579] */
    (xdc_Char)0x65,  /* [2580] */
    (xdc_Char)0x74,  /* [2581] */
    (xdc_Char)0x4f,  /* [2582] */
    (xdc_Char)0x73,  /* [2583] */
    (xdc_Char)0x48,  /* [2584] */
    (xdc_Char)0x61,  /* [2585] */
    (xdc_Char)0x6e,  /* [2586] */
    (xdc_Char)0x64,  /* [2587] */
    (xdc_Char)0x6c,  /* [2588] */
    (xdc_Char)0x65,  /* [2589] */
    (xdc_Char)0x3a,  /* [2590] */
    (xdc_Char)0x20,  /* [2591] */
    (xdc_Char)0x25,  /* [2592] */
    (xdc_Char)0x70,  /* [2593] */
    (xdc_Char)0x0,  /* [2594] */
    (xdc_Char)0x2d,  /* [2595] */
    (xdc_Char)0x2d,  /* [2596] */
    (xdc_Char)0x3e,  /* [2597] */
    (xdc_Char)0x20,  /* [2598] */
    (xdc_Char)0x67,  /* [2599] */
    (xdc_Char)0x65,  /* [2600] */
    (xdc_Char)0x74,  /* [2601] */
    (xdc_Char)0x54,  /* [2602] */
    (xdc_Char)0x6c,  /* [2603] */
    (xdc_Char)0x73,  /* [2604] */
    (xdc_Char)0x3a,  /* [2605] */
    (xdc_Char)0x20,  /* [2606] */
    (xdc_Char)0x28,  /* [2607] */
    (xdc_Char)0x25,  /* [2608] */
    (xdc_Char)0x70,  /* [2609] */
    (xdc_Char)0x29,  /* [2610] */
    (xdc_Char)0x0,  /* [2611] */
    (xdc_Char)0x3c,  /* [2612] */
    (xdc_Char)0x2d,  /* [2613] */
    (xdc_Char)0x2d,  /* [2614] */
    (xdc_Char)0x20,  /* [2615] */
    (xdc_Char)0x67,  /* [2616] */
    (xdc_Char)0x65,  /* [2617] */
    (xdc_Char)0x74,  /* [2618] */
    (xdc_Char)0x54,  /* [2619] */
    (xdc_Char)0x6c,  /* [2620] */
    (xdc_Char)0x73,  /* [2621] */
    (xdc_Char)0x3a,  /* [2622] */
    (xdc_Char)0x20,  /* [2623] */
    (xdc_Char)0x25,  /* [2624] */
    (xdc_Char)0x70,  /* [2625] */
    (xdc_Char)0x0,  /* [2626] */
    (xdc_Char)0x2d,  /* [2627] */
    (xdc_Char)0x2d,  /* [2628] */
    (xdc_Char)0x3e,  /* [2629] */
    (xdc_Char)0x20,  /* [2630] */
    (xdc_Char)0x73,  /* [2631] */
    (xdc_Char)0x65,  /* [2632] */
    (xdc_Char)0x74,  /* [2633] */
    (xdc_Char)0x54,  /* [2634] */
    (xdc_Char)0x6c,  /* [2635] */
    (xdc_Char)0x73,  /* [2636] */
    (xdc_Char)0x3a,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x28,  /* [2639] */
    (xdc_Char)0x25,  /* [2640] */
    (xdc_Char)0x70,  /* [2641] */
    (xdc_Char)0x2c,  /* [2642] */
    (xdc_Char)0x20,  /* [2643] */
    (xdc_Char)0x25,  /* [2644] */
    (xdc_Char)0x70,  /* [2645] */
    (xdc_Char)0x29,  /* [2646] */
    (xdc_Char)0x0,  /* [2647] */
    (xdc_Char)0x3c,  /* [2648] */
    (xdc_Char)0x2d,  /* [2649] */
    (xdc_Char)0x2d,  /* [2650] */
    (xdc_Char)0x20,  /* [2651] */
    (xdc_Char)0x73,  /* [2652] */
    (xdc_Char)0x65,  /* [2653] */
    (xdc_Char)0x74,  /* [2654] */
    (xdc_Char)0x54,  /* [2655] */
    (xdc_Char)0x6c,  /* [2656] */
    (xdc_Char)0x73,  /* [2657] */
    (xdc_Char)0x3a,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x76,  /* [2660] */
    (xdc_Char)0x6f,  /* [2661] */
    (xdc_Char)0x69,  /* [2662] */
    (xdc_Char)0x64,  /* [2663] */
    (xdc_Char)0x0,  /* [2664] */
    (xdc_Char)0x2d,  /* [2665] */
    (xdc_Char)0x2d,  /* [2666] */
    (xdc_Char)0x3e,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x73,  /* [2669] */
    (xdc_Char)0x74,  /* [2670] */
    (xdc_Char)0x61,  /* [2671] */
    (xdc_Char)0x74,  /* [2672] */
    (xdc_Char)0x3a,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x28,  /* [2675] */
    (xdc_Char)0x25,  /* [2676] */
    (xdc_Char)0x70,  /* [2677] */
    (xdc_Char)0x2c,  /* [2678] */
    (xdc_Char)0x20,  /* [2679] */
    (xdc_Char)0x25,  /* [2680] */
    (xdc_Char)0x70,  /* [2681] */
    (xdc_Char)0x2c,  /* [2682] */
    (xdc_Char)0x20,  /* [2683] */
    (xdc_Char)0x25,  /* [2684] */
    (xdc_Char)0x70,  /* [2685] */
    (xdc_Char)0x29,  /* [2686] */
    (xdc_Char)0x0,  /* [2687] */
    (xdc_Char)0x3c,  /* [2688] */
    (xdc_Char)0x2d,  /* [2689] */
    (xdc_Char)0x2d,  /* [2690] */
    (xdc_Char)0x20,  /* [2691] */
    (xdc_Char)0x73,  /* [2692] */
    (xdc_Char)0x74,  /* [2693] */
    (xdc_Char)0x61,  /* [2694] */
    (xdc_Char)0x74,  /* [2695] */
    (xdc_Char)0x3a,  /* [2696] */
    (xdc_Char)0x20,  /* [2697] */
    (xdc_Char)0x25,  /* [2698] */
    (xdc_Char)0x64,  /* [2699] */
    (xdc_Char)0x0,  /* [2700] */
    (xdc_Char)0x2d,  /* [2701] */
    (xdc_Char)0x2d,  /* [2702] */
    (xdc_Char)0x3e,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x71,  /* [2705] */
    (xdc_Char)0x75,  /* [2706] */
    (xdc_Char)0x65,  /* [2707] */
    (xdc_Char)0x72,  /* [2708] */
    (xdc_Char)0x79,  /* [2709] */
    (xdc_Char)0x3a,  /* [2710] */
    (xdc_Char)0x20,  /* [2711] */
    (xdc_Char)0x28,  /* [2712] */
    (xdc_Char)0x25,  /* [2713] */
    (xdc_Char)0x70,  /* [2714] */
    (xdc_Char)0x2c,  /* [2715] */
    (xdc_Char)0x20,  /* [2716] */
    (xdc_Char)0x25,  /* [2717] */
    (xdc_Char)0x64,  /* [2718] */
    (xdc_Char)0x29,  /* [2719] */
    (xdc_Char)0x0,  /* [2720] */
    (xdc_Char)0x3c,  /* [2721] */
    (xdc_Char)0x2d,  /* [2722] */
    (xdc_Char)0x2d,  /* [2723] */
    (xdc_Char)0x20,  /* [2724] */
    (xdc_Char)0x71,  /* [2725] */
    (xdc_Char)0x75,  /* [2726] */
    (xdc_Char)0x65,  /* [2727] */
    (xdc_Char)0x72,  /* [2728] */
    (xdc_Char)0x79,  /* [2729] */
    (xdc_Char)0x3a,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x25,  /* [2732] */
    (xdc_Char)0x64,  /* [2733] */
    (xdc_Char)0x0,  /* [2734] */
    (xdc_Char)0x2d,  /* [2735] */
    (xdc_Char)0x2d,  /* [2736] */
    (xdc_Char)0x3e,  /* [2737] */
    (xdc_Char)0x20,  /* [2738] */
    (xdc_Char)0x73,  /* [2739] */
    (xdc_Char)0x69,  /* [2740] */
    (xdc_Char)0x67,  /* [2741] */
    (xdc_Char)0x6e,  /* [2742] */
    (xdc_Char)0x61,  /* [2743] */
    (xdc_Char)0x6c,  /* [2744] */
    (xdc_Char)0x3a,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x28,  /* [2747] */
    (xdc_Char)0x25,  /* [2748] */
    (xdc_Char)0x70,  /* [2749] */
    (xdc_Char)0x29,  /* [2750] */
    (xdc_Char)0x0,  /* [2751] */
    (xdc_Char)0x3c,  /* [2752] */
    (xdc_Char)0x2d,  /* [2753] */
    (xdc_Char)0x2d,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x73,  /* [2756] */
    (xdc_Char)0x69,  /* [2757] */
    (xdc_Char)0x67,  /* [2758] */
    (xdc_Char)0x6e,  /* [2759] */
    (xdc_Char)0x61,  /* [2760] */
    (xdc_Char)0x6c,  /* [2761] */
    (xdc_Char)0x3a,  /* [2762] */
    (xdc_Char)0x20,  /* [2763] */
    (xdc_Char)0x76,  /* [2764] */
    (xdc_Char)0x6f,  /* [2765] */
    (xdc_Char)0x69,  /* [2766] */
    (xdc_Char)0x64,  /* [2767] */
    (xdc_Char)0x0,  /* [2768] */
    (xdc_Char)0x2d,  /* [2769] */
    (xdc_Char)0x2d,  /* [2770] */
    (xdc_Char)0x3e,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x77,  /* [2773] */
    (xdc_Char)0x61,  /* [2774] */
    (xdc_Char)0x69,  /* [2775] */
    (xdc_Char)0x74,  /* [2776] */
    (xdc_Char)0x3a,  /* [2777] */
    (xdc_Char)0x20,  /* [2778] */
    (xdc_Char)0x28,  /* [2779] */
    (xdc_Char)0x25,  /* [2780] */
    (xdc_Char)0x70,  /* [2781] */
    (xdc_Char)0x2c,  /* [2782] */
    (xdc_Char)0x20,  /* [2783] */
    (xdc_Char)0x30,  /* [2784] */
    (xdc_Char)0x78,  /* [2785] */
    (xdc_Char)0x25,  /* [2786] */
    (xdc_Char)0x78,  /* [2787] */
    (xdc_Char)0x2c,  /* [2788] */
    (xdc_Char)0x20,  /* [2789] */
    (xdc_Char)0x25,  /* [2790] */
    (xdc_Char)0x70,  /* [2791] */
    (xdc_Char)0x29,  /* [2792] */
    (xdc_Char)0x0,  /* [2793] */
    (xdc_Char)0x3c,  /* [2794] */
    (xdc_Char)0x2d,  /* [2795] */
    (xdc_Char)0x2d,  /* [2796] */
    (xdc_Char)0x20,  /* [2797] */
    (xdc_Char)0x77,  /* [2798] */
    (xdc_Char)0x61,  /* [2799] */
    (xdc_Char)0x69,  /* [2800] */
    (xdc_Char)0x74,  /* [2801] */
    (xdc_Char)0x3a,  /* [2802] */
    (xdc_Char)0x20,  /* [2803] */
    (xdc_Char)0x25,  /* [2804] */
    (xdc_Char)0x64,  /* [2805] */
    (xdc_Char)0x0,  /* [2806] */
    (xdc_Char)0x2d,  /* [2807] */
    (xdc_Char)0x2d,  /* [2808] */
    (xdc_Char)0x3e,  /* [2809] */
    (xdc_Char)0x20,  /* [2810] */
    (xdc_Char)0x71,  /* [2811] */
    (xdc_Char)0x75,  /* [2812] */
    (xdc_Char)0x65,  /* [2813] */
    (xdc_Char)0x72,  /* [2814] */
    (xdc_Char)0x79,  /* [2815] */
    (xdc_Char)0x3a,  /* [2816] */
    (xdc_Char)0x20,  /* [2817] */
    (xdc_Char)0x28,  /* [2818] */
    (xdc_Char)0x25,  /* [2819] */
    (xdc_Char)0x64,  /* [2820] */
    (xdc_Char)0x29,  /* [2821] */
    (xdc_Char)0x0,  /* [2822] */
    (xdc_Char)0x2d,  /* [2823] */
    (xdc_Char)0x2d,  /* [2824] */
    (xdc_Char)0x3e,  /* [2825] */
    (xdc_Char)0x20,  /* [2826] */
    (xdc_Char)0x67,  /* [2827] */
    (xdc_Char)0x65,  /* [2828] */
    (xdc_Char)0x74,  /* [2829] */
    (xdc_Char)0x52,  /* [2830] */
    (xdc_Char)0x65,  /* [2831] */
    (xdc_Char)0x66,  /* [2832] */
    (xdc_Char)0x65,  /* [2833] */
    (xdc_Char)0x72,  /* [2834] */
    (xdc_Char)0x65,  /* [2835] */
    (xdc_Char)0x6e,  /* [2836] */
    (xdc_Char)0x63,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x43,  /* [2839] */
    (xdc_Char)0x6f,  /* [2840] */
    (xdc_Char)0x75,  /* [2841] */
    (xdc_Char)0x6e,  /* [2842] */
    (xdc_Char)0x74,  /* [2843] */
    (xdc_Char)0x3a,  /* [2844] */
    (xdc_Char)0x20,  /* [2845] */
    (xdc_Char)0x28,  /* [2846] */
    (xdc_Char)0x25,  /* [2847] */
    (xdc_Char)0x70,  /* [2848] */
    (xdc_Char)0x2c,  /* [2849] */
    (xdc_Char)0x20,  /* [2850] */
    (xdc_Char)0x25,  /* [2851] */
    (xdc_Char)0x70,  /* [2852] */
    (xdc_Char)0x29,  /* [2853] */
    (xdc_Char)0x0,  /* [2854] */
    (xdc_Char)0x3c,  /* [2855] */
    (xdc_Char)0x2d,  /* [2856] */
    (xdc_Char)0x2d,  /* [2857] */
    (xdc_Char)0x20,  /* [2858] */
    (xdc_Char)0x67,  /* [2859] */
    (xdc_Char)0x65,  /* [2860] */
    (xdc_Char)0x74,  /* [2861] */
    (xdc_Char)0x52,  /* [2862] */
    (xdc_Char)0x65,  /* [2863] */
    (xdc_Char)0x66,  /* [2864] */
    (xdc_Char)0x65,  /* [2865] */
    (xdc_Char)0x72,  /* [2866] */
    (xdc_Char)0x65,  /* [2867] */
    (xdc_Char)0x6e,  /* [2868] */
    (xdc_Char)0x63,  /* [2869] */
    (xdc_Char)0x65,  /* [2870] */
    (xdc_Char)0x43,  /* [2871] */
    (xdc_Char)0x6f,  /* [2872] */
    (xdc_Char)0x75,  /* [2873] */
    (xdc_Char)0x6e,  /* [2874] */
    (xdc_Char)0x74,  /* [2875] */
    (xdc_Char)0x3a,  /* [2876] */
    (xdc_Char)0x20,  /* [2877] */
    (xdc_Char)0x25,  /* [2878] */
    (xdc_Char)0x64,  /* [2879] */
    (xdc_Char)0x0,  /* [2880] */
    (xdc_Char)0x2d,  /* [2881] */
    (xdc_Char)0x2d,  /* [2882] */
    (xdc_Char)0x2d,  /* [2883] */
    (xdc_Char)0x20,  /* [2884] */
    (xdc_Char)0x47,  /* [2885] */
    (xdc_Char)0x61,  /* [2886] */
    (xdc_Char)0x74,  /* [2887] */
    (xdc_Char)0x65,  /* [2888] */
    (xdc_Char)0x50,  /* [2889] */
    (xdc_Char)0x72,  /* [2890] */
    (xdc_Char)0x6f,  /* [2891] */
    (xdc_Char)0x63,  /* [2892] */
    (xdc_Char)0x65,  /* [2893] */
    (xdc_Char)0x73,  /* [2894] */
    (xdc_Char)0x73,  /* [2895] */
    (xdc_Char)0x28,  /* [2896] */
    (xdc_Char)0x25,  /* [2897] */
    (xdc_Char)0x64,  /* [2898] */
    (xdc_Char)0x29,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x61,  /* [2901] */
    (xdc_Char)0x6c,  /* [2902] */
    (xdc_Char)0x72,  /* [2903] */
    (xdc_Char)0x65,  /* [2904] */
    (xdc_Char)0x61,  /* [2905] */
    (xdc_Char)0x64,  /* [2906] */
    (xdc_Char)0x79,  /* [2907] */
    (xdc_Char)0x20,  /* [2908] */
    (xdc_Char)0x65,  /* [2909] */
    (xdc_Char)0x78,  /* [2910] */
    (xdc_Char)0x69,  /* [2911] */
    (xdc_Char)0x73,  /* [2912] */
    (xdc_Char)0x74,  /* [2913] */
    (xdc_Char)0x73,  /* [2914] */
    (xdc_Char)0x2c,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x69,  /* [2917] */
    (xdc_Char)0x6e,  /* [2918] */
    (xdc_Char)0x63,  /* [2919] */
    (xdc_Char)0x72,  /* [2920] */
    (xdc_Char)0x65,  /* [2921] */
    (xdc_Char)0x6d,  /* [2922] */
    (xdc_Char)0x65,  /* [2923] */
    (xdc_Char)0x6e,  /* [2924] */
    (xdc_Char)0x74,  /* [2925] */
    (xdc_Char)0x69,  /* [2926] */
    (xdc_Char)0x6e,  /* [2927] */
    (xdc_Char)0x67,  /* [2928] */
    (xdc_Char)0x20,  /* [2929] */
    (xdc_Char)0x72,  /* [2930] */
    (xdc_Char)0x65,  /* [2931] */
    (xdc_Char)0x66,  /* [2932] */
    (xdc_Char)0x65,  /* [2933] */
    (xdc_Char)0x72,  /* [2934] */
    (xdc_Char)0x65,  /* [2935] */
    (xdc_Char)0x6e,  /* [2936] */
    (xdc_Char)0x63,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x20,  /* [2939] */
    (xdc_Char)0x63,  /* [2940] */
    (xdc_Char)0x6f,  /* [2941] */
    (xdc_Char)0x75,  /* [2942] */
    (xdc_Char)0x6e,  /* [2943] */
    (xdc_Char)0x74,  /* [2944] */
    (xdc_Char)0x0,  /* [2945] */
    (xdc_Char)0x2d,  /* [2946] */
    (xdc_Char)0x2d,  /* [2947] */
    (xdc_Char)0x2d,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x47,  /* [2950] */
    (xdc_Char)0x61,  /* [2951] */
    (xdc_Char)0x74,  /* [2952] */
    (xdc_Char)0x65,  /* [2953] */
    (xdc_Char)0x50,  /* [2954] */
    (xdc_Char)0x72,  /* [2955] */
    (xdc_Char)0x6f,  /* [2956] */
    (xdc_Char)0x63,  /* [2957] */
    (xdc_Char)0x65,  /* [2958] */
    (xdc_Char)0x73,  /* [2959] */
    (xdc_Char)0x73,  /* [2960] */
    (xdc_Char)0x28,  /* [2961] */
    (xdc_Char)0x25,  /* [2962] */
    (xdc_Char)0x64,  /* [2963] */
    (xdc_Char)0x29,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x44,  /* [2966] */
    (xdc_Char)0x4e,  /* [2967] */
    (xdc_Char)0x45,  /* [2968] */
    (xdc_Char)0x2c,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x63,  /* [2971] */
    (xdc_Char)0x72,  /* [2972] */
    (xdc_Char)0x65,  /* [2973] */
    (xdc_Char)0x61,  /* [2974] */
    (xdc_Char)0x74,  /* [2975] */
    (xdc_Char)0x69,  /* [2976] */
    (xdc_Char)0x6e,  /* [2977] */
    (xdc_Char)0x67,  /* [2978] */
    (xdc_Char)0x0,  /* [2979] */
    (xdc_Char)0x2d,  /* [2980] */
    (xdc_Char)0x2d,  /* [2981] */
    (xdc_Char)0x2d,  /* [2982] */
    (xdc_Char)0x20,  /* [2983] */
    (xdc_Char)0x53,  /* [2984] */
    (xdc_Char)0x65,  /* [2985] */
    (xdc_Char)0x6d,  /* [2986] */
    (xdc_Char)0x50,  /* [2987] */
    (xdc_Char)0x72,  /* [2988] */
    (xdc_Char)0x6f,  /* [2989] */
    (xdc_Char)0x63,  /* [2990] */
    (xdc_Char)0x65,  /* [2991] */
    (xdc_Char)0x73,  /* [2992] */
    (xdc_Char)0x73,  /* [2993] */
    (xdc_Char)0x28,  /* [2994] */
    (xdc_Char)0x25,  /* [2995] */
    (xdc_Char)0x64,  /* [2996] */
    (xdc_Char)0x29,  /* [2997] */
    (xdc_Char)0x20,  /* [2998] */
    (xdc_Char)0x61,  /* [2999] */
    (xdc_Char)0x6c,  /* [3000] */
    (xdc_Char)0x72,  /* [3001] */
    (xdc_Char)0x65,  /* [3002] */
    (xdc_Char)0x61,  /* [3003] */
    (xdc_Char)0x64,  /* [3004] */
    (xdc_Char)0x79,  /* [3005] */
    (xdc_Char)0x20,  /* [3006] */
    (xdc_Char)0x65,  /* [3007] */
    (xdc_Char)0x78,  /* [3008] */
    (xdc_Char)0x69,  /* [3009] */
    (xdc_Char)0x73,  /* [3010] */
    (xdc_Char)0x74,  /* [3011] */
    (xdc_Char)0x73,  /* [3012] */
    (xdc_Char)0x2c,  /* [3013] */
    (xdc_Char)0x20,  /* [3014] */
    (xdc_Char)0x69,  /* [3015] */
    (xdc_Char)0x6e,  /* [3016] */
    (xdc_Char)0x63,  /* [3017] */
    (xdc_Char)0x72,  /* [3018] */
    (xdc_Char)0x65,  /* [3019] */
    (xdc_Char)0x6d,  /* [3020] */
    (xdc_Char)0x65,  /* [3021] */
    (xdc_Char)0x6e,  /* [3022] */
    (xdc_Char)0x74,  /* [3023] */
    (xdc_Char)0x69,  /* [3024] */
    (xdc_Char)0x6e,  /* [3025] */
    (xdc_Char)0x67,  /* [3026] */
    (xdc_Char)0x20,  /* [3027] */
    (xdc_Char)0x72,  /* [3028] */
    (xdc_Char)0x65,  /* [3029] */
    (xdc_Char)0x66,  /* [3030] */
    (xdc_Char)0x65,  /* [3031] */
    (xdc_Char)0x72,  /* [3032] */
    (xdc_Char)0x65,  /* [3033] */
    (xdc_Char)0x6e,  /* [3034] */
    (xdc_Char)0x63,  /* [3035] */
    (xdc_Char)0x65,  /* [3036] */
    (xdc_Char)0x20,  /* [3037] */
    (xdc_Char)0x63,  /* [3038] */
    (xdc_Char)0x6f,  /* [3039] */
    (xdc_Char)0x75,  /* [3040] */
    (xdc_Char)0x6e,  /* [3041] */
    (xdc_Char)0x74,  /* [3042] */
    (xdc_Char)0x0,  /* [3043] */
    (xdc_Char)0x2d,  /* [3044] */
    (xdc_Char)0x2d,  /* [3045] */
    (xdc_Char)0x2d,  /* [3046] */
    (xdc_Char)0x20,  /* [3047] */
    (xdc_Char)0x53,  /* [3048] */
    (xdc_Char)0x65,  /* [3049] */
    (xdc_Char)0x6d,  /* [3050] */
    (xdc_Char)0x50,  /* [3051] */
    (xdc_Char)0x72,  /* [3052] */
    (xdc_Char)0x6f,  /* [3053] */
    (xdc_Char)0x63,  /* [3054] */
    (xdc_Char)0x65,  /* [3055] */
    (xdc_Char)0x73,  /* [3056] */
    (xdc_Char)0x73,  /* [3057] */
    (xdc_Char)0x28,  /* [3058] */
    (xdc_Char)0x25,  /* [3059] */
    (xdc_Char)0x64,  /* [3060] */
    (xdc_Char)0x29,  /* [3061] */
    (xdc_Char)0x20,  /* [3062] */
    (xdc_Char)0x44,  /* [3063] */
    (xdc_Char)0x4e,  /* [3064] */
    (xdc_Char)0x45,  /* [3065] */
    (xdc_Char)0x2c,  /* [3066] */
    (xdc_Char)0x20,  /* [3067] */
    (xdc_Char)0x63,  /* [3068] */
    (xdc_Char)0x72,  /* [3069] */
    (xdc_Char)0x65,  /* [3070] */
    (xdc_Char)0x61,  /* [3071] */
    (xdc_Char)0x74,  /* [3072] */
    (xdc_Char)0x69,  /* [3073] */
    (xdc_Char)0x6e,  /* [3074] */
    (xdc_Char)0x67,  /* [3075] */
    (xdc_Char)0x0,  /* [3076] */
    (xdc_Char)0x3c,  /* [3077] */
    (xdc_Char)0x2d,  /* [3078] */
    (xdc_Char)0x2d,  /* [3079] */
    (xdc_Char)0x20,  /* [3080] */
    (xdc_Char)0x73,  /* [3081] */
    (xdc_Char)0x74,  /* [3082] */
    (xdc_Char)0x61,  /* [3083] */
    (xdc_Char)0x72,  /* [3084] */
    (xdc_Char)0x74,  /* [3085] */
    (xdc_Char)0x3a,  /* [3086] */
    (xdc_Char)0x20,  /* [3087] */
    (xdc_Char)0x28,  /* [3088] */
    (xdc_Char)0x25,  /* [3089] */
    (xdc_Char)0x70,  /* [3090] */
    (xdc_Char)0x29,  /* [3091] */
    (xdc_Char)0x0,  /* [3092] */
    (xdc_Char)0x2d,  /* [3093] */
    (xdc_Char)0x2d,  /* [3094] */
    (xdc_Char)0x3e,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x66,  /* [3097] */
    (xdc_Char)0x69,  /* [3098] */
    (xdc_Char)0x6e,  /* [3099] */
    (xdc_Char)0x69,  /* [3100] */
    (xdc_Char)0x73,  /* [3101] */
    (xdc_Char)0x68,  /* [3102] */
    (xdc_Char)0x3a,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x28,  /* [3105] */
    (xdc_Char)0x25,  /* [3106] */
    (xdc_Char)0x70,  /* [3107] */
    (xdc_Char)0x29,  /* [3108] */
    (xdc_Char)0x0,  /* [3109] */
    (xdc_Char)0x2d,  /* [3110] */
    (xdc_Char)0x2d,  /* [3111] */
    (xdc_Char)0x3e,  /* [3112] */
    (xdc_Char)0x20,  /* [3113] */
    (xdc_Char)0x6a,  /* [3114] */
    (xdc_Char)0x6f,  /* [3115] */
    (xdc_Char)0x69,  /* [3116] */
    (xdc_Char)0x6e,  /* [3117] */
    (xdc_Char)0x3a,  /* [3118] */
    (xdc_Char)0x20,  /* [3119] */
    (xdc_Char)0x28,  /* [3120] */
    (xdc_Char)0x25,  /* [3121] */
    (xdc_Char)0x70,  /* [3122] */
    (xdc_Char)0x29,  /* [3123] */
    (xdc_Char)0x0,  /* [3124] */
    (xdc_Char)0x2d,  /* [3125] */
    (xdc_Char)0x2d,  /* [3126] */
    (xdc_Char)0x3e,  /* [3127] */
    (xdc_Char)0x20,  /* [3128] */
    (xdc_Char)0x73,  /* [3129] */
    (xdc_Char)0x65,  /* [3130] */
    (xdc_Char)0x6c,  /* [3131] */
    (xdc_Char)0x66,  /* [3132] */
    (xdc_Char)0x3a,  /* [3133] */
    (xdc_Char)0x20,  /* [3134] */
    (xdc_Char)0x28,  /* [3135] */
    (xdc_Char)0x25,  /* [3136] */
    (xdc_Char)0x70,  /* [3137] */
    (xdc_Char)0x29,  /* [3138] */
    (xdc_Char)0x0,  /* [3139] */
    (xdc_Char)0x3c,  /* [3140] */
    (xdc_Char)0x2d,  /* [3141] */
    (xdc_Char)0x2d,  /* [3142] */
    (xdc_Char)0x20,  /* [3143] */
    (xdc_Char)0x73,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x6c,  /* [3146] */
    (xdc_Char)0x66,  /* [3147] */
    (xdc_Char)0x3a,  /* [3148] */
    (xdc_Char)0x20,  /* [3149] */
    (xdc_Char)0x25,  /* [3150] */
    (xdc_Char)0x70,  /* [3151] */
    (xdc_Char)0x0,  /* [3152] */
    (xdc_Char)0x78,  /* [3153] */
    (xdc_Char)0x64,  /* [3154] */
    (xdc_Char)0x63,  /* [3155] */
    (xdc_Char)0x2e,  /* [3156] */
    (xdc_Char)0x0,  /* [3157] */
    (xdc_Char)0x72,  /* [3158] */
    (xdc_Char)0x75,  /* [3159] */
    (xdc_Char)0x6e,  /* [3160] */
    (xdc_Char)0x74,  /* [3161] */
    (xdc_Char)0x69,  /* [3162] */
    (xdc_Char)0x6d,  /* [3163] */
    (xdc_Char)0x65,  /* [3164] */
    (xdc_Char)0x2e,  /* [3165] */
    (xdc_Char)0x0,  /* [3166] */
    (xdc_Char)0x41,  /* [3167] */
    (xdc_Char)0x73,  /* [3168] */
    (xdc_Char)0x73,  /* [3169] */
    (xdc_Char)0x65,  /* [3170] */
    (xdc_Char)0x72,  /* [3171] */
    (xdc_Char)0x74,  /* [3172] */
    (xdc_Char)0x0,  /* [3173] */
    (xdc_Char)0x43,  /* [3174] */
    (xdc_Char)0x6f,  /* [3175] */
    (xdc_Char)0x72,  /* [3176] */
    (xdc_Char)0x65,  /* [3177] */
    (xdc_Char)0x0,  /* [3178] */
    (xdc_Char)0x44,  /* [3179] */
    (xdc_Char)0x65,  /* [3180] */
    (xdc_Char)0x66,  /* [3181] */
    (xdc_Char)0x61,  /* [3182] */
    (xdc_Char)0x75,  /* [3183] */
    (xdc_Char)0x6c,  /* [3184] */
    (xdc_Char)0x74,  /* [3185] */
    (xdc_Char)0x73,  /* [3186] */
    (xdc_Char)0x0,  /* [3187] */
    (xdc_Char)0x44,  /* [3188] */
    (xdc_Char)0x69,  /* [3189] */
    (xdc_Char)0x61,  /* [3190] */
    (xdc_Char)0x67,  /* [3191] */
    (xdc_Char)0x73,  /* [3192] */
    (xdc_Char)0x0,  /* [3193] */
    (xdc_Char)0x45,  /* [3194] */
    (xdc_Char)0x72,  /* [3195] */
    (xdc_Char)0x72,  /* [3196] */
    (xdc_Char)0x6f,  /* [3197] */
    (xdc_Char)0x72,  /* [3198] */
    (xdc_Char)0x0,  /* [3199] */
    (xdc_Char)0x47,  /* [3200] */
    (xdc_Char)0x61,  /* [3201] */
    (xdc_Char)0x74,  /* [3202] */
    (xdc_Char)0x65,  /* [3203] */
    (xdc_Char)0x0,  /* [3204] */
    (xdc_Char)0x47,  /* [3205] */
    (xdc_Char)0x61,  /* [3206] */
    (xdc_Char)0x74,  /* [3207] */
    (xdc_Char)0x65,  /* [3208] */
    (xdc_Char)0x4e,  /* [3209] */
    (xdc_Char)0x75,  /* [3210] */
    (xdc_Char)0x6c,  /* [3211] */
    (xdc_Char)0x6c,  /* [3212] */
    (xdc_Char)0x0,  /* [3213] */
    (xdc_Char)0x4c,  /* [3214] */
    (xdc_Char)0x6f,  /* [3215] */
    (xdc_Char)0x67,  /* [3216] */
    (xdc_Char)0x0,  /* [3217] */
    (xdc_Char)0x4c,  /* [3218] */
    (xdc_Char)0x6f,  /* [3219] */
    (xdc_Char)0x67,  /* [3220] */
    (xdc_Char)0x67,  /* [3221] */
    (xdc_Char)0x65,  /* [3222] */
    (xdc_Char)0x72,  /* [3223] */
    (xdc_Char)0x43,  /* [3224] */
    (xdc_Char)0x61,  /* [3225] */
    (xdc_Char)0x6c,  /* [3226] */
    (xdc_Char)0x6c,  /* [3227] */
    (xdc_Char)0x62,  /* [3228] */
    (xdc_Char)0x61,  /* [3229] */
    (xdc_Char)0x63,  /* [3230] */
    (xdc_Char)0x6b,  /* [3231] */
    (xdc_Char)0x0,  /* [3232] */
    (xdc_Char)0x4c,  /* [3233] */
    (xdc_Char)0x6f,  /* [3234] */
    (xdc_Char)0x67,  /* [3235] */
    (xdc_Char)0x67,  /* [3236] */
    (xdc_Char)0x65,  /* [3237] */
    (xdc_Char)0x72,  /* [3238] */
    (xdc_Char)0x53,  /* [3239] */
    (xdc_Char)0x79,  /* [3240] */
    (xdc_Char)0x73,  /* [3241] */
    (xdc_Char)0x0,  /* [3242] */
    (xdc_Char)0x4d,  /* [3243] */
    (xdc_Char)0x61,  /* [3244] */
    (xdc_Char)0x69,  /* [3245] */
    (xdc_Char)0x6e,  /* [3246] */
    (xdc_Char)0x0,  /* [3247] */
    (xdc_Char)0x4d,  /* [3248] */
    (xdc_Char)0x65,  /* [3249] */
    (xdc_Char)0x6d,  /* [3250] */
    (xdc_Char)0x6f,  /* [3251] */
    (xdc_Char)0x72,  /* [3252] */
    (xdc_Char)0x79,  /* [3253] */
    (xdc_Char)0x0,  /* [3254] */
    (xdc_Char)0x48,  /* [3255] */
    (xdc_Char)0x65,  /* [3256] */
    (xdc_Char)0x61,  /* [3257] */
    (xdc_Char)0x70,  /* [3258] */
    (xdc_Char)0x53,  /* [3259] */
    (xdc_Char)0x74,  /* [3260] */
    (xdc_Char)0x64,  /* [3261] */
    (xdc_Char)0x0,  /* [3262] */
    (xdc_Char)0x52,  /* [3263] */
    (xdc_Char)0x65,  /* [3264] */
    (xdc_Char)0x67,  /* [3265] */
    (xdc_Char)0x69,  /* [3266] */
    (xdc_Char)0x73,  /* [3267] */
    (xdc_Char)0x74,  /* [3268] */
    (xdc_Char)0x72,  /* [3269] */
    (xdc_Char)0x79,  /* [3270] */
    (xdc_Char)0x0,  /* [3271] */
    (xdc_Char)0x52,  /* [3272] */
    (xdc_Char)0x74,  /* [3273] */
    (xdc_Char)0x61,  /* [3274] */
    (xdc_Char)0x0,  /* [3275] */
    (xdc_Char)0x53,  /* [3276] */
    (xdc_Char)0x74,  /* [3277] */
    (xdc_Char)0x61,  /* [3278] */
    (xdc_Char)0x72,  /* [3279] */
    (xdc_Char)0x74,  /* [3280] */
    (xdc_Char)0x75,  /* [3281] */
    (xdc_Char)0x70,  /* [3282] */
    (xdc_Char)0x0,  /* [3283] */
    (xdc_Char)0x53,  /* [3284] */
    (xdc_Char)0x79,  /* [3285] */
    (xdc_Char)0x73,  /* [3286] */
    (xdc_Char)0x74,  /* [3287] */
    (xdc_Char)0x65,  /* [3288] */
    (xdc_Char)0x6d,  /* [3289] */
    (xdc_Char)0x0,  /* [3290] */
    (xdc_Char)0x53,  /* [3291] */
    (xdc_Char)0x79,  /* [3292] */
    (xdc_Char)0x73,  /* [3293] */
    (xdc_Char)0x53,  /* [3294] */
    (xdc_Char)0x74,  /* [3295] */
    (xdc_Char)0x64,  /* [3296] */
    (xdc_Char)0x0,  /* [3297] */
    (xdc_Char)0x54,  /* [3298] */
    (xdc_Char)0x65,  /* [3299] */
    (xdc_Char)0x78,  /* [3300] */
    (xdc_Char)0x74,  /* [3301] */
    (xdc_Char)0x0,  /* [3302] */
    (xdc_Char)0x54,  /* [3303] */
    (xdc_Char)0x69,  /* [3304] */
    (xdc_Char)0x6d,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x73,  /* [3307] */
    (xdc_Char)0x74,  /* [3308] */
    (xdc_Char)0x61,  /* [3309] */
    (xdc_Char)0x6d,  /* [3310] */
    (xdc_Char)0x70,  /* [3311] */
    (xdc_Char)0x0,  /* [3312] */
    (xdc_Char)0x6b,  /* [3313] */
    (xdc_Char)0x6e,  /* [3314] */
    (xdc_Char)0x6c,  /* [3315] */
    (xdc_Char)0x2e,  /* [3316] */
    (xdc_Char)0x0,  /* [3317] */
    (xdc_Char)0x47,  /* [3318] */
    (xdc_Char)0x61,  /* [3319] */
    (xdc_Char)0x74,  /* [3320] */
    (xdc_Char)0x65,  /* [3321] */
    (xdc_Char)0x48,  /* [3322] */
    (xdc_Char)0x0,  /* [3323] */
    (xdc_Char)0x53,  /* [3324] */
    (xdc_Char)0x65,  /* [3325] */
    (xdc_Char)0x6d,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x70,  /* [3328] */
    (xdc_Char)0x68,  /* [3329] */
    (xdc_Char)0x6f,  /* [3330] */
    (xdc_Char)0x72,  /* [3331] */
    (xdc_Char)0x65,  /* [3332] */
    (xdc_Char)0x0,  /* [3333] */
    (xdc_Char)0x54,  /* [3334] */
    (xdc_Char)0x68,  /* [3335] */
    (xdc_Char)0x72,  /* [3336] */
    (xdc_Char)0x65,  /* [3337] */
    (xdc_Char)0x61,  /* [3338] */
    (xdc_Char)0x64,  /* [3339] */
    (xdc_Char)0x0,  /* [3340] */
    (xdc_Char)0x53,  /* [3341] */
    (xdc_Char)0x79,  /* [3342] */
    (xdc_Char)0x6e,  /* [3343] */
    (xdc_Char)0x63,  /* [3344] */
    (xdc_Char)0x0,  /* [3345] */
    (xdc_Char)0x47,  /* [3346] */
    (xdc_Char)0x61,  /* [3347] */
    (xdc_Char)0x74,  /* [3348] */
    (xdc_Char)0x65,  /* [3349] */
    (xdc_Char)0x54,  /* [3350] */
    (xdc_Char)0x68,  /* [3351] */
    (xdc_Char)0x72,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x61,  /* [3354] */
    (xdc_Char)0x64,  /* [3355] */
    (xdc_Char)0x0,  /* [3356] */
    (xdc_Char)0x47,  /* [3357] */
    (xdc_Char)0x61,  /* [3358] */
    (xdc_Char)0x74,  /* [3359] */
    (xdc_Char)0x65,  /* [3360] */
    (xdc_Char)0x50,  /* [3361] */
    (xdc_Char)0x72,  /* [3362] */
    (xdc_Char)0x6f,  /* [3363] */
    (xdc_Char)0x63,  /* [3364] */
    (xdc_Char)0x65,  /* [3365] */
    (xdc_Char)0x73,  /* [3366] */
    (xdc_Char)0x73,  /* [3367] */
    (xdc_Char)0x0,  /* [3368] */
    (xdc_Char)0x53,  /* [3369] */
    (xdc_Char)0x65,  /* [3370] */
    (xdc_Char)0x6d,  /* [3371] */
    (xdc_Char)0x54,  /* [3372] */
    (xdc_Char)0x68,  /* [3373] */
    (xdc_Char)0x72,  /* [3374] */
    (xdc_Char)0x65,  /* [3375] */
    (xdc_Char)0x61,  /* [3376] */
    (xdc_Char)0x64,  /* [3377] */
    (xdc_Char)0x0,  /* [3378] */
    (xdc_Char)0x53,  /* [3379] */
    (xdc_Char)0x65,  /* [3380] */
    (xdc_Char)0x6d,  /* [3381] */
    (xdc_Char)0x50,  /* [3382] */
    (xdc_Char)0x72,  /* [3383] */
    (xdc_Char)0x6f,  /* [3384] */
    (xdc_Char)0x63,  /* [3385] */
    (xdc_Char)0x65,  /* [3386] */
    (xdc_Char)0x73,  /* [3387] */
    (xdc_Char)0x73,  /* [3388] */
    (xdc_Char)0x0,  /* [3389] */
    (xdc_Char)0x53,  /* [3390] */
    (xdc_Char)0x79,  /* [3391] */
    (xdc_Char)0x6e,  /* [3392] */
    (xdc_Char)0x63,  /* [3393] */
    (xdc_Char)0x47,  /* [3394] */
    (xdc_Char)0x65,  /* [3395] */
    (xdc_Char)0x6e,  /* [3396] */
    (xdc_Char)0x65,  /* [3397] */
    (xdc_Char)0x72,  /* [3398] */
    (xdc_Char)0x69,  /* [3399] */
    (xdc_Char)0x63,  /* [3400] */
    (xdc_Char)0x0,  /* [3401] */
    (xdc_Char)0x53,  /* [3402] */
    (xdc_Char)0x79,  /* [3403] */
    (xdc_Char)0x6e,  /* [3404] */
    (xdc_Char)0x63,  /* [3405] */
    (xdc_Char)0x4e,  /* [3406] */
    (xdc_Char)0x75,  /* [3407] */
    (xdc_Char)0x6c,  /* [3408] */
    (xdc_Char)0x6c,  /* [3409] */
    (xdc_Char)0x0,  /* [3410] */
    (xdc_Char)0x53,  /* [3411] */
    (xdc_Char)0x79,  /* [3412] */
    (xdc_Char)0x6e,  /* [3413] */
    (xdc_Char)0x63,  /* [3414] */
    (xdc_Char)0x53,  /* [3415] */
    (xdc_Char)0x65,  /* [3416] */
    (xdc_Char)0x6d,  /* [3417] */
    (xdc_Char)0x54,  /* [3418] */
    (xdc_Char)0x68,  /* [3419] */
    (xdc_Char)0x72,  /* [3420] */
    (xdc_Char)0x65,  /* [3421] */
    (xdc_Char)0x61,  /* [3422] */
    (xdc_Char)0x64,  /* [3423] */
    (xdc_Char)0x0,  /* [3424] */
    (xdc_Char)0x74,  /* [3425] */
    (xdc_Char)0x69,  /* [3426] */
    (xdc_Char)0x2e,  /* [3427] */
    (xdc_Char)0x0,  /* [3428] */
    (xdc_Char)0x73,  /* [3429] */
    (xdc_Char)0x64,  /* [3430] */
    (xdc_Char)0x6f,  /* [3431] */
    (xdc_Char)0x2e,  /* [3432] */
    (xdc_Char)0x0,  /* [3433] */
    (xdc_Char)0x78,  /* [3434] */
    (xdc_Char)0x64,  /* [3435] */
    (xdc_Char)0x63,  /* [3436] */
    (xdc_Char)0x72,  /* [3437] */
    (xdc_Char)0x75,  /* [3438] */
    (xdc_Char)0x6e,  /* [3439] */
    (xdc_Char)0x74,  /* [3440] */
    (xdc_Char)0x69,  /* [3441] */
    (xdc_Char)0x6d,  /* [3442] */
    (xdc_Char)0x65,  /* [3443] */
    (xdc_Char)0x2e,  /* [3444] */
    (xdc_Char)0x0,  /* [3445] */
    (xdc_Char)0x6c,  /* [3446] */
    (xdc_Char)0x69,  /* [3447] */
    (xdc_Char)0x6e,  /* [3448] */
    (xdc_Char)0x75,  /* [3449] */
    (xdc_Char)0x78,  /* [3450] */
    (xdc_Char)0x2e,  /* [3451] */
    (xdc_Char)0x0,  /* [3452] */
    (xdc_Char)0x47,  /* [3453] */
    (xdc_Char)0x61,  /* [3454] */
    (xdc_Char)0x74,  /* [3455] */
    (xdc_Char)0x65,  /* [3456] */
    (xdc_Char)0x54,  /* [3457] */
    (xdc_Char)0x68,  /* [3458] */
    (xdc_Char)0x72,  /* [3459] */
    (xdc_Char)0x65,  /* [3460] */
    (xdc_Char)0x61,  /* [3461] */
    (xdc_Char)0x64,  /* [3462] */
    (xdc_Char)0x53,  /* [3463] */
    (xdc_Char)0x75,  /* [3464] */
    (xdc_Char)0x70,  /* [3465] */
    (xdc_Char)0x70,  /* [3466] */
    (xdc_Char)0x6f,  /* [3467] */
    (xdc_Char)0x72,  /* [3468] */
    (xdc_Char)0x74,  /* [3469] */
    (xdc_Char)0x0,  /* [3470] */
    (xdc_Char)0x47,  /* [3471] */
    (xdc_Char)0x61,  /* [3472] */
    (xdc_Char)0x74,  /* [3473] */
    (xdc_Char)0x65,  /* [3474] */
    (xdc_Char)0x50,  /* [3475] */
    (xdc_Char)0x72,  /* [3476] */
    (xdc_Char)0x6f,  /* [3477] */
    (xdc_Char)0x63,  /* [3478] */
    (xdc_Char)0x65,  /* [3479] */
    (xdc_Char)0x73,  /* [3480] */
    (xdc_Char)0x73,  /* [3481] */
    (xdc_Char)0x53,  /* [3482] */
    (xdc_Char)0x75,  /* [3483] */
    (xdc_Char)0x70,  /* [3484] */
    (xdc_Char)0x70,  /* [3485] */
    (xdc_Char)0x6f,  /* [3486] */
    (xdc_Char)0x72,  /* [3487] */
    (xdc_Char)0x74,  /* [3488] */
    (xdc_Char)0x0,  /* [3489] */
    (xdc_Char)0x53,  /* [3490] */
    (xdc_Char)0x65,  /* [3491] */
    (xdc_Char)0x6d,  /* [3492] */
    (xdc_Char)0x54,  /* [3493] */
    (xdc_Char)0x68,  /* [3494] */
    (xdc_Char)0x72,  /* [3495] */
    (xdc_Char)0x65,  /* [3496] */
    (xdc_Char)0x61,  /* [3497] */
    (xdc_Char)0x64,  /* [3498] */
    (xdc_Char)0x53,  /* [3499] */
    (xdc_Char)0x75,  /* [3500] */
    (xdc_Char)0x70,  /* [3501] */
    (xdc_Char)0x70,  /* [3502] */
    (xdc_Char)0x6f,  /* [3503] */
    (xdc_Char)0x72,  /* [3504] */
    (xdc_Char)0x74,  /* [3505] */
    (xdc_Char)0x0,  /* [3506] */
    (xdc_Char)0x53,  /* [3507] */
    (xdc_Char)0x65,  /* [3508] */
    (xdc_Char)0x6d,  /* [3509] */
    (xdc_Char)0x50,  /* [3510] */
    (xdc_Char)0x72,  /* [3511] */
    (xdc_Char)0x6f,  /* [3512] */
    (xdc_Char)0x63,  /* [3513] */
    (xdc_Char)0x65,  /* [3514] */
    (xdc_Char)0x73,  /* [3515] */
    (xdc_Char)0x73,  /* [3516] */
    (xdc_Char)0x53,  /* [3517] */
    (xdc_Char)0x75,  /* [3518] */
    (xdc_Char)0x70,  /* [3519] */
    (xdc_Char)0x70,  /* [3520] */
    (xdc_Char)0x6f,  /* [3521] */
    (xdc_Char)0x72,  /* [3522] */
    (xdc_Char)0x74,  /* [3523] */
    (xdc_Char)0x0,  /* [3524] */
    (xdc_Char)0x54,  /* [3525] */
    (xdc_Char)0x68,  /* [3526] */
    (xdc_Char)0x72,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x61,  /* [3529] */
    (xdc_Char)0x64,  /* [3530] */
    (xdc_Char)0x53,  /* [3531] */
    (xdc_Char)0x75,  /* [3532] */
    (xdc_Char)0x70,  /* [3533] */
    (xdc_Char)0x70,  /* [3534] */
    (xdc_Char)0x6f,  /* [3535] */
    (xdc_Char)0x72,  /* [3536] */
    (xdc_Char)0x74,  /* [3537] */
    (xdc_Char)0x0,  /* [3538] */
    (xdc_Char)0x54,  /* [3539] */
    (xdc_Char)0x69,  /* [3540] */
    (xdc_Char)0x6d,  /* [3541] */
    (xdc_Char)0x65,  /* [3542] */
    (xdc_Char)0x73,  /* [3543] */
    (xdc_Char)0x74,  /* [3544] */
    (xdc_Char)0x61,  /* [3545] */
    (xdc_Char)0x6d,  /* [3546] */
    (xdc_Char)0x70,  /* [3547] */
    (xdc_Char)0x50,  /* [3548] */
    (xdc_Char)0x6f,  /* [3549] */
    (xdc_Char)0x73,  /* [3550] */
    (xdc_Char)0x69,  /* [3551] */
    (xdc_Char)0x78,  /* [3552] */
    (xdc_Char)0x0,  /* [3553] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[43] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0xc51,  /* left */
        (xdc_Bits16)0xc56,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc5f,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc66,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc6b,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc74,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc7a,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc80,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc85,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc8e,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xc92,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xca1,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcab,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcb0,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcb7,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcbf,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcc8,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xccc,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcd4,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcdb,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xce2,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xce7,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xcf1,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xcf6,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xcfc,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd06,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd0d,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd12,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd1d,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd29,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd33,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd3e,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd4a,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0xd53,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0xd61,  /* left */
        (xdc_Bits16)0xd65,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0xd6a,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0xd76,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0xd7d,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0xd8f,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0xda2,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0xdb3,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0xdc5,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0xdd3,  /* right */
    },  /* [42] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0xde2;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2b;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x0;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x0;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.GateH INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_knl_GateH_Module__ xdc_runtime_knl_GateH_Module__root__V = {
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__diagsEnabled xdc_runtime_knl_GateH_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__diagsIncluded xdc_runtime_knl_GateH_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__diagsMask xdc_runtime_knl_GateH_Module__diagsMask__C = ((CT__xdc_runtime_knl_GateH_Module__diagsMask)((void*)&xdc_runtime_knl_GateH_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__gateObj xdc_runtime_knl_GateH_Module__gateObj__C = ((CT__xdc_runtime_knl_GateH_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__gatePrms xdc_runtime_knl_GateH_Module__gatePrms__C = ((CT__xdc_runtime_knl_GateH_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__id xdc_runtime_knl_GateH_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerDefined xdc_runtime_knl_GateH_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerObj xdc_runtime_knl_GateH_Module__loggerObj__C = ((CT__xdc_runtime_knl_GateH_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerFxn0 xdc_runtime_knl_GateH_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_GateH_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerFxn1 xdc_runtime_knl_GateH_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_GateH_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerFxn2 xdc_runtime_knl_GateH_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_GateH_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerFxn4 xdc_runtime_knl_GateH_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_GateH_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__loggerFxn8 xdc_runtime_knl_GateH_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_GateH_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Module__startupDoneFxn xdc_runtime_knl_GateH_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_GateH_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Object__count xdc_runtime_knl_GateH_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Object__heap xdc_runtime_knl_GateH_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Object__sizeof xdc_runtime_knl_GateH_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_GateH_Object__table xdc_runtime_knl_GateH_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.GateH_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.GateProcess INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_GateProcess_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_GateProcess_Params xdc_runtime_knl_GateProcess_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_GateProcess_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_GateProcess_Object__PARAMS__C.__iprms, /* instance */
    (xdc_Int)(-0x0 - 1),  /* key */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_GateProcess_Module__ xdc_runtime_knl_GateProcess_Module__root__V = {
    {&xdc_runtime_knl_GateProcess_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_GateProcess_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__diagsEnabled xdc_runtime_knl_GateProcess_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__diagsIncluded xdc_runtime_knl_GateProcess_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__diagsMask xdc_runtime_knl_GateProcess_Module__diagsMask__C = ((CT__xdc_runtime_knl_GateProcess_Module__diagsMask)((void*)&xdc_runtime_knl_GateProcess_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__gateObj xdc_runtime_knl_GateProcess_Module__gateObj__C = ((CT__xdc_runtime_knl_GateProcess_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__gatePrms xdc_runtime_knl_GateProcess_Module__gatePrms__C = ((CT__xdc_runtime_knl_GateProcess_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__id xdc_runtime_knl_GateProcess_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerDefined xdc_runtime_knl_GateProcess_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerObj xdc_runtime_knl_GateProcess_Module__loggerObj__C = ((CT__xdc_runtime_knl_GateProcess_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerFxn0 xdc_runtime_knl_GateProcess_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_GateProcess_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerFxn1 xdc_runtime_knl_GateProcess_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_GateProcess_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerFxn2 xdc_runtime_knl_GateProcess_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_GateProcess_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerFxn4 xdc_runtime_knl_GateProcess_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_GateProcess_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__loggerFxn8 xdc_runtime_knl_GateProcess_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_GateProcess_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Module__startupDoneFxn xdc_runtime_knl_GateProcess_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_GateProcess_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Object__count xdc_runtime_knl_GateProcess_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Object__heap xdc_runtime_knl_GateProcess_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Object__sizeof xdc_runtime_knl_GateProcess_Object__sizeof__C = sizeof(xdc_runtime_knl_GateProcess_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_Object__table xdc_runtime_knl_GateProcess_Object__table__C = 0;

/* A_invalidKey__C */
__FAR__ const CT__xdc_runtime_knl_GateProcess_A_invalidKey xdc_runtime_knl_GateProcess_A_invalidKey__C = (((xdc_runtime_Assert_Id)443) << 16 | 16);


/*
 * ======== xdc.runtime.knl.GateProcess_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.GateThread INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_GateThread_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_GateThread_Params xdc_runtime_knl_GateThread_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_GateThread_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_GateThread_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_GateThread_Module__ xdc_runtime_knl_GateThread_Module__root__V = {
    {&xdc_runtime_knl_GateThread_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_GateThread_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__diagsEnabled xdc_runtime_knl_GateThread_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__diagsIncluded xdc_runtime_knl_GateThread_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__diagsMask xdc_runtime_knl_GateThread_Module__diagsMask__C = ((CT__xdc_runtime_knl_GateThread_Module__diagsMask)((void*)&xdc_runtime_knl_GateThread_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__gateObj xdc_runtime_knl_GateThread_Module__gateObj__C = ((CT__xdc_runtime_knl_GateThread_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__gatePrms xdc_runtime_knl_GateThread_Module__gatePrms__C = ((CT__xdc_runtime_knl_GateThread_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__id xdc_runtime_knl_GateThread_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerDefined xdc_runtime_knl_GateThread_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerObj xdc_runtime_knl_GateThread_Module__loggerObj__C = ((CT__xdc_runtime_knl_GateThread_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerFxn0 xdc_runtime_knl_GateThread_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_GateThread_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerFxn1 xdc_runtime_knl_GateThread_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_GateThread_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerFxn2 xdc_runtime_knl_GateThread_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_GateThread_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerFxn4 xdc_runtime_knl_GateThread_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_GateThread_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__loggerFxn8 xdc_runtime_knl_GateThread_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_GateThread_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Module__startupDoneFxn xdc_runtime_knl_GateThread_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_GateThread_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Object__count xdc_runtime_knl_GateThread_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Object__heap xdc_runtime_knl_GateThread_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Object__sizeof xdc_runtime_knl_GateThread_Object__sizeof__C = sizeof(xdc_runtime_knl_GateThread_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_GateThread_Object__table xdc_runtime_knl_GateThread_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.GateThread_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.SemProcess INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SemProcess_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SemProcess_Params xdc_runtime_knl_SemProcess_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SemProcess_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SemProcess_Object__PARAMS__C.__iprms, /* instance */
    xdc_runtime_knl_ISemaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SemProcess_Module__ xdc_runtime_knl_SemProcess_Module__root__V = {
    {&xdc_runtime_knl_SemProcess_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SemProcess_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__diagsEnabled xdc_runtime_knl_SemProcess_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__diagsIncluded xdc_runtime_knl_SemProcess_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__diagsMask xdc_runtime_knl_SemProcess_Module__diagsMask__C = ((CT__xdc_runtime_knl_SemProcess_Module__diagsMask)((void*)&xdc_runtime_knl_SemProcess_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__gateObj xdc_runtime_knl_SemProcess_Module__gateObj__C = ((CT__xdc_runtime_knl_SemProcess_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__gatePrms xdc_runtime_knl_SemProcess_Module__gatePrms__C = ((CT__xdc_runtime_knl_SemProcess_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__id xdc_runtime_knl_SemProcess_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerDefined xdc_runtime_knl_SemProcess_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerObj xdc_runtime_knl_SemProcess_Module__loggerObj__C = ((CT__xdc_runtime_knl_SemProcess_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerFxn0 xdc_runtime_knl_SemProcess_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SemProcess_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerFxn1 xdc_runtime_knl_SemProcess_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SemProcess_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerFxn2 xdc_runtime_knl_SemProcess_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SemProcess_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerFxn4 xdc_runtime_knl_SemProcess_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SemProcess_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__loggerFxn8 xdc_runtime_knl_SemProcess_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SemProcess_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Module__startupDoneFxn xdc_runtime_knl_SemProcess_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SemProcess_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Object__count xdc_runtime_knl_SemProcess_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Object__heap xdc_runtime_knl_SemProcess_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Object__sizeof xdc_runtime_knl_SemProcess_Object__sizeof__C = sizeof(xdc_runtime_knl_SemProcess_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SemProcess_Object__table xdc_runtime_knl_SemProcess_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SemProcess_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.SemThread INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SemThread_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SemThread_Params xdc_runtime_knl_SemThread_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SemThread_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SemThread_Object__PARAMS__C.__iprms, /* instance */
    xdc_runtime_knl_ISemaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SemThread_Module__ xdc_runtime_knl_SemThread_Module__root__V = {
    {&xdc_runtime_knl_SemThread_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SemThread_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__diagsEnabled xdc_runtime_knl_SemThread_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__diagsIncluded xdc_runtime_knl_SemThread_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__diagsMask xdc_runtime_knl_SemThread_Module__diagsMask__C = ((CT__xdc_runtime_knl_SemThread_Module__diagsMask)((void*)&xdc_runtime_knl_SemThread_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__gateObj xdc_runtime_knl_SemThread_Module__gateObj__C = ((CT__xdc_runtime_knl_SemThread_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__gatePrms xdc_runtime_knl_SemThread_Module__gatePrms__C = ((CT__xdc_runtime_knl_SemThread_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__id xdc_runtime_knl_SemThread_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerDefined xdc_runtime_knl_SemThread_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerObj xdc_runtime_knl_SemThread_Module__loggerObj__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn0 xdc_runtime_knl_SemThread_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn1 xdc_runtime_knl_SemThread_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn2 xdc_runtime_knl_SemThread_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn4 xdc_runtime_knl_SemThread_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn8 xdc_runtime_knl_SemThread_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__startupDoneFxn xdc_runtime_knl_SemThread_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SemThread_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__count xdc_runtime_knl_SemThread_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__heap xdc_runtime_knl_SemThread_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__sizeof xdc_runtime_knl_SemThread_Object__sizeof__C = sizeof(xdc_runtime_knl_SemThread_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__table xdc_runtime_knl_SemThread_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SemThread_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.Semaphore INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_knl_Semaphore_Module__ xdc_runtime_knl_Semaphore_Module__root__V = {
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__diagsEnabled xdc_runtime_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__diagsIncluded xdc_runtime_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__diagsMask xdc_runtime_knl_Semaphore_Module__diagsMask__C = ((CT__xdc_runtime_knl_Semaphore_Module__diagsMask)((void*)&xdc_runtime_knl_Semaphore_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__gateObj xdc_runtime_knl_Semaphore_Module__gateObj__C = ((CT__xdc_runtime_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__gatePrms xdc_runtime_knl_Semaphore_Module__gatePrms__C = ((CT__xdc_runtime_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__id xdc_runtime_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerDefined xdc_runtime_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerObj xdc_runtime_knl_Semaphore_Module__loggerObj__C = ((CT__xdc_runtime_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn0 xdc_runtime_knl_Semaphore_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn1 xdc_runtime_knl_Semaphore_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn2 xdc_runtime_knl_Semaphore_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn4 xdc_runtime_knl_Semaphore_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn8 xdc_runtime_knl_Semaphore_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Module__startupDoneFxn xdc_runtime_knl_Semaphore_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Object__count xdc_runtime_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Object__heap xdc_runtime_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Object__sizeof xdc_runtime_knl_Semaphore_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_Semaphore_Object__table xdc_runtime_knl_Semaphore_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.Semaphore_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.Sync INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_knl_Sync_Module__ xdc_runtime_knl_Sync_Module__root__V = {
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__diagsEnabled xdc_runtime_knl_Sync_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__diagsIncluded xdc_runtime_knl_Sync_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__diagsMask xdc_runtime_knl_Sync_Module__diagsMask__C = ((CT__xdc_runtime_knl_Sync_Module__diagsMask)((void*)&xdc_runtime_knl_Sync_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__gateObj xdc_runtime_knl_Sync_Module__gateObj__C = ((CT__xdc_runtime_knl_Sync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__gatePrms xdc_runtime_knl_Sync_Module__gatePrms__C = ((CT__xdc_runtime_knl_Sync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__id xdc_runtime_knl_Sync_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerDefined xdc_runtime_knl_Sync_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerObj xdc_runtime_knl_Sync_Module__loggerObj__C = ((CT__xdc_runtime_knl_Sync_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn0 xdc_runtime_knl_Sync_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn1 xdc_runtime_knl_Sync_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn2 xdc_runtime_knl_Sync_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn4 xdc_runtime_knl_Sync_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn8 xdc_runtime_knl_Sync_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__startupDoneFxn xdc_runtime_knl_Sync_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_Sync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__count xdc_runtime_knl_Sync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__heap xdc_runtime_knl_Sync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__sizeof xdc_runtime_knl_Sync_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__table xdc_runtime_knl_Sync_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SyncGeneric INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncGeneric_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SyncGeneric_Params xdc_runtime_knl_SyncGeneric_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SyncGeneric_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SyncGeneric_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Void(*)(xdc_UArg))0),  /* userSignal */
    ((xdc_UArg)0),  /* signalArg */
    ((xdc_Bool(*)(xdc_UArg,xdc_UInt))0),  /* userWait */
    ((xdc_UArg)0),  /* waitArg */
    ((xdc_Bool(*)(xdc_Int))0),  /* userQuery */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SyncGeneric_Module__ xdc_runtime_knl_SyncGeneric_Module__root__V = {
    {&xdc_runtime_knl_SyncGeneric_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SyncGeneric_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__diagsEnabled xdc_runtime_knl_SyncGeneric_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__diagsIncluded xdc_runtime_knl_SyncGeneric_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__diagsMask xdc_runtime_knl_SyncGeneric_Module__diagsMask__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__diagsMask)((void*)&xdc_runtime_knl_SyncGeneric_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__gateObj xdc_runtime_knl_SyncGeneric_Module__gateObj__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__gatePrms xdc_runtime_knl_SyncGeneric_Module__gatePrms__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__id xdc_runtime_knl_SyncGeneric_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerDefined xdc_runtime_knl_SyncGeneric_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerObj xdc_runtime_knl_SyncGeneric_Module__loggerObj__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn0 xdc_runtime_knl_SyncGeneric_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn1 xdc_runtime_knl_SyncGeneric_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn2 xdc_runtime_knl_SyncGeneric_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn4 xdc_runtime_knl_SyncGeneric_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn8 xdc_runtime_knl_SyncGeneric_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Module__startupDoneFxn xdc_runtime_knl_SyncGeneric_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SyncGeneric_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Object__count xdc_runtime_knl_SyncGeneric_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Object__heap xdc_runtime_knl_SyncGeneric_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Object__sizeof xdc_runtime_knl_SyncGeneric_Object__sizeof__C = sizeof(xdc_runtime_knl_SyncGeneric_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SyncGeneric_Object__table xdc_runtime_knl_SyncGeneric_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SyncNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncNull_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SyncNull_Params xdc_runtime_knl_SyncNull_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SyncNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SyncNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SyncNull_Module__ xdc_runtime_knl_SyncNull_Module__root__V = {
    {&xdc_runtime_knl_SyncNull_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SyncNull_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__diagsEnabled xdc_runtime_knl_SyncNull_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__diagsIncluded xdc_runtime_knl_SyncNull_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__diagsMask xdc_runtime_knl_SyncNull_Module__diagsMask__C = ((CT__xdc_runtime_knl_SyncNull_Module__diagsMask)((void*)&xdc_runtime_knl_SyncNull_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__gateObj xdc_runtime_knl_SyncNull_Module__gateObj__C = ((CT__xdc_runtime_knl_SyncNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__gatePrms xdc_runtime_knl_SyncNull_Module__gatePrms__C = ((CT__xdc_runtime_knl_SyncNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__id xdc_runtime_knl_SyncNull_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerDefined xdc_runtime_knl_SyncNull_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerObj xdc_runtime_knl_SyncNull_Module__loggerObj__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn0 xdc_runtime_knl_SyncNull_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn1 xdc_runtime_knl_SyncNull_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn2 xdc_runtime_knl_SyncNull_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn4 xdc_runtime_knl_SyncNull_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn8 xdc_runtime_knl_SyncNull_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__startupDoneFxn xdc_runtime_knl_SyncNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SyncNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__count xdc_runtime_knl_SyncNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__heap xdc_runtime_knl_SyncNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__sizeof xdc_runtime_knl_SyncNull_Object__sizeof__C = sizeof(xdc_runtime_knl_SyncNull_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__table xdc_runtime_knl_SyncNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SyncSemThread INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncSemThread_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SyncSemThread_Params xdc_runtime_knl_SyncSemThread_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SyncSemThread_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SyncSemThread_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SyncSemThread_Module__ xdc_runtime_knl_SyncSemThread_Module__root__V = {
    {&xdc_runtime_knl_SyncSemThread_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SyncSemThread_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__diagsEnabled xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__diagsIncluded xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__diagsMask xdc_runtime_knl_SyncSemThread_Module__diagsMask__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__diagsMask)((void*)&xdc_runtime_knl_SyncSemThread_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__gateObj xdc_runtime_knl_SyncSemThread_Module__gateObj__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__gatePrms xdc_runtime_knl_SyncSemThread_Module__gatePrms__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__id xdc_runtime_knl_SyncSemThread_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerDefined xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerObj xdc_runtime_knl_SyncSemThread_Module__loggerObj__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn0 xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn1 xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn2 xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn4 xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn8 xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__count xdc_runtime_knl_SyncSemThread_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__heap xdc_runtime_knl_SyncSemThread_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__sizeof xdc_runtime_knl_SyncSemThread_Object__sizeof__C = sizeof(xdc_runtime_knl_SyncSemThread_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__table xdc_runtime_knl_SyncSemThread_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.Sync_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.Thread INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_Thread_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_Thread_Params xdc_runtime_knl_Thread_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_Thread_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_Thread_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_IArg)(0x0)),  /* arg */
    xdc_runtime_knl_Thread_Priority_NORMAL,  /* priority */
    (xdc_Int)0x0,  /* osPriority */
    (xdc_SizeT)0x0,  /* stackSize */
    ((xdc_Ptr)0),  /* tls */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_Thread_Module__ xdc_runtime_knl_Thread_Module__root__V = {
    {&xdc_runtime_knl_Thread_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_Thread_Module__root__V.link},  /* link.prev */
    0,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__diagsEnabled xdc_runtime_knl_Thread_Module__diagsEnabled__C = (xdc_Bits32)0x80;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__diagsIncluded xdc_runtime_knl_Thread_Module__diagsIncluded__C = (xdc_Bits32)0xff87;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__diagsMask xdc_runtime_knl_Thread_Module__diagsMask__C = ((CT__xdc_runtime_knl_Thread_Module__diagsMask)((void*)&xdc_runtime_knl_Thread_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__gateObj xdc_runtime_knl_Thread_Module__gateObj__C = ((CT__xdc_runtime_knl_Thread_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__gatePrms xdc_runtime_knl_Thread_Module__gatePrms__C = ((CT__xdc_runtime_knl_Thread_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__id xdc_runtime_knl_Thread_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerDefined xdc_runtime_knl_Thread_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerObj xdc_runtime_knl_Thread_Module__loggerObj__C = ((CT__xdc_runtime_knl_Thread_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerCallback_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerFxn0 xdc_runtime_knl_Thread_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_Thread_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerCallback_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerFxn1 xdc_runtime_knl_Thread_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_Thread_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerCallback_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerFxn2 xdc_runtime_knl_Thread_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_Thread_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerCallback_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerFxn4 xdc_runtime_knl_Thread_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_Thread_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerCallback_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__loggerFxn8 xdc_runtime_knl_Thread_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_Thread_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerCallback_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Module__startupDoneFxn xdc_runtime_knl_Thread_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_Thread_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Object__count xdc_runtime_knl_Thread_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Object__heap xdc_runtime_knl_Thread_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Object__sizeof xdc_runtime_knl_Thread_Object__sizeof__C = sizeof(xdc_runtime_knl_Thread_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_Thread_Object__table xdc_runtime_knl_Thread_Object__table__C = 0;

/* A_zeroTimeout__C */
__FAR__ const CT__xdc_runtime_knl_Thread_A_zeroTimeout xdc_runtime_knl_Thread_A_zeroTimeout__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* defaultStackSize__C */
__FAR__ const CT__xdc_runtime_knl_Thread_defaultStackSize xdc_runtime_knl_Thread_defaultStackSize__C = (xdc_SizeT)0x0;


/*
 * ======== xdc.runtime.knl.Thread_Proxy INITIALIZERS ========
 */


/*
 * ======== ti.sdo.xdcruntime.linux.GateProcessSupport FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_GateProcessSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sdo_xdcruntime_linux_GateProcessSupport_query__ENTRY_EVT 0xaf70001
#define ti_sdo_xdcruntime_linux_GateProcessSupport_query__EXIT_EVT 0xaa10002
#define ti_sdo_xdcruntime_linux_GateProcessSupport_enter__ENTRY_EVT 0x7e70001
#define ti_sdo_xdcruntime_linux_GateProcessSupport_enter__EXIT_EVT 0x7f70002
#define ti_sdo_xdcruntime_linux_GateProcessSupport_leave__ENTRY_EVT 0x8050001
#define ti_sdo_xdcruntime_linux_GateProcessSupport_leave__EXIT_EVT 0x8190002
#define ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount__ENTRY_EVT 0xb070001
#define ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount__EXIT_EVT 0xb270002

/* query__E */
xdc_Bool ti_sdo_xdcruntime_linux_GateProcessSupport_query__E( xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateProcessSupport_query__ENTRY_EVT, (xdc_IArg)qual);
    __ret = ti_sdo_xdcruntime_linux_GateProcessSupport_query__F(qual);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateProcessSupport_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* enter__E */
xdc_IArg ti_sdo_xdcruntime_linux_GateProcessSupport_enter__E( ti_sdo_xdcruntime_linux_GateProcessSupport_Handle __inst ) 
{
    xdc_IArg __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateProcessSupport_enter__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = ti_sdo_xdcruntime_linux_GateProcessSupport_enter__F((void*)__inst);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateProcessSupport_enter__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* leave__E */
xdc_Void ti_sdo_xdcruntime_linux_GateProcessSupport_leave__E( ti_sdo_xdcruntime_linux_GateProcessSupport_Handle __inst, xdc_IArg key ) 
{
    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_GateProcessSupport_leave__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)key);
    ti_sdo_xdcruntime_linux_GateProcessSupport_leave__F((void*)__inst, key);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateProcessSupport_leave__EXIT_EVT, 0);
}

/* getReferenceCount__E */
xdc_Int ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount__E( ti_sdo_xdcruntime_linux_GateProcessSupport_Handle __inst, xdc_runtime_Error_Block* err ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)err);
    __ret = ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount__F((void*)__inst, err);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* Module_startup */
xdc_Int ti_sdo_xdcruntime_linux_GateProcessSupport_Module_startup__E( xdc_Int state )
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_Module_startup__F(state);
}


/*
 * ======== ti.sdo.xdcruntime.linux.GateThreadSupport FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_GateThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sdo_xdcruntime_linux_GateThreadSupport_query__ENTRY_EVT 0xaf70001
#define ti_sdo_xdcruntime_linux_GateThreadSupport_query__EXIT_EVT 0xaa10002
#define ti_sdo_xdcruntime_linux_GateThreadSupport_enter__ENTRY_EVT 0x7e70001
#define ti_sdo_xdcruntime_linux_GateThreadSupport_enter__EXIT_EVT 0x7f70002
#define ti_sdo_xdcruntime_linux_GateThreadSupport_leave__ENTRY_EVT 0x8050001
#define ti_sdo_xdcruntime_linux_GateThreadSupport_leave__EXIT_EVT 0x8190002

/* query__E */
xdc_Bool ti_sdo_xdcruntime_linux_GateThreadSupport_query__E( xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateThreadSupport_query__ENTRY_EVT, (xdc_IArg)qual);
    __ret = ti_sdo_xdcruntime_linux_GateThreadSupport_query__F(qual);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateThreadSupport_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* enter__E */
xdc_IArg ti_sdo_xdcruntime_linux_GateThreadSupport_enter__E( ti_sdo_xdcruntime_linux_GateThreadSupport_Handle __inst ) 
{
    xdc_IArg __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateThreadSupport_enter__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = ti_sdo_xdcruntime_linux_GateThreadSupport_enter__F((void*)__inst);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateThreadSupport_enter__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* leave__E */
xdc_Void ti_sdo_xdcruntime_linux_GateThreadSupport_leave__E( ti_sdo_xdcruntime_linux_GateThreadSupport_Handle __inst, xdc_IArg key ) 
{
    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_GateThreadSupport_leave__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)key);
    ti_sdo_xdcruntime_linux_GateThreadSupport_leave__F((void*)__inst, key);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_GateThreadSupport_leave__EXIT_EVT, 0);
}

/* Module_startup */
xdc_Int ti_sdo_xdcruntime_linux_GateThreadSupport_Module_startup__E( xdc_Int state )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Module_startup__F(state);
}


/*
 * ======== ti.sdo.xdcruntime.linux.SemProcessSupport FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_SemProcessSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sdo_xdcruntime_linux_SemProcessSupport_pend__ENTRY_EVT 0x8290001
#define ti_sdo_xdcruntime_linux_SemProcessSupport_pend__EXIT_EVT 0x8420002
#define ti_sdo_xdcruntime_linux_SemProcessSupport_post__ENTRY_EVT 0x84f0001
#define ti_sdo_xdcruntime_linux_SemProcessSupport_post__EXIT_EVT 0x8620002

/* pend__E */
xdc_Int ti_sdo_xdcruntime_linux_SemProcessSupport_pend__E( ti_sdo_xdcruntime_linux_SemProcessSupport_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(ti_sdo_xdcruntime_linux_SemProcessSupport_pend__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_SemProcessSupport_pend__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_SemProcessSupport_pend__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* post__E */
xdc_Bool ti_sdo_xdcruntime_linux_SemProcessSupport_post__E( ti_sdo_xdcruntime_linux_SemProcessSupport_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_SemProcessSupport_post__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_SemProcessSupport_post__F((void*)__inst, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_SemProcessSupport_post__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* Module_startup */
xdc_Int ti_sdo_xdcruntime_linux_SemProcessSupport_Module_startup__E( xdc_Int state )
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_Module_startup__F(state);
}


/*
 * ======== ti.sdo.xdcruntime.linux.SemThreadSupport FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_SemThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sdo_xdcruntime_linux_SemThreadSupport_pend__ENTRY_EVT 0x8290001
#define ti_sdo_xdcruntime_linux_SemThreadSupport_pend__EXIT_EVT 0x8420002
#define ti_sdo_xdcruntime_linux_SemThreadSupport_post__ENTRY_EVT 0x84f0001
#define ti_sdo_xdcruntime_linux_SemThreadSupport_post__EXIT_EVT 0x8620002

/* pend__E */
xdc_Int ti_sdo_xdcruntime_linux_SemThreadSupport_pend__E( ti_sdo_xdcruntime_linux_SemThreadSupport_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(ti_sdo_xdcruntime_linux_SemThreadSupport_pend__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_SemThreadSupport_pend__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_SemThreadSupport_pend__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* post__E */
xdc_Bool ti_sdo_xdcruntime_linux_SemThreadSupport_post__E( ti_sdo_xdcruntime_linux_SemThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_SemThreadSupport_post__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_SemThreadSupport_post__F((void*)__inst, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_SemThreadSupport_post__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* Module_startup */
xdc_Int ti_sdo_xdcruntime_linux_SemThreadSupport_Module_startup__E( xdc_Int state )
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_Module_startup__F(state);
}


/*
 * ======== ti.sdo.xdcruntime.linux.ThreadSupport FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_ThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sdo_xdcruntime_linux_ThreadSupport_self__ENTRY_EVT 0xc350001
#define ti_sdo_xdcruntime_linux_ThreadSupport_self__EXIT_EVT 0xc440002
#define ti_sdo_xdcruntime_linux_ThreadSupport_start__ENTRY_EVT 0x86f0001
#define ti_sdo_xdcruntime_linux_ThreadSupport_start__EXIT_EVT 0x87f0002
#define ti_sdo_xdcruntime_linux_ThreadSupport_yield__ENTRY_EVT 0x88d0001
#define ti_sdo_xdcruntime_linux_ThreadSupport_yield__EXIT_EVT 0x89d0002
#define ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__ENTRY_EVT 0x8ab0001
#define ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__EXIT_EVT 0x8d10002
#define ti_sdo_xdcruntime_linux_ThreadSupport_sleep__ENTRY_EVT 0x8ed0001
#define ti_sdo_xdcruntime_linux_ThreadSupport_sleep__EXIT_EVT 0x9030002
#define ti_sdo_xdcruntime_linux_ThreadSupport_join__ENTRY_EVT 0x9110001
#define ti_sdo_xdcruntime_linux_ThreadSupport_join__EXIT_EVT 0x9240002
#define ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__ENTRY_EVT 0x9310001
#define ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__EXIT_EVT 0x94b0002
#define ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__ENTRY_EVT 0x95f0001
#define ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__EXIT_EVT 0x97d0002
#define ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__ENTRY_EVT 0x9910001
#define ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__EXIT_EVT 0x9ad0002
#define ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__ENTRY_EVT 0x9c30001
#define ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__EXIT_EVT 0x9e30002
#define ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__ENTRY_EVT 0x9f90001
#define ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__EXIT_EVT 0xa0f0002
#define ti_sdo_xdcruntime_linux_ThreadSupport_getTls__ENTRY_EVT 0xa230001
#define ti_sdo_xdcruntime_linux_ThreadSupport_getTls__EXIT_EVT 0xa340002
#define ti_sdo_xdcruntime_linux_ThreadSupport_setTls__ENTRY_EVT 0xa430001
#define ti_sdo_xdcruntime_linux_ThreadSupport_setTls__EXIT_EVT 0xa580002
#define ti_sdo_xdcruntime_linux_ThreadSupport_stat__ENTRY_EVT 0xa690001
#define ti_sdo_xdcruntime_linux_ThreadSupport_stat__EXIT_EVT 0xa800002

/* self__E */
xdc_runtime_knl_IThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_self__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_knl_IThreadSupport_Handle __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_self__ENTRY_EVT, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_self__F(eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_self__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* start__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_start__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_start__ENTRY_EVT, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_start__F(eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_start__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* yield__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_yield__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_yield__ENTRY_EVT, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_yield__F(eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_yield__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* compareOsPriorities__E */
xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__E( xdc_Int p1, xdc_Int p2, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__ENTRY_EVT, (xdc_IArg)p1, (xdc_IArg)p2, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__F(p1, p2, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* sleep__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_sleep__E( xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_ThreadSupport_sleep__ENTRY_EVT, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_sleep__F(timeout, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_sleep__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* join__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_join__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_ThreadSupport_join__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_join__F((void*)__inst, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_join__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getPriority__E */
xdc_runtime_knl_IThreadSupport_Priority ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_knl_IThreadSupport_Priority __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__F((void*)__inst, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* setPriority__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_knl_IThreadSupport_Priority newPri, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write3(ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)newPri, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__F((void*)__inst, newPri, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getOsPriority__E */
xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__F((void*)__inst, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* setOsPriority__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_Int newPri, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write3(ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)newPri, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__F((void*)__inst, newPri, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getOsHandle__E */
xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst ) 
{
    xdc_Ptr __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__F((void*)__inst);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getTls__E */
xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getTls__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst ) 
{
    xdc_Ptr __ret;

    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_getTls__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_getTls__F((void*)__inst);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_getTls__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* setTls__E */
xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_setTls__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_Ptr tls ) 
{
    xdc_runtime_Log_write2(ti_sdo_xdcruntime_linux_ThreadSupport_setTls__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)tls);
    ti_sdo_xdcruntime_linux_ThreadSupport_setTls__F((void*)__inst, tls);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_setTls__EXIT_EVT, 0);
}

/* stat__E */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_stat__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_knl_IThreadSupport_Stat* buf, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write3(ti_sdo_xdcruntime_linux_ThreadSupport_stat__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)buf, (xdc_IArg)eb);
    __ret = ti_sdo_xdcruntime_linux_ThreadSupport_stat__F((void*)__inst, buf, eb);
    xdc_runtime_Log_write1(ti_sdo_xdcruntime_linux_ThreadSupport_stat__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* Module_startup */
xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E( xdc_Int state )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__F(state);
}


/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 ti_sdo_xdcruntime_linux_TimestampPosix_get32__E( void ) 
{
    return ti_sdo_xdcruntime_linux_TimestampPosix_get32__F();
}

/* get64__E */
xdc_Void ti_sdo_xdcruntime_linux_TimestampPosix_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    ti_sdo_xdcruntime_linux_TimestampPosix_get64__F(result);
}

/* getFreq__E */
xdc_Void ti_sdo_xdcruntime_linux_TimestampPosix_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    ti_sdo_xdcruntime_linux_TimestampPosix_getFreq__F(freq);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_CString control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Error_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Error_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Error_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Error_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Error_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Error_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Error_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Error_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Error_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Error_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Error_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Error_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Error_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Error_check__ENTRY_EVT 0x4040001
#define xdc_runtime_Error_check__EXIT_EVT 0x4140002
#define xdc_runtime_Error_getData__ENTRY_EVT 0x4220001
#define xdc_runtime_Error_getData__EXIT_EVT 0x4340002
#define xdc_runtime_Error_getCode__ENTRY_EVT 0x4440001
#define xdc_runtime_Error_getCode__EXIT_EVT 0x4560002
#define xdc_runtime_Error_getId__ENTRY_EVT 0x4680001
#define xdc_runtime_Error_getId__EXIT_EVT 0x4780002
#define xdc_runtime_Error_getMsg__ENTRY_EVT 0x4880001
#define xdc_runtime_Error_getMsg__EXIT_EVT 0x4990002
#define xdc_runtime_Error_getSite__ENTRY_EVT 0x4aa0001
#define xdc_runtime_Error_getSite__EXIT_EVT 0x4bc0002
#define xdc_runtime_Error_init__ENTRY_EVT 0x4cc0001
#define xdc_runtime_Error_init__EXIT_EVT 0x4db0002
#define xdc_runtime_Error_print__ENTRY_EVT 0x4ea0001
#define xdc_runtime_Error_print__EXIT_EVT 0x4fa0002
#define xdc_runtime_Error_raiseX__ENTRY_EVT 0x50a0001
#define xdc_runtime_Error_raiseX__EXIT_EVT 0x5290002

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(xdc_runtime_Error_check__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_Error_check__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_check__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_Data* __ret;

    xdc_runtime_Log_write1(xdc_runtime_Error_getData__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_Error_getData__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_getData__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_UInt16 __ret;

    xdc_runtime_Log_write1(xdc_runtime_Error_getCode__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_Error_getCode__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_getCode__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_Id __ret;

    xdc_runtime_Log_write1(xdc_runtime_Error_getId__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_Error_getId__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_getId__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_String __ret;

    xdc_runtime_Log_write1(xdc_runtime_Error_getMsg__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_Error_getMsg__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_getMsg__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Types_Site* __ret;

    xdc_runtime_Log_write1(xdc_runtime_Error_getSite__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_Error_getSite__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_getSite__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Error_init__ENTRY_EVT, (xdc_IArg)eb);
    xdc_runtime_Error_init__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_init__EXIT_EVT, 0);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Error_print__ENTRY_EVT, (xdc_IArg)eb);
    xdc_runtime_Error_print__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_Error_print__EXIT_EVT, 0);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_CString file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Log_write4(xdc_runtime_Error_raiseX__ENTRY_EVT, (xdc_IArg)eb, (xdc_IArg)mod, (xdc_IArg)file, (xdc_IArg)line);
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
    xdc_runtime_Log_write1(xdc_runtime_Error_raiseX__EXIT_EVT, 0);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.GateNull FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool xdc_runtime_GateNull_query__E( xdc_Int qual ) 
{
    return xdc_runtime_GateNull_query__F(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_GateNull_enter__E( xdc_runtime_GateNull_Handle __inst ) 
{
    return xdc_runtime_GateNull_enter__F((void*)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_GateNull_leave__E( xdc_runtime_GateNull_Handle __inst, xdc_IArg key ) 
{
    xdc_runtime_GateNull_leave__F((void*)__inst, key);
}


/*
 * ======== xdc.runtime.HeapStd FUNCTION STUBS ========
 */

/* free__E */
xdc_Void xdc_runtime_HeapStd_free__E( xdc_runtime_HeapStd_Handle __inst, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_HeapStd_free__F((void*)__inst, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_HeapStd_getStats__E( xdc_runtime_HeapStd_Handle __inst, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_HeapStd_getStats__F((void*)__inst, stats);
}

/* alloc__E */
xdc_Ptr xdc_runtime_HeapStd_alloc__E( xdc_runtime_HeapStd_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_HeapStd_alloc__F((void*)__inst, size, align, eb);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_HeapStd_isBlocking__E( xdc_runtime_HeapStd_Handle __inst ) 
{
    return xdc_runtime_HeapStd_isBlocking__F((void*)__inst);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.LoggerCallback FUNCTION STUBS ========
 */

/* enable__E */
xdc_Bool xdc_runtime_LoggerCallback_enable__E( xdc_runtime_LoggerCallback_Handle __inst ) 
{
    return xdc_runtime_LoggerCallback_enable__F((void*)__inst);
}

/* disable__E */
xdc_Bool xdc_runtime_LoggerCallback_disable__E( xdc_runtime_LoggerCallback_Handle __inst ) 
{
    return xdc_runtime_LoggerCallback_disable__F((void*)__inst);
}

/* write0__E */
xdc_Void xdc_runtime_LoggerCallback_write0__E( xdc_runtime_LoggerCallback_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid ) 
{
    xdc_runtime_LoggerCallback_write0__F((void*)__inst, evt, mid);
}

/* write1__E */
xdc_Void xdc_runtime_LoggerCallback_write1__E( xdc_runtime_LoggerCallback_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1 ) 
{
    xdc_runtime_LoggerCallback_write1__F((void*)__inst, evt, mid, a1);
}

/* write2__E */
xdc_Void xdc_runtime_LoggerCallback_write2__E( xdc_runtime_LoggerCallback_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2 ) 
{
    xdc_runtime_LoggerCallback_write2__F((void*)__inst, evt, mid, a1, a2);
}

/* write4__E */
xdc_Void xdc_runtime_LoggerCallback_write4__E( xdc_runtime_LoggerCallback_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4 ) 
{
    xdc_runtime_LoggerCallback_write4__F((void*)__inst, evt, mid, a1, a2, a3, a4);
}

/* write8__E */
xdc_Void xdc_runtime_LoggerCallback_write8__E( xdc_runtime_LoggerCallback_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4, xdc_IArg a5, xdc_IArg a6, xdc_IArg a7, xdc_IArg a8 ) 
{
    xdc_runtime_LoggerCallback_write8__F((void*)__inst, evt, mid, a1, a2, a3, a4, a5, a6, a7, a8);
}

/* Module_startup */
xdc_Int xdc_runtime_LoggerCallback_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_LoggerCallback_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.LoggerSys FUNCTION STUBS ========
 */

/* enable__E */
xdc_Bool xdc_runtime_LoggerSys_enable__E( xdc_runtime_LoggerSys_Handle __inst ) 
{
    return xdc_runtime_LoggerSys_enable__F((void*)__inst);
}

/* disable__E */
xdc_Bool xdc_runtime_LoggerSys_disable__E( xdc_runtime_LoggerSys_Handle __inst ) 
{
    return xdc_runtime_LoggerSys_disable__F((void*)__inst);
}

/* write0__E */
xdc_Void xdc_runtime_LoggerSys_write0__E( xdc_runtime_LoggerSys_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid ) 
{
    xdc_runtime_LoggerSys_write0__F((void*)__inst, evt, mid);
}

/* write1__E */
xdc_Void xdc_runtime_LoggerSys_write1__E( xdc_runtime_LoggerSys_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1 ) 
{
    xdc_runtime_LoggerSys_write1__F((void*)__inst, evt, mid, a1);
}

/* write2__E */
xdc_Void xdc_runtime_LoggerSys_write2__E( xdc_runtime_LoggerSys_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2 ) 
{
    xdc_runtime_LoggerSys_write2__F((void*)__inst, evt, mid, a1, a2);
}

/* write4__E */
xdc_Void xdc_runtime_LoggerSys_write4__E( xdc_runtime_LoggerSys_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4 ) 
{
    xdc_runtime_LoggerSys_write4__F((void*)__inst, evt, mid, a1, a2, a3, a4);
}

/* write8__E */
xdc_Void xdc_runtime_LoggerSys_write8__E( xdc_runtime_LoggerSys_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4, xdc_IArg a5, xdc_IArg a6, xdc_IArg a7, xdc_IArg a8 ) 
{
    xdc_runtime_LoggerSys_write8__F((void*)__inst, evt, mid, a1, a2, a3, a4, a5, a6, a7, a8);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Registry_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Registry_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Registry_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Registry_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Registry_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Registry_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Registry_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Registry_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Registry_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Registry_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Registry_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Registry_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Registry_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Registry_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Registry_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Registry_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Registry_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Registry_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Registry_addModule__ENTRY_EVT 0x5ea0001
#define xdc_runtime_Registry_addModule__EXIT_EVT 0x6040002
#define xdc_runtime_Registry_findByName__ENTRY_EVT 0x6160001
#define xdc_runtime_Registry_findByName__EXIT_EVT 0x62d0002
#define xdc_runtime_Registry_findByNamePattern__ENTRY_EVT 0x6400001
#define xdc_runtime_Registry_findByNamePattern__EXIT_EVT 0x6660002
#define xdc_runtime_Registry_findById__ENTRY_EVT 0x6800001
#define xdc_runtime_Registry_findById__EXIT_EVT 0x6930002
#define xdc_runtime_Registry_getMask__ENTRY_EVT 0x6a40001
#define xdc_runtime_Registry_getMask__EXIT_EVT 0x6bc0002
#define xdc_runtime_Registry_isMember__ENTRY_EVT 0x6cc0001
#define xdc_runtime_Registry_isMember__EXIT_EVT 0x6df0002
#define xdc_runtime_Registry_getNextModule__ENTRY_EVT 0x6f00001
#define xdc_runtime_Registry_getNextModule__EXIT_EVT 0x7080002
#define xdc_runtime_Registry_getModuleName__ENTRY_EVT 0x71e0001
#define xdc_runtime_Registry_getModuleName__EXIT_EVT 0x7360002
#define xdc_runtime_Registry_getModuleId__ENTRY_EVT 0x74e0001
#define xdc_runtime_Registry_getModuleId__EXIT_EVT 0x7640002

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_CString modName ) 
{
    xdc_runtime_Registry_Result __ret;

    xdc_runtime_Log_write2(xdc_runtime_Registry_addModule__ENTRY_EVT, (xdc_IArg)desc, (xdc_IArg)modName);
    __ret = xdc_runtime_Registry_addModule__F(desc, modName);
    xdc_runtime_Log_write1(xdc_runtime_Registry_addModule__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_CString modName ) 
{
    xdc_runtime_Registry_Desc* __ret;

    xdc_runtime_Log_write1(xdc_runtime_Registry_findByName__ENTRY_EVT, (xdc_IArg)modName);
    __ret = xdc_runtime_Registry_findByName__F(modName);
    xdc_runtime_Log_write1(xdc_runtime_Registry_findByName__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_CString namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    xdc_runtime_Registry_Desc* __ret;

    xdc_runtime_Log_write3(xdc_runtime_Registry_findByNamePattern__ENTRY_EVT, (xdc_IArg)namePat, (xdc_IArg)len, (xdc_IArg)prev);
    __ret = xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
    xdc_runtime_Log_write1(xdc_runtime_Registry_findByNamePattern__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    xdc_runtime_Registry_Desc* __ret;

    xdc_runtime_Log_write1(xdc_runtime_Registry_findById__ENTRY_EVT, (xdc_IArg)mid);
    __ret = xdc_runtime_Registry_findById__F(mid);
    xdc_runtime_Log_write1(xdc_runtime_Registry_findById__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_CString name, xdc_runtime_Types_DiagsMask* mask ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_Registry_getMask__ENTRY_EVT, (xdc_IArg)name, (xdc_IArg)mask);
    __ret = xdc_runtime_Registry_getMask__F(name, mask);
    xdc_runtime_Log_write1(xdc_runtime_Registry_getMask__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(xdc_runtime_Registry_isMember__ENTRY_EVT, (xdc_IArg)mid);
    __ret = xdc_runtime_Registry_isMember__F(mid);
    xdc_runtime_Log_write1(xdc_runtime_Registry_isMember__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    xdc_runtime_Registry_Desc* __ret;

    xdc_runtime_Log_write1(xdc_runtime_Registry_getNextModule__ENTRY_EVT, (xdc_IArg)desc);
    __ret = xdc_runtime_Registry_getNextModule__F(desc);
    xdc_runtime_Log_write1(xdc_runtime_Registry_getNextModule__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getModuleName__E */
xdc_CString xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    xdc_CString __ret;

    xdc_runtime_Log_write1(xdc_runtime_Registry_getModuleName__ENTRY_EVT, (xdc_IArg)desc);
    __ret = xdc_runtime_Registry_getModuleName__F(desc);
    xdc_runtime_Log_write1(xdc_runtime_Registry_getModuleName__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    xdc_runtime_Types_ModuleId __ret;

    xdc_runtime_Log_write1(xdc_runtime_Registry_getModuleId__ENTRY_EVT, (xdc_IArg)desc);
    __ret = xdc_runtime_Registry_getModuleId__F(desc);
    xdc_runtime_Log_write1(xdc_runtime_Registry_getModuleId__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.Rta FUNCTION STUBS ========
 */

/* processCommand__E */
xdc_Void xdc_runtime_Rta_processCommand__E( xdc_runtime_Rta_CommandPacket* cmd, xdc_runtime_Rta_ResponsePacket* resp ) 
{
    xdc_runtime_Rta_processCommand__F(cmd, resp);
}

/* acknowledgeCmd__E */
xdc_Void xdc_runtime_Rta_acknowledgeCmd__E( xdc_runtime_Rta_ResponsePacket* resp ) 
{
    xdc_runtime_Rta_acknowledgeCmd__F(resp);
}

/* readMask__E */
xdc_Void xdc_runtime_Rta_readMask__E( xdc_runtime_Rta_ResponsePacket* resp, xdc_UArg addr ) 
{
    xdc_runtime_Rta_readMask__F(resp, addr);
}

/* writeMask__E */
xdc_Void xdc_runtime_Rta_writeMask__E( xdc_runtime_Rta_ResponsePacket* resp, xdc_UArg addr, xdc_UArg val ) 
{
    xdc_runtime_Rta_writeMask__F(resp, addr, val);
}

/* enableLog__E */
xdc_Void xdc_runtime_Rta_enableLog__E( xdc_runtime_Rta_ResponsePacket* resp, xdc_UArg log ) 
{
    xdc_runtime_Rta_enableLog__F(resp, log);
}

/* disableLog__E */
xdc_Void xdc_runtime_Rta_disableLog__E( xdc_runtime_Rta_ResponsePacket* resp, xdc_UArg log ) 
{
    xdc_runtime_Rta_disableLog__F(resp, log);
}

/* getCpuSpeed__E */
xdc_Void xdc_runtime_Rta_getCpuSpeed__E( xdc_runtime_Rta_ResponsePacket* resp ) 
{
    xdc_runtime_Rta_getCpuSpeed__F(resp);
}

/* resetLog__E */
xdc_Void xdc_runtime_Rta_resetLog__E( xdc_runtime_Rta_ResponsePacket* resp, xdc_UArg log ) 
{
    xdc_runtime_Rta_resetLog__F(resp, log);
}

/* changePeriod__E */
xdc_Void xdc_runtime_Rta_changePeriod__E( xdc_runtime_Rta_ResponsePacket* resp, xdc_UArg period ) 
{
    xdc_runtime_Rta_changePeriod__F(resp, period);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysStd FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysStd_abort__E( xdc_CString str ) 
{
    xdc_runtime_SysStd_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysStd_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysStd_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysStd_flush__E( void ) 
{
    xdc_runtime_SysStd_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysStd_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysStd_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysStd_ready__E( void ) 
{
    return xdc_runtime_SysStd_ready__F();
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_CString str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vsnprintf__E */
xdc_Int xdc_runtime_System_vsnprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsnprintf__F(buf, n, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_CString pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== xdc.runtime.knl.GateH FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateH_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateH_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateH_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateH_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateH_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateH_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateH_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateH_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateH_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateH_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateH_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateH_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateH_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateH_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateH_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateH_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateH_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateH_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_GateH_enter__ENTRY_EVT 0x7e70001
#define xdc_runtime_knl_GateH_enter__EXIT_EVT 0x7f70002
#define xdc_runtime_knl_GateH_leave__ENTRY_EVT 0x8050001
#define xdc_runtime_knl_GateH_leave__EXIT_EVT 0x8190002

/* enter__E */
xdc_IArg xdc_runtime_knl_GateH_enter__E( xdc_runtime_IGateProvider_Handle hdl ) 
{
    xdc_IArg __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_GateH_enter__ENTRY_EVT, (xdc_IArg)hdl);
    __ret = xdc_runtime_knl_GateH_enter__F(hdl);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateH_enter__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* leave__E */
xdc_Void xdc_runtime_knl_GateH_leave__E( xdc_runtime_IGateProvider_Handle hdl, xdc_IArg key ) 
{
    xdc_runtime_Log_write2(xdc_runtime_knl_GateH_leave__ENTRY_EVT, (xdc_IArg)hdl, (xdc_IArg)key);
    xdc_runtime_knl_GateH_leave__F(hdl, key);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateH_leave__EXIT_EVT, 0);
}


/*
 * ======== xdc.runtime.knl.GateProcess FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateProcess_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateProcess_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateProcess_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateProcess_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateProcess_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateProcess_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateProcess_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateProcess_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateProcess_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateProcess_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateProcess_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateProcess_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateProcess_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateProcess_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateProcess_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateProcess_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateProcess_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateProcess_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_GateProcess_query__ENTRY_EVT 0xaf70001
#define xdc_runtime_knl_GateProcess_query__EXIT_EVT 0xaa10002
#define xdc_runtime_knl_GateProcess_enter__ENTRY_EVT 0x7e70001
#define xdc_runtime_knl_GateProcess_enter__EXIT_EVT 0x7f70002
#define xdc_runtime_knl_GateProcess_leave__ENTRY_EVT 0x8050001
#define xdc_runtime_knl_GateProcess_leave__EXIT_EVT 0x8190002
#define xdc_runtime_knl_GateProcess_getReferenceCount__ENTRY_EVT 0xb070001
#define xdc_runtime_knl_GateProcess_getReferenceCount__EXIT_EVT 0xb270002

/* query__E */
xdc_Bool xdc_runtime_knl_GateProcess_query__E( xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_GateProcess_query__ENTRY_EVT, (xdc_IArg)qual);
    __ret = xdc_runtime_knl_GateProcess_query__F(qual);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateProcess_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* enter__E */
xdc_IArg xdc_runtime_knl_GateProcess_enter__E( xdc_runtime_knl_GateProcess_Handle __inst ) 
{
    xdc_IArg __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_GateProcess_enter__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = xdc_runtime_knl_GateProcess_enter__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateProcess_enter__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* leave__E */
xdc_Void xdc_runtime_knl_GateProcess_leave__E( xdc_runtime_knl_GateProcess_Handle __inst, xdc_IArg key ) 
{
    xdc_runtime_Log_write2(xdc_runtime_knl_GateProcess_leave__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)key);
    xdc_runtime_knl_GateProcess_leave__F((void*)__inst, key);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateProcess_leave__EXIT_EVT, 0);
}

/* getReferenceCount__E */
xdc_Int xdc_runtime_knl_GateProcess_getReferenceCount__E( xdc_runtime_knl_GateProcess_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_GateProcess_getReferenceCount__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_GateProcess_getReferenceCount__F((void*)__inst, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateProcess_getReferenceCount__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.GateThread FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateThread_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_GateThread_query__ENTRY_EVT 0xaf70001
#define xdc_runtime_knl_GateThread_query__EXIT_EVT 0xaa10002
#define xdc_runtime_knl_GateThread_enter__ENTRY_EVT 0x7e70001
#define xdc_runtime_knl_GateThread_enter__EXIT_EVT 0x7f70002
#define xdc_runtime_knl_GateThread_leave__ENTRY_EVT 0x8050001
#define xdc_runtime_knl_GateThread_leave__EXIT_EVT 0x8190002

/* query__E */
xdc_Bool xdc_runtime_knl_GateThread_query__E( xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_GateThread_query__ENTRY_EVT, (xdc_IArg)qual);
    __ret = xdc_runtime_knl_GateThread_query__F(qual);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateThread_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* enter__E */
xdc_IArg xdc_runtime_knl_GateThread_enter__E( xdc_runtime_knl_GateThread_Handle __inst ) 
{
    xdc_IArg __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_GateThread_enter__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = xdc_runtime_knl_GateThread_enter__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateThread_enter__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* leave__E */
xdc_Void xdc_runtime_knl_GateThread_leave__E( xdc_runtime_knl_GateThread_Handle __inst, xdc_IArg key ) 
{
    xdc_runtime_Log_write2(xdc_runtime_knl_GateThread_leave__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)key);
    xdc_runtime_knl_GateThread_leave__F((void*)__inst, key);
    xdc_runtime_Log_write1(xdc_runtime_knl_GateThread_leave__EXIT_EVT, 0);
}


/*
 * ======== xdc.runtime.knl.SemProcess FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemProcess_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemProcess_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemProcess_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemProcess_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemProcess_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemProcess_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemProcess_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemProcess_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemProcess_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemProcess_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemProcess_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemProcess_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemProcess_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemProcess_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemProcess_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemProcess_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemProcess_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemProcess_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_SemProcess_pend__ENTRY_EVT 0x8290001
#define xdc_runtime_knl_SemProcess_pend__EXIT_EVT 0x8420002
#define xdc_runtime_knl_SemProcess_post__ENTRY_EVT 0x84f0001
#define xdc_runtime_knl_SemProcess_post__EXIT_EVT 0x8620002

/* pend__E */
xdc_Int xdc_runtime_knl_SemProcess_pend__E( xdc_runtime_knl_SemProcess_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_SemProcess_pend__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SemProcess_pend__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SemProcess_pend__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* post__E */
xdc_Bool xdc_runtime_knl_SemProcess_post__E( xdc_runtime_knl_SemProcess_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_SemProcess_post__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SemProcess_post__F((void*)__inst, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SemProcess_post__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.SemThread FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemThread_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_SemThread_pend__ENTRY_EVT 0x8290001
#define xdc_runtime_knl_SemThread_pend__EXIT_EVT 0x8420002
#define xdc_runtime_knl_SemThread_post__ENTRY_EVT 0x84f0001
#define xdc_runtime_knl_SemThread_post__EXIT_EVT 0x8620002

/* pend__E */
xdc_Int xdc_runtime_knl_SemThread_pend__E( xdc_runtime_knl_SemThread_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_SemThread_pend__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SemThread_pend__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SemThread_pend__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* post__E */
xdc_Bool xdc_runtime_knl_SemThread_post__E( xdc_runtime_knl_SemThread_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_SemThread_post__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SemThread_post__F((void*)__inst, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SemThread_post__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.Semaphore FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Semaphore_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_Semaphore_pend__ENTRY_EVT 0x8290001
#define xdc_runtime_knl_Semaphore_pend__EXIT_EVT 0x8420002
#define xdc_runtime_knl_Semaphore_post__ENTRY_EVT 0x84f0001
#define xdc_runtime_knl_Semaphore_post__EXIT_EVT 0x8620002

/* pend__E */
xdc_Int xdc_runtime_knl_Semaphore_pend__E( xdc_runtime_knl_ISemaphore_Handle sem, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_Semaphore_pend__ENTRY_EVT, (xdc_IArg)sem, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Semaphore_pend__F(sem, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Semaphore_pend__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* post__E */
xdc_Bool xdc_runtime_knl_Semaphore_post__E( xdc_runtime_knl_ISemaphore_Handle sem, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_Semaphore_post__ENTRY_EVT, (xdc_IArg)sem, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Semaphore_post__F(sem, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Semaphore_post__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.Sync FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Sync_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Sync_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Sync_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Sync_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Sync_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Sync_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Sync_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Sync_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Sync_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Sync_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Sync_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Sync_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Sync_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Sync_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Sync_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Sync_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Sync_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Sync_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_Sync_query__ENTRY_EVT 0xa8d0001
#define xdc_runtime_knl_Sync_query__EXIT_EVT 0xaa10002
#define xdc_runtime_knl_Sync_signal__ENTRY_EVT 0xaaf0001
#define xdc_runtime_knl_Sync_signal__EXIT_EVT 0xac00002
#define xdc_runtime_knl_Sync_wait__ENTRY_EVT 0xad10001
#define xdc_runtime_knl_Sync_wait__EXIT_EVT 0xaea0002

/* query__E */
xdc_Bool xdc_runtime_knl_Sync_query__E( xdc_runtime_knl_ISync_Handle sync, xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_Sync_query__ENTRY_EVT, (xdc_IArg)sync, (xdc_IArg)qual);
    __ret = xdc_runtime_knl_Sync_query__F(sync, qual);
    xdc_runtime_Log_write1(xdc_runtime_knl_Sync_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* signal__E */
xdc_Void xdc_runtime_knl_Sync_signal__E( xdc_runtime_knl_ISync_Handle sync ) 
{
    xdc_runtime_Log_write1(xdc_runtime_knl_Sync_signal__ENTRY_EVT, (xdc_IArg)sync);
    xdc_runtime_knl_Sync_signal__F(sync);
    xdc_runtime_Log_write1(xdc_runtime_knl_Sync_signal__EXIT_EVT, 0);
}

/* wait__E */
xdc_Int xdc_runtime_knl_Sync_wait__E( xdc_runtime_knl_ISync_Handle sync, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_Sync_wait__ENTRY_EVT, (xdc_IArg)sync, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Sync_wait__F(sync, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Sync_wait__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.SyncGeneric FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncGeneric_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncGeneric_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncGeneric_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncGeneric_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncGeneric_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncGeneric_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncGeneric_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncGeneric_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncGeneric_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncGeneric_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncGeneric_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncGeneric_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncGeneric_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncGeneric_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncGeneric_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncGeneric_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncGeneric_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncGeneric_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_SyncGeneric_query__ENTRY_EVT 0xa8d0001
#define xdc_runtime_knl_SyncGeneric_query__EXIT_EVT 0xaa10002
#define xdc_runtime_knl_SyncGeneric_signal__ENTRY_EVT 0xaaf0001
#define xdc_runtime_knl_SyncGeneric_signal__EXIT_EVT 0xac00002
#define xdc_runtime_knl_SyncGeneric_wait__ENTRY_EVT 0xad10001
#define xdc_runtime_knl_SyncGeneric_wait__EXIT_EVT 0xaea0002

/* query__E */
xdc_Bool xdc_runtime_knl_SyncGeneric_query__E( xdc_runtime_knl_SyncGeneric_Handle __inst, xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_SyncGeneric_query__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)qual);
    __ret = xdc_runtime_knl_SyncGeneric_query__F((void*)__inst, qual);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncGeneric_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* signal__E */
xdc_Void xdc_runtime_knl_SyncGeneric_signal__E( xdc_runtime_knl_SyncGeneric_Handle __inst ) 
{
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncGeneric_signal__ENTRY_EVT, (xdc_IArg)__inst);
    xdc_runtime_knl_SyncGeneric_signal__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncGeneric_signal__EXIT_EVT, 0);
}

/* wait__E */
xdc_Int xdc_runtime_knl_SyncGeneric_wait__E( xdc_runtime_knl_SyncGeneric_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_SyncGeneric_wait__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SyncGeneric_wait__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncGeneric_wait__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.SyncNull FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncNull_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_SyncNull_query__ENTRY_EVT 0xa8d0001
#define xdc_runtime_knl_SyncNull_query__EXIT_EVT 0xaa10002
#define xdc_runtime_knl_SyncNull_signal__ENTRY_EVT 0xaaf0001
#define xdc_runtime_knl_SyncNull_signal__EXIT_EVT 0xac00002
#define xdc_runtime_knl_SyncNull_wait__ENTRY_EVT 0xad10001
#define xdc_runtime_knl_SyncNull_wait__EXIT_EVT 0xaea0002

/* query__E */
xdc_Bool xdc_runtime_knl_SyncNull_query__E( xdc_runtime_knl_SyncNull_Handle __inst, xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_SyncNull_query__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)qual);
    __ret = xdc_runtime_knl_SyncNull_query__F((void*)__inst, qual);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncNull_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* signal__E */
xdc_Void xdc_runtime_knl_SyncNull_signal__E( xdc_runtime_knl_SyncNull_Handle __inst ) 
{
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncNull_signal__ENTRY_EVT, (xdc_IArg)__inst);
    xdc_runtime_knl_SyncNull_signal__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncNull_signal__EXIT_EVT, 0);
}

/* wait__E */
xdc_Int xdc_runtime_knl_SyncNull_wait__E( xdc_runtime_knl_SyncNull_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_SyncNull_wait__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SyncNull_wait__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncNull_wait__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.SyncSemThread FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncSemThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncSemThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncSemThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncSemThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncSemThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncSemThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncSemThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncSemThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncSemThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncSemThread_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_SyncSemThread_query__ENTRY_EVT 0xa8d0001
#define xdc_runtime_knl_SyncSemThread_query__EXIT_EVT 0xaa10002
#define xdc_runtime_knl_SyncSemThread_signal__ENTRY_EVT 0xaaf0001
#define xdc_runtime_knl_SyncSemThread_signal__EXIT_EVT 0xac00002
#define xdc_runtime_knl_SyncSemThread_wait__ENTRY_EVT 0xad10001
#define xdc_runtime_knl_SyncSemThread_wait__EXIT_EVT 0xaea0002

/* query__E */
xdc_Bool xdc_runtime_knl_SyncSemThread_query__E( xdc_runtime_knl_SyncSemThread_Handle __inst, xdc_Int qual ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_SyncSemThread_query__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)qual);
    __ret = xdc_runtime_knl_SyncSemThread_query__F((void*)__inst, qual);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncSemThread_query__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* signal__E */
xdc_Void xdc_runtime_knl_SyncSemThread_signal__E( xdc_runtime_knl_SyncSemThread_Handle __inst ) 
{
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncSemThread_signal__ENTRY_EVT, (xdc_IArg)__inst);
    xdc_runtime_knl_SyncSemThread_signal__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncSemThread_signal__EXIT_EVT, 0);
}

/* wait__E */
xdc_Int xdc_runtime_knl_SyncSemThread_wait__E( xdc_runtime_knl_SyncSemThread_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_SyncSemThread_wait__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_SyncSemThread_wait__F((void*)__inst, timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_SyncSemThread_wait__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.knl.Thread FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Thread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Thread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Thread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Thread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Thread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Thread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Thread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Thread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Thread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Thread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Thread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Thread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Thread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Thread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Thread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Thread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Thread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Thread_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_knl_Thread_start__ENTRY_EVT 0x86f0001
#define xdc_runtime_knl_Thread_start__EXIT_EVT 0x87f0002
#define xdc_runtime_knl_Thread_yield__ENTRY_EVT 0x88d0001
#define xdc_runtime_knl_Thread_yield__EXIT_EVT 0x89d0002
#define xdc_runtime_knl_Thread_compareOsPriorities__ENTRY_EVT 0x8ab0001
#define xdc_runtime_knl_Thread_compareOsPriorities__EXIT_EVT 0x8d10002
#define xdc_runtime_knl_Thread_sleep__ENTRY_EVT 0x8ed0001
#define xdc_runtime_knl_Thread_sleep__EXIT_EVT 0x9030002
#define xdc_runtime_knl_Thread_join__ENTRY_EVT 0x9110001
#define xdc_runtime_knl_Thread_join__EXIT_EVT 0x9240002
#define xdc_runtime_knl_Thread_getPriority__ENTRY_EVT 0x9310001
#define xdc_runtime_knl_Thread_getPriority__EXIT_EVT 0x94b0002
#define xdc_runtime_knl_Thread_setPriority__ENTRY_EVT 0x95f0001
#define xdc_runtime_knl_Thread_setPriority__EXIT_EVT 0x97d0002
#define xdc_runtime_knl_Thread_getOsPriority__ENTRY_EVT 0x9910001
#define xdc_runtime_knl_Thread_getOsPriority__EXIT_EVT 0x9ad0002
#define xdc_runtime_knl_Thread_setOsPriority__ENTRY_EVT 0x9c30001
#define xdc_runtime_knl_Thread_setOsPriority__EXIT_EVT 0x9e30002
#define xdc_runtime_knl_Thread_getOsHandle__ENTRY_EVT 0x9f90001
#define xdc_runtime_knl_Thread_getOsHandle__EXIT_EVT 0xa0f0002
#define xdc_runtime_knl_Thread_getTls__ENTRY_EVT 0xa230001
#define xdc_runtime_knl_Thread_getTls__EXIT_EVT 0xa340002
#define xdc_runtime_knl_Thread_setTls__ENTRY_EVT 0xa430001
#define xdc_runtime_knl_Thread_setTls__EXIT_EVT 0xa580002
#define xdc_runtime_knl_Thread_stat__ENTRY_EVT 0xa690001
#define xdc_runtime_knl_Thread_stat__EXIT_EVT 0xa800002

/* start__E */
xdc_Bool xdc_runtime_knl_Thread_start__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_start__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_start__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_start__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* yield__E */
xdc_Bool xdc_runtime_knl_Thread_yield__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_yield__ENTRY_EVT, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_yield__F(eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_yield__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* compareOsPriorities__E */
xdc_Int xdc_runtime_knl_Thread_compareOsPriorities__E( xdc_Int p1, xdc_Int p2, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_Thread_compareOsPriorities__ENTRY_EVT, (xdc_IArg)p1, (xdc_IArg)p2, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_compareOsPriorities__F(p1, p2, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_compareOsPriorities__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* sleep__E */
xdc_Bool xdc_runtime_knl_Thread_sleep__E( xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_Thread_sleep__ENTRY_EVT, (xdc_IArg)timeout, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_sleep__F(timeout, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_sleep__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* join__E */
xdc_Bool xdc_runtime_knl_Thread_join__E( xdc_runtime_knl_Thread_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_Thread_join__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_join__F((void*)__inst, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_join__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getPriority__E */
xdc_runtime_knl_Thread_Priority xdc_runtime_knl_Thread_getPriority__E( xdc_runtime_knl_Thread_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_knl_Thread_Priority __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_Thread_getPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_getPriority__F((void*)__inst, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_getPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* setPriority__E */
xdc_Bool xdc_runtime_knl_Thread_setPriority__E( xdc_runtime_knl_Thread_Handle __inst, xdc_runtime_knl_Thread_Priority newPri, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_Thread_setPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)newPri, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_setPriority__F((void*)__inst, newPri, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_setPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getOsPriority__E */
xdc_Int xdc_runtime_knl_Thread_getOsPriority__E( xdc_runtime_knl_Thread_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    xdc_Int __ret;

    xdc_runtime_Log_write2(xdc_runtime_knl_Thread_getOsPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_getOsPriority__F((void*)__inst, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_getOsPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* setOsPriority__E */
xdc_Bool xdc_runtime_knl_Thread_setOsPriority__E( xdc_runtime_knl_Thread_Handle __inst, xdc_Int newPri, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_Thread_setOsPriority__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)newPri, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_setOsPriority__F((void*)__inst, newPri, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_setOsPriority__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getOsHandle__E */
xdc_Ptr xdc_runtime_knl_Thread_getOsHandle__E( xdc_runtime_knl_Thread_Handle __inst ) 
{
    xdc_Ptr __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_getOsHandle__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = xdc_runtime_knl_Thread_getOsHandle__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_getOsHandle__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* getTls__E */
xdc_Ptr xdc_runtime_knl_Thread_getTls__E( xdc_runtime_knl_Thread_Handle __inst ) 
{
    xdc_Ptr __ret;

    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_getTls__ENTRY_EVT, (xdc_IArg)__inst);
    __ret = xdc_runtime_knl_Thread_getTls__F((void*)__inst);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_getTls__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}

/* setTls__E */
xdc_Void xdc_runtime_knl_Thread_setTls__E( xdc_runtime_knl_Thread_Handle __inst, xdc_Ptr tls ) 
{
    xdc_runtime_Log_write2(xdc_runtime_knl_Thread_setTls__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)tls);
    xdc_runtime_knl_Thread_setTls__F((void*)__inst, tls);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_setTls__EXIT_EVT, 0);
}

/* stat__E */
xdc_Bool xdc_runtime_knl_Thread_stat__E( xdc_runtime_knl_Thread_Handle __inst, xdc_runtime_knl_Thread_Stat* buf, xdc_runtime_Error_Block* eb ) 
{
    xdc_Bool __ret;

    xdc_runtime_Log_write3(xdc_runtime_knl_Thread_stat__ENTRY_EVT, (xdc_IArg)__inst, (xdc_IArg)buf, (xdc_IArg)eb);
    __ret = xdc_runtime_knl_Thread_stat__F((void*)__inst, buf, eb);
    xdc_runtime_Log_write1(xdc_runtime_knl_Thread_stat__EXIT_EVT, (xdc_IArg)__ret);

    return __ret;
}


/*
 * ======== xdc.runtime.LoggerSys_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.TimestampPosix */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerSys_TimestampProxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_TimestampPosix_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerSys_TimestampProxy_get32__E( void )
{
    return ti_sdo_xdcruntime_linux_TimestampPosix_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerSys_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sdo_xdcruntime_linux_TimestampPosix_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerSys_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sdo_xdcruntime_linux_TimestampPosix_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.GateThreadSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_GateThreadSupport___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_enter((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_leave((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.HeapStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_HeapStd_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_HeapStd_Object__create__S(oa, osz, aa, (xdc_runtime_HeapStd___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_HeapStd_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_HeapStd_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.GateThreadSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_GateThreadSupport___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_enter((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_leave((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysStd_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysStd_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysStd_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysStd_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysStd_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysStd_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.TimestampPosix */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_TimestampPosix_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sdo_xdcruntime_linux_TimestampPosix_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sdo_xdcruntime_linux_TimestampPosix_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sdo_xdcruntime_linux_TimestampPosix_getFreq(freq);
}


/*
 * ======== xdc.runtime.knl.GateH_Proxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.knl.GateThread */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_GateH_Proxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_knl_GateThread_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_GateH_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_GateH_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_GateThread_Object__create__S(oa, osz, aa, (xdc_runtime_knl_GateThread___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_GateH_Proxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_knl_GateThread_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_GateH_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_knl_GateThread_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_GateH_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_knl_GateThread_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_knl_GateH_Proxy_query__E( xdc_Int qual )
{
    return xdc_runtime_knl_GateThread_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_knl_GateH_Proxy_enter__E( xdc_runtime_knl_GateH_Proxy_Handle __inst )
{
    return xdc_runtime_IGateProvider_enter((xdc_runtime_IGateProvider_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_knl_GateH_Proxy_leave__E( xdc_runtime_knl_GateH_Proxy_Handle __inst, xdc_IArg key )
{
    xdc_runtime_IGateProvider_leave((xdc_runtime_IGateProvider_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.knl.GateProcess_Proxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.GateProcessSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_GateProcess_Proxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_GateProcess_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_GateProcess_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_GateProcessSupport___ParamsPtr)pa, sizeof(xdc_runtime_knl_IGateProcessSupport_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_GateProcess_Proxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_GateProcessSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_GateProcess_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_GateProcessSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_GateProcess_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_knl_GateProcess_Proxy_query__E( xdc_Int qual )
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_knl_GateProcess_Proxy_enter__E( xdc_runtime_knl_GateProcess_Proxy_Handle __inst )
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_enter((ti_sdo_xdcruntime_linux_GateProcessSupport_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_knl_GateProcess_Proxy_leave__E( xdc_runtime_knl_GateProcess_Proxy_Handle __inst, xdc_IArg key )
{
    ti_sdo_xdcruntime_linux_GateProcessSupport_leave((ti_sdo_xdcruntime_linux_GateProcessSupport_Handle)__inst, key);
}

/* getReferenceCount__E */
xdc_Int xdc_runtime_knl_GateProcess_Proxy_getReferenceCount__E( xdc_runtime_knl_GateProcess_Proxy_Handle __inst, xdc_runtime_Error_Block* err )
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_getReferenceCount((ti_sdo_xdcruntime_linux_GateProcessSupport_Handle)__inst, err);
}


/*
 * ======== xdc.runtime.knl.GateThread_Proxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.GateThreadSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_GateThread_Proxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_GateThread_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_GateThread_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_GateThreadSupport___ParamsPtr)pa, sizeof(xdc_runtime_knl_IGateThreadSupport_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_GateThread_Proxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_GateThread_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_GateThread_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_knl_GateThread_Proxy_query__E( xdc_Int qual )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_knl_GateThread_Proxy_enter__E( xdc_runtime_knl_GateThread_Proxy_Handle __inst )
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_enter((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_knl_GateThread_Proxy_leave__E( xdc_runtime_knl_GateThread_Proxy_Handle __inst, xdc_IArg key )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_leave((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.knl.SemProcess_Proxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.SemProcessSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SemProcess_Proxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SemProcess_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SemProcess_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_SemProcessSupport___ParamsPtr)pa, sizeof(xdc_runtime_knl_ISemProcessSupport_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_SemProcess_Proxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_SemProcessSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_SemProcess_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_SemProcessSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SemProcess_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_Handle__label__S(obj, lab);
}

/* pend__E */
xdc_Int xdc_runtime_knl_SemProcess_Proxy_pend__E( xdc_runtime_knl_SemProcess_Proxy_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_pend((ti_sdo_xdcruntime_linux_SemProcessSupport_Handle)__inst, timeout, eb);
}

/* post__E */
xdc_Bool xdc_runtime_knl_SemProcess_Proxy_post__E( xdc_runtime_knl_SemProcess_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_post((ti_sdo_xdcruntime_linux_SemProcessSupport_Handle)__inst, eb);
}


/*
 * ======== xdc.runtime.knl.SemThread_Proxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.SemThreadSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SemThread_Proxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SemThread_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SemThread_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_SemThreadSupport___ParamsPtr)pa, sizeof(xdc_runtime_knl_ISemThreadSupport_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_SemThread_Proxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_SemThreadSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_SemThread_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_SemThreadSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SemThread_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_Handle__label__S(obj, lab);
}

/* pend__E */
xdc_Int xdc_runtime_knl_SemThread_Proxy_pend__E( xdc_runtime_knl_SemThread_Proxy_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_pend((ti_sdo_xdcruntime_linux_SemThreadSupport_Handle)__inst, timeout, eb);
}

/* post__E */
xdc_Bool xdc_runtime_knl_SemThread_Proxy_post__E( xdc_runtime_knl_SemThread_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_post((ti_sdo_xdcruntime_linux_SemThreadSupport_Handle)__inst, eb);
}


/*
 * ======== xdc.runtime.knl.Semaphore_Proxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.knl.SemThread */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Semaphore_Proxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_knl_SemThread_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_Semaphore_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_Semaphore_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_SemThread_Object__create__S(oa, osz, aa, (xdc_runtime_knl_SemThread___ParamsPtr)pa, sizeof(xdc_runtime_knl_ISemaphore_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_Semaphore_Proxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_knl_SemThread_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_Semaphore_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_knl_SemThread_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_Semaphore_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_knl_SemThread_Handle__label__S(obj, lab);
}

/* pend__E */
xdc_Int xdc_runtime_knl_Semaphore_Proxy_pend__E( xdc_runtime_knl_Semaphore_Proxy_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_ISemaphore_pend((xdc_runtime_knl_ISemaphore_Handle)__inst, timeout, eb);
}

/* post__E */
xdc_Bool xdc_runtime_knl_Semaphore_Proxy_post__E( xdc_runtime_knl_Semaphore_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_ISemaphore_post((xdc_runtime_knl_ISemaphore_Handle)__inst, eb);
}


/*
 * ======== xdc.runtime.knl.Sync_Proxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.knl.SyncNull */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Sync_Proxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_knl_SyncNull_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_Sync_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_Sync_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_SyncNull_Object__create__S(oa, osz, aa, (xdc_runtime_knl_SyncNull___ParamsPtr)pa, sizeof(xdc_runtime_knl_ISync_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_Sync_Proxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_knl_SyncNull_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_Sync_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_knl_SyncNull_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_Sync_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_knl_SyncNull_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_knl_Sync_Proxy_query__E( xdc_runtime_knl_Sync_Proxy_Handle __inst, xdc_Int qual )
{
    return xdc_runtime_knl_ISync_query((xdc_runtime_knl_ISync_Handle)__inst, qual);
}

/* signal__E */
xdc_Void xdc_runtime_knl_Sync_Proxy_signal__E( xdc_runtime_knl_Sync_Proxy_Handle __inst )
{
    xdc_runtime_knl_ISync_signal((xdc_runtime_knl_ISync_Handle)__inst);
}

/* wait__E */
xdc_Int xdc_runtime_knl_Sync_Proxy_wait__E( xdc_runtime_knl_Sync_Proxy_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_ISync_wait((xdc_runtime_knl_ISync_Handle)__inst, timeout, eb);
}


/*
 * ======== xdc.runtime.knl.Thread_Proxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.xdcruntime.linux.ThreadSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Thread_Proxy_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_Thread_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_Thread_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Object__create__S(oa, osz, aa, (ti_sdo_xdcruntime_linux_ThreadSupport___ParamsPtr)pa, sizeof(xdc_runtime_knl_IThreadSupport_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_Thread_Proxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_Thread_Proxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_Thread_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label__S(obj, lab);
}

/* self__E */
xdc_runtime_knl_IThreadSupport_Handle xdc_runtime_knl_Thread_Proxy_self__E( xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_self(eb);
}

/* start__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_start__E( xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_start(eb);
}

/* yield__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_yield__E( xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_yield(eb);
}

/* compareOsPriorities__E */
xdc_Int xdc_runtime_knl_Thread_Proxy_compareOsPriorities__E( xdc_Int p1, xdc_Int p2, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities(p1, p2, eb);
}

/* sleep__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_sleep__E( xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_sleep(timeout, eb);
}

/* join__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_join__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_join((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, eb);
}

/* getPriority__E */
xdc_runtime_knl_IThreadSupport_Priority xdc_runtime_knl_Thread_Proxy_getPriority__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_getPriority((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, eb);
}

/* setPriority__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_setPriority__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_runtime_knl_IThreadSupport_Priority newPri, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_setPriority((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, newPri, eb);
}

/* getOsPriority__E */
xdc_Int xdc_runtime_knl_Thread_Proxy_getOsPriority__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, eb);
}

/* setOsPriority__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_setOsPriority__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_Int newPri, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, newPri, eb);
}

/* getOsHandle__E */
xdc_Ptr xdc_runtime_knl_Thread_Proxy_getOsHandle__E( xdc_runtime_knl_Thread_Proxy_Handle __inst )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst);
}

/* getTls__E */
xdc_Ptr xdc_runtime_knl_Thread_Proxy_getTls__E( xdc_runtime_knl_Thread_Proxy_Handle __inst )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_getTls((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst);
}

/* setTls__E */
xdc_Void xdc_runtime_knl_Thread_Proxy_setTls__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_Ptr tls )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_setTls((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, tls);
}

/* stat__E */
xdc_Bool xdc_runtime_knl_Thread_Proxy_stat__E( xdc_runtime_knl_Thread_Proxy_Handle __inst, xdc_runtime_knl_IThreadSupport_Stat* buf, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_stat((ti_sdo_xdcruntime_linux_ThreadSupport_Handle)__inst, buf, eb);
}


/*
 * ======== ti.sdo.xdcruntime.linux.GateProcessSupport OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_xdcruntime_linux_GateProcessSupport_Object2__ s0; char c; } ti_sdo_xdcruntime_linux_GateProcessSupport___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_GateProcessSupport_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_xdcruntime_linux_GateProcessSupport___S1) - sizeof(ti_sdo_xdcruntime_linux_GateProcessSupport_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_xdcruntime_linux_GateProcessSupport_Object2__), /* objSize */
    (Ptr)&ti_sdo_xdcruntime_linux_GateProcessSupport_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_xdcruntime_linux_GateProcessSupport_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.xdcruntime.linux.GateThreadSupport OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_xdcruntime_linux_GateThreadSupport_Object2__ s0; char c; } ti_sdo_xdcruntime_linux_GateThreadSupport___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_GateThreadSupport_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_xdcruntime_linux_GateThreadSupport___S1) - sizeof(ti_sdo_xdcruntime_linux_GateThreadSupport_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_xdcruntime_linux_GateThreadSupport_Object2__), /* objSize */
    (Ptr)&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_xdcruntime_linux_GateThreadSupport_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.xdcruntime.linux.SemProcessSupport OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_xdcruntime_linux_SemProcessSupport_Object2__ s0; char c; } ti_sdo_xdcruntime_linux_SemProcessSupport___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_SemProcessSupport_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_xdcruntime_linux_SemProcessSupport___S1) - sizeof(ti_sdo_xdcruntime_linux_SemProcessSupport_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_xdcruntime_linux_SemProcessSupport_Object2__), /* objSize */
    (Ptr)&ti_sdo_xdcruntime_linux_SemProcessSupport_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_xdcruntime_linux_SemProcessSupport_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.xdcruntime.linux.SemThreadSupport OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_xdcruntime_linux_SemThreadSupport_Object2__ s0; char c; } ti_sdo_xdcruntime_linux_SemThreadSupport___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_SemThreadSupport_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_xdcruntime_linux_SemThreadSupport___S1) - sizeof(ti_sdo_xdcruntime_linux_SemThreadSupport_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_xdcruntime_linux_SemThreadSupport_Object2__), /* objSize */
    (Ptr)&ti_sdo_xdcruntime_linux_SemThreadSupport_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_xdcruntime_linux_SemThreadSupport_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.xdcruntime.linux.ThreadSupport OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_xdcruntime_linux_ThreadSupport_Object2__ s0; char c; } ti_sdo_xdcruntime_linux_ThreadSupport___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_xdcruntime_linux_ThreadSupport_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_xdcruntime_linux_ThreadSupport___S1) - sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Object2__), /* objSize */
    (Ptr)&ti_sdo_xdcruntime_linux_ThreadSupport_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.GateNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_GateNull_Object2__ s0; char c; } xdc_runtime_GateNull___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_GateNull_Object__DESC__C = {
    (Ptr)&xdc_runtime_GateNull_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_GateNull_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_GateNull___S1) - sizeof(xdc_runtime_GateNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_GateNull_Object2__), /* objSize */
    (Ptr)&xdc_runtime_GateNull_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_GateNull_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.HeapStd OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_HeapStd_Object2__ s0; char c; } xdc_runtime_HeapStd___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C = {
    (Ptr)&xdc_runtime_HeapStd_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_HeapStd_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_HeapStd___S1) - sizeof(xdc_runtime_HeapStd_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_HeapStd_Object2__), /* objSize */
    (Ptr)&xdc_runtime_HeapStd_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_HeapStd_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.LoggerCallback OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerCallback_Object2__ s0; char c; } xdc_runtime_LoggerCallback___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerCallback_Object__DESC__C = {
    (Ptr)&xdc_runtime_LoggerCallback_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerCallback_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerCallback___S1) - sizeof(xdc_runtime_LoggerCallback_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerCallback_Object2__), /* objSize */
    (Ptr)&xdc_runtime_LoggerCallback_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerCallback_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.LoggerSys OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerSys_Object2__ s0; char c; } xdc_runtime_LoggerSys___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerSys_Object__DESC__C = {
    (Ptr)&xdc_runtime_LoggerSys_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerSys_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerSys___S1) - sizeof(xdc_runtime_LoggerSys_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerSys_Object2__), /* objSize */
    (Ptr)&xdc_runtime_LoggerSys_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerSys_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.GateProcess OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_GateProcess_Object2__ s0; char c; } xdc_runtime_knl_GateProcess___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_GateProcess_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_GateProcess_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_GateProcess_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_GateProcess___S1) - sizeof(xdc_runtime_knl_GateProcess_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_GateProcess_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_GateProcess_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_GateProcess_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.GateThread OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_GateThread_Object2__ s0; char c; } xdc_runtime_knl_GateThread___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_GateThread_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_GateThread_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_GateThread_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_GateThread___S1) - sizeof(xdc_runtime_knl_GateThread_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_GateThread_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_GateThread_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_GateThread_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SemProcess OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SemProcess_Object2__ s0; char c; } xdc_runtime_knl_SemProcess___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SemProcess_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SemProcess_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SemProcess_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SemProcess___S1) - sizeof(xdc_runtime_knl_SemProcess_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SemProcess_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SemProcess_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SemProcess_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SemThread OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SemThread_Object2__ s0; char c; } xdc_runtime_knl_SemThread___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SemThread_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SemThread_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SemThread_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SemThread___S1) - sizeof(xdc_runtime_knl_SemThread_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SemThread_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SemThread_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SemThread_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SyncGeneric OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SyncGeneric_Object2__ s0; char c; } xdc_runtime_knl_SyncGeneric___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncGeneric_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SyncGeneric_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SyncGeneric_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SyncGeneric___S1) - sizeof(xdc_runtime_knl_SyncGeneric_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SyncGeneric_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SyncGeneric_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SyncGeneric_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SyncNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SyncNull_Object2__ s0; char c; } xdc_runtime_knl_SyncNull___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncNull_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SyncNull_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SyncNull_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SyncNull___S1) - sizeof(xdc_runtime_knl_SyncNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SyncNull_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SyncNull_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SyncNull_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SyncSemThread OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SyncSemThread_Object2__ s0; char c; } xdc_runtime_knl_SyncSemThread___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncSemThread_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SyncSemThread_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SyncSemThread_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SyncSemThread___S1) - sizeof(xdc_runtime_knl_SyncSemThread_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SyncSemThread_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SyncSemThread_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SyncSemThread_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.Thread OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_Thread_Object2__ s0; char c; } xdc_runtime_knl_Thread___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_Thread_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &xdc_runtime_knl_Thread_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_Thread___S1) - sizeof(xdc_runtime_knl_Thread_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_Thread_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_Thread_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_Thread_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.xdcruntime.linux.GateProcessSupport SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_GateProcessSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_GateProcessSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_GateProcessSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_GateProcessSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_GateProcessSupport_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_GateProcessSupport_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_GateProcessSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_xdcruntime_linux_GateProcessSupport_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_xdcruntime_linux_GateProcessSupport_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateProcessSupport_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_xdcruntime_linux_GateProcessSupport_Object__*)oa) + i;
    }

    if (ti_sdo_xdcruntime_linux_GateProcessSupport_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_xdcruntime_linux_GateProcessSupport_Object__*)ti_sdo_xdcruntime_linux_GateProcessSupport_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateProcessSupport_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateProcessSupport_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_xdcruntime_linux_GateProcessSupport_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateProcessSupport_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_xdcruntime_linux_GateProcessSupport___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_xdcruntime_linux_GateProcessSupport_Params prms;
    ti_sdo_xdcruntime_linux_GateProcessSupport_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_xdcruntime_linux_GateProcessSupport_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_xdcruntime_linux_GateProcessSupport_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_GateProcessSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_GateProcessSupport_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_xdcruntime_linux_GateProcessSupport_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_GateProcessSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_GateProcessSupport_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_xdcruntime_linux_GateProcessSupport_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((ti_sdo_xdcruntime_linux_GateProcessSupport_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_GateProcessSupport_Object__DESC__C, *((ti_sdo_xdcruntime_linux_GateProcessSupport_Object**)instp), (xdc_Fxn)ti_sdo_xdcruntime_linux_GateProcessSupport_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_xdcruntime_linux_GateProcessSupport_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.xdcruntime.linux.GateThreadSupport SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_GateThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_GateThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_GateThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_GateThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_GateThreadSupport_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_GateThreadSupport_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_GateThreadSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_xdcruntime_linux_GateThreadSupport_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_xdcruntime_linux_GateThreadSupport_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateThreadSupport_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_xdcruntime_linux_GateThreadSupport_Object__*)oa) + i;
    }

    if (ti_sdo_xdcruntime_linux_GateThreadSupport_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_xdcruntime_linux_GateThreadSupport_Object__*)ti_sdo_xdcruntime_linux_GateThreadSupport_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateThreadSupport_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateThreadSupport_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_xdcruntime_linux_GateThreadSupport_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_xdcruntime_linux_GateThreadSupport_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_xdcruntime_linux_GateThreadSupport___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_xdcruntime_linux_GateThreadSupport_Params prms;
    ti_sdo_xdcruntime_linux_GateThreadSupport_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_xdcruntime_linux_GateThreadSupport_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_GateThreadSupport_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_xdcruntime_linux_GateThreadSupport_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_GateThreadSupport_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_xdcruntime_linux_GateThreadSupport_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((ti_sdo_xdcruntime_linux_GateThreadSupport_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_GateThreadSupport_Object__DESC__C, *((ti_sdo_xdcruntime_linux_GateThreadSupport_Object**)instp), (xdc_Fxn)ti_sdo_xdcruntime_linux_GateThreadSupport_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_xdcruntime_linux_GateThreadSupport_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.xdcruntime.linux.SemProcessSupport SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_SemProcessSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_SemProcessSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_SemProcessSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_SemProcessSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_SemProcessSupport_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_SemProcessSupport_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_SemProcessSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_xdcruntime_linux_SemProcessSupport_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_xdcruntime_linux_SemProcessSupport_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemProcessSupport_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_xdcruntime_linux_SemProcessSupport_Object__*)oa) + i;
    }

    if (ti_sdo_xdcruntime_linux_SemProcessSupport_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_xdcruntime_linux_SemProcessSupport_Object__*)ti_sdo_xdcruntime_linux_SemProcessSupport_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemProcessSupport_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemProcessSupport_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_xdcruntime_linux_SemProcessSupport_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemProcessSupport_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_xdcruntime_linux_SemProcessSupport___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_xdcruntime_linux_SemProcessSupport_Params prms;
    ti_sdo_xdcruntime_linux_SemProcessSupport_Object* obj;
    int iStat;

    ti_sdo_xdcruntime_linux_SemProcessSupport_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_xdcruntime_linux_SemProcessSupport_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_xdcruntime_linux_SemProcessSupport_Instance_init__F(obj, args->count, args->key, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_SemProcessSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_SemProcessSupport_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_xdcruntime_linux_SemProcessSupport_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_SemProcessSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_SemProcessSupport_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_xdcruntime_linux_SemProcessSupport_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((ti_sdo_xdcruntime_linux_SemProcessSupport_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_SemProcessSupport_Object__DESC__C, *((ti_sdo_xdcruntime_linux_SemProcessSupport_Object**)instp), (xdc_Fxn)ti_sdo_xdcruntime_linux_SemProcessSupport_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_xdcruntime_linux_SemProcessSupport_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.xdcruntime.linux.SemThreadSupport SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_SemThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_SemThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_SemThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_SemThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_SemThreadSupport_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_SemThreadSupport_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_SemThreadSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_xdcruntime_linux_SemThreadSupport_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_xdcruntime_linux_SemThreadSupport_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemThreadSupport_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_xdcruntime_linux_SemThreadSupport_Object__*)oa) + i;
    }

    if (ti_sdo_xdcruntime_linux_SemThreadSupport_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_xdcruntime_linux_SemThreadSupport_Object__*)ti_sdo_xdcruntime_linux_SemThreadSupport_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemThreadSupport_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemThreadSupport_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_xdcruntime_linux_SemThreadSupport_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_xdcruntime_linux_SemThreadSupport_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_xdcruntime_linux_SemThreadSupport___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_xdcruntime_linux_SemThreadSupport_Params prms;
    ti_sdo_xdcruntime_linux_SemThreadSupport_Object* obj;
    int iStat;

    ti_sdo_xdcruntime_linux_SemThreadSupport_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_xdcruntime_linux_SemThreadSupport_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_xdcruntime_linux_SemThreadSupport_Instance_init__F(obj, args->count, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_SemThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_SemThreadSupport_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_xdcruntime_linux_SemThreadSupport_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_SemThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_SemThreadSupport_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_xdcruntime_linux_SemThreadSupport_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((ti_sdo_xdcruntime_linux_SemThreadSupport_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_SemThreadSupport_Object__DESC__C, *((ti_sdo_xdcruntime_linux_SemThreadSupport_Object**)instp), (xdc_Fxn)ti_sdo_xdcruntime_linux_SemThreadSupport_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_xdcruntime_linux_SemThreadSupport_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.xdcruntime.linux.ThreadSupport SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_xdcruntime_linux_ThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_xdcruntime_linux_ThreadSupport_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__S( void ) 
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_xdcruntime_linux_ThreadSupport_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_xdcruntime_linux_ThreadSupport_Object__*)oa) + i;
    }

    if (ti_sdo_xdcruntime_linux_ThreadSupport_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_xdcruntime_linux_ThreadSupport_Object__*)ti_sdo_xdcruntime_linux_ThreadSupport_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_xdcruntime_linux_ThreadSupport_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_xdcruntime_linux_ThreadSupport___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Params prms;
    ti_sdo_xdcruntime_linux_ThreadSupport_Object* obj;
    int iStat;

    ti_sdo_xdcruntime_linux_ThreadSupport_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_xdcruntime_linux_ThreadSupport_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_ThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_ThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((ti_sdo_xdcruntime_linux_ThreadSupport_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&ti_sdo_xdcruntime_linux_ThreadSupport_Object__DESC__C, *((ti_sdo_xdcruntime_linux_ThreadSupport_Object**)instp), (xdc_Fxn)ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_xdcruntime_linux_ThreadSupport_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.xdcruntime.linux.TimestampPosix SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sdo_xdcruntime_linux_TimestampPosix_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.GateNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_GateNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_GateNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_GateNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_GateNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_GateNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_GateNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_GateNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_GateNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_GateNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_GateNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_GateNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_GateNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_GateNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_GateNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_GateNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_GateNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_GateNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_GateNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_GateNull_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_GateNull_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32776;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_GateNull_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_GateNull_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_GateNull_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_GateNull_Object__*)oa) + i;
    }

    if (xdc_runtime_GateNull_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_GateNull_Object__*)xdc_runtime_GateNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_GateNull_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_GateNull_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_GateNull_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_GateNull_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_GateNull_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_GateNull_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_GateNull___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_GateNull_Params prms;
    xdc_runtime_GateNull_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_GateNull_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_GateNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_GateNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_GateNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_GateNull_Object__DESC__C, *((xdc_runtime_GateNull_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_GateNull_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.HeapStd SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_HeapStd_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_HeapStd_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_HeapStd_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_HeapStd_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_HeapStd_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_HeapStd_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_HeapStd_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_HeapStd_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_HeapStd_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_HeapStd_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_HeapStd_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_HeapStd_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_HeapStd_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_HeapStd_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_HeapStd_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_HeapStd_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_HeapStd_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_HeapStd_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_HeapStd_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_HeapStd_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32782;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_HeapStd_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_HeapStd_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_HeapStd_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_HeapStd_Object__*)oa) + i;
    }

    if (xdc_runtime_HeapStd_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_HeapStd_Object__*)xdc_runtime_HeapStd_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_HeapStd_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_HeapStd_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_HeapStd_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_HeapStd_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_HeapStd___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_HeapStd_Params prms;
    xdc_runtime_HeapStd_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, obj, NULL, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_HeapStd_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, obj, NULL, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_HeapStd_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, *((xdc_runtime_HeapStd_Object**)instp), NULL, 0, FALSE);
    *((xdc_runtime_HeapStd_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerCallback SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerCallback_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerCallback_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerCallback_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerCallback_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerCallback_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerCallback_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerCallback_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerCallback_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerCallback_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerCallback_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerCallback_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerCallback_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerCallback_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerCallback_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerCallback_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerCallback_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerCallback_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerCallback_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerCallback_Module__startupDone__S( void ) 
{
    return xdc_runtime_LoggerCallback_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_LoggerCallback_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32778;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerCallback_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_LoggerCallback_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_LoggerCallback_Object__*)oa) + i;
    }

    if (xdc_runtime_LoggerCallback_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerCallback_Object__*)xdc_runtime_LoggerCallback_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerCallback_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerCallback_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerCallback_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerCallback_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_LoggerCallback___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_LoggerCallback_Params prms;
    xdc_runtime_LoggerCallback_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_LoggerCallback_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerCallback_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerCallback_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerCallback_Object__DESC__C, *((xdc_runtime_LoggerCallback_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_LoggerCallback_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.LoggerSys SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerSys_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerSys_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerSys_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerSys_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerSys_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerSys_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerSys_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerSys_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerSys_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerSys_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerSys_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerSys_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerSys_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerSys_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerSys_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerSys_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerSys_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerSys_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerSys_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_LoggerSys_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32779;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerSys_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_LoggerSys_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerSys_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_LoggerSys_Object__*)oa) + i;
    }

    if (xdc_runtime_LoggerSys_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerSys_Object__*)xdc_runtime_LoggerSys_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerSys_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerSys_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerSys_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerSys_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerSys_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerSys_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_LoggerSys___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_LoggerSys_Params prms;
    xdc_runtime_LoggerSys_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerSys_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_LoggerSys_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerSys_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerSys_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerSys_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerSys_Object__DESC__C, *((xdc_runtime_LoggerSys_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_LoggerSys_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.LoggerSys_TimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_LoggerSys_TimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerSys_TimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sdo_xdcruntime_linux_TimestampPosix_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_HeapStd_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Rta SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Rta_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysStd SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysStd_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysStd_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sdo_xdcruntime_linux_TimestampPosix_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.knl.GateH SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_GateH_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.knl.GateH_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateH_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateH_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateH_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateH_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateH_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateH_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateH_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateH_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateH_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateH_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateH_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateH_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateH_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateH_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateH_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateH_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateH_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateH_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_GateH_Proxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_knl_GateH_Proxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_knl_GateThread_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.knl.GateProcess SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateProcess_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateProcess_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateProcess_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateProcess_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateProcess_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateProcess_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateProcess_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateProcess_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateProcess_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateProcess_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateProcess_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateProcess_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateProcess_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateProcess_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateProcess_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateProcess_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateProcess_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateProcess_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_GateProcess_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_GateProcess_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_GateProcess_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_GateProcess_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_GateProcess_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_GateProcess_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_GateProcess_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_GateProcess_Object__*)xdc_runtime_knl_GateProcess_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_GateProcess_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_GateProcess_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_GateProcess_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_GateProcess_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_GateProcess_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_GateProcess_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_GateProcess___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_GateProcess_Params prms;
    xdc_runtime_knl_GateProcess_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_GateProcess_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_GateProcess_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_GateProcess_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_GateProcess_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_GateProcess_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_GateProcess_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_GateProcess_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_GateProcess_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_GateProcess_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_GateProcess_Object__DESC__C, *((xdc_runtime_knl_GateProcess_Object**)instp), (xdc_Fxn)xdc_runtime_knl_GateProcess_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_GateProcess_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.GateProcess_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateProcess_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateProcess_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateProcess_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateProcess_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateProcess_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateProcess_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateProcess_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateProcess_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateProcess_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateProcess_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateProcess_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateProcess_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateProcess_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateProcess_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateProcess_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateProcess_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateProcess_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateProcess_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_GateProcess_Proxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_knl_GateProcess_Proxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.knl.GateThread SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateThread_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_GateThread_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_GateThread_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_GateThread_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_GateThread_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_GateThread_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_GateThread_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_GateThread_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_GateThread_Object__*)xdc_runtime_knl_GateThread_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_GateThread_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_GateThread_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_GateThread_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_GateThread_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_GateThread_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_GateThread_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_GateThread___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_GateThread_Params prms;
    xdc_runtime_knl_GateThread_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_GateThread_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_GateThread_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_GateThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_GateThread_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_GateThread_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_GateThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_GateThread_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_GateThread_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_GateThread_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_GateThread_Object__DESC__C, *((xdc_runtime_knl_GateThread_Object**)instp), (xdc_Fxn)xdc_runtime_knl_GateThread_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_GateThread_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.GateThread_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_GateThread_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_GateThread_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_GateThread_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_GateThread_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_GateThread_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_GateThread_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_GateThread_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_GateThread_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_GateThread_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_GateThread_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_GateThread_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_GateThread_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_GateThread_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_GateThread_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_GateThread_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_GateThread_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_GateThread_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_GateThread_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_GateThread_Proxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_knl_GateThread_Proxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.knl.SemProcess SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemProcess_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemProcess_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemProcess_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemProcess_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemProcess_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemProcess_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemProcess_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemProcess_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemProcess_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemProcess_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemProcess_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemProcess_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemProcess_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemProcess_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemProcess_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemProcess_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemProcess_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemProcess_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SemProcess_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SemProcess_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SemProcess_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SemProcess_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SemProcess_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SemProcess_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SemProcess_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SemProcess_Object__*)xdc_runtime_knl_SemProcess_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SemProcess_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SemProcess_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SemProcess_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SemProcess_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SemProcess_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SemProcess_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SemProcess___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SemProcess_Params prms;
    xdc_runtime_knl_SemProcess_Object* obj;
    int iStat;

    xdc_runtime_knl_SemProcess_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SemProcess_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_SemProcess_Instance_init__F(obj, args->count, args->key, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemProcess_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SemProcess_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SemProcess_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemProcess_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SemProcess_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SemProcess_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_SemProcess_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemProcess_Object__DESC__C, *((xdc_runtime_knl_SemProcess_Object**)instp), (xdc_Fxn)xdc_runtime_knl_SemProcess_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_SemProcess_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.SemProcess_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemProcess_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemProcess_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemProcess_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemProcess_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemProcess_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemProcess_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemProcess_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemProcess_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemProcess_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemProcess_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemProcess_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemProcess_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemProcess_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemProcess_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemProcess_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemProcess_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemProcess_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemProcess_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_SemProcess_Proxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_knl_SemProcess_Proxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.knl.SemThread SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemThread_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SemThread_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SemThread_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SemThread_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SemThread_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SemThread_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SemThread_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SemThread_Object__*)xdc_runtime_knl_SemThread_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SemThread_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SemThread_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SemThread_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SemThread___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SemThread_Params prms;
    xdc_runtime_knl_SemThread_Object* obj;
    int iStat;

    xdc_runtime_knl_SemThread_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_SemThread_Instance_init__F(obj, args->count, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SemThread_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SemThread_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SemThread_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SemThread_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_SemThread_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, *((xdc_runtime_knl_SemThread_Object**)instp), (xdc_Fxn)xdc_runtime_knl_SemThread_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_SemThread_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.SemThread_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemThread_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemThread_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemThread_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemThread_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemThread_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemThread_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemThread_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemThread_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_SemThread_Proxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_knl_SemThread_Proxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.knl.Semaphore_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Semaphore_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Semaphore_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Semaphore_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Semaphore_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Semaphore_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Semaphore_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Semaphore_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Semaphore_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Semaphore_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Semaphore_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Semaphore_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Semaphore_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Semaphore_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Semaphore_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Semaphore_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Semaphore_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Semaphore_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Semaphore_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_Semaphore_Proxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_knl_Semaphore_Proxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_knl_SemThread_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.knl.Sync SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Sync_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.knl.SyncGeneric SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncGeneric_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncGeneric_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncGeneric_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncGeneric_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncGeneric_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncGeneric_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncGeneric_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncGeneric_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncGeneric_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncGeneric_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncGeneric_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncGeneric_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncGeneric_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncGeneric_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncGeneric_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncGeneric_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncGeneric_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncGeneric_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SyncGeneric_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SyncGeneric_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SyncGeneric_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SyncGeneric_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SyncGeneric_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SyncGeneric_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SyncGeneric_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SyncGeneric_Object__*)xdc_runtime_knl_SyncGeneric_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SyncGeneric_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SyncGeneric_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SyncGeneric_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SyncGeneric_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SyncGeneric_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SyncGeneric_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SyncGeneric___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SyncGeneric_Params prms;
    xdc_runtime_knl_SyncGeneric_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SyncGeneric_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    xdc_runtime_knl_SyncGeneric_Instance_init__F(obj, &prms);
    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SyncGeneric_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncGeneric_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SyncGeneric_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_SyncGeneric_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncGeneric_Object__DESC__C, *((xdc_runtime_knl_SyncGeneric_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_knl_SyncGeneric_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.SyncNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SyncNull_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SyncNull_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SyncNull_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SyncNull_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SyncNull_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SyncNull_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SyncNull_Object__*)xdc_runtime_knl_SyncNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SyncNull_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SyncNull_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SyncNull_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SyncNull___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SyncNull_Params prms;
    xdc_runtime_knl_SyncNull_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SyncNull_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SyncNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SyncNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_SyncNull_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncNull_Object__DESC__C, *((xdc_runtime_knl_SyncNull_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_knl_SyncNull_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.SyncSemThread SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncSemThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncSemThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncSemThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncSemThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncSemThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncSemThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncSemThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncSemThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncSemThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncSemThread_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SyncSemThread_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SyncSemThread_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SyncSemThread_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SyncSemThread_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SyncSemThread_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SyncSemThread_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SyncSemThread_Object__*)xdc_runtime_knl_SyncSemThread_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SyncSemThread_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SyncSemThread_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SyncSemThread_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SyncSemThread___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SyncSemThread_Params prms;
    xdc_runtime_knl_SyncSemThread_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_SyncSemThread_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SyncSemThread_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SyncSemThread_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SyncSemThread_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SyncSemThread_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_SyncSemThread_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, *((xdc_runtime_knl_SyncSemThread_Object**)instp), (xdc_Fxn)xdc_runtime_knl_SyncSemThread_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_SyncSemThread_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.Sync_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Sync_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Sync_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Sync_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Sync_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Sync_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Sync_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Sync_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Sync_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Sync_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Sync_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Sync_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Sync_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Sync_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_Sync_Proxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_knl_Sync_Proxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_knl_SyncNull_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.knl.Thread SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Thread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Thread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Thread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Thread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Thread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Thread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Thread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Thread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Thread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Thread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Thread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Thread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Thread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Thread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Thread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Thread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Thread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Thread_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Thread_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_Thread_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_Thread_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_Thread_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_Thread_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_Thread_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_Thread_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_Thread_Object__*)xdc_runtime_knl_Thread_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_Thread_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_Thread_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_Thread_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_Thread_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_Thread_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_Thread_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_Thread___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_Thread_Params prms;
    xdc_runtime_knl_Thread_Object* obj;
    int iStat;

    xdc_runtime_knl_Thread_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_Thread_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_Thread_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_Thread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_Thread_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    xdc_runtime_Log_write2(oa ? xdc_runtime_Log_L_construct : xdc_runtime_Log_L_create, (xdc_IArg)obj, 0);
    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_Thread_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_destruct, (xdc_IArg)obj);
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_Thread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_Thread_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_Thread_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Log_write1(xdc_runtime_Log_L_delete, (xdc_IArg)(*((xdc_runtime_knl_Thread_Object**)instp)));
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_Thread_Object__DESC__C, *((xdc_runtime_knl_Thread_Object**)instp), (xdc_Fxn)xdc_runtime_knl_Thread_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_Thread_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.Thread_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Thread_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Thread_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Thread_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Thread_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Thread_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Thread_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Thread_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Thread_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Thread_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Thread_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Thread_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Thread_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Thread_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Thread_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Thread_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Thread_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Thread_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Thread_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_Thread_Proxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_knl_Thread_Proxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

/*
 *  @(#) qnxdist; 1, 0, 0,1; 5-20-2013 14:39:02; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

