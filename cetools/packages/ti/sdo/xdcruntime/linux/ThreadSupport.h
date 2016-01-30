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

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     CREATE ARGS
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     FUNCTION SELECTORS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_xdcruntime_linux_ThreadSupport__include
#define ti_sdo_xdcruntime_linux_ThreadSupport__include

#ifndef __nested__
#define __nested__
#define ti_sdo_xdcruntime_linux_ThreadSupport__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_xdcruntime_linux_ThreadSupport___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/xdcruntime/linux/package/package.defs.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/knl/IThreadSupport.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Assert.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Priority */
typedef xdc_runtime_knl_IThreadSupport_Priority ti_sdo_xdcruntime_linux_ThreadSupport_Priority;

/* INVALID_OS_PRIORITY */
#define ti_sdo_xdcruntime_linux_ThreadSupport_INVALID_OS_PRIORITY (0)

/* GETPRI_FAILED */
#define ti_sdo_xdcruntime_linux_ThreadSupport_GETPRI_FAILED (-2)

/* CompStatus */
typedef xdc_runtime_knl_IThreadSupport_CompStatus ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus;

/* RunFxn */
typedef xdc_runtime_knl_IThreadSupport_RunFxn ti_sdo_xdcruntime_linux_ThreadSupport_RunFxn;

/* Stat */
typedef xdc_runtime_knl_IThreadSupport_Stat ti_sdo_xdcruntime_linux_ThreadSupport_Stat;

/* Priority_INVALID */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Priority_INVALID xdc_runtime_knl_IThreadSupport_Priority_INVALID

/* Priority_LOWEST */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Priority_LOWEST xdc_runtime_knl_IThreadSupport_Priority_LOWEST

/* Priority_BELOW_NORMAL */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Priority_BELOW_NORMAL xdc_runtime_knl_IThreadSupport_Priority_BELOW_NORMAL

/* Priority_NORMAL */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Priority_NORMAL xdc_runtime_knl_IThreadSupport_Priority_NORMAL

/* Priority_ABOVE_NORMAL */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Priority_ABOVE_NORMAL xdc_runtime_knl_IThreadSupport_Priority_ABOVE_NORMAL

/* Priority_HIGHEST */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Priority_HIGHEST xdc_runtime_knl_IThreadSupport_Priority_HIGHEST

/* CompStatus_ERROR */
#define ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_ERROR xdc_runtime_knl_IThreadSupport_CompStatus_ERROR

/* CompStatus_LOWER */
#define ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_LOWER xdc_runtime_knl_IThreadSupport_CompStatus_LOWER

/* CompStatus_EQUAL */
#define ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_EQUAL xdc_runtime_knl_IThreadSupport_CompStatus_EQUAL

/* CompStatus_HIGHER */
#define ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_HIGHER xdc_runtime_knl_IThreadSupport_CompStatus_HIGHER


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sdo_xdcruntime_linux_ThreadSupport_Args__create {
    xdc_runtime_knl_IThreadSupport_RunFxn fxn;
} ti_sdo_xdcruntime_linux_ThreadSupport_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* PRI_FAILURE */
#define ti_sdo_xdcruntime_linux_ThreadSupport_PRI_FAILURE (4)

/* SETUP_FAILURE */
#define ti_sdo_xdcruntime_linux_ThreadSupport_SETUP_FAILURE (3)

/* ALLOC_FAILURE */
#define ti_sdo_xdcruntime_linux_ThreadSupport_ALLOC_FAILURE (2)

/* POSIX_FAILURE */
#define ti_sdo_xdcruntime_linux_ThreadSupport_POSIX_FAILURE (1)


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj ti_sdo_xdcruntime_linux_ThreadSupport_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms ti_sdo_xdcruntime_linux_ThreadSupport_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__id;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__id ti_sdo_xdcruntime_linux_ThreadSupport_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8 ti_sdo_xdcruntime_linux_ThreadSupport_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDoneFxn ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__count;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__count ti_sdo_xdcruntime_linux_ThreadSupport_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__sizeof ti_sdo_xdcruntime_linux_ThreadSupport_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__table;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_Object__table ti_sdo_xdcruntime_linux_ThreadSupport_Object__table__C;

