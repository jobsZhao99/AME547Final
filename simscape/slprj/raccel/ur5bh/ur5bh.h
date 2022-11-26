#ifndef RTW_HEADER_ur5bh_h_
#define RTW_HEADER_ur5bh_h_
#include <stddef.h>
#include <emmintrin.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef ur5bh_COMMON_INCLUDES_
#define ur5bh_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "collisioncodegen_api.hpp"
#include "nesl_rtw.h"
#include "ur5bh_47770016_1_gateway.h"
#endif
#include "ur5bh_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#define MODEL_NAME ur5bh
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (10) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (28)   
#elif NCSTATES != 28
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T cnbi311a0y [ 28 ] ; real_T jxbt4pfxtm [ 18 ] ; real_T
iptzoy0wwr [ 6 ] ; real_T nooedcmi45 [ 4 ] ; real_T g1xa0jh20r [ 4 ] ; real_T
evjqkumglp [ 4 ] ; real_T a0el3nepxs [ 4 ] ; real_T ohpwycx4sl [ 4 ] ; real_T
jpyooqtbs1 [ 4 ] ; real_T lfn3atmpwu [ 6 ] ; } B ; typedef struct {
n235grlapm i1li4osp2a ; real_T fwxtopu4n1 [ 2 ] ; real_T nwo32hdec5 [ 2 ] ;
real_T lnslkqpn3s [ 2 ] ; real_T kr0m00wejw [ 2 ] ; real_T miab3qaogq [ 2 ] ;
real_T jfcaombz1g [ 2 ] ; real_T axcb2lh1bi ; real_T bkgi2udbh5 ; void *
fd20okq1xb ; void * enjsb2hulw ; void * lzfqvndtd0 ; void * ek33xdux52 ; void
* m30a3vtsdd ; void * luyysmbfnq ; void * nrownkwjh0 ; void * kd4mpbgm1e ;
void * ndqpnsedxe ; void * mymwl3mh40 ; struct { void * AQHandles ; }
onzzjnkbrp ; struct { void * AQHandles ; } jcwnfu5b5c ; struct { void *
AQHandles ; } cz5lphhls3 ; struct { void * AQHandles ; } jt1dbzw2xv ; void *
obxbq1xy4m ; void * d3fkstg1rt ; void * b15anwlkp5 ; int_T g03aqag54v ; int_T
hbalhesuyw ; boolean_T dwx5bha5ez ; boolean_T i1hdp5pygn ; boolean_T
coyangkvhg ; } DW ; typedef struct { real_T jkjjiffqck [ 28 ] ; } X ; typedef
struct { real_T jkjjiffqck [ 28 ] ; } XDot ; typedef struct { boolean_T
jkjjiffqck [ 28 ] ; } XDis ; typedef struct { real_T jkjjiffqck [ 28 ] ; }
CStateAbsTol ; typedef struct { real_T jkjjiffqck [ 28 ] ; } CXPtMin ;
typedef struct { real_T jkjjiffqck [ 28 ] ; } CXPtMax ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Constant_Value [ 6 ] ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray
* mr_ur5bh_GetDWork ( ) ; extern void mr_ur5bh_SetDWork ( const mxArray *
ssDW ) ; extern mxArray * mr_ur5bh_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * ur5bh_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
