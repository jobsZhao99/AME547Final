#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ur5bh_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "ur5bh.h"
#include "ur5bh_capi.h"
#include "ur5bh_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"ur5bh/Controller" ) , TARGET_STRING ( "tau" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
0 , TARGET_STRING ( "ur5bh/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 2 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 }
} ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 10 ,
TARGET_STRING ( "ur5bh/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . lfn3atmpwu [ 0 ] , & rtB .
iptzoy0wwr [ 0 ] , & rtB . evjqkumglp [ 0 ] , & rtB . g1xa0jh20r [ 0 ] , &
rtB . nooedcmi45 [ 0 ] , & rtB . a0el3nepxs [ 0 ] , & rtB . ohpwycx4sl [ 0 ]
, & rtB . jpyooqtbs1 [ 0 ] , & rtB . jxbt4pfxtm [ 0 ] , & rtB . cnbi311a0y [
0 ] , & rtP . Constant_Value [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [
] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 6 , 1 , 4 , 1 , 18 , 1 , 28 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.001 , 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
10 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 1 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3223327412U , 3503003739U , 3036973259U , 3547340775U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * ur5bh_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void ur5bh_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void ur5bh_host_InitializeDataMapInfo ( ur5bh_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