/* E_priority */
#define ti_sdo_xdcruntime_linux_ThreadSupport_E_priority (ti_sdo_xdcruntime_linux_ThreadSupport_E_priority__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_xdcruntime_linux_ThreadSupport_E_priority;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_E_priority ti_sdo_xdcruntime_linux_ThreadSupport_E_priority__C;

/* A_POSIX_Error */
#define ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error (ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error__C;

/* E_POSIX_Error */
#define ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error (ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error__C;

/* L_start */
#define ti_sdo_xdcruntime_linux_ThreadSupport_L_start (ti_sdo_xdcruntime_linux_ThreadSupport_L_start__C)
typedef xdc_runtime_Log_Event CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_start;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_start ti_sdo_xdcruntime_linux_ThreadSupport_L_start__C;

/* L_finish */
#define ti_sdo_xdcruntime_linux_ThreadSupport_L_finish (ti_sdo_xdcruntime_linux_ThreadSupport_L_finish__C)
typedef xdc_runtime_Log_Event CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_finish;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_finish ti_sdo_xdcruntime_linux_ThreadSupport_L_finish__C;

/* L_join */
#define ti_sdo_xdcruntime_linux_ThreadSupport_L_join (ti_sdo_xdcruntime_linux_ThreadSupport_L_join__C)
typedef xdc_runtime_Log_Event CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_join;
__extern __FAR__ const CT__ti_sdo_xdcruntime_linux_ThreadSupport_L_join ti_sdo_xdcruntime_linux_ThreadSupport_L_join__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_xdcruntime_linux_ThreadSupport_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_IArg arg;
    xdc_runtime_knl_IThreadSupport_Priority priority;
    xdc_Int osPriority;
    xdc_SizeT stackSize;
    xdc_Ptr tls;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_xdcruntime_linux_ThreadSupport_Struct {
    const ti_sdo_xdcruntime_linux_ThreadSupport_Fxns__* __fxns;
    xdc_Ptr __f0;
    ti_sdo_xdcruntime_linux_ThreadSupport_RunFxn __f1;
    xdc_IArg __f2;
    xdc_SizeT __f3;
    xdc_Void* __f4;
    xdc_Ptr __f5;
    xdc_Int __f6;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_xdcruntime_linux_ThreadSupport_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_runtime_knl_IThreadSupport_Handle (*self)(xdc_runtime_Error_Block*);
    xdc_Bool (*start)(xdc_runtime_Error_Block*);
    xdc_Bool (*yield)(xdc_runtime_Error_Block*);
    xdc_Int (*compareOsPriorities)(xdc_Int, xdc_Int, xdc_runtime_Error_Block*);
    xdc_Bool (*sleep)(xdc_UInt, xdc_runtime_Error_Block*);
    xdc_Bool (*join)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_runtime_Error_Block*);
    xdc_runtime_knl_IThreadSupport_Priority (*getPriority)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_runtime_Error_Block*);
    xdc_Bool (*setPriority)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_runtime_knl_IThreadSupport_Priority, xdc_runtime_Error_Block*);
    xdc_Int (*getOsPriority)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_runtime_Error_Block*);
    xdc_Bool (*setOsPriority)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_Int, xdc_runtime_Error_Block*);
    xdc_Ptr (*getOsHandle)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle);
    xdc_Ptr (*getTls)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle);
    xdc_Void (*setTls)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_Ptr);
    xdc_Bool (*stat)(ti_sdo_xdcruntime_linux_ThreadSupport_Handle, xdc_runtime_knl_IThreadSupport_Stat*, xdc_runtime_Error_Block*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_xdcruntime_linux_ThreadSupport_Fxns__ ti_sdo_xdcruntime_linux_ThreadSupport_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E, "ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__F, "ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__F( xdc_Int state );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__R, "ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup__R( xdc_Int state );

/* Instance_init__F */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init__F, "ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init")
__extern int ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object*, xdc_runtime_knl_IThreadSupport_RunFxn fxn, const ti_sdo_xdcruntime_linux_ThreadSupport_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__F, "ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize")
__extern void ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* , int );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init__R, "ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init")
__extern int ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init__R( ti_sdo_xdcruntime_linux_ThreadSupport_Object*, xdc_runtime_knl_IThreadSupport_RunFxn fxn, const ti_sdo_xdcruntime_linux_ThreadSupport_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__R, "ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize")
__extern void ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize__R( ti_sdo_xdcruntime_linux_ThreadSupport_Object* , int );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Object__create__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Object__create")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Object__delete__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Object__delete")
__extern xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Object__destruct__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Object__destruct")
__extern xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Object__get__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Object__get")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Object__first__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Object__first")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Object__next__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Object__next")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_Params__init__S, "ti_sdo_xdcruntime_linux_ThreadSupport_Params__init")
__extern xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Params__init__S( xdc_Ptr dst, const xdc_Void* src, xdc_SizeT psz, xdc_SizeT isz );

/* self__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_self ti_sdo_xdcruntime_linux_ThreadSupport_self__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_self__E, "ti_sdo_xdcruntime_linux_ThreadSupport_self")
__extern xdc_runtime_knl_IThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_self__E( xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_self__F, "ti_sdo_xdcruntime_linux_ThreadSupport_self")
__extern xdc_runtime_knl_IThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_self__F( xdc_runtime_Error_Block* eb );
__extern xdc_runtime_knl_IThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_self__R( xdc_runtime_Error_Block* eb );

/* start__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_start ti_sdo_xdcruntime_linux_ThreadSupport_start__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_start__E, "ti_sdo_xdcruntime_linux_ThreadSupport_start")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_start__E( xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_start__F, "ti_sdo_xdcruntime_linux_ThreadSupport_start")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_start__F( xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_start__R( xdc_runtime_Error_Block* eb );

/* yield__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_yield ti_sdo_xdcruntime_linux_ThreadSupport_yield__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_yield__E, "ti_sdo_xdcruntime_linux_ThreadSupport_yield")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_yield__E( xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_yield__F, "ti_sdo_xdcruntime_linux_ThreadSupport_yield")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_yield__F( xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_yield__R( xdc_runtime_Error_Block* eb );

/* compareOsPriorities__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__E, "ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__E( xdc_Int p1, xdc_Int p2, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__F, "ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__F( xdc_Int p1, xdc_Int p2, xdc_runtime_Error_Block* eb );
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities__R( xdc_Int p1, xdc_Int p2, xdc_runtime_Error_Block* eb );

/* sleep__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_sleep ti_sdo_xdcruntime_linux_ThreadSupport_sleep__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_sleep__E, "ti_sdo_xdcruntime_linux_ThreadSupport_sleep")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_sleep__E( xdc_UInt timeout, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_sleep__F, "ti_sdo_xdcruntime_linux_ThreadSupport_sleep")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_sleep__F( xdc_UInt timeout, xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_sleep__R( xdc_UInt timeout, xdc_runtime_Error_Block* eb );

/* join__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_join ti_sdo_xdcruntime_linux_ThreadSupport_join__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_join__E, "ti_sdo_xdcruntime_linux_ThreadSupport_join")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_join__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_join__F, "ti_sdo_xdcruntime_linux_ThreadSupport_join")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_join__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_join__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb );

/* getPriority__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_getPriority ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__E, "ti_sdo_xdcruntime_linux_ThreadSupport_getPriority")
__extern xdc_runtime_knl_IThreadSupport_Priority ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__F, "ti_sdo_xdcruntime_linux_ThreadSupport_getPriority")
__extern xdc_runtime_knl_IThreadSupport_Priority ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_runtime_Error_Block* eb );
__extern xdc_runtime_knl_IThreadSupport_Priority ti_sdo_xdcruntime_linux_ThreadSupport_getPriority__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb );

/* setPriority__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_setPriority ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__E, "ti_sdo_xdcruntime_linux_ThreadSupport_setPriority")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_knl_IThreadSupport_Priority newPri, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__F, "ti_sdo_xdcruntime_linux_ThreadSupport_setPriority")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_runtime_knl_IThreadSupport_Priority newPri, xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setPriority__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_knl_IThreadSupport_Priority newPri, xdc_runtime_Error_Block* eb );

/* getOsPriority__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__E, "ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__F, "ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority")
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_runtime_Error_Block* eb );
__extern xdc_Int ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb );

/* setOsPriority__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__E, "ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_Int newPri, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__F, "ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_Int newPri, xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_Int newPri, xdc_runtime_Error_Block* eb );

/* getOsHandle__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__E, "ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__F, "ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst );
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst );

/* getTls__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_getTls ti_sdo_xdcruntime_linux_ThreadSupport_getTls__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getTls__E, "ti_sdo_xdcruntime_linux_ThreadSupport_getTls")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getTls__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_getTls__F, "ti_sdo_xdcruntime_linux_ThreadSupport_getTls")
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getTls__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst );
__extern xdc_Ptr ti_sdo_xdcruntime_linux_ThreadSupport_getTls__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst );

/* setTls__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_setTls ti_sdo_xdcruntime_linux_ThreadSupport_setTls__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_setTls__E, "ti_sdo_xdcruntime_linux_ThreadSupport_setTls")
__extern xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_setTls__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_Ptr tls );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_setTls__F, "ti_sdo_xdcruntime_linux_ThreadSupport_setTls")
__extern xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_setTls__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_Ptr tls );
__extern xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_setTls__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_Ptr tls );

/* stat__E */
#define ti_sdo_xdcruntime_linux_ThreadSupport_stat ti_sdo_xdcruntime_linux_ThreadSupport_stat__E
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_stat__E, "ti_sdo_xdcruntime_linux_ThreadSupport_stat")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_stat__E( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_knl_IThreadSupport_Stat* buf, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_xdcruntime_linux_ThreadSupport_stat__F, "ti_sdo_xdcruntime_linux_ThreadSupport_stat")
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_stat__F( ti_sdo_xdcruntime_linux_ThreadSupport_Object* __inst, xdc_runtime_knl_IThreadSupport_Stat* buf, xdc_runtime_Error_Block* eb );
__extern xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_stat__R( ti_sdo_xdcruntime_linux_ThreadSupport_Handle __inst, xdc_runtime_knl_IThreadSupport_Stat* buf, xdc_runtime_Error_Block* eb );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* join_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_xdcruntime_linux_ThreadSupport_join_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_join_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_join_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_join_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_join; 
}

/* getPriority_{FxnT,fxnP} */
typedef xdc_runtime_knl_IThreadSupport_Priority (*ti_sdo_xdcruntime_linux_ThreadSupport_getPriority_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_getPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getPriority_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_getPriority_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_getPriority; 
}

/* setPriority_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_xdcruntime_linux_ThreadSupport_setPriority_FxnT)(void*, xdc_runtime_knl_IThreadSupport_Priority, xdc_runtime_Error_Block*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_setPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_setPriority_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_setPriority_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_setPriority; 
}

/* getOsPriority_{FxnT,fxnP} */
typedef xdc_Int (*ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority; 
}

/* setOsPriority_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority_FxnT)(void*, xdc_Int, xdc_runtime_Error_Block*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority; 
}

/* getOsHandle_{FxnT,fxnP} */
typedef xdc_Ptr (*ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle_FxnT)(void*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle; 
}

/* getTls_{FxnT,fxnP} */
typedef xdc_Ptr (*ti_sdo_xdcruntime_linux_ThreadSupport_getTls_FxnT)(void*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_getTls_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getTls_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_getTls_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_getTls; 
}

/* setTls_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_xdcruntime_linux_ThreadSupport_setTls_FxnT)(void*, xdc_Ptr);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_setTls_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_setTls_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_setTls_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_setTls; 
}

/* stat_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_xdcruntime_linux_ThreadSupport_stat_FxnT)(void*, xdc_runtime_knl_IThreadSupport_Stat*, xdc_runtime_Error_Block*);
static inline ti_sdo_xdcruntime_linux_ThreadSupport_stat_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_stat_fxnP( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_stat_FxnT)ti_sdo_xdcruntime_linux_ThreadSupport_stat; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline xdc_runtime_knl_IThreadSupport_Module ti_sdo_xdcruntime_linux_ThreadSupport_Module_upCast( void )
{
    return (xdc_runtime_knl_IThreadSupport_Module)&ti_sdo_xdcruntime_linux_ThreadSupport_Module__FXNS__C;
}

/* Module_to_xdc_runtime_knl_IThreadSupport */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Module_to_xdc_runtime_knl_IThreadSupport ti_sdo_xdcruntime_linux_ThreadSupport_Module_upCast

/* Handle_upCast */
static inline xdc_runtime_knl_IThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_Handle_upCast( ti_sdo_xdcruntime_linux_ThreadSupport_Handle i )
{
    return (xdc_runtime_knl_IThreadSupport_Handle)i;
}

/* Handle_to_xdc_runtime_knl_IThreadSupport */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Handle_to_xdc_runtime_knl_IThreadSupport ti_sdo_xdcruntime_linux_ThreadSupport_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_Handle_downCast( xdc_runtime_knl_IThreadSupport_Handle i )
{
    xdc_runtime_knl_IThreadSupport_Handle i2 = (xdc_runtime_knl_IThreadSupport_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_xdcruntime_linux_ThreadSupport_Module__FXNS__C ? (ti_sdo_xdcruntime_linux_ThreadSupport_Handle)i : 0;
}

/* Handle_from_xdc_runtime_knl_IThreadSupport */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Handle_from_xdc_runtime_knl_IThreadSupport ti_sdo_xdcruntime_linux_ThreadSupport_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Module_startupDone() ti_sdo_xdcruntime_linux_ThreadSupport_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Object_heap() ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap__C

/* Module_heap */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Module_heap() ti_sdo_xdcruntime_linux_ThreadSupport_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_xdcruntime_linux_ThreadSupport_Module__id ti_sdo_xdcruntime_linux_ThreadSupport_Module_id( void ) 
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_xdcruntime_linux_ThreadSupport_Module_hasMask( void ) 
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_xdcruntime_linux_ThreadSupport_Module_getMask( void ) 
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C != NULL ? *ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_xdcruntime_linux_ThreadSupport_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C != NULL) *ti_sdo_xdcruntime_linux_ThreadSupport_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_xdcruntime_linux_ThreadSupport_Params_init( ti_sdo_xdcruntime_linux_ThreadSupport_Params* prms ) 
{
    if (prms) {
        ti_sdo_xdcruntime_linux_ThreadSupport_Params__init__S(prms, 0, sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_xdcruntime_linux_ThreadSupport_Params_copy( ti_sdo_xdcruntime_linux_ThreadSupport_Params* dst, const ti_sdo_xdcruntime_linux_ThreadSupport_Params* src ) 
{
    if (dst) {
        ti_sdo_xdcruntime_linux_ThreadSupport_Params__init__S(dst, (const void *)src, sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Object_count() ti_sdo_xdcruntime_linux_ThreadSupport_Object__count__C

/* Object_sizeof */
#define ti_sdo_xdcruntime_linux_ThreadSupport_Object_sizeof() ti_sdo_xdcruntime_linux_ThreadSupport_Object__sizeof__C

/* Object_get */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_Object_get( ti_sdo_xdcruntime_linux_ThreadSupport_Instance_State* oarr, int i ) 
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_Handle)ti_sdo_xdcruntime_linux_ThreadSupport_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_Object_first( void )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_Handle)ti_sdo_xdcruntime_linux_ThreadSupport_Object__first__S();
}

/* Object_next */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_Object_next( ti_sdo_xdcruntime_linux_ThreadSupport_Object* obj )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_Handle)ti_sdo_xdcruntime_linux_ThreadSupport_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_xdcruntime_linux_ThreadSupport_Handle_label( ti_sdo_xdcruntime_linux_ThreadSupport_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_xdcruntime_linux_ThreadSupport_Handle_name( ti_sdo_xdcruntime_linux_ThreadSupport_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_xdcruntime_linux_ThreadSupport_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_create( xdc_runtime_knl_IThreadSupport_RunFxn fxn, const ti_sdo_xdcruntime_linux_ThreadSupport_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Args__create __args;
    __args.fxn = fxn;
    return (ti_sdo_xdcruntime_linux_ThreadSupport_Handle)ti_sdo_xdcruntime_linux_ThreadSupport_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Params), __eb);
}

/* construct */
static inline void ti_sdo_xdcruntime_linux_ThreadSupport_construct( ti_sdo_xdcruntime_linux_ThreadSupport_Struct* __obj, xdc_runtime_knl_IThreadSupport_RunFxn fxn, const ti_sdo_xdcruntime_linux_ThreadSupport_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Args__create __args;
    __args.fxn = fxn;
    ti_sdo_xdcruntime_linux_ThreadSupport_Object__create__S(__obj, sizeof (ti_sdo_xdcruntime_linux_ThreadSupport_Struct), &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_xdcruntime_linux_ThreadSupport_Params), __eb);
}

/* delete */
static inline void ti_sdo_xdcruntime_linux_ThreadSupport_delete( ti_sdo_xdcruntime_linux_ThreadSupport_Handle* instp )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_xdcruntime_linux_ThreadSupport_destruct( ti_sdo_xdcruntime_linux_ThreadSupport_Struct* obj )
{
    ti_sdo_xdcruntime_linux_ThreadSupport_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_handle( ti_sdo_xdcruntime_linux_ThreadSupport_Struct* str )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_Handle)str;
}

/* struct */
static inline ti_sdo_xdcruntime_linux_ThreadSupport_Struct* ti_sdo_xdcruntime_linux_ThreadSupport_struct( ti_sdo_xdcruntime_linux_ThreadSupport_Handle inst )
{
    return (ti_sdo_xdcruntime_linux_ThreadSupport_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_xdcruntime_linux_ThreadSupport__top__
#undef __nested__
#endif

#endif /* ti_sdo_xdcruntime_linux_ThreadSupport__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_xdcruntime_linux_ThreadSupport__internalaccess))

#ifndef ti_sdo_xdcruntime_linux_ThreadSupport__include_state
#define ti_sdo_xdcruntime_linux_ThreadSupport__include_state

/* Module_State */
struct ti_sdo_xdcruntime_linux_ThreadSupport_Module_State {
    xdc_Int lowestPriority;
    xdc_Int belowNormalPriority;
    xdc_Int normalPriority;
    xdc_Int aboveNormalPriority;
    xdc_Int highestPriority;
};

/* Module__state__V */
extern struct ti_sdo_xdcruntime_linux_ThreadSupport_Module_State__ ti_sdo_xdcruntime_linux_ThreadSupport_Module__state__V;

/* Object */
struct ti_sdo_xdcruntime_linux_ThreadSupport_Object {
    const ti_sdo_xdcruntime_linux_ThreadSupport_Fxns__* __fxns;
    xdc_Ptr tls;
    ti_sdo_xdcruntime_linux_ThreadSupport_RunFxn startFxn;
    xdc_IArg startFxnArg;
    xdc_SizeT stackSize;
    xdc_Void* tid;
    xdc_Ptr stackBase;
    xdc_Int staticOsPri;
};

#endif /* ti_sdo_xdcruntime_linux_ThreadSupport__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_xdcruntime_linux_ThreadSupport__nolocalnames)

#ifndef ti_sdo_xdcruntime_linux_ThreadSupport__localnames__done
#define ti_sdo_xdcruntime_linux_ThreadSupport__localnames__done

/* module prefix */
#define ThreadSupport_Instance ti_sdo_xdcruntime_linux_ThreadSupport_Instance
#define ThreadSupport_Handle ti_sdo_xdcruntime_linux_ThreadSupport_Handle
#define ThreadSupport_Module ti_sdo_xdcruntime_linux_ThreadSupport_Module
#define ThreadSupport_Object ti_sdo_xdcruntime_linux_ThreadSupport_Object
#define ThreadSupport_Struct ti_sdo_xdcruntime_linux_ThreadSupport_Struct
#define ThreadSupport_Priority ti_sdo_xdcruntime_linux_ThreadSupport_Priority
#define ThreadSupport_INVALID_OS_PRIORITY ti_sdo_xdcruntime_linux_ThreadSupport_INVALID_OS_PRIORITY
#define ThreadSupport_GETPRI_FAILED ti_sdo_xdcruntime_linux_ThreadSupport_GETPRI_FAILED
#define ThreadSupport_CompStatus ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus
#define ThreadSupport_RunFxn ti_sdo_xdcruntime_linux_ThreadSupport_RunFxn
#define ThreadSupport_Stat ti_sdo_xdcruntime_linux_ThreadSupport_Stat
#define ThreadSupport_PRI_FAILURE ti_sdo_xdcruntime_linux_ThreadSupport_PRI_FAILURE
#define ThreadSupport_SETUP_FAILURE ti_sdo_xdcruntime_linux_ThreadSupport_SETUP_FAILURE
#define ThreadSupport_ALLOC_FAILURE ti_sdo_xdcruntime_linux_ThreadSupport_ALLOC_FAILURE
#define ThreadSupport_POSIX_FAILURE ti_sdo_xdcruntime_linux_ThreadSupport_POSIX_FAILURE
#define ThreadSupport_Instance_State ti_sdo_xdcruntime_linux_ThreadSupport_Instance_State
#define ThreadSupport_Module_State ti_sdo_xdcruntime_linux_ThreadSupport_Module_State
#define ThreadSupport_Priority_INVALID ti_sdo_xdcruntime_linux_ThreadSupport_Priority_INVALID
#define ThreadSupport_Priority_LOWEST ti_sdo_xdcruntime_linux_ThreadSupport_Priority_LOWEST
#define ThreadSupport_Priority_BELOW_NORMAL ti_sdo_xdcruntime_linux_ThreadSupport_Priority_BELOW_NORMAL
#define ThreadSupport_Priority_NORMAL ti_sdo_xdcruntime_linux_ThreadSupport_Priority_NORMAL
#define ThreadSupport_Priority_ABOVE_NORMAL ti_sdo_xdcruntime_linux_ThreadSupport_Priority_ABOVE_NORMAL
#define ThreadSupport_Priority_HIGHEST ti_sdo_xdcruntime_linux_ThreadSupport_Priority_HIGHEST
#define ThreadSupport_CompStatus_ERROR ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_ERROR
#define ThreadSupport_CompStatus_LOWER ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_LOWER
#define ThreadSupport_CompStatus_EQUAL ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_EQUAL
#define ThreadSupport_CompStatus_HIGHER ti_sdo_xdcruntime_linux_ThreadSupport_CompStatus_HIGHER
#define ThreadSupport_E_priority ti_sdo_xdcruntime_linux_ThreadSupport_E_priority
#define ThreadSupport_A_POSIX_Error ti_sdo_xdcruntime_linux_ThreadSupport_A_POSIX_Error
#define ThreadSupport_E_POSIX_Error ti_sdo_xdcruntime_linux_ThreadSupport_E_POSIX_Error
#define ThreadSupport_L_start ti_sdo_xdcruntime_linux_ThreadSupport_L_start
#define ThreadSupport_L_finish ti_sdo_xdcruntime_linux_ThreadSupport_L_finish
#define ThreadSupport_L_join ti_sdo_xdcruntime_linux_ThreadSupport_L_join
#define ThreadSupport_Params ti_sdo_xdcruntime_linux_ThreadSupport_Params
#define ThreadSupport_self ti_sdo_xdcruntime_linux_ThreadSupport_self
#define ThreadSupport_start ti_sdo_xdcruntime_linux_ThreadSupport_start
#define ThreadSupport_yield ti_sdo_xdcruntime_linux_ThreadSupport_yield
#define ThreadSupport_compareOsPriorities ti_sdo_xdcruntime_linux_ThreadSupport_compareOsPriorities
#define ThreadSupport_sleep ti_sdo_xdcruntime_linux_ThreadSupport_sleep
#define ThreadSupport_join ti_sdo_xdcruntime_linux_ThreadSupport_join
#define ThreadSupport_join_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_join_fxnP
#define ThreadSupport_join_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_join_FxnT
#define ThreadSupport_getPriority ti_sdo_xdcruntime_linux_ThreadSupport_getPriority
#define ThreadSupport_getPriority_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_getPriority_fxnP
#define ThreadSupport_getPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getPriority_FxnT
#define ThreadSupport_setPriority ti_sdo_xdcruntime_linux_ThreadSupport_setPriority
#define ThreadSupport_setPriority_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_setPriority_fxnP
#define ThreadSupport_setPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_setPriority_FxnT
#define ThreadSupport_getOsPriority ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority
#define ThreadSupport_getOsPriority_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority_fxnP
#define ThreadSupport_getOsPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getOsPriority_FxnT
#define ThreadSupport_setOsPriority ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority
#define ThreadSupport_setOsPriority_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority_fxnP
#define ThreadSupport_setOsPriority_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_setOsPriority_FxnT
#define ThreadSupport_getOsHandle ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle
#define ThreadSupport_getOsHandle_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle_fxnP
#define ThreadSupport_getOsHandle_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getOsHandle_FxnT
#define ThreadSupport_getTls ti_sdo_xdcruntime_linux_ThreadSupport_getTls
#define ThreadSupport_getTls_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_getTls_fxnP
#define ThreadSupport_getTls_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_getTls_FxnT
#define ThreadSupport_setTls ti_sdo_xdcruntime_linux_ThreadSupport_setTls
#define ThreadSupport_setTls_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_setTls_fxnP
#define ThreadSupport_setTls_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_setTls_FxnT
#define ThreadSupport_stat ti_sdo_xdcruntime_linux_ThreadSupport_stat
#define ThreadSupport_stat_fxnP ti_sdo_xdcruntime_linux_ThreadSupport_stat_fxnP
#define ThreadSupport_stat_FxnT ti_sdo_xdcruntime_linux_ThreadSupport_stat_FxnT
#define ThreadSupport_Module_name ti_sdo_xdcruntime_linux_ThreadSupport_Module_name
#define ThreadSupport_Module_id ti_sdo_xdcruntime_linux_ThreadSupport_Module_id
#define ThreadSupport_Module_startup ti_sdo_xdcruntime_linux_ThreadSupport_Module_startup
#define ThreadSupport_Module_startupDone ti_sdo_xdcruntime_linux_ThreadSupport_Module_startupDone
#define ThreadSupport_Module_hasMask ti_sdo_xdcruntime_linux_ThreadSupport_Module_hasMask
#define ThreadSupport_Module_getMask ti_sdo_xdcruntime_linux_ThreadSupport_Module_getMask
#define ThreadSupport_Module_setMask ti_sdo_xdcruntime_linux_ThreadSupport_Module_setMask
#define ThreadSupport_Object_heap ti_sdo_xdcruntime_linux_ThreadSupport_Object_heap
#define ThreadSupport_Module_heap ti_sdo_xdcruntime_linux_ThreadSupport_Module_heap
#define ThreadSupport_construct ti_sdo_xdcruntime_linux_ThreadSupport_construct
#define ThreadSupport_create ti_sdo_xdcruntime_linux_ThreadSupport_create
#define ThreadSupport_handle ti_sdo_xdcruntime_linux_ThreadSupport_handle
#define ThreadSupport_struct ti_sdo_xdcruntime_linux_ThreadSupport_struct
#define ThreadSupport_Handle_label ti_sdo_xdcruntime_linux_ThreadSupport_Handle_label
#define ThreadSupport_Handle_name ti_sdo_xdcruntime_linux_ThreadSupport_Handle_name
#define ThreadSupport_Instance_init ti_sdo_xdcruntime_linux_ThreadSupport_Instance_init
#define ThreadSupport_Object_count ti_sdo_xdcruntime_linux_ThreadSupport_Object_count
#define ThreadSupport_Object_get ti_sdo_xdcruntime_linux_ThreadSupport_Object_get
#define ThreadSupport_Object_first ti_sdo_xdcruntime_linux_ThreadSupport_Object_first
#define ThreadSupport_Object_next ti_sdo_xdcruntime_linux_ThreadSupport_Object_next
#define ThreadSupport_Object_sizeof ti_sdo_xdcruntime_linux_ThreadSupport_Object_sizeof
#define ThreadSupport_Params_copy ti_sdo_xdcruntime_linux_ThreadSupport_Params_copy
#define ThreadSupport_Params_init ti_sdo_xdcruntime_linux_ThreadSupport_Params_init
#define ThreadSupport_Instance_finalize ti_sdo_xdcruntime_linux_ThreadSupport_Instance_finalize
#define ThreadSupport_delete ti_sdo_xdcruntime_linux_ThreadSupport_delete
#define ThreadSupport_destruct ti_sdo_xdcruntime_linux_ThreadSupport_destruct
#define ThreadSupport_Module_upCast ti_sdo_xdcruntime_linux_ThreadSupport_Module_upCast
#define ThreadSupport_Module_to_xdc_runtime_knl_IThreadSupport ti_sdo_xdcruntime_linux_ThreadSupport_Module_to_xdc_runtime_knl_IThreadSupport
#define ThreadSupport_Handle_upCast ti_sdo_xdcruntime_linux_ThreadSupport_Handle_upCast
#define ThreadSupport_Handle_to_xdc_runtime_knl_IThreadSupport ti_sdo_xdcruntime_linux_ThreadSupport_Handle_to_xdc_runtime_knl_IThreadSupport
#define ThreadSupport_Handle_downCast ti_sdo_xdcruntime_linux_ThreadSupport_Handle_downCast
#define ThreadSupport_Handle_from_xdc_runtime_knl_IThreadSupport ti_sdo_xdcruntime_linux_ThreadSupport_Handle_from_xdc_runtime_knl_IThreadSupport

#endif /* ti_sdo_xdcruntime_linux_ThreadSupport__localnames__done */
#endif
/*
 *  @(#) ti.sdo.xdcruntime.linux; 1, 0, 0,1; 5-20-2013 14:37:24; /db/atree/library/trees/osal/osal-g09/src/packages/ xlibrary

 */

