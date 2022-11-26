#include "rt_logging_mmi.h"
#include "ur5bh_capi.h"
#include <math.h>
#include "ur5bh.h"
#include "ur5bh_private.h"
#include "ur5bh_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.4 (R2021b) 14-May-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void kehpz2wwfb ( esknw0palk * * pEmxArray , int32_T
numDimensions ) ; static void krqkb4fgwe ( ja0ozpu1qr * * pEmxArray , int32_T
numDimensions ) ; static void n4fzdjxhdb ( d0bxqavfyq * pStruct ) ; static
void elgzkppu5t ( ih1a22iqzu * * pEmxArray , int32_T numDimensions ) ; static
void dqejery5op5u ( aepf3nbc2k * pStruct ) ; static void dqejery5op5 (
jn4o4x3xvo * pStruct ) ; static void buxklkz0fw ( jn4o4x3xvo pMatrix [ 10 ] )
; static void dqejery5op ( oi2sf35czq * pStruct ) ; static void ab5itymeef (
n235grlapm * pStruct ) ; static void npecprvwkb ( esknw0palk * emxArray ,
int32_T oldNumel ) ; static void os53ajltj1 ( ja0ozpu1qr * emxArray , int32_T
oldNumel ) ; static void oapklrkzk3 ( ih1a22iqzu * emxArray , int32_T
oldNumel ) ; static void cmn0zgmoph ( ih1a22iqzu * * pEmxArray ) ; static
aepf3nbc2k * f5vg3o5ubu ( aepf3nbc2k * obj ) ; static void gpkfx1y4a2 (
esknw0palk * * pEmxArray ) ; static jn4o4x3xvo * kwwsxgg4d3 ( jn4o4x3xvo *
obj ) ; static jn4o4x3xvo * kwwsxgg4d3e ( jn4o4x3xvo * obj ) ; static
jn4o4x3xvo * kwwsxgg4d3ez ( jn4o4x3xvo * obj ) ; static jn4o4x3xvo *
kwwsxgg4d3ezz ( jn4o4x3xvo * obj ) ; static jn4o4x3xvo * kwwsxgg4d3ezz5 (
jn4o4x3xvo * obj ) ; static jn4o4x3xvo * kwwsxgg4d3ezz5t ( jn4o4x3xvo * obj )
; static jn4o4x3xvo * pwunj1glbj ( jn4o4x3xvo * obj ) ; static jn4o4x3xvo *
jty5bxu1rv ( jn4o4x3xvo * obj ) ; static void fovpoxuhan ( n235grlapm * obj )
; static void ml2qkvnvst ( hfv5schqsp * * pEmxArray , int32_T numDimensions )
; static void js5x53ukv3 ( hfv5schqsp * emxArray , int32_T oldNumel ) ;
static void henxwe10ef ( const d0bxqavfyq * obj , real_T ax [ 3 ] ) ; static
void dujnhdhfxs ( real_T varargin_1 , real_T varargin_2 , real_T varargin_3 ,
real_T varargin_4 , real_T varargin_5 , real_T varargin_6 , real_T varargin_7
, real_T varargin_8 , real_T varargin_9 , real_T y [ 9 ] ) ; static void
ft2p0f3iu2g ( const d0bxqavfyq * obj , const real_T q_data [ ] , const
int32_T * q_size , real_T T [ 16 ] ) ; static void i0vehellcn ( const real_T
A [ 36 ] , const ja0ozpu1qr * B_p , ja0ozpu1qr * C ) ; static void ft2p0f3iu2
( const d0bxqavfyq * obj , real_T T [ 16 ] ) ; static void dz00cs5yhf (
ja0ozpu1qr * * pEmxArray ) ; static void injcevnttq ( hfv5schqsp * *
pEmxArray ) ; static void p2umzubg0v ( ja0ozpu1qr * * pEmxArray , int32_T
numDimensions ) ; static void dc4stevqle ( ja0ozpu1qr * emxArray , int32_T
oldNumel ) ; static void bz4hgqapmy ( d0bxqavfyq * pStruct ) ; static void
ew4pwdzpqq5 ( aepf3nbc2k * pStruct ) ; static void ew4pwdzpqq ( jn4o4x3xvo *
pStruct ) ; static void okprtkmmaa ( jn4o4x3xvo pMatrix [ 10 ] ) ; static
void ew4pwdzpqq5x ( oi2sf35czq * pStruct ) ; static void fxczxiyon2 (
n235grlapm * pStruct ) ; static void kehpz2wwfb ( esknw0palk * * pEmxArray ,
int32_T numDimensions ) { esknw0palk * emxArray ; int32_T i ; * pEmxArray = (
esknw0palk * ) malloc ( sizeof ( esknw0palk ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( char_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray -> canFreeData =
true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0
; } } static void krqkb4fgwe ( ja0ozpu1qr * * pEmxArray , int32_T
numDimensions ) { ja0ozpu1qr * emxArray ; int32_T i ; * pEmxArray = (
ja0ozpu1qr * ) malloc ( sizeof ( ja0ozpu1qr ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( real_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray -> canFreeData =
true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0
; } } static void n4fzdjxhdb ( d0bxqavfyq * pStruct ) { kehpz2wwfb ( &
pStruct -> Type , 2 ) ; krqkb4fgwe ( & pStruct -> MotionSubspace , 2 ) ; }
static void elgzkppu5t ( ih1a22iqzu * * pEmxArray , int32_T numDimensions ) {
ih1a22iqzu * emxArray ; int32_T i ; * pEmxArray = ( ih1a22iqzu * ) malloc (
sizeof ( ih1a22iqzu ) ) ; emxArray = * pEmxArray ; emxArray -> data = (
c5znbsemt0 * * ) NULL ; emxArray -> numDimensions = numDimensions ; emxArray
-> size = ( int32_T * ) malloc ( sizeof ( int32_T ) * numDimensions ) ;
emxArray -> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0
; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
dqejery5op5u ( aepf3nbc2k * pStruct ) { elgzkppu5t ( & pStruct ->
CollisionGeometries , 2 ) ; } static void dqejery5op5 ( jn4o4x3xvo * pStruct
) { kehpz2wwfb ( & pStruct -> NameInternal , 2 ) ; n4fzdjxhdb ( & pStruct ->
JointInternal ) ; dqejery5op5u ( & pStruct -> CollisionsInternal ) ; } static
void buxklkz0fw ( jn4o4x3xvo pMatrix [ 10 ] ) { int32_T i ; for ( i = 0 ; i <
10 ; i ++ ) { dqejery5op5 ( & pMatrix [ i ] ) ; } } static void dqejery5op (
oi2sf35czq * pStruct ) { dqejery5op5 ( & pStruct -> Base ) ; buxklkz0fw (
pStruct -> _pobj0 ) ; } static void ab5itymeef ( n235grlapm * pStruct ) {
dqejery5op ( & pStruct -> TreeInternal ) ; } static void npecprvwkb (
esknw0palk * emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ;
void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for (
i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size
[ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i = emxArray ->
allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i >
1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( (
uint32_T ) i , sizeof ( char_T ) ) ; if ( emxArray -> data != NULL ) { memcpy
( newData , emxArray -> data , sizeof ( char_T ) * oldNumel ) ; if ( emxArray
-> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = (
char_T * ) newData ; emxArray -> allocatedSize = i ; emxArray -> canFreeData
= true ; } } static void os53ajltj1 ( ja0ozpu1qr * emxArray , int32_T
oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel <
0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray ->
numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel
> emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 )
{ i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T
; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( real_T
) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data ,
sizeof ( real_T ) * oldNumel ) ; if ( emxArray -> canFreeData ) { free (
emxArray -> data ) ; } } emxArray -> data = ( real_T * ) newData ; emxArray
-> allocatedSize = i ; emxArray -> canFreeData = true ; } } static void
oapklrkzk3 ( ih1a22iqzu * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
calloc ( ( uint32_T ) i , sizeof ( c5znbsemt0 * ) ) ; if ( emxArray -> data
!= NULL ) { memcpy ( newData , ( void * ) emxArray -> data , sizeof (
c5znbsemt0 * ) * oldNumel ) ; if ( emxArray -> canFreeData ) { free ( ( void
* ) emxArray -> data ) ; } } emxArray -> data = ( c5znbsemt0 * * ) newData ;
emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ; } } static
void cmn0zgmoph ( ih1a22iqzu * * pEmxArray ) { if ( * pEmxArray != (
ih1a22iqzu * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( c5znbsemt0 * * )
NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( void * ) ( * pEmxArray
) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; *
pEmxArray = ( ih1a22iqzu * ) NULL ; } } static aepf3nbc2k * f5vg3o5ubu (
aepf3nbc2k * obj ) { void * defaultCollisionObj_GeometryInternal ; aepf3nbc2k
* b_obj ; c5znbsemt0 * obj_p ; ih1a22iqzu * e ; real_T c ; int32_T b_i ;
int32_T d ; elgzkppu5t ( & e , 2 ) ; b_obj = obj ; obj -> MaxElements = 0.0 ;
b_i = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 1 ] = ( int32_T ) obj
-> MaxElements ; oapklrkzk3 ( e , b_i ) ; b_i = obj -> CollisionGeometries ->
size [ 0 ] * obj -> CollisionGeometries -> size [ 1 ] ; obj ->
CollisionGeometries -> size [ 0 ] = 1 ; obj -> CollisionGeometries -> size [
1 ] = e -> size [ 1 ] ; oapklrkzk3 ( obj -> CollisionGeometries , b_i ) ;
defaultCollisionObj_GeometryInternal = 0 ; obj_p = & obj -> _pobj0 ; obj ->
_pobj0 . CollisionPrimitive = defaultCollisionObj_GeometryInternal ; obj ->
_pobj0 . matlabCodegenIsDeleted = false ; c = obj -> MaxElements ; d = (
int32_T ) c - 1 ; cmn0zgmoph ( & e ) ; for ( b_i = 0 ; b_i <= d ; b_i ++ ) {
obj -> CollisionGeometries -> data [ b_i ] = obj_p ; } return b_obj ; }
static void gpkfx1y4a2 ( esknw0palk * * pEmxArray ) { if ( * pEmxArray != (
esknw0palk * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( char_T * ) NULL )
&& ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; }
free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
esknw0palk * ) NULL ; } } static jn4o4x3xvo * kwwsxgg4d3 ( jn4o4x3xvo * obj )
{ esknw0palk * switch_expression ; jn4o4x3xvo * b_obj ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [
36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 13 ]
= { 's' , 'h' , 'o' , 'u' , 'l' , 'd' , 'e' , 'r' , '_' , 'l' , 'i' , 'n' ,
'k' } ; static const real_T tmp_e [ 36 ] = { 0.010267495893 , 0.0 , 0.0 , 0.0
, - 0.0 , 0.0 , 0.0 , 0.010267495893 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.00666 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 3.7 , 0.0 , 0.0 , - 0.0 ,
0.0 , 0.0 , 0.0 , 3.7 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 3.7 } ; static
const char_T tmp_i [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_m [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_g [ 16 ] = { 1.0 , 0.0 , - 0.0 , 0.0
, 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.089159 , 1.0
} ; static const real_T tmp_j [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const
real_T tmp_f [ 36 ] = { 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [
0 ] * obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] =
1 ; obj -> NameInternal -> size [ 1 ] = 13 ; npecprvwkb ( obj -> NameInternal
, b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 13 ; b_kstr ++ ) { obj ->
NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex =
1.0 ; for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [
b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size
[ 0 ] * obj -> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal .
Type -> size [ 0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ;
npecprvwkb ( obj -> JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 8 ; b_kstr ++ ) { obj -> JointInternal . Type -> data [ b_kstr ] =
tmp_i [ b_kstr ] ; } kehpz2wwfb ( & switch_expression , 2 ) ; b_kstr =
switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ] ;
switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] = obj
-> JointInternal . Type -> size [ 1 ] ; npecprvwkb ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_i [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_m [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
gpkfx1y4a2 ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
JointToParentTransform [ b_kstr ] = tmp_g [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . ChildToJointTransform [
b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
tmp_f [ b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; f5vg3o5ubu ( & obj -> CollisionsInternal ) ;
return b_obj ; } static jn4o4x3xvo * kwwsxgg4d3e ( jn4o4x3xvo * obj ) {
esknw0palk * switch_expression ; jn4o4x3xvo * b_obj ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [
36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 14 ]
= { 'u' , 'p' , 'p' , 'e' , 'r' , '_' , 'a' , 'r' , 'm' , '_' , 'l' , 'i' ,
'n' , 'k' } ; static const real_T tmp_e [ 36 ] = { 0.88490187591036018 , 0.0
, 0.0 , 0.0 , - 2.3500400000000004 , 0.0 , 0.0 , 0.88490187591036018 , 0.0 ,
2.3500400000000004 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0151074 , - 0.0 , 0.0 , 0.0
, 0.0 , 2.3500400000000004 , - 0.0 , 8.393 , 0.0 , 0.0 , - 2.3500400000000004
, 0.0 , 0.0 , 0.0 , 8.393 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 8.393 } ;
static const char_T tmp_i [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_m [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; static const real_T tmp_g [ 16 ] = {
6.123233995736766E-17 , 0.0 , - 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0
, 6.123233995736766E-17 , 0.0 , 0.0 , 0.13585 , 0.0 , 1.0 } ; static const
real_T tmp_j [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T tmp_f [ 36 ]
= { 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T
exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj ->
NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj ->
NameInternal -> size [ 1 ] = 14 ; npecprvwkb ( obj -> NameInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> NameInternal -> data
[ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 3.0 ; for ( b_kstr = 0
; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_e [
b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj ->
JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [ 0
] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; npecprvwkb ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; }
kehpz2wwfb ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
npecprvwkb ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_i [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_m [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } gpkfx1y4a2 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj -> JointInternal . JointToParentTransform [ b_kstr ] = tmp_g [ b_kstr ] ;
} for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_f [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu (
& obj -> CollisionsInternal ) ; return b_obj ; } static jn4o4x3xvo *
kwwsxgg4d3ez ( jn4o4x3xvo * obj ) { esknw0palk * switch_expression ;
jn4o4x3xvo * b_obj ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ;
char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T
b_bool ; static const char_T tmp_p [ 12 ] = { 'f' , 'o' , 'r' , 'e' , 'a' ,
'r' , 'm' , '_' , 'l' , 'i' , 'n' , 'k' } ; static const real_T tmp_e [ 36 ]
= { 0.11872470157577858 , 0.0 , 0.0 , 0.0 , - 0.44618437499999997 , 0.0 , 0.0
, 0.11872470157577858 , 0.0 , 0.44618437499999997 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.004095 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.44618437499999997 , - 0.0 , 2.275 ,
0.0 , 0.0 , - 0.44618437499999997 , 0.0 , 0.0 , 0.0 , 2.275 , 0.0 , 0.0 , -
0.0 , 0.0 , 0.0 , 0.0 , 2.275 } ; static const char_T tmp_i [ 8 ] = { 'r' ,
'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_m [ 9 ] =
{ 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T
tmp_g [ 16 ] = { 1.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0
, 1.0 , 0.0 , 0.0 , - 0.1197 , 0.425 , 1.0 } ; static const real_T tmp_j [ 16
] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T tmp_f [ 36 ] = { 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 12 ; npecprvwkb ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 12 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } obj -> ParentIndex = 4.0 ; for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; }
b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj -> JointInternal .
Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj ->
JointInternal . Type -> size [ 1 ] = 8 ; npecprvwkb ( obj -> JointInternal .
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj ->
JointInternal . Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } kehpz2wwfb ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
npecprvwkb ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_i [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_m [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } gpkfx1y4a2 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj -> JointInternal . JointToParentTransform [ b_kstr ] = tmp_g [ b_kstr ] ;
} for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_f [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu (
& obj -> CollisionsInternal ) ; return b_obj ; } static jn4o4x3xvo *
kwwsxgg4d3ezz ( jn4o4x3xvo * obj ) { esknw0palk * switch_expression ;
jn4o4x3xvo * b_obj ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ;
char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T
b_bool ; static const char_T tmp_p [ 12 ] = { 'w' , 'r' , 'i' , 's' , 't' ,
'_' , '1' , '_' , 'l' , 'i' , 'n' , 'k' } ; static const real_T tmp_e [ 36 ]
= { 0.013103029976040001 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.11336700000000001 ,
0.0 , 0.0025598989760400002 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.012737331000000001 , - 0.11336700000000001 , 0.0 , 0.0 , 0.0 , 0.0 , -
0.11336700000000001 , 1.219 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 1.219 ,
0.0 , 0.11336700000000001 , - 0.0 , 0.0 , 0.0 , 0.0 , 1.219 } ; static const
char_T tmp_i [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_m [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const real_T tmp_g [ 16 ] = { 6.123233995736766E-17 ,
0.0 , - 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 6.123233995736766E-17
, 0.0 , 0.0 , 0.0 , 0.39225 , 1.0 } ; static const real_T tmp_j [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 } ; static const real_T tmp_f [ 36 ] = { 0.0 , 1.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ;
b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1
] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ]
= 12 ; npecprvwkb ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 12 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [
b_kstr ] ; } obj -> ParentIndex = 5.0 ; for ( b_kstr = 0 ; b_kstr < 36 ;
b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr
= obj -> JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type ->
size [ 1 ] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj ->
JointInternal . Type -> size [ 1 ] = 8 ; npecprvwkb ( obj -> JointInternal .
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj ->
JointInternal . Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } kehpz2wwfb ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
npecprvwkb ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_i [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_m [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } gpkfx1y4a2 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj -> JointInternal . JointToParentTransform [ b_kstr ] = tmp_g [ b_kstr ] ;
} for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_f [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu (
& obj -> CollisionsInternal ) ; return b_obj ; } static jn4o4x3xvo *
kwwsxgg4d3ezz5 ( jn4o4x3xvo * obj ) { esknw0palk * switch_expression ;
jn4o4x3xvo * b_obj ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ;
char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T
b_bool ; static const char_T tmp_p [ 12 ] = { 'w' , 'r' , 'i' , 's' , 't' ,
'_' , '2' , '_' , 'l' , 'i' , 'n' , 'k' } ; static const real_T tmp_e [ 36 ]
= { 0.01348045980354 , 0.0 , 0.0 , 0.0 , - 0.11537835 , 0.0 , 0.0 ,
0.01348045980354 , 0.0 , 0.11537835 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0021942 , -
0.0 , 0.0 , 0.0 , 0.0 , 0.11537835 , - 0.0 , 1.219 , 0.0 , 0.0 , - 0.11537835
, 0.0 , 0.0 , 0.0 , 1.219 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 1.219 } ;
static const char_T tmp_i [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_m [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; static const real_T tmp_g [ 16 ] = { 1.0 , 0.0 , - 0.0
, 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.093 , 0.0 ,
1.0 } ; static const real_T tmp_j [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static
const real_T tmp_f [ 36 ] = { 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal ->
size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size
[ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 12 ; npecprvwkb ( obj ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 12 ; b_kstr ++ ) { obj
-> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex
= 6.0 ; for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia
[ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type ->
size [ 0 ] * obj -> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal
. Type -> size [ 0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ;
npecprvwkb ( obj -> JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 8 ; b_kstr ++ ) { obj -> JointInternal . Type -> data [ b_kstr ] =
tmp_i [ b_kstr ] ; } kehpz2wwfb ( & switch_expression , 2 ) ; b_kstr =
switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ] ;
switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] = obj
-> JointInternal . Type -> size [ 1 ] ; npecprvwkb ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_i [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_m [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
gpkfx1y4a2 ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
JointToParentTransform [ b_kstr ] = tmp_g [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . ChildToJointTransform [
b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
tmp_f [ b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; f5vg3o5ubu ( & obj -> CollisionsInternal ) ;
return b_obj ; } static jn4o4x3xvo * kwwsxgg4d3ezz5t ( jn4o4x3xvo * obj ) {
esknw0palk * switch_expression ; jn4o4x3xvo * b_obj ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [
36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 12 ]
= { 'w' , 'r' , 'i' , 's' , 't' , '_' , '3' , '_' , 'l' , 'i' , 'n' , 'k' } ;
static const real_T tmp_e [ 36 ] = { 0.00934280021087163 , 0.0 , 0.0 , 0.0 ,
- 0.0 , 0.14232289499999998 , 0.0 , 0.0001321171875 , -
2.9037169410594384E-21 , 0.0 , 0.0 , - 0.0 , 0.0 , - 2.9037169410594384E-21 ,
0.00934280021087163 , - 0.14232289499999998 , 0.0 , 0.0 , 0.0 , 0.0 , -
0.14232289499999998 , 2.1879 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 2.1879 ,
0.0 , 0.14232289499999998 , - 0.0 , 0.0 , 0.0 , 0.0 , 2.1879 } ; static const
char_T tmp_i [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_m [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const real_T tmp_g [ 16 ] = { 1.0 , 0.0 , - 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.09465 , 1.0 } ;
static const real_T tmp_j [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T
tmp_f [ 36 ] = { 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 }
; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] *
obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ;
obj -> NameInternal -> size [ 1 ] = 12 ; npecprvwkb ( obj -> NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 12 ; b_kstr ++ ) { obj -> NameInternal
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 7.0 ; for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] =
tmp_e [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; npecprvwkb ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; }
kehpz2wwfb ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
npecprvwkb ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_i [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_m [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } gpkfx1y4a2 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj -> JointInternal . JointToParentTransform [ b_kstr ] = tmp_g [ b_kstr ] ;
} for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_f [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu (
& obj -> CollisionsInternal ) ; return b_obj ; } static jn4o4x3xvo *
pwunj1glbj ( jn4o4x3xvo * obj ) { esknw0palk * switch_expression ; jn4o4x3xvo
* b_obj ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8
] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ;
static const char_T tmp_p [ 7 ] = { 'e' , 'e' , '_' , 'l' , 'i' , 'n' , 'k' }
; static const real_T tmp_e [ 36 ] = { 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static const char_T tmp_i [ 5 ] = {
'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_m [ 8 ] = { 'r' , 'e'
, 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_g [ 9 ] = {
'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T
tmp_j [ 16 ] = { 6.123233995736766E-17 , 1.0 , - 0.0 , 0.0 , - 1.0 ,
6.123233995736766E-17 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0823 ,
0.0 , 1.0 } ; static const real_T tmp_f [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ;
int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] *
obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ;
obj -> NameInternal -> size [ 1 ] = 7 ; npecprvwkb ( obj -> NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 7 ; b_kstr ++ ) { obj -> NameInternal
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 8.0 ; for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] =
tmp_e [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 5 ; npecprvwkb ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; }
kehpz2wwfb ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
npecprvwkb ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_m [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_g [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } gpkfx1y4a2 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj -> JointInternal . JointToParentTransform [ b_kstr ] = tmp_j [ b_kstr ] ;
} for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_f [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = 0.0 ; } obj -> JointInternal . JointAxisInternal [ 0 ] =
0.0 ; obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu ( & obj ->
CollisionsInternal ) ; return b_obj ; } static jn4o4x3xvo * jty5bxu1rv (
jn4o4x3xvo * obj ) { esknw0palk * switch_expression ; jn4o4x3xvo * b_obj ;
int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 5 ] = { 't' , 'o' , 'o' , 'l' , '0' } ; static const real_T
tmp_e [ 36 ] = { 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0
, 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 } ; static const char_T tmp_i [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd'
} ; static const char_T tmp_m [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' ,
't' , 'e' } ; static const char_T tmp_g [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm'
, 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_j [ 16 ] = { 1.0 , 0.0 ,
- 0.0 , 0.0 , - 0.0 , 6.123233995736766E-17 , - 1.0 , 0.0 , 0.0 , 1.0 ,
6.123233995736766E-17 , 0.0 , 0.0 , 0.0823 , 0.0 , 1.0 } ; static const
real_T tmp_f [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; int32_T exitg1 ; b_obj = obj ;
b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1
] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ]
= 5 ; npecprvwkb ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr
< 5 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ]
; } obj -> ParentIndex = 8.0 ; for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
obj -> SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 5 ; npecprvwkb ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_i [ b_kstr ] ; } kehpz2wwfb ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; npecprvwkb ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_m [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_g [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
gpkfx1y4a2 ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; os53ajltj1 ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
JointToParentTransform [ b_kstr ] = tmp_j [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . ChildToJointTransform [
b_kstr ] = tmp_f [ b_kstr ] ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1 ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] = 0.0
; } obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu ( & obj -> CollisionsInternal ) ;
return b_obj ; } static void fovpoxuhan ( n235grlapm * obj ) { esknw0palk *
switch_expression ; oi2sf35czq * obj_p ; int32_T b_kstr ; int32_T loop_ub ;
char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp
[ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 9 ] = { 'b' , 'a' ,
's' , 'e' , '_' , 'l' , 'i' , 'n' , 'k' } ; static const real_T tmp_e [ 36 ]
= { 0.00443333156 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.00443333156 , 0.0
, 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0072 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , -
0.0 , 4.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 4.0 , 0.0 , 0.0 , - 0.0 ,
0.0 , 0.0 , 0.0 , 4.0 } ; static const char_T tmp_i [ 5 ] = { 'f' , 'i' , 'x'
, 'e' , 'd' } ; static const char_T tmp_m [ 8 ] = { 'r' , 'e' , 'v' , 'o' ,
'l' , 'u' , 't' , 'e' } ; static const char_T tmp_g [ 9 ] = { 'p' , 'r' , 'i'
, 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_j [ 16 ] = {
1.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0
, 0.0 , 1.0 , 1.0 } ; static const real_T tmp_f [ 16 ] = { 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 }
; static const real_T tmp_c [ 36 ] = { 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static const real_T tmp_k [ 16 ] = {
- 1.0 , - 1.2246467991473532E-16 , - 0.0 , 0.0 , 1.2246467991473532E-16 , -
1.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static
const int8_T tmp_b [ 20 ] = { 0 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 0 , 0 , - 1 , -
1 , 1 , 2 , 3 , 4 , 5 , 6 , - 1 , - 1 } ; static const char_T tmp_n [ 5 ] = {
'w' , 'o' , 'r' , 'l' , 'd' } ; int32_T exitg1 ; obj -> isInitialized = 1 ;
obj_p = & obj -> TreeInternal ; b_kstr = obj -> TreeInternal . _pobj0 [ 0 ] .
NameInternal -> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 0 ] .
NameInternal -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 0 ] .
NameInternal -> size [ 0 ] = 1 ; obj -> TreeInternal . _pobj0 [ 0 ] .
NameInternal -> size [ 1 ] = 9 ; npecprvwkb ( obj -> TreeInternal . _pobj0 [
0 ] . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) {
obj -> TreeInternal . _pobj0 [ 0 ] . NameInternal -> data [ b_kstr ] = tmp_p
[ b_kstr ] ; } obj -> TreeInternal . _pobj0 [ 0 ] . ParentIndex = 0.0 ; for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 0 ] .
SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj -> TreeInternal
. _pobj0 [ 0 ] . JointInternal . Type -> size [ 0 ] * obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . Type -> size [ 1 ] ; obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . Type -> size [ 0 ] = 1 ; obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . Type -> size [ 1 ] = 5 ; npecprvwkb ( obj ->
TreeInternal . _pobj0 [ 0 ] . JointInternal . Type , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 0 ] .
JointInternal . Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } kehpz2wwfb ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> TreeInternal . _pobj0 [ 0 ] .
JointInternal . Type -> size [ 1 ] ; npecprvwkb ( switch_expression , b_kstr
) ; loop_ub = obj -> TreeInternal . _pobj0 [ 0 ] . JointInternal . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> TreeInternal . _pobj0 [ 0 ] .
JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { b [ b_kstr ] = tmp_m [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_g [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } switch ( b_kstr ) {
case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp
[ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal . _pobj0 [
0 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj ->
TreeInternal . _pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
TreeInternal . _pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
obj -> TreeInternal . _pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 2 ]
= 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } obj -> TreeInternal . _pobj0 [ 0 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal . _pobj0
[ 0 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> TreeInternal . _pobj0 [ 0 ] . JointInternal . MotionSubspace
-> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 0 ] . JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 0 ] .
JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj -> TreeInternal .
_pobj0 [ 0 ] . JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1
( obj -> TreeInternal . _pobj0 [ 0 ] . JointInternal . MotionSubspace ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> TreeInternal
. _pobj0 [ 0 ] . JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj_p -> _pobj0 [ 0 ] . JointInternal . JointToParentTransform [ b_kstr ] =
tmp_j [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p ->
_pobj0 [ 0 ] . JointInternal . ChildToJointTransform [ b_kstr ] = tmp_f [
b_kstr ] ; } b_kstr = obj_p -> _pobj0 [ 0 ] . JointInternal . MotionSubspace
-> size [ 0 ] * obj_p -> _pobj0 [ 0 ] . JointInternal . MotionSubspace ->
size [ 1 ] ; obj_p -> _pobj0 [ 0 ] . JointInternal . MotionSubspace -> size [
0 ] = 6 ; obj_p -> _pobj0 [ 0 ] . JointInternal . MotionSubspace -> size [ 1
] = 1 ; os53ajltj1 ( obj_p -> _pobj0 [ 0 ] . JointInternal . MotionSubspace ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj_p -> _pobj0 [ 0
] . JointInternal . MotionSubspace -> data [ b_kstr ] = 0.0 ; } obj_p ->
_pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj_p ->
_pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj_p ->
_pobj0 [ 0 ] . JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu ( &
obj_p -> _pobj0 [ 0 ] . CollisionsInternal ) ; obj -> TreeInternal . Bodies [
0 ] = & obj_p -> _pobj0 [ 0 ] ; obj -> TreeInternal . Bodies [ 0 ] -> Index =
1.0 ; b_kstr = obj_p -> _pobj0 [ 1 ] . NameInternal -> size [ 0 ] * obj_p ->
_pobj0 [ 1 ] . NameInternal -> size [ 1 ] ; obj_p -> _pobj0 [ 1 ] .
NameInternal -> size [ 0 ] = 1 ; obj_p -> _pobj0 [ 1 ] . NameInternal -> size
[ 1 ] = 4 ; npecprvwkb ( obj_p -> _pobj0 [ 1 ] . NameInternal , b_kstr ) ;
obj_p -> _pobj0 [ 1 ] . NameInternal -> data [ 0 ] = 'b' ; obj_p -> _pobj0 [
1 ] . NameInternal -> data [ 1 ] = 'a' ; obj_p -> _pobj0 [ 1 ] . NameInternal
-> data [ 2 ] = 's' ; obj_p -> _pobj0 [ 1 ] . NameInternal -> data [ 3 ] =
'e' ; obj_p -> _pobj0 [ 1 ] . ParentIndex = 1.0 ; for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj_p -> _pobj0 [ 1 ] . SpatialInertia [ b_kstr ] = tmp_c
[ b_kstr ] ; } b_kstr = obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal .
Type -> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal .
Type -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal .
Type -> size [ 0 ] = 1 ; obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal .
Type -> size [ 1 ] = 5 ; npecprvwkb ( obj -> TreeInternal . _pobj0 [ 1 ] .
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ )
{ obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal . Type -> data [ b_kstr
] = tmp_i [ b_kstr ] ; } b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> TreeInternal . _pobj0 [ 1 ] .
JointInternal . Type -> size [ 1 ] ; npecprvwkb ( switch_expression , b_kstr
) ; loop_ub = obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> TreeInternal . _pobj0 [ 1 ] .
JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { b [ b_kstr ] = tmp_m [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_g [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } switch ( b_kstr ) {
case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp
[ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal . _pobj0 [
1 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj ->
TreeInternal . _pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal .
_pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
TreeInternal . _pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 2 ]
= 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } obj -> TreeInternal . _pobj0 [ 1 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal . _pobj0
[ 1 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal . MotionSubspace
-> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 1 ] .
JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj -> TreeInternal .
_pobj0 [ 1 ] . JointInternal . MotionSubspace -> size [ 1 ] = 1 ; os53ajltj1
( obj -> TreeInternal . _pobj0 [ 1 ] . JointInternal . MotionSubspace ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> TreeInternal
. _pobj0 [ 1 ] . JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj_p -> _pobj0 [ 1 ] . JointInternal . JointToParentTransform [ b_kstr ] =
tmp_k [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p ->
_pobj0 [ 1 ] . JointInternal . ChildToJointTransform [ b_kstr ] = tmp_f [
b_kstr ] ; } b_kstr = obj_p -> _pobj0 [ 1 ] . JointInternal . MotionSubspace
-> size [ 0 ] * obj_p -> _pobj0 [ 1 ] . JointInternal . MotionSubspace ->
size [ 1 ] ; obj_p -> _pobj0 [ 1 ] . JointInternal . MotionSubspace -> size [
0 ] = 6 ; obj_p -> _pobj0 [ 1 ] . JointInternal . MotionSubspace -> size [ 1
] = 1 ; os53ajltj1 ( obj_p -> _pobj0 [ 1 ] . JointInternal . MotionSubspace ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj_p -> _pobj0 [ 1
] . JointInternal . MotionSubspace -> data [ b_kstr ] = 0.0 ; } obj_p ->
_pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj_p ->
_pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj_p ->
_pobj0 [ 1 ] . JointInternal . JointAxisInternal [ 2 ] = 0.0 ; f5vg3o5ubu ( &
obj_p -> _pobj0 [ 1 ] . CollisionsInternal ) ; obj -> TreeInternal . Bodies [
1 ] = & obj_p -> _pobj0 [ 1 ] ; obj -> TreeInternal . Bodies [ 1 ] -> Index =
2.0 ; obj -> TreeInternal . Bodies [ 2 ] = kwwsxgg4d3 ( & obj -> TreeInternal
. _pobj0 [ 2 ] ) ; obj -> TreeInternal . Bodies [ 2 ] -> Index = 3.0 ; obj ->
TreeInternal . Bodies [ 3 ] = kwwsxgg4d3e ( & obj -> TreeInternal . _pobj0 [
3 ] ) ; obj -> TreeInternal . Bodies [ 3 ] -> Index = 4.0 ; obj ->
TreeInternal . Bodies [ 4 ] = kwwsxgg4d3ez ( & obj -> TreeInternal . _pobj0 [
4 ] ) ; obj -> TreeInternal . Bodies [ 4 ] -> Index = 5.0 ; obj ->
TreeInternal . Bodies [ 5 ] = kwwsxgg4d3ezz ( & obj -> TreeInternal . _pobj0
[ 5 ] ) ; obj -> TreeInternal . Bodies [ 5 ] -> Index = 6.0 ; obj ->
TreeInternal . Bodies [ 6 ] = kwwsxgg4d3ezz5 ( & obj -> TreeInternal . _pobj0
[ 6 ] ) ; obj -> TreeInternal . Bodies [ 6 ] -> Index = 7.0 ; obj ->
TreeInternal . Bodies [ 7 ] = kwwsxgg4d3ezz5t ( & obj -> TreeInternal .
_pobj0 [ 7 ] ) ; obj -> TreeInternal . Bodies [ 7 ] -> Index = 8.0 ; obj ->
TreeInternal . Bodies [ 8 ] = pwunj1glbj ( & obj -> TreeInternal . _pobj0 [ 8
] ) ; obj -> TreeInternal . Bodies [ 8 ] -> Index = 9.0 ; obj -> TreeInternal
. Bodies [ 9 ] = jty5bxu1rv ( & obj -> TreeInternal . _pobj0 [ 9 ] ) ; obj ->
TreeInternal . Bodies [ 9 ] -> Index = 10.0 ; obj -> TreeInternal . NumBodies
= 10.0 ; obj -> TreeInternal . Gravity [ 0 ] = 0.0 ; obj -> TreeInternal .
Gravity [ 1 ] = 0.0 ; obj -> TreeInternal . Gravity [ 2 ] = - 9.81 ; for (
b_kstr = 0 ; b_kstr < 20 ; b_kstr ++ ) { obj -> TreeInternal . PositionDoFMap
[ b_kstr ] = tmp_b [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 20 ; b_kstr ++
) { obj -> TreeInternal . VelocityDoFMap [ b_kstr ] = tmp_b [ b_kstr ] ; }
b_kstr = obj_p -> Base . NameInternal -> size [ 0 ] * obj_p -> Base .
NameInternal -> size [ 1 ] ; obj_p -> Base . NameInternal -> size [ 0 ] = 1 ;
obj_p -> Base . NameInternal -> size [ 1 ] = 5 ; npecprvwkb ( obj_p -> Base .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj_p
-> Base . NameInternal -> data [ b_kstr ] = tmp_n [ b_kstr ] ; } obj_p ->
Base . ParentIndex = - 1.0 ; for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
obj_p -> Base . SpatialInertia [ b_kstr ] = 0.0 ; } b_kstr = obj ->
TreeInternal . Base . JointInternal . Type -> size [ 0 ] * obj ->
TreeInternal . Base . JointInternal . Type -> size [ 1 ] ; obj ->
TreeInternal . Base . JointInternal . Type -> size [ 0 ] = 1 ; obj ->
TreeInternal . Base . JointInternal . Type -> size [ 1 ] = 5 ; npecprvwkb (
obj -> TreeInternal . Base . JointInternal . Type , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> TreeInternal . Base . JointInternal .
Type -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = switch_expression ->
size [ 0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0
] = 1 ; switch_expression -> size [ 1 ] = obj -> TreeInternal . Base .
JointInternal . Type -> size [ 1 ] ; npecprvwkb ( switch_expression , b_kstr
) ; loop_ub = obj -> TreeInternal . Base . JointInternal . Type -> size [ 1 ]
- 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression
-> data [ b_kstr ] = obj -> TreeInternal . Base . JointInternal . Type ->
data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr
] = tmp_m [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1
] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if
( switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_g [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } gpkfx1y4a2 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal .
Base . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal .
Base . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
Base . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [
0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp
[ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal . Base . JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal . Base . JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal . Base . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } obj -> TreeInternal .
Base . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal .
Base . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
Base . JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj
-> TreeInternal . Base . JointInternal . MotionSubspace -> size [ 0 ] * obj
-> TreeInternal . Base . JointInternal . MotionSubspace -> size [ 1 ] ; obj
-> TreeInternal . Base . JointInternal . MotionSubspace -> size [ 0 ] = 6 ;
obj -> TreeInternal . Base . JointInternal . MotionSubspace -> size [ 1 ] = 1
; os53ajltj1 ( obj -> TreeInternal . Base . JointInternal . MotionSubspace ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> TreeInternal
. Base . JointInternal . MotionSubspace -> data [ b_kstr ] = msubspace_data [
b_kstr ] ; } f5vg3o5ubu ( & obj_p -> Base . CollisionsInternal ) ; obj ->
TreeInternal . Base . Index = 0.0 ; } static void ml2qkvnvst ( hfv5schqsp * *
pEmxArray , int32_T numDimensions ) { hfv5schqsp * emxArray ; int32_T i ; *
pEmxArray = ( hfv5schqsp * ) malloc ( sizeof ( hfv5schqsp ) ) ; emxArray = *
pEmxArray ; emxArray -> data = ( cmsq43dhts * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * numDimensions ) ; emxArray -> allocatedSize = 0 ;
emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) {
emxArray -> size [ i ] = 0 ; } } static void js5x53ukv3 ( hfv5schqsp *
emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData
; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i <
emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; }
if ( newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ;
if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i
= MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( cmsq43dhts ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData
, emxArray -> data , sizeof ( cmsq43dhts ) * oldNumel ) ; if ( emxArray ->
canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = (
cmsq43dhts * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void henxwe10ef ( const d0bxqavfyq * obj ,
real_T ax [ 3 ] ) { int32_T b_kstr ; char_T b_p [ 9 ] ; char_T b [ 8 ] ;
boolean_T b_bool ; static const char_T tmp [ 8 ] = { 'r' , 'e' , 'v' , 'o' ,
'l' , 'u' , 't' , 'e' } ; static const char_T tmp_p [ 9 ] = { 'p' , 'r' , 'i'
, 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; boolean_T guard1 =
false ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp [
b_kstr ] ; } b_bool = false ; if ( obj -> Type -> size [ 1 ] != 8 ) { } else
{ b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( obj -> Type ->
data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ;
} } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } guard1
= false ; if ( b_bool ) { guard1 = true ; } else { for ( b_kstr = 0 ; b_kstr
< 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_p [ b_kstr ] ; } if ( obj -> Type ->
size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
9 ) { if ( obj -> Type -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( b_bool ) { guard1 = true ; } else { ax [ 0 ] =
( rtNaN ) ; ax [ 1 ] = ( rtNaN ) ; ax [ 2 ] = ( rtNaN ) ; } } if ( guard1 ) {
ax [ 0 ] = obj -> JointAxisInternal [ 0 ] ; ax [ 1 ] = obj ->
JointAxisInternal [ 1 ] ; ax [ 2 ] = obj -> JointAxisInternal [ 2 ] ; } }
static void dujnhdhfxs ( real_T varargin_1 , real_T varargin_2 , real_T
varargin_3 , real_T varargin_4 , real_T varargin_5 , real_T varargin_6 ,
real_T varargin_7 , real_T varargin_8 , real_T varargin_9 , real_T y [ 9 ] )
{ y [ 0 ] = varargin_1 ; y [ 1 ] = varargin_2 ; y [ 2 ] = varargin_3 ; y [ 3
] = varargin_4 ; y [ 4 ] = varargin_5 ; y [ 5 ] = varargin_6 ; y [ 6 ] =
varargin_7 ; y [ 7 ] = varargin_8 ; y [ 8 ] = varargin_9 ; } static void
ft2p0f3iu2g ( const d0bxqavfyq * obj , const real_T q_data [ ] , const
int32_T * q_size , real_T T [ 16 ] ) { real_T b [ 16 ] ; real_T obj_p [ 16 ]
; real_T R [ 9 ] ; real_T tempR [ 9 ] ; real_T result_data [ 4 ] ; real_T v [
3 ] ; real_T cth ; real_T theta ; int32_T i ; int32_T i_p ; char_T b_e [ 8 ]
; char_T b_p [ 5 ] ; boolean_T b_bool ; static const char_T tmp [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_p [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; int32_T exitg1 ; for ( i = 0 ; i < 5 ;
i ++ ) { b_p [ i ] = tmp [ i ] ; } b_bool = false ; if ( obj -> Type -> size
[ 1 ] != 5 ) { } else { i = 1 ; do { exitg1 = 0 ; if ( i - 1 < 5 ) { if ( obj
-> Type -> data [ i - 1 ] != b_p [ i - 1 ] ) { exitg1 = 1 ; } else { i ++ ; }
} else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if (
b_bool ) { cth = 0.0 ; } else { for ( i = 0 ; i < 8 ; i ++ ) { b_e [ i ] =
tmp_p [ i ] ; } if ( obj -> Type -> size [ 1 ] != 8 ) { } else { i = 1 ; do {
exitg1 = 0 ; if ( i - 1 < 8 ) { if ( obj -> Type -> data [ i - 1 ] != b_e [ i
- 1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool = true ; exitg1 = 1
; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { cth = 1.0 ; } else { cth = -
1.0 ; } } switch ( ( int32_T ) cth ) { case 0 : memset ( & b [ 0 ] , 0 ,
sizeof ( real_T ) << 4U ) ; b [ 0 ] = 1.0 ; b [ 5 ] = 1.0 ; b [ 10 ] = 1.0 ;
b [ 15 ] = 1.0 ; break ; case 1 : henxwe10ef ( obj , v ) ; result_data [ 0 ]
= v [ 0 ] ; result_data [ 1 ] = v [ 1 ] ; result_data [ 2 ] = v [ 2 ] ; if (
0 <= ( * q_size != 0 ) - 1 ) { result_data [ 3 ] = q_data [ 0 ] ; } cth =
result_data [ 0 ] ; v [ 0 ] = cth * cth ; cth = result_data [ 1 ] ; v [ 1 ] =
cth * cth ; cth = result_data [ 2 ] ; cth = 1.0 / muDoubleScalarSqrt ( ( v [
0 ] + v [ 1 ] ) + cth * cth ) ; v [ 0 ] = result_data [ 0 ] * cth ; v [ 1 ] =
result_data [ 1 ] * cth ; v [ 2 ] = result_data [ 2 ] * cth ; theta =
result_data [ 3 ] ; cth = muDoubleScalarCos ( theta ) ; theta =
muDoubleScalarSin ( theta ) ; dujnhdhfxs ( v [ 0 ] * v [ 0 ] * ( 1.0 - cth )
+ cth , v [ 0 ] * v [ 1 ] * ( 1.0 - cth ) - v [ 2 ] * theta , v [ 0 ] * v [ 2
] * ( 1.0 - cth ) + v [ 1 ] * theta , v [ 0 ] * v [ 1 ] * ( 1.0 - cth ) + v [
2 ] * theta , v [ 1 ] * v [ 1 ] * ( 1.0 - cth ) + cth , v [ 1 ] * v [ 2 ] * (
1.0 - cth ) - v [ 0 ] * theta , v [ 0 ] * v [ 2 ] * ( 1.0 - cth ) - v [ 1 ] *
theta , v [ 1 ] * v [ 2 ] * ( 1.0 - cth ) + v [ 0 ] * theta , v [ 2 ] * v [ 2
] * ( 1.0 - cth ) + cth , tempR ) ; for ( i = 0 ; i < 3 ; i ++ ) { R [ i ] =
tempR [ i * 3 ] ; R [ i + 3 ] = tempR [ i * 3 + 1 ] ; R [ i + 6 ] = tempR [ i
* 3 + 2 ] ; } memset ( & b [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; for ( i =
0 ; i < 3 ; i ++ ) { b [ i << 2 ] = R [ 3 * i ] ; b [ ( i << 2 ) + 1 ] = R [
3 * i + 1 ] ; b [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; } b [ 15 ] = 1.0 ;
break ; default : henxwe10ef ( obj , v ) ; memset ( & tempR [ 0 ] , 0 , 9U *
sizeof ( real_T ) ) ; tempR [ 0 ] = 1.0 ; tempR [ 4 ] = 1.0 ; tempR [ 8 ] =
1.0 ; cth = q_data [ 0 ] ; for ( i = 0 ; i < 3 ; i ++ ) { b [ i << 2 ] =
tempR [ 3 * i ] ; b [ ( i << 2 ) + 1 ] = tempR [ 3 * i + 1 ] ; b [ ( i << 2 )
+ 2 ] = tempR [ 3 * i + 2 ] ; b [ i + 12 ] = v [ i ] * cth ; } b [ 3 ] = 0.0
; b [ 7 ] = 0.0 ; b [ 11 ] = 0.0 ; b [ 15 ] = 1.0 ; break ; } for ( i = 0 ; i
< 4 ; i ++ ) { for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { obj_p [ i + ( i_p << 2 )
] = 0.0 ; obj_p [ i + ( i_p << 2 ) ] += b [ i_p << 2 ] * obj ->
JointToParentTransform [ i ] ; obj_p [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 )
+ 1 ] * obj -> JointToParentTransform [ i + 4 ] ; obj_p [ i + ( i_p << 2 ) ]
+= b [ ( i_p << 2 ) + 2 ] * obj -> JointToParentTransform [ i + 8 ] ; obj_p [
i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 3 ] * obj -> JointToParentTransform
[ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { T [ i + ( i_p << 2 ) ] =
0.0 ; T [ i + ( i_p << 2 ) ] += obj -> ChildToJointTransform [ i_p << 2 ] *
obj_p [ i ] ; T [ i + ( i_p << 2 ) ] += obj -> ChildToJointTransform [ ( i_p
<< 2 ) + 1 ] * obj_p [ i + 4 ] ; T [ i + ( i_p << 2 ) ] += obj ->
ChildToJointTransform [ ( i_p << 2 ) + 2 ] * obj_p [ i + 8 ] ; T [ i + ( i_p
<< 2 ) ] += obj -> ChildToJointTransform [ ( i_p << 2 ) + 3 ] * obj_p [ i +
12 ] ; } } } static void i0vehellcn ( const real_T A [ 36 ] , const
ja0ozpu1qr * B_p , ja0ozpu1qr * C ) { real_T s ; int32_T b_i ; int32_T b_j ;
int32_T b_k ; int32_T boffset ; int32_T coffset ; int32_T n ; n = B_p -> size
[ 1 ] - 1 ; b_j = C -> size [ 0 ] * C -> size [ 1 ] ; C -> size [ 0 ] = 6 ; C
-> size [ 1 ] = B_p -> size [ 1 ] ; os53ajltj1 ( C , b_j ) ; for ( b_j = 0 ;
b_j <= n ; b_j ++ ) { coffset = b_j * 6 - 1 ; boffset = b_j * 6 - 1 ; for (
b_i = 0 ; b_i < 6 ; b_i ++ ) { s = 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) {
s += A [ b_k * 6 + b_i ] * B_p -> data [ ( boffset + b_k ) + 1 ] ; } C ->
data [ ( coffset + b_i ) + 1 ] = s ; } } } static void ft2p0f3iu2 ( const
d0bxqavfyq * obj , real_T T [ 16 ] ) { real_T b [ 16 ] ; real_T obj_p [ 16 ]
; real_T R [ 9 ] ; real_T tempR [ 9 ] ; real_T v [ 3 ] ; real_T axang_idx_0 ;
real_T axang_idx_1 ; real_T axang_idx_2 ; real_T b_index ; int32_T i ;
int32_T i_p ; char_T b_e [ 8 ] ; char_T b_p [ 5 ] ; boolean_T b_bool ; static
const char_T tmp [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const
char_T tmp_p [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
int32_T exitg1 ; for ( i = 0 ; i < 5 ; i ++ ) { b_p [ i ] = tmp [ i ] ; }
b_bool = false ; if ( obj -> Type -> size [ 1 ] != 5 ) { } else { i = 1 ; do
{ exitg1 = 0 ; if ( i - 1 < 5 ) { if ( obj -> Type -> data [ i - 1 ] != b_p [
i - 1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool = true ; exitg1 =
1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_index = 0.0 ; } else {
for ( i = 0 ; i < 8 ; i ++ ) { b_e [ i ] = tmp_p [ i ] ; } if ( obj -> Type
-> size [ 1 ] != 8 ) { } else { i = 1 ; do { exitg1 = 0 ; if ( i - 1 < 8 ) {
if ( obj -> Type -> data [ i - 1 ] != b_e [ i - 1 ] ) { exitg1 = 1 ; } else {
i ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; }
if ( b_bool ) { b_index = 1.0 ; } else { b_index = - 1.0 ; } } switch ( (
int32_T ) b_index ) { case 0 : memset ( & b [ 0 ] , 0 , sizeof ( real_T ) <<
4U ) ; b [ 0 ] = 1.0 ; b [ 5 ] = 1.0 ; b [ 10 ] = 1.0 ; b [ 15 ] = 1.0 ;
break ; case 1 : henxwe10ef ( obj , v ) ; axang_idx_0 = v [ 0 ] ; axang_idx_1
= v [ 1 ] ; axang_idx_2 = v [ 2 ] ; b_index = 1.0 / muDoubleScalarSqrt ( (
axang_idx_0 * axang_idx_0 + axang_idx_1 * axang_idx_1 ) + axang_idx_2 *
axang_idx_2 ) ; v [ 0 ] = axang_idx_0 * b_index ; v [ 1 ] = axang_idx_1 *
b_index ; v [ 2 ] = axang_idx_2 * b_index ; dujnhdhfxs ( v [ 0 ] * v [ 0 ] *
0.0 + 1.0 , v [ 0 ] * v [ 1 ] * 0.0 - v [ 2 ] * 0.0 , v [ 0 ] * v [ 2 ] * 0.0
+ v [ 1 ] * 0.0 , v [ 0 ] * v [ 1 ] * 0.0 + v [ 2 ] * 0.0 , v [ 1 ] * v [ 1 ]
* 0.0 + 1.0 , v [ 1 ] * v [ 2 ] * 0.0 - v [ 0 ] * 0.0 , v [ 0 ] * v [ 2 ] *
0.0 - v [ 1 ] * 0.0 , v [ 1 ] * v [ 2 ] * 0.0 + v [ 0 ] * 0.0 , v [ 2 ] * v [
2 ] * 0.0 + 1.0 , tempR ) ; for ( i = 0 ; i < 3 ; i ++ ) { R [ i ] = tempR [
i * 3 ] ; R [ i + 3 ] = tempR [ i * 3 + 1 ] ; R [ i + 6 ] = tempR [ i * 3 + 2
] ; } memset ( & b [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i <
3 ; i ++ ) { b [ i << 2 ] = R [ 3 * i ] ; b [ ( i << 2 ) + 1 ] = R [ 3 * i +
1 ] ; b [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; } b [ 15 ] = 1.0 ; break ;
default : henxwe10ef ( obj , v ) ; memset ( & tempR [ 0 ] , 0 , 9U * sizeof (
real_T ) ) ; tempR [ 0 ] = 1.0 ; tempR [ 4 ] = 1.0 ; tempR [ 8 ] = 1.0 ; for
( i = 0 ; i < 3 ; i ++ ) { b [ i << 2 ] = tempR [ 3 * i ] ; b [ ( i << 2 ) +
1 ] = tempR [ 3 * i + 1 ] ; b [ ( i << 2 ) + 2 ] = tempR [ 3 * i + 2 ] ; b [
i + 12 ] = v [ i ] * 0.0 ; } b [ 3 ] = 0.0 ; b [ 7 ] = 0.0 ; b [ 11 ] = 0.0 ;
b [ 15 ] = 1.0 ; break ; } for ( i = 0 ; i < 4 ; i ++ ) { for ( i_p = 0 ; i_p
< 4 ; i_p ++ ) { obj_p [ i + ( i_p << 2 ) ] = 0.0 ; obj_p [ i + ( i_p << 2 )
] += b [ i_p << 2 ] * obj -> JointToParentTransform [ i ] ; obj_p [ i + ( i_p
<< 2 ) ] += b [ ( i_p << 2 ) + 1 ] * obj -> JointToParentTransform [ i + 4 ]
; obj_p [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 2 ] * obj ->
JointToParentTransform [ i + 8 ] ; obj_p [ i + ( i_p << 2 ) ] += b [ ( i_p <<
2 ) + 3 ] * obj -> JointToParentTransform [ i + 12 ] ; } for ( i_p = 0 ; i_p
< 4 ; i_p ++ ) { T [ i + ( i_p << 2 ) ] = 0.0 ; T [ i + ( i_p << 2 ) ] += obj
-> ChildToJointTransform [ i_p << 2 ] * obj_p [ i ] ; T [ i + ( i_p << 2 ) ]
+= obj -> ChildToJointTransform [ ( i_p << 2 ) + 1 ] * obj_p [ i + 4 ] ; T [
i + ( i_p << 2 ) ] += obj -> ChildToJointTransform [ ( i_p << 2 ) + 2 ] *
obj_p [ i + 8 ] ; T [ i + ( i_p << 2 ) ] += obj -> ChildToJointTransform [ (
i_p << 2 ) + 3 ] * obj_p [ i + 12 ] ; } } } static void dz00cs5yhf (
ja0ozpu1qr * * pEmxArray ) { if ( * pEmxArray != ( ja0ozpu1qr * ) NULL ) { if
( ( ( * pEmxArray ) -> data != ( real_T * ) NULL ) && ( * pEmxArray ) ->
canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray )
-> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( ja0ozpu1qr * ) NULL ; } }
static void injcevnttq ( hfv5schqsp * * pEmxArray ) { if ( * pEmxArray != (
hfv5schqsp * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( cmsq43dhts * )
NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data )
; } free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
hfv5schqsp * ) NULL ; } } static void p2umzubg0v ( ja0ozpu1qr * * pEmxArray ,
int32_T numDimensions ) { ja0ozpu1qr * emxArray ; int32_T i ; * pEmxArray = (
ja0ozpu1qr * ) malloc ( sizeof ( ja0ozpu1qr ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( real_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray -> canFreeData =
true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0
; } } static void dc4stevqle ( ja0ozpu1qr * emxArray , int32_T oldNumel ) {
int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel < 0 ) {
oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray -> numDimensions ;
i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel > emxArray ->
allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; }
while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i
<<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( real_T ) ) ; if (
emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data , sizeof (
real_T ) * oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray ->
data ) ; } } emxArray -> data = ( real_T * ) newData ; emxArray ->
allocatedSize = i ; emxArray -> canFreeData = true ; } } static void
bz4hgqapmy ( d0bxqavfyq * pStruct ) { gpkfx1y4a2 ( & pStruct -> Type ) ;
dz00cs5yhf ( & pStruct -> MotionSubspace ) ; } static void ew4pwdzpqq5 (
aepf3nbc2k * pStruct ) { cmn0zgmoph ( & pStruct -> CollisionGeometries ) ; }
static void ew4pwdzpqq ( jn4o4x3xvo * pStruct ) { gpkfx1y4a2 ( & pStruct ->
NameInternal ) ; bz4hgqapmy ( & pStruct -> JointInternal ) ; ew4pwdzpqq5 ( &
pStruct -> CollisionsInternal ) ; } static void okprtkmmaa ( jn4o4x3xvo
pMatrix [ 10 ] ) { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { ew4pwdzpqq ( &
pMatrix [ i ] ) ; } } static void ew4pwdzpqq5x ( oi2sf35czq * pStruct ) {
ew4pwdzpqq ( & pStruct -> Base ) ; okprtkmmaa ( pStruct -> _pobj0 ) ; }
static void fxczxiyon2 ( n235grlapm * pStruct ) { ew4pwdzpqq5x ( & pStruct ->
TreeInternal ) ; } void MdlStart ( void ) { CXPtMax * _rtXPerturbMax ;
CXPtMin * _rtXPerturbMin ; NeModelParameters modelParameters ;
NeModelParameters modelParameters_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; real_T tmp_i [ 24 ] ; real_T time ; real_T tmp_e ; int32_T b ; int_T
tmp_m [ 7 ] ; boolean_T tmp_p ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "tau" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "tau" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "ur5bh/Controller" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "tau" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 6 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. onzzjnkbrp . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"d9e82b98-14ef-485d-9571-23937ad45f6c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . onzzjnkbrp . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . onzzjnkbrp . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . onzzjnkbrp .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . onzzjnkbrp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . onzzjnkbrp . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "z" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "z" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ur5bh/Dynamic/PS-Simulink Converter15" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "z" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jcwnfu5b5c . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "adb2baa9-a564-46df-9c93-ba48e0f8f7f5" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m" ) ; if (
rtDW . jcwnfu5b5c . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
jcwnfu5b5c . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . jcwnfu5b5c . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . jcwnfu5b5c . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . jcwnfu5b5c . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "x" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "x" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ur5bh/Dynamic/PS-Simulink Converter16" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "x" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cz5lphhls3 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "c6ea9c1f-0f4d-4ef0-bfd2-7376e9175e9d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m" ) ; if (
rtDW . cz5lphhls3 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
cz5lphhls3 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . cz5lphhls3 . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . cz5lphhls3 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . cz5lphhls3 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "y" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "y" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ur5bh/Dynamic/PS-Simulink Converter17" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "y" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jt1dbzw2xv . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8268bc39-e4a5-451f-a890-643d0c07811b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m" ) ; if (
rtDW . jt1dbzw2xv . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
jt1dbzw2xv . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . jt1dbzw2xv . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . jt1dbzw2xv . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . jt1dbzw2xv . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} tmp = nesl_lease_simulator ( "ur5bh/Dynamic/Solver Configuration_1" , 0 , 0
) ; rtDW . fd20okq1xb = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
fd20okq1xb ) ; if ( tmp_p ) { ur5bh_47770016_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "ur5bh/Dynamic/Solver Configuration_1" , 0 , 0 ) ;
rtDW . fd20okq1xb = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS
, "ur5bh/Dynamic/Solver Configuration_100" , ( void * * ) ( & rtDW .
fd20okq1xb ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . enjsb2hulw = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . lzfqvndtd0 = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_ODE ; modelParameters .
mSolverTolerance = 0.001 ; modelParameters . mVariableStepSolver = true ;
modelParameters . mIsUsingODEN = false ; modelParameters . mFixedStepSize =
0.001 ; modelParameters . mStartTime = 0.0 ; modelParameters .
mLoadInitialState = false ; modelParameters . mUseSimState = false ;
modelParameters . mLinTrimCompile = false ; modelParameters . mLoggingMode =
SSC_LOGGING_NONE ; modelParameters . mRTWModifiedTimeStamp = 5.91149874E+8 ;
modelParameters . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
modelParameters . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lzfqvndtd0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; b =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . fd20okq1xb , &
modelParameters , diagnosticManager ) ; if ( b != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . enjsb2hulw ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . jkjjiffqck [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . axcb2lh1bi ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g03aqag54v ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_m [ 0 ] = 0 ; tmp_i [ 0
] = rtB . nooedcmi45 [ 0 ] ; tmp_i [ 1 ] = rtB . nooedcmi45 [ 1 ] ; tmp_i [ 2
] = rtB . nooedcmi45 [ 2 ] ; tmp_i [ 3 ] = rtB . nooedcmi45 [ 3 ] ; tmp_m [ 1
] = 4 ; tmp_i [ 4 ] = rtB . g1xa0jh20r [ 0 ] ; tmp_i [ 5 ] = rtB . g1xa0jh20r
[ 1 ] ; tmp_i [ 6 ] = rtB . g1xa0jh20r [ 2 ] ; tmp_i [ 7 ] = rtB . g1xa0jh20r
[ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . evjqkumglp [ 0 ] ; tmp_i [ 9 ]
= rtB . evjqkumglp [ 1 ] ; tmp_i [ 10 ] = rtB . evjqkumglp [ 2 ] ; tmp_i [ 11
] = rtB . evjqkumglp [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB .
a0el3nepxs [ 0 ] ; tmp_i [ 13 ] = rtB . a0el3nepxs [ 1 ] ; tmp_i [ 14 ] = rtB
. a0el3nepxs [ 2 ] ; tmp_i [ 15 ] = rtB . a0el3nepxs [ 3 ] ; tmp_m [ 4 ] = 16
; tmp_i [ 16 ] = rtB . ohpwycx4sl [ 0 ] ; tmp_i [ 17 ] = rtB . ohpwycx4sl [ 1
] ; tmp_i [ 18 ] = rtB . ohpwycx4sl [ 2 ] ; tmp_i [ 19 ] = rtB . ohpwycx4sl [
3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . jpyooqtbs1 [ 0 ] ; tmp_i [ 21 ]
= rtB . jpyooqtbs1 [ 1 ] ; tmp_i [ 22 ] = rtB . jpyooqtbs1 [ 2 ] ; tmp_i [ 23
] = rtB . jpyooqtbs1 [ 3 ] ; tmp_m [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 28 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> jkjjiffqck [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 28 ; simulationData -> mData -> mNumjacDxHi . mX
= & _rtXPerturbMax -> jkjjiffqck [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lzfqvndtd0 ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; b =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fd20okq1xb ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( b !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS
, msg_p ) ; } } tmp = nesl_lease_simulator (
"ur5bh/Dynamic/Solver Configuration_1" , 1 , 0 ) ; rtDW . luyysmbfnq = ( void
* ) tmp ; tmp_p = pointer_is_null ( rtDW . luyysmbfnq ) ; if ( tmp_p ) {
ur5bh_47770016_1_gateway ( ) ; tmp = nesl_lease_simulator (
"ur5bh/Dynamic/Solver Configuration_1" , 1 , 0 ) ; rtDW . luyysmbfnq = ( void
* ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"ur5bh/Dynamic/Solver Configuration_110" , ( void * * ) ( & rtDW . luyysmbfnq
) , 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . nrownkwjh0 = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
kd4mpbgm1e = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 5.91149874E+8 ;
modelParameters_p . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_p . mIsUsingODEN = tmp_p ; val = false ;
tmp_p = slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . kd4mpbgm1e ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; b =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . luyysmbfnq , &
modelParameters_p , diagnosticManager ) ; if ( b != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } ab5itymeef ( & rtDW . i1li4osp2a ) ; for ( b = 0 ; b < 10 ; b ++ ) { rtDW
. i1li4osp2a . TreeInternal . _pobj0 [ b ] . CollisionsInternal . _pobj0 .
matlabCodegenIsDeleted = true ; } rtDW . i1li4osp2a . TreeInternal . Base .
CollisionsInternal . _pobj0 . matlabCodegenIsDeleted = true ; rtDW .
i1li4osp2a . isInitialized = 0 ; rtDW . coyangkvhg = true ; fovpoxuhan ( &
rtDW . i1li4osp2a ) ; } void MdlOutputs ( int_T tid ) { __m128d tmp_g ;
__m128d tmp_j ; NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_p ; esknw0palk * a ; hfv5schqsp *
X_p ; hfv5schqsp * Xtree ; ja0ozpu1qr * S ; ja0ozpu1qr * aB ; ja0ozpu1qr * f
; ja0ozpu1qr * taui ; ja0ozpu1qr * vB ; ja0ozpu1qr * vJ ; ja0ozpu1qr * y ;
jn4o4x3xvo * obj ; oi2sf35czq * robot ; real_T tmp_e [ 52 ] ; real_T R_e [ 36
] ; real_T XDHOffset [ 36 ] ; real_T tmp [ 24 ] ; real_T T [ 16 ] ; real_T
TDHOffset [ 16 ] ; real_T Tinv [ 16 ] ; real_T R [ 9 ] ; real_T R_p [ 9 ] ;
real_T tmp_m [ 9 ] ; real_T X_e [ 6 ] ; real_T cmhudfzcgr [ 6 ] ; real_T
hwobqmuoyj_p [ 6 ] ; real_T jcbceowcej [ 6 ] ; real_T om5mxaib0i_data [ 6 ] ;
real_T vJ_p [ 6 ] ; real_T R_i ; real_T a_idx_0 ; real_T a_idx_1 ; real_T nb
; real_T time ; real_T time_p ; int32_T aoffset ; int32_T b_k ; int32_T c ;
int32_T d ; int32_T i ; int32_T inner ; int_T tmp_i [ 8 ] ; int_T tmp_p [ 7 ]
; char_T b [ 5 ] ; boolean_T b_bool ; static const char_T tmp_f [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; int32_T exitg1 ; int32_T om5mxaib0i_size ;
simulationData = ( NeslSimulationData * ) rtDW . enjsb2hulw ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . jkjjiffqck [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . axcb2lh1bi ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g03aqag54v ; b_bool = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = b_bool
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
b_bool = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = b_bool ; b_bool =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = b_bool ; b_bool = ssIsSolverComputingJacobian ( rtS )
; simulationData -> mData -> mIsComputingJacobian = b_bool ; simulationData
-> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
b_bool = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = b_bool ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ; tmp [ 0 ]
= rtB . nooedcmi45 [ 0 ] ; tmp [ 1 ] = rtB . nooedcmi45 [ 1 ] ; tmp [ 2 ] =
rtB . nooedcmi45 [ 2 ] ; tmp [ 3 ] = rtB . nooedcmi45 [ 3 ] ; tmp_p [ 1 ] = 4
; tmp [ 4 ] = rtB . g1xa0jh20r [ 0 ] ; tmp [ 5 ] = rtB . g1xa0jh20r [ 1 ] ;
tmp [ 6 ] = rtB . g1xa0jh20r [ 2 ] ; tmp [ 7 ] = rtB . g1xa0jh20r [ 3 ] ;
tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB . evjqkumglp [ 0 ] ; tmp [ 9 ] = rtB .
evjqkumglp [ 1 ] ; tmp [ 10 ] = rtB . evjqkumglp [ 2 ] ; tmp [ 11 ] = rtB .
evjqkumglp [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . a0el3nepxs [ 0 ] ;
tmp [ 13 ] = rtB . a0el3nepxs [ 1 ] ; tmp [ 14 ] = rtB . a0el3nepxs [ 2 ] ;
tmp [ 15 ] = rtB . a0el3nepxs [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB .
ohpwycx4sl [ 0 ] ; tmp [ 17 ] = rtB . ohpwycx4sl [ 1 ] ; tmp [ 18 ] = rtB .
ohpwycx4sl [ 2 ] ; tmp [ 19 ] = rtB . ohpwycx4sl [ 3 ] ; tmp_p [ 5 ] = 20 ;
tmp [ 20 ] = rtB . jpyooqtbs1 [ 0 ] ; tmp [ 21 ] = rtB . jpyooqtbs1 [ 1 ] ;
tmp [ 22 ] = rtB . jpyooqtbs1 [ 2 ] ; tmp [ 23 ] = rtB . jpyooqtbs1 [ 3 ] ;
tmp_p [ 6 ] = 24 ; simulationData -> mData -> mInputValues . mN = 24 ;
simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mOutputs . mN = 28 ;
simulationData -> mData -> mOutputs . mX = & rtB . cnbi311a0y [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . lzfqvndtd0 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; aoffset = ne_simulator_method ( ( NeslSimulator * )
rtDW . fd20okq1xb , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ;
if ( aoffset != 0 ) { b_bool = error_buffer_is_empty ( ssGetErrorStatus ( rtS
) ) ; if ( b_bool ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . nrownkwjh0 ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bkgi2udbh5 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hbalhesuyw ; b_bool =
( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = b_bool ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
b_bool = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = b_bool ; b_bool =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = b_bool ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; b_bool = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = b_bool ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_i [ 0 ] = 0 ; tmp_e [ 0
] = rtB . nooedcmi45 [ 0 ] ; tmp_e [ 1 ] = rtB . nooedcmi45 [ 1 ] ; tmp_e [ 2
] = rtB . nooedcmi45 [ 2 ] ; tmp_e [ 3 ] = rtB . nooedcmi45 [ 3 ] ; tmp_i [ 1
] = 4 ; tmp_e [ 4 ] = rtB . g1xa0jh20r [ 0 ] ; tmp_e [ 5 ] = rtB . g1xa0jh20r
[ 1 ] ; tmp_e [ 6 ] = rtB . g1xa0jh20r [ 2 ] ; tmp_e [ 7 ] = rtB . g1xa0jh20r
[ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB . evjqkumglp [ 0 ] ; tmp_e [ 9 ]
= rtB . evjqkumglp [ 1 ] ; tmp_e [ 10 ] = rtB . evjqkumglp [ 2 ] ; tmp_e [ 11
] = rtB . evjqkumglp [ 3 ] ; tmp_i [ 3 ] = 12 ; tmp_e [ 12 ] = rtB .
a0el3nepxs [ 0 ] ; tmp_e [ 13 ] = rtB . a0el3nepxs [ 1 ] ; tmp_e [ 14 ] = rtB
. a0el3nepxs [ 2 ] ; tmp_e [ 15 ] = rtB . a0el3nepxs [ 3 ] ; tmp_i [ 4 ] = 16
; tmp_e [ 16 ] = rtB . ohpwycx4sl [ 0 ] ; tmp_e [ 17 ] = rtB . ohpwycx4sl [ 1
] ; tmp_e [ 18 ] = rtB . ohpwycx4sl [ 2 ] ; tmp_e [ 19 ] = rtB . ohpwycx4sl [
3 ] ; tmp_i [ 5 ] = 20 ; tmp_e [ 20 ] = rtB . jpyooqtbs1 [ 0 ] ; tmp_e [ 21 ]
= rtB . jpyooqtbs1 [ 1 ] ; tmp_e [ 22 ] = rtB . jpyooqtbs1 [ 2 ] ; tmp_e [ 23
] = rtB . jpyooqtbs1 [ 3 ] ; tmp_i [ 6 ] = 24 ; memcpy ( & tmp_e [ 24 ] , &
rtB . cnbi311a0y [ 0 ] , 28U * sizeof ( real_T ) ) ; tmp_i [ 7 ] = 52 ;
simulationData -> mData -> mInputValues . mN = 52 ; simulationData -> mData
-> mInputValues . mX = & tmp_e [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_i [ 0 ] ; simulationData -> mData -> mOutputs . mN = 18 ; simulationData
-> mData -> mOutputs . mX = & rtB . jxbt4pfxtm [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . kd4mpbgm1e ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; aoffset = ne_simulator_method ( ( NeslSimulator * )
rtDW . luyysmbfnq , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ;
if ( aoffset != 0 ) { b_bool = error_buffer_is_empty ( ssGetErrorStatus ( rtS
) ) ; if ( b_bool ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { cmhudfzcgr [ 0 ] = rtB . jxbt4pfxtm [ 5 ] ; cmhudfzcgr [ 1
] = rtB . jxbt4pfxtm [ 3 ] ; cmhudfzcgr [ 2 ] = rtB . jxbt4pfxtm [ 1 ] ;
cmhudfzcgr [ 3 ] = rtB . jxbt4pfxtm [ 7 ] ; cmhudfzcgr [ 4 ] = rtB .
jxbt4pfxtm [ 9 ] ; cmhudfzcgr [ 5 ] = rtB . jxbt4pfxtm [ 11 ] ; jcbceowcej [
0 ] = rtB . jxbt4pfxtm [ 4 ] ; jcbceowcej [ 1 ] = rtB . jxbt4pfxtm [ 2 ] ;
jcbceowcej [ 2 ] = rtB . jxbt4pfxtm [ 0 ] ; jcbceowcej [ 3 ] = rtB .
jxbt4pfxtm [ 6 ] ; jcbceowcej [ 4 ] = rtB . jxbt4pfxtm [ 8 ] ; jcbceowcej [ 5
] = rtB . jxbt4pfxtm [ 10 ] ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_g =
_mm_loadu_pd ( & jcbceowcej [ i ] ) ; tmp_j = _mm_loadu_pd ( & cmhudfzcgr [ i
] ) ; _mm_storeu_pd ( & rtB . lfn3atmpwu [ i ] , _mm_add_pd ( _mm_mul_pd (
_mm_sub_pd ( _mm_loadu_pd ( & rtP . Constant_Value [ i ] ) , tmp_g ) ,
_mm_set1_pd ( 10.0 ) ) , _mm_mul_pd ( _mm_sub_pd ( _mm_set1_pd ( 0.0 ) ,
tmp_j ) , _mm_set1_pd ( 6.0 ) ) ) ) ; } { if ( rtDW . onzzjnkbrp . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . onzzjnkbrp . AQHandles
, ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . lfn3atmpwu [ 0 ] + 0 ) ; } }
} krqkb4fgwe ( & vJ , 2 ) ; cmhudfzcgr [ 0 ] = rtB . jxbt4pfxtm [ 4 ] ;
cmhudfzcgr [ 1 ] = rtB . jxbt4pfxtm [ 2 ] ; cmhudfzcgr [ 2 ] = rtB .
jxbt4pfxtm [ 0 ] ; cmhudfzcgr [ 3 ] = rtB . jxbt4pfxtm [ 6 ] ; cmhudfzcgr [ 4
] = rtB . jxbt4pfxtm [ 8 ] ; cmhudfzcgr [ 5 ] = rtB . jxbt4pfxtm [ 10 ] ;
robot = & rtDW . i1li4osp2a . TreeInternal ; jcbceowcej [ 0 ] = 0.0 ;
jcbceowcej [ 1 ] = 0.0 ; jcbceowcej [ 2 ] = 0.0 ; jcbceowcej [ 3 ] = - rtDW .
i1li4osp2a . TreeInternal . Gravity [ 0 ] ; jcbceowcej [ 4 ] = - rtDW .
i1li4osp2a . TreeInternal . Gravity [ 1 ] ; jcbceowcej [ 5 ] = - rtDW .
i1li4osp2a . TreeInternal . Gravity [ 2 ] ; nb = rtDW . i1li4osp2a .
TreeInternal . NumBodies ; aoffset = vJ -> size [ 0 ] * vJ -> size [ 1 ] ; vJ
-> size [ 0 ] = 6 ; vJ -> size [ 1 ] = ( int32_T ) nb ; os53ajltj1 ( vJ ,
aoffset ) ; inner = 6 * ( int32_T ) nb - 1 ; for ( aoffset = 0 ; aoffset <=
inner ; aoffset ++ ) { vJ -> data [ aoffset ] = 0.0 ; } krqkb4fgwe ( & vB , 2
) ; aoffset = vB -> size [ 0 ] * vB -> size [ 1 ] ; vB -> size [ 0 ] = 6 ; vB
-> size [ 1 ] = ( int32_T ) nb ; os53ajltj1 ( vB , aoffset ) ; inner = 6 * (
int32_T ) nb - 1 ; for ( aoffset = 0 ; aoffset <= inner ; aoffset ++ ) { vB
-> data [ aoffset ] = 0.0 ; } krqkb4fgwe ( & aB , 2 ) ; aoffset = aB -> size
[ 0 ] * aB -> size [ 1 ] ; aB -> size [ 0 ] = 6 ; aB -> size [ 1 ] = (
int32_T ) nb ; os53ajltj1 ( aB , aoffset ) ; inner = 6 * ( int32_T ) nb - 1 ;
for ( aoffset = 0 ; aoffset <= inner ; aoffset ++ ) { aB -> data [ aoffset ]
= 0.0 ; } for ( i = 0 ; i < 6 ; i ++ ) { hwobqmuoyj_p [ i ] = 0.0 ; }
ml2qkvnvst ( & X_p , 2 ) ; ml2qkvnvst ( & Xtree , 2 ) ; c = ( int32_T ) nb -
1 ; aoffset = Xtree -> size [ 0 ] * Xtree -> size [ 1 ] ; Xtree -> size [ 0 ]
= 1 ; Xtree -> size [ 1 ] = ( int32_T ) nb ; js5x53ukv3 ( Xtree , aoffset ) ;
aoffset = X_p -> size [ 0 ] * X_p -> size [ 1 ] ; X_p -> size [ 0 ] = 1 ; X_p
-> size [ 1 ] = ( int32_T ) nb ; js5x53ukv3 ( X_p , aoffset ) ; for ( b_k = 0
; b_k <= c ; b_k ++ ) { for ( aoffset = 0 ; aoffset < 36 ; aoffset ++ ) {
Xtree -> data [ b_k ] . f1 [ aoffset ] = 0.0 ; } for ( i = 0 ; i < 6 ; i ++ )
{ Xtree -> data [ b_k ] . f1 [ i + 6 * i ] = 1.0 ; } for ( aoffset = 0 ;
aoffset < 36 ; aoffset ++ ) { X_p -> data [ b_k ] . f1 [ aoffset ] = 0.0 ; }
for ( i = 0 ; i < 6 ; i ++ ) { X_p -> data [ b_k ] . f1 [ i + 6 * i ] = 1.0 ;
} } krqkb4fgwe ( & f , 2 ) ; d = ( int32_T ) nb - 1 ; aoffset = f -> size [ 0
] * f -> size [ 1 ] ; f -> size [ 0 ] = 6 ; f -> size [ 1 ] = ( int32_T ) nb
; os53ajltj1 ( f , aoffset ) ; if ( 0 <= ( int32_T ) nb - 1 ) { tmp_m [ 0 ] =
0.0 ; tmp_m [ 4 ] = 0.0 ; tmp_m [ 8 ] = 0.0 ; } krqkb4fgwe ( & S , 2 ) ;
krqkb4fgwe ( & y , 2 ) ; for ( i = 0 ; i <= d ; i ++ ) { obj = robot ->
Bodies [ i ] ; aoffset = S -> size [ 0 ] * S -> size [ 1 ] ; S -> size [ 0 ]
= 6 ; S -> size [ 1 ] = obj -> JointInternal . MotionSubspace -> size [ 1 ] ;
os53ajltj1 ( S , aoffset ) ; inner = 6 * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; for ( aoffset = 0 ; aoffset < inner ; aoffset
++ ) { S -> data [ aoffset ] = obj -> JointInternal . MotionSubspace -> data
[ aoffset ] ; } a_idx_0 = robot -> PositionDoFMap [ i ] ; a_idx_1 = robot ->
PositionDoFMap [ i + 10 ] ; memset ( & XDHOffset [ 0 ] , 0 , 36U * sizeof (
real_T ) ) ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { XDHOffset [ b_k + 6 * b_k ]
= 1.0 ; } if ( a_idx_1 < a_idx_0 ) { obj = robot -> Bodies [ i ] ; ft2p0f3iu2
( & obj -> JointInternal , T ) ; for ( aoffset = 0 ; aoffset < 6 ; aoffset ++
) { vJ -> data [ aoffset + 6 * i ] = 0.0 ; } } else { if ( a_idx_0 > a_idx_1
) { b_k = 0 ; c = - 1 ; } else { b_k = ( int32_T ) a_idx_0 - 1 ; c = (
int32_T ) a_idx_1 - 1 ; } obj = robot -> Bodies [ i ] ; om5mxaib0i_size = ( c
- b_k ) + 1 ; inner = c - b_k ; for ( aoffset = 0 ; aoffset <= inner ;
aoffset ++ ) { om5mxaib0i_data [ aoffset ] = cmhudfzcgr [ b_k + aoffset ] ; }
ft2p0f3iu2g ( & obj -> JointInternal , om5mxaib0i_data , & om5mxaib0i_size ,
T ) ; obj = robot -> Bodies [ i ] ; for ( aoffset = 0 ; aoffset < 16 ;
aoffset ++ ) { TDHOffset [ aoffset ] = obj -> JointInternal .
ChildToJointTransform [ aoffset ] ; } for ( aoffset = 0 ; aoffset < 3 ;
aoffset ++ ) { R [ 3 * aoffset ] = TDHOffset [ aoffset ] ; R [ 3 * aoffset +
1 ] = TDHOffset [ aoffset + 4 ] ; R [ 3 * aoffset + 2 ] = TDHOffset [ aoffset
+ 8 ] ; } for ( aoffset = 0 ; aoffset < 9 ; aoffset ++ ) { R_p [ aoffset ] =
- R [ aoffset ] ; } for ( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { Tinv [
aoffset << 2 ] = R [ 3 * aoffset ] ; Tinv [ ( aoffset << 2 ) + 1 ] = R [ 3 *
aoffset + 1 ] ; Tinv [ ( aoffset << 2 ) + 2 ] = R [ 3 * aoffset + 2 ] ; Tinv
[ aoffset + 12 ] = ( R_p [ aoffset + 3 ] * TDHOffset [ 13 ] + R_p [ aoffset ]
* TDHOffset [ 12 ] ) + R_p [ aoffset + 6 ] * TDHOffset [ 14 ] ; } Tinv [ 3 ]
= 0.0 ; Tinv [ 7 ] = 0.0 ; Tinv [ 11 ] = 0.0 ; Tinv [ 15 ] = 1.0 ; R [ 0 ] =
0.0 ; R [ 3 ] = - Tinv [ 14 ] ; R [ 6 ] = Tinv [ 13 ] ; R [ 1 ] = Tinv [ 14 ]
; R [ 4 ] = 0.0 ; R [ 7 ] = - Tinv [ 12 ] ; R [ 2 ] = - Tinv [ 13 ] ; R [ 5 ]
= Tinv [ 12 ] ; R [ 8 ] = 0.0 ; for ( aoffset = 0 ; aoffset < 3 ; aoffset ++
) { for ( b_k = 0 ; b_k < 3 ; b_k ++ ) { R_p [ aoffset + 3 * b_k ] = 0.0 ;
R_p [ aoffset + 3 * b_k ] += Tinv [ b_k << 2 ] * R [ aoffset ] ; R_p [
aoffset + 3 * b_k ] += Tinv [ ( b_k << 2 ) + 1 ] * R [ aoffset + 3 ] ; R_p [
aoffset + 3 * b_k ] += Tinv [ ( b_k << 2 ) + 2 ] * R [ aoffset + 6 ] ;
XDHOffset [ b_k + 6 * aoffset ] = Tinv [ ( aoffset << 2 ) + b_k ] ; XDHOffset
[ b_k + 6 * ( aoffset + 3 ) ] = 0.0 ; } } for ( aoffset = 0 ; aoffset < 3 ;
aoffset ++ ) { XDHOffset [ 6 * aoffset + 3 ] = R_p [ 3 * aoffset ] ;
XDHOffset [ 6 * ( aoffset + 3 ) + 3 ] = Tinv [ aoffset << 2 ] ; XDHOffset [ 6
* aoffset + 4 ] = R_p [ 3 * aoffset + 1 ] ; XDHOffset [ 6 * ( aoffset + 3 ) +
4 ] = Tinv [ ( aoffset << 2 ) + 1 ] ; XDHOffset [ 6 * aoffset + 5 ] = R_p [ 3
* aoffset + 2 ] ; XDHOffset [ 6 * ( aoffset + 3 ) + 5 ] = Tinv [ ( aoffset <<
2 ) + 2 ] ; } i0vehellcn ( XDHOffset , S , y ) ; inner = y -> size [ 1 ] - 1
; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { vJ -> data [ b_k + 6 * i ] = 0.0 ; }
for ( b_k = 0 ; b_k <= inner ; b_k ++ ) { aoffset = b_k * 6 - 1 ; for ( c = 0
; c <= 4 ; c += 2 ) { tmp_g = _mm_loadu_pd ( & y -> data [ ( aoffset + c ) +
1 ] ) ; tmp_j = _mm_loadu_pd ( & vJ -> data [ 6 * i + c ] ) ; _mm_storeu_pd (
& vJ -> data [ c + 6 * i ] , _mm_add_pd ( _mm_mul_pd ( tmp_g , _mm_set1_pd (
0.0 ) ) , tmp_j ) ) ; } } } for ( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) {
R [ 3 * aoffset ] = T [ aoffset ] ; R [ 3 * aoffset + 1 ] = T [ aoffset + 4 ]
; R [ 3 * aoffset + 2 ] = T [ aoffset + 8 ] ; } for ( aoffset = 0 ; aoffset <
9 ; aoffset ++ ) { R_p [ aoffset ] = - R [ aoffset ] ; } for ( aoffset = 0 ;
aoffset < 3 ; aoffset ++ ) { Tinv [ aoffset << 2 ] = R [ 3 * aoffset ] ; Tinv
[ ( aoffset << 2 ) + 1 ] = R [ 3 * aoffset + 1 ] ; Tinv [ ( aoffset << 2 ) +
2 ] = R [ 3 * aoffset + 2 ] ; Tinv [ aoffset + 12 ] = ( R_p [ aoffset + 3 ] *
T [ 13 ] + R_p [ aoffset ] * T [ 12 ] ) + R_p [ aoffset + 6 ] * T [ 14 ] ; }
Tinv [ 3 ] = 0.0 ; Tinv [ 7 ] = 0.0 ; Tinv [ 11 ] = 0.0 ; Tinv [ 15 ] = 1.0 ;
tmp_m [ 3 ] = - Tinv [ 14 ] ; tmp_m [ 6 ] = Tinv [ 13 ] ; tmp_m [ 1 ] = Tinv
[ 14 ] ; tmp_m [ 7 ] = - Tinv [ 12 ] ; tmp_m [ 2 ] = - Tinv [ 13 ] ; tmp_m [
5 ] = Tinv [ 12 ] ; for ( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { for (
b_k = 0 ; b_k < 3 ; b_k ++ ) { R [ aoffset + 3 * b_k ] = 0.0 ; R [ aoffset +
3 * b_k ] += Tinv [ b_k << 2 ] * tmp_m [ aoffset ] ; R [ aoffset + 3 * b_k ]
+= Tinv [ ( b_k << 2 ) + 1 ] * tmp_m [ aoffset + 3 ] ; R [ aoffset + 3 * b_k
] += Tinv [ ( b_k << 2 ) + 2 ] * tmp_m [ aoffset + 6 ] ; X_p -> data [ i ] .
f1 [ b_k + 6 * aoffset ] = Tinv [ ( aoffset << 2 ) + b_k ] ; X_p -> data [ i
] . f1 [ b_k + 6 * ( aoffset + 3 ) ] = 0.0 ; } } for ( aoffset = 0 ; aoffset
< 3 ; aoffset ++ ) { X_p -> data [ i ] . f1 [ 6 * aoffset + 3 ] = R [ 3 *
aoffset ] ; X_p -> data [ i ] . f1 [ 6 * ( aoffset + 3 ) + 3 ] = Tinv [
aoffset << 2 ] ; X_p -> data [ i ] . f1 [ 6 * aoffset + 4 ] = R [ 3 * aoffset
+ 1 ] ; X_p -> data [ i ] . f1 [ 6 * ( aoffset + 3 ) + 4 ] = Tinv [ ( aoffset
<< 2 ) + 1 ] ; X_p -> data [ i ] . f1 [ 6 * aoffset + 5 ] = R [ 3 * aoffset +
2 ] ; X_p -> data [ i ] . f1 [ 6 * ( aoffset + 3 ) + 5 ] = Tinv [ ( aoffset
<< 2 ) + 2 ] ; } a_idx_0 = robot -> Bodies [ i ] -> ParentIndex ; if (
a_idx_0 > 0.0 ) { for ( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { a_idx_1 =
0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { a_idx_1 += vB -> data [ ( (
int32_T ) a_idx_0 - 1 ) * 6 + b_k ] * X_p -> data [ i ] . f1 [ 6 * b_k +
aoffset ] ; } vJ_p [ aoffset ] = vJ -> data [ 6 * i + aoffset ] + a_idx_1 ; }
for ( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { vB -> data [ aoffset + 6 * i
] = vJ_p [ aoffset ] ; } i0vehellcn ( XDHOffset , S , y ) ; inner = y -> size
[ 1 ] - 1 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { om5mxaib0i_data [ b_k ] =
0.0 ; } for ( b_k = 0 ; b_k <= inner ; b_k ++ ) { aoffset = b_k * 6 - 1 ; for
( c = 0 ; c <= 4 ; c += 2 ) { tmp_g = _mm_loadu_pd ( & y -> data [ ( aoffset
+ c ) + 1 ] ) ; tmp_j = _mm_loadu_pd ( & om5mxaib0i_data [ c ] ) ;
_mm_storeu_pd ( & om5mxaib0i_data [ c ] , _mm_add_pd ( _mm_mul_pd ( tmp_g ,
_mm_set1_pd ( 0.0 ) ) , tmp_j ) ) ; } } R [ 0 ] = 0.0 ; R [ 3 ] = - vB ->
data [ 6 * i + 2 ] ; R [ 6 ] = vB -> data [ 6 * i + 1 ] ; R [ 1 ] = vB ->
data [ 6 * i + 2 ] ; R [ 4 ] = 0.0 ; R [ 7 ] = - vB -> data [ 6 * i ] ; R [ 2
] = - vB -> data [ 6 * i + 1 ] ; R [ 5 ] = vB -> data [ 6 * i ] ; R [ 8 ] =
0.0 ; R_e [ 3 ] = 0.0 ; R_e [ 9 ] = - vB -> data [ 6 * i + 5 ] ; R_e [ 15 ] =
vB -> data [ 6 * i + 4 ] ; R_e [ 4 ] = vB -> data [ 6 * i + 5 ] ; R_e [ 10 ]
= 0.0 ; R_e [ 16 ] = - vB -> data [ 6 * i + 3 ] ; R_e [ 5 ] = - vB -> data [
6 * i + 4 ] ; R_e [ 11 ] = vB -> data [ 6 * i + 3 ] ; R_e [ 17 ] = 0.0 ; for
( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { R_i = R [ 3 * aoffset ] ; R_e [
6 * aoffset ] = R_i ; R_e [ 6 * ( aoffset + 3 ) ] = 0.0 ; R_e [ 6 * ( aoffset
+ 3 ) + 3 ] = R_i ; R_i = R [ 3 * aoffset + 1 ] ; R_e [ 6 * aoffset + 1 ] =
R_i ; R_e [ 6 * ( aoffset + 3 ) + 1 ] = 0.0 ; R_e [ 6 * ( aoffset + 3 ) + 4 ]
= R_i ; R_i = R [ 3 * aoffset + 2 ] ; R_e [ 6 * aoffset + 2 ] = R_i ; R_e [ 6
* ( aoffset + 3 ) + 2 ] = 0.0 ; R_e [ 6 * ( aoffset + 3 ) + 5 ] = R_i ; } for
( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { a_idx_1 = 0.0 ; vJ_p [ aoffset ]
= 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { a_idx_1 += aB -> data [ ( (
int32_T ) a_idx_0 - 1 ) * 6 + b_k ] * X_p -> data [ i ] . f1 [ 6 * b_k +
aoffset ] ; vJ_p [ aoffset ] += R_e [ 6 * b_k + aoffset ] * vJ -> data [ 6 *
i + b_k ] ; } X_e [ aoffset ] = a_idx_1 + om5mxaib0i_data [ aoffset ] ; } for
( aoffset = 0 ; aoffset <= 4 ; aoffset += 2 ) { tmp_g = _mm_loadu_pd ( & X_e
[ aoffset ] ) ; tmp_j = _mm_loadu_pd ( & vJ_p [ aoffset ] ) ; _mm_storeu_pd (
& aB -> data [ aoffset + 6 * i ] , _mm_add_pd ( tmp_g , tmp_j ) ) ; } R [ 0 ]
= 0.0 ; R [ 3 ] = - T [ 14 ] ; R [ 6 ] = T [ 13 ] ; R [ 1 ] = T [ 14 ] ; R [
4 ] = 0.0 ; R [ 7 ] = - T [ 12 ] ; R [ 2 ] = - T [ 13 ] ; R [ 5 ] = T [ 12 ]
; R [ 8 ] = 0.0 ; for ( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { for ( b_k
= 0 ; b_k < 3 ; b_k ++ ) { R_p [ aoffset + 3 * b_k ] = 0.0 ; R_p [ aoffset +
3 * b_k ] += T [ b_k << 2 ] * R [ aoffset ] ; R_p [ aoffset + 3 * b_k ] += T
[ ( b_k << 2 ) + 1 ] * R [ aoffset + 3 ] ; R_p [ aoffset + 3 * b_k ] += T [ (
b_k << 2 ) + 2 ] * R [ aoffset + 6 ] ; XDHOffset [ b_k + 6 * aoffset ] = T [
( aoffset << 2 ) + b_k ] ; XDHOffset [ b_k + 6 * ( aoffset + 3 ) ] = 0.0 ; }
} for ( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { XDHOffset [ 6 * aoffset +
3 ] = R_p [ 3 * aoffset ] ; XDHOffset [ 6 * ( aoffset + 3 ) + 3 ] = T [
aoffset << 2 ] ; XDHOffset [ 6 * aoffset + 4 ] = R_p [ 3 * aoffset + 1 ] ;
XDHOffset [ 6 * ( aoffset + 3 ) + 4 ] = T [ ( aoffset << 2 ) + 1 ] ;
XDHOffset [ 6 * aoffset + 5 ] = R_p [ 3 * aoffset + 2 ] ; XDHOffset [ 6 * (
aoffset + 3 ) + 5 ] = T [ ( aoffset << 2 ) + 2 ] ; } for ( aoffset = 0 ;
aoffset < 6 ; aoffset ++ ) { for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { R_e [
aoffset + 6 * b_k ] = 0.0 ; for ( c = 0 ; c < 6 ; c ++ ) { R_e [ aoffset + 6
* b_k ] += Xtree -> data [ ( int32_T ) a_idx_0 - 1 ] . f1 [ 6 * c + aoffset ]
* XDHOffset [ 6 * b_k + c ] ; } } } for ( aoffset = 0 ; aoffset < 36 ;
aoffset ++ ) { Xtree -> data [ i ] . f1 [ aoffset ] = R_e [ aoffset ] ; } }
else { i0vehellcn ( XDHOffset , S , y ) ; inner = y -> size [ 1 ] - 1 ; for (
b_k = 0 ; b_k < 6 ; b_k ++ ) { vB -> data [ b_k + 6 * i ] = vJ -> data [ 6 *
i + b_k ] ; om5mxaib0i_data [ b_k ] = 0.0 ; } for ( b_k = 0 ; b_k <= inner ;
b_k ++ ) { aoffset = b_k * 6 - 1 ; for ( c = 0 ; c <= 4 ; c += 2 ) { tmp_g =
_mm_loadu_pd ( & y -> data [ ( aoffset + c ) + 1 ] ) ; tmp_j = _mm_loadu_pd (
& om5mxaib0i_data [ c ] ) ; _mm_storeu_pd ( & om5mxaib0i_data [ c ] ,
_mm_add_pd ( _mm_mul_pd ( tmp_g , _mm_set1_pd ( 0.0 ) ) , tmp_j ) ) ; } } for
( aoffset = 0 ; aoffset < 6 ; aoffset ++ ) { a_idx_1 = 0.0 ; for ( b_k = 0 ;
b_k < 6 ; b_k ++ ) { a_idx_1 += X_p -> data [ i ] . f1 [ 6 * b_k + aoffset ]
* jcbceowcej [ b_k ] ; } aB -> data [ aoffset + 6 * i ] = a_idx_1 +
om5mxaib0i_data [ aoffset ] ; } R [ 0 ] = 0.0 ; R [ 3 ] = - T [ 14 ] ; R [ 6
] = T [ 13 ] ; R [ 1 ] = T [ 14 ] ; R [ 4 ] = 0.0 ; R [ 7 ] = - T [ 12 ] ; R
[ 2 ] = - T [ 13 ] ; R [ 5 ] = T [ 12 ] ; R [ 8 ] = 0.0 ; for ( aoffset = 0 ;
aoffset < 3 ; aoffset ++ ) { for ( b_k = 0 ; b_k < 3 ; b_k ++ ) { R_p [
aoffset + 3 * b_k ] = 0.0 ; R_p [ aoffset + 3 * b_k ] += T [ b_k << 2 ] * R [
aoffset ] ; R_p [ aoffset + 3 * b_k ] += T [ ( b_k << 2 ) + 1 ] * R [ aoffset
+ 3 ] ; R_p [ aoffset + 3 * b_k ] += T [ ( b_k << 2 ) + 2 ] * R [ aoffset + 6
] ; Xtree -> data [ i ] . f1 [ b_k + 6 * aoffset ] = T [ ( aoffset << 2 ) +
b_k ] ; Xtree -> data [ i ] . f1 [ b_k + 6 * ( aoffset + 3 ) ] = 0.0 ; } }
for ( aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { Xtree -> data [ i ] . f1 [ 6
* aoffset + 3 ] = R_p [ 3 * aoffset ] ; Xtree -> data [ i ] . f1 [ 6 * (
aoffset + 3 ) + 3 ] = T [ aoffset << 2 ] ; Xtree -> data [ i ] . f1 [ 6 *
aoffset + 4 ] = R_p [ 3 * aoffset + 1 ] ; Xtree -> data [ i ] . f1 [ 6 * (
aoffset + 3 ) + 4 ] = T [ ( aoffset << 2 ) + 1 ] ; Xtree -> data [ i ] . f1 [
6 * aoffset + 5 ] = R_p [ 3 * aoffset + 2 ] ; Xtree -> data [ i ] . f1 [ 6 *
( aoffset + 3 ) + 5 ] = T [ ( aoffset << 2 ) + 2 ] ; } } for ( aoffset = 0 ;
aoffset < 36 ; aoffset ++ ) { XDHOffset [ aoffset ] = robot -> Bodies [ i ]
-> SpatialInertia [ aoffset ] ; } R [ 0 ] = 0.0 ; R [ 3 ] = - vB -> data [ 6
* i + 2 ] ; R [ 6 ] = vB -> data [ 6 * i + 1 ] ; R [ 1 ] = vB -> data [ 6 * i
+ 2 ] ; R [ 4 ] = 0.0 ; R [ 7 ] = - vB -> data [ 6 * i ] ; R [ 2 ] = - vB ->
data [ 6 * i + 1 ] ; R [ 5 ] = vB -> data [ 6 * i ] ; R [ 8 ] = 0.0 ; R_e [
18 ] = 0.0 ; R_e [ 24 ] = - vB -> data [ 6 * i + 5 ] ; R_e [ 30 ] = vB ->
data [ 6 * i + 4 ] ; R_e [ 19 ] = vB -> data [ 6 * i + 5 ] ; R_e [ 25 ] = 0.0
; R_e [ 31 ] = - vB -> data [ 6 * i + 3 ] ; R_e [ 20 ] = - vB -> data [ 6 * i
+ 4 ] ; R_e [ 26 ] = vB -> data [ 6 * i + 3 ] ; R_e [ 32 ] = 0.0 ; for (
aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { R_i = R [ 3 * aoffset ] ; R_e [ 6
* aoffset ] = R_i ; R_e [ 6 * aoffset + 3 ] = 0.0 ; R_e [ 6 * ( aoffset + 3 )
+ 3 ] = R_i ; R_i = R [ 3 * aoffset + 1 ] ; R_e [ 6 * aoffset + 1 ] = R_i ;
R_e [ 6 * aoffset + 4 ] = 0.0 ; R_e [ 6 * ( aoffset + 3 ) + 4 ] = R_i ; R_i =
R [ 3 * aoffset + 2 ] ; R_e [ 6 * aoffset + 2 ] = R_i ; R_e [ 6 * aoffset + 5
] = 0.0 ; R_e [ 6 * ( aoffset + 3 ) + 5 ] = R_i ; } for ( aoffset = 0 ;
aoffset < 6 ; aoffset ++ ) { om5mxaib0i_data [ aoffset ] = 0.0 ; X_e [
aoffset ] = 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { R_i = XDHOffset [ 6 *
b_k + aoffset ] ; om5mxaib0i_data [ aoffset ] += vB -> data [ 6 * i + b_k ] *
R_i ; X_e [ aoffset ] += aB -> data [ 6 * i + b_k ] * R_i ; } } for ( aoffset
= 0 ; aoffset < 6 ; aoffset ++ ) { vJ_p [ aoffset ] = 0.0 ; a_idx_1 = 0.0 ;
for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { a_idx_1 += Xtree -> data [ i ] . f1 [ 6
* aoffset + b_k ] * 0.0 ; vJ_p [ aoffset ] += R_e [ 6 * b_k + aoffset ] *
om5mxaib0i_data [ b_k ] ; } f -> data [ aoffset + 6 * i ] = ( X_e [ aoffset ]
+ vJ_p [ aoffset ] ) - a_idx_1 ; } } dz00cs5yhf ( & y ) ; dz00cs5yhf ( & aB )
; dz00cs5yhf ( & vB ) ; injcevnttq ( & Xtree ) ; d = ( int32_T ) - ( ( - 1.0
- nb ) + 1.0 ) - 1 ; if ( 0 <= ( int32_T ) - ( ( - 1.0 - nb ) + 1.0 ) - 1 ) {
for ( aoffset = 0 ; aoffset < 5 ; aoffset ++ ) { b [ aoffset ] = tmp_f [
aoffset ] ; } } p2umzubg0v ( & taui , 1 ) ; kehpz2wwfb ( & a , 2 ) ; for ( c
= 0 ; c <= d ; c ++ ) { R_i = nb + - ( real_T ) c ; obj = robot -> Bodies [ (
int32_T ) R_i - 1 ] ; aoffset = a -> size [ 0 ] * a -> size [ 1 ] ; a -> size
[ 0 ] = 1 ; a -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
npecprvwkb ( a , aoffset ) ; inner = obj -> JointInternal . Type -> size [ 1
] - 1 ; for ( aoffset = 0 ; aoffset <= inner ; aoffset ++ ) { a -> data [
aoffset ] = obj -> JointInternal . Type -> data [ aoffset ] ; } b_bool =
false ; if ( a -> size [ 1 ] != 5 ) { } else { i = 1 ; do { exitg1 = 0 ; if (
i - 1 < 5 ) { if ( a -> data [ i - 1 ] != b [ i - 1 ] ) { exitg1 = 1 ; } else
{ i ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ;
} if ( ! b_bool ) { obj = robot -> Bodies [ ( int32_T ) R_i - 1 ] ; for (
aoffset = 0 ; aoffset < 16 ; aoffset ++ ) { TDHOffset [ aoffset ] = obj ->
JointInternal . ChildToJointTransform [ aoffset ] ; } for ( aoffset = 0 ;
aoffset < 3 ; aoffset ++ ) { R [ 3 * aoffset ] = TDHOffset [ aoffset ] ; R [
3 * aoffset + 1 ] = TDHOffset [ aoffset + 4 ] ; R [ 3 * aoffset + 2 ] =
TDHOffset [ aoffset + 8 ] ; } for ( aoffset = 0 ; aoffset < 9 ; aoffset ++ )
{ R_p [ aoffset ] = - R [ aoffset ] ; } for ( aoffset = 0 ; aoffset < 3 ;
aoffset ++ ) { Tinv [ aoffset << 2 ] = R [ 3 * aoffset ] ; Tinv [ ( aoffset
<< 2 ) + 1 ] = R [ 3 * aoffset + 1 ] ; Tinv [ ( aoffset << 2 ) + 2 ] = R [ 3
* aoffset + 2 ] ; Tinv [ aoffset + 12 ] = ( R_p [ aoffset + 3 ] * TDHOffset [
13 ] + R_p [ aoffset ] * TDHOffset [ 12 ] ) + R_p [ aoffset + 6 ] * TDHOffset
[ 14 ] ; } Tinv [ 3 ] = 0.0 ; Tinv [ 7 ] = 0.0 ; Tinv [ 11 ] = 0.0 ; Tinv [
15 ] = 1.0 ; obj = robot -> Bodies [ ( int32_T ) R_i - 1 ] ; aoffset = vJ ->
size [ 0 ] * vJ -> size [ 1 ] ; vJ -> size [ 0 ] = 6 ; vJ -> size [ 1 ] = obj
-> JointInternal . MotionSubspace -> size [ 1 ] ; os53ajltj1 ( vJ , aoffset )
; inner = 6 * obj -> JointInternal . MotionSubspace -> size [ 1 ] ; for (
aoffset = 0 ; aoffset < inner ; aoffset ++ ) { vJ -> data [ aoffset ] = obj
-> JointInternal . MotionSubspace -> data [ aoffset ] ; } tmp_m [ 0 ] = 0.0 ;
tmp_m [ 3 ] = - Tinv [ 14 ] ; tmp_m [ 6 ] = Tinv [ 13 ] ; tmp_m [ 1 ] = Tinv
[ 14 ] ; tmp_m [ 4 ] = 0.0 ; tmp_m [ 7 ] = - Tinv [ 12 ] ; tmp_m [ 2 ] = -
Tinv [ 13 ] ; tmp_m [ 5 ] = Tinv [ 12 ] ; tmp_m [ 8 ] = 0.0 ; for ( aoffset =
0 ; aoffset < 3 ; aoffset ++ ) { for ( b_k = 0 ; b_k < 3 ; b_k ++ ) { R [
aoffset + 3 * b_k ] = 0.0 ; R [ aoffset + 3 * b_k ] += Tinv [ b_k << 2 ] *
tmp_m [ aoffset ] ; R [ aoffset + 3 * b_k ] += Tinv [ ( b_k << 2 ) + 1 ] *
tmp_m [ aoffset + 3 ] ; R [ aoffset + 3 * b_k ] += Tinv [ ( b_k << 2 ) + 2 ]
* tmp_m [ aoffset + 6 ] ; XDHOffset [ b_k + 6 * aoffset ] = Tinv [ ( aoffset
<< 2 ) + b_k ] ; XDHOffset [ b_k + 6 * ( aoffset + 3 ) ] = 0.0 ; } } for (
aoffset = 0 ; aoffset < 3 ; aoffset ++ ) { XDHOffset [ 6 * aoffset + 3 ] = R
[ 3 * aoffset ] ; XDHOffset [ 6 * ( aoffset + 3 ) + 3 ] = Tinv [ aoffset << 2
] ; XDHOffset [ 6 * aoffset + 4 ] = R [ 3 * aoffset + 1 ] ; XDHOffset [ 6 * (
aoffset + 3 ) + 4 ] = Tinv [ ( aoffset << 2 ) + 1 ] ; XDHOffset [ 6 * aoffset
+ 5 ] = R [ 3 * aoffset + 2 ] ; XDHOffset [ 6 * ( aoffset + 3 ) + 5 ] = Tinv
[ ( aoffset << 2 ) + 2 ] ; } i0vehellcn ( XDHOffset , vJ , S ) ; inner = S ->
size [ 1 ] - 1 ; aoffset = taui -> size [ 0 ] ; taui -> size [ 0 ] = S ->
size [ 1 ] ; dc4stevqle ( taui , aoffset ) ; for ( i = 0 ; i <= inner ; i ++
) { aoffset = i * 6 - 1 ; a_idx_0 = 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ )
{ a_idx_0 += f -> data [ ( ( int32_T ) R_i - 1 ) * 6 + b_k ] * S -> data [ (
aoffset + b_k ) + 1 ] ; } taui -> data [ i ] = a_idx_0 ; } a_idx_0 = robot ->
VelocityDoFMap [ ( int32_T ) R_i - 1 ] ; a_idx_1 = robot -> VelocityDoFMap [
( int32_T ) R_i + 9 ] ; if ( a_idx_0 > a_idx_1 ) { i = 0 ; b_k = 0 ; } else {
i = ( int32_T ) a_idx_0 - 1 ; b_k = ( int32_T ) a_idx_1 ; } b_k -= i ; for (
aoffset = 0 ; aoffset < b_k ; aoffset ++ ) { hwobqmuoyj_p [ i + aoffset ] =
taui -> data [ aoffset ] ; } } a_idx_0 = robot -> Bodies [ ( int32_T ) R_i -
1 ] -> ParentIndex ; if ( a_idx_0 > 0.0 ) { for ( aoffset = 0 ; aoffset < 6 ;
aoffset ++ ) { a_idx_1 = 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { a_idx_1
+= f -> data [ ( ( int32_T ) R_i - 1 ) * 6 + b_k ] * X_p -> data [ ( int32_T
) R_i - 1 ] . f1 [ 6 * aoffset + b_k ] ; } cmhudfzcgr [ aoffset ] = f -> data
[ ( ( int32_T ) a_idx_0 - 1 ) * 6 + aoffset ] + a_idx_1 ; } for ( aoffset = 0
; aoffset < 6 ; aoffset ++ ) { f -> data [ aoffset + 6 * ( ( int32_T )
a_idx_0 - 1 ) ] = cmhudfzcgr [ aoffset ] ; } } } gpkfx1y4a2 ( & a ) ;
dz00cs5yhf ( & taui ) ; dz00cs5yhf ( & S ) ; dz00cs5yhf ( & f ) ; dz00cs5yhf
( & vJ ) ; injcevnttq ( & X_p ) ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_g =
_mm_loadu_pd ( & rtB . lfn3atmpwu [ i ] ) ; tmp_j = _mm_loadu_pd ( &
hwobqmuoyj_p [ i ] ) ; _mm_storeu_pd ( & rtB . iptzoy0wwr [ i ] , _mm_add_pd
( tmp_g , tmp_j ) ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW .
jcwnfu5b5c . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
jcwnfu5b5c . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
jxbt4pfxtm [ 17 ] + 0 ) ; } } { if ( rtDW . cz5lphhls3 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . cz5lphhls3 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . jxbt4pfxtm [ 15 ] + 0 ) ; } }
{ if ( rtDW . jt1dbzw2xv . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . jt1dbzw2xv . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . jxbt4pfxtm [ 16 ] + 0 ) ; } } } rtB . nooedcmi45 [ 0 ] =
rtB . iptzoy0wwr [ 2 ] ; rtB . nooedcmi45 [ 1 ] = 0.0 ; rtB . nooedcmi45 [ 2
] = 0.0 ; rtB . nooedcmi45 [ 3 ] = 0.0 ; rtB . g1xa0jh20r [ 0 ] = rtB .
iptzoy0wwr [ 1 ] ; rtB . g1xa0jh20r [ 1 ] = 0.0 ; rtB . g1xa0jh20r [ 2 ] =
0.0 ; rtB . g1xa0jh20r [ 3 ] = 0.0 ; rtB . evjqkumglp [ 0 ] = rtB .
iptzoy0wwr [ 0 ] ; rtB . evjqkumglp [ 1 ] = 0.0 ; rtB . evjqkumglp [ 2 ] =
0.0 ; rtB . evjqkumglp [ 3 ] = 0.0 ; rtB . a0el3nepxs [ 0 ] = rtB .
iptzoy0wwr [ 3 ] ; rtB . a0el3nepxs [ 1 ] = 0.0 ; rtB . a0el3nepxs [ 2 ] =
0.0 ; rtB . a0el3nepxs [ 3 ] = 0.0 ; rtB . ohpwycx4sl [ 0 ] = rtB .
iptzoy0wwr [ 4 ] ; rtB . ohpwycx4sl [ 1 ] = 0.0 ; rtB . ohpwycx4sl [ 2 ] =
0.0 ; rtB . ohpwycx4sl [ 3 ] = 0.0 ; rtB . jpyooqtbs1 [ 0 ] = rtB .
iptzoy0wwr [ 5 ] ; rtB . jpyooqtbs1 [ 1 ] = 0.0 ; rtB . jpyooqtbs1 [ 2 ] =
0.0 ; rtB . jpyooqtbs1 [ 3 ] = 0.0 ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 24 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 7 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) rtDW . enjsb2hulw ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 28 ; simulationData -> mData -> mContStates . mX = & rtX . jkjjiffqck [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . axcb2lh1bi ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g03aqag54v ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0
] = rtB . nooedcmi45 [ 0 ] ; tmp_p [ 1 ] = rtB . nooedcmi45 [ 1 ] ; tmp_p [ 2
] = rtB . nooedcmi45 [ 2 ] ; tmp_p [ 3 ] = rtB . nooedcmi45 [ 3 ] ; tmp_e [ 1
] = 4 ; tmp_p [ 4 ] = rtB . g1xa0jh20r [ 0 ] ; tmp_p [ 5 ] = rtB . g1xa0jh20r
[ 1 ] ; tmp_p [ 6 ] = rtB . g1xa0jh20r [ 2 ] ; tmp_p [ 7 ] = rtB . g1xa0jh20r
[ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . evjqkumglp [ 0 ] ; tmp_p [ 9 ]
= rtB . evjqkumglp [ 1 ] ; tmp_p [ 10 ] = rtB . evjqkumglp [ 2 ] ; tmp_p [ 11
] = rtB . evjqkumglp [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB .
a0el3nepxs [ 0 ] ; tmp_p [ 13 ] = rtB . a0el3nepxs [ 1 ] ; tmp_p [ 14 ] = rtB
. a0el3nepxs [ 2 ] ; tmp_p [ 15 ] = rtB . a0el3nepxs [ 3 ] ; tmp_e [ 4 ] = 16
; tmp_p [ 16 ] = rtB . ohpwycx4sl [ 0 ] ; tmp_p [ 17 ] = rtB . ohpwycx4sl [ 1
] ; tmp_p [ 18 ] = rtB . ohpwycx4sl [ 2 ] ; tmp_p [ 19 ] = rtB . ohpwycx4sl [
3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . jpyooqtbs1 [ 0 ] ; tmp_p [ 21 ]
= rtB . jpyooqtbs1 [ 1 ] ; tmp_p [ 22 ] = rtB . jpyooqtbs1 [ 2 ] ; tmp_p [ 23
] = rtB . jpyooqtbs1 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lzfqvndtd0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . fd20okq1xb ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 24 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 7 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . enjsb2hulw ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 28 ;
simulationData -> mData -> mContStates . mX = & rtX . jkjjiffqck [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . axcb2lh1bi ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
g03aqag54v ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0
] = rtB . nooedcmi45 [ 0 ] ; tmp_p [ 1 ] = rtB . nooedcmi45 [ 1 ] ; tmp_p [ 2
] = rtB . nooedcmi45 [ 2 ] ; tmp_p [ 3 ] = rtB . nooedcmi45 [ 3 ] ; tmp_e [ 1
] = 4 ; tmp_p [ 4 ] = rtB . g1xa0jh20r [ 0 ] ; tmp_p [ 5 ] = rtB . g1xa0jh20r
[ 1 ] ; tmp_p [ 6 ] = rtB . g1xa0jh20r [ 2 ] ; tmp_p [ 7 ] = rtB . g1xa0jh20r
[ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . evjqkumglp [ 0 ] ; tmp_p [ 9 ]
= rtB . evjqkumglp [ 1 ] ; tmp_p [ 10 ] = rtB . evjqkumglp [ 2 ] ; tmp_p [ 11
] = rtB . evjqkumglp [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB .
a0el3nepxs [ 0 ] ; tmp_p [ 13 ] = rtB . a0el3nepxs [ 1 ] ; tmp_p [ 14 ] = rtB
. a0el3nepxs [ 2 ] ; tmp_p [ 15 ] = rtB . a0el3nepxs [ 3 ] ; tmp_e [ 4 ] = 16
; tmp_p [ 16 ] = rtB . ohpwycx4sl [ 0 ] ; tmp_p [ 17 ] = rtB . ohpwycx4sl [ 1
] ; tmp_p [ 18 ] = rtB . ohpwycx4sl [ 2 ] ; tmp_p [ 19 ] = rtB . ohpwycx4sl [
3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . jpyooqtbs1 [ 0 ] ; tmp_p [ 21 ]
= rtB . jpyooqtbs1 [ 1 ] ; tmp_p [ 22 ] = rtB . jpyooqtbs1 [ 2 ] ; tmp_p [ 23
] = rtB . jpyooqtbs1 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 28 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> jkjjiffqck [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lzfqvndtd0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fd20okq1xb ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 24 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 7 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. enjsb2hulw ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 28 ; simulationData -> mData -> mContStates . mX
= & rtX . jkjjiffqck [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . axcb2lh1bi ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . g03aqag54v ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0
] = rtB . nooedcmi45 [ 0 ] ; tmp_p [ 1 ] = rtB . nooedcmi45 [ 1 ] ; tmp_p [ 2
] = rtB . nooedcmi45 [ 2 ] ; tmp_p [ 3 ] = rtB . nooedcmi45 [ 3 ] ; tmp_e [ 1
] = 4 ; tmp_p [ 4 ] = rtB . g1xa0jh20r [ 0 ] ; tmp_p [ 5 ] = rtB . g1xa0jh20r
[ 1 ] ; tmp_p [ 6 ] = rtB . g1xa0jh20r [ 2 ] ; tmp_p [ 7 ] = rtB . g1xa0jh20r
[ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . evjqkumglp [ 0 ] ; tmp_p [ 9 ]
= rtB . evjqkumglp [ 1 ] ; tmp_p [ 10 ] = rtB . evjqkumglp [ 2 ] ; tmp_p [ 11
] = rtB . evjqkumglp [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB .
a0el3nepxs [ 0 ] ; tmp_p [ 13 ] = rtB . a0el3nepxs [ 1 ] ; tmp_p [ 14 ] = rtB
. a0el3nepxs [ 2 ] ; tmp_p [ 15 ] = rtB . a0el3nepxs [ 3 ] ; tmp_e [ 4 ] = 16
; tmp_p [ 16 ] = rtB . ohpwycx4sl [ 0 ] ; tmp_p [ 17 ] = rtB . ohpwycx4sl [ 1
] ; tmp_p [ 18 ] = rtB . ohpwycx4sl [ 2 ] ; tmp_p [ 19 ] = rtB . ohpwycx4sl [
3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . jpyooqtbs1 [ 0 ] ; tmp_p [ 21 ]
= rtB . jpyooqtbs1 [ 1 ] ; tmp_p [ 22 ] = rtB . jpyooqtbs1 [ 2 ] ; tmp_p [ 23
] = rtB . jpyooqtbs1 [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lzfqvndtd0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . fd20okq1xb ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { void * geometryInternal ; c5znbsemt0 *
obj ; int32_T b ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * )
rtDW . lzfqvndtd0 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
rtDW . enjsb2hulw ) ; nesl_erase_simulator (
"ur5bh/Dynamic/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . kd4mpbgm1e
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . nrownkwjh0
) ; nesl_erase_simulator ( "ur5bh/Dynamic/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; obj = & rtDW . i1li4osp2a . TreeInternal . Base .
CollisionsInternal . _pobj0 ; if ( ! obj -> matlabCodegenIsDeleted ) { obj ->
matlabCodegenIsDeleted = true ; geometryInternal = obj -> CollisionPrimitive
; collisioncodegen_destructGeometry ( & geometryInternal ) ; } for ( b = 0 ;
b < 10 ; b ++ ) { obj = & rtDW . i1li4osp2a . TreeInternal . _pobj0 [ b ] .
CollisionsInternal . _pobj0 ; if ( ! obj -> matlabCodegenIsDeleted ) { obj ->
matlabCodegenIsDeleted = true ; geometryInternal = obj -> CollisionPrimitive
; collisioncodegen_destructGeometry ( & geometryInternal ) ; } } fxczxiyon2 (
& rtDW . i1li4osp2a ) ; { if ( rtDW . onzzjnkbrp . AQHandles ) {
sdiTerminateStreaming ( & rtDW . onzzjnkbrp . AQHandles ) ; } } { if ( rtDW .
jcwnfu5b5c . AQHandles ) { sdiTerminateStreaming ( & rtDW . jcwnfu5b5c .
AQHandles ) ; } } { if ( rtDW . cz5lphhls3 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . cz5lphhls3 . AQHandles ) ; } } { if ( rtDW .
jt1dbzw2xv . AQHandles ) { sdiTerminateStreaming ( & rtDW . jt1dbzw2xv .
AQHandles ) ; } } } static void mr_ur5bh_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_ur5bh_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_ur5bh_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_ur5bh_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_ur5bh_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_ur5bh_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_ur5bh_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_ur5bh_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_ur5bh_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_ur5bh_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_ur5bh_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_ur5bh_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_ur5bh_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_ur5bh_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal )
) ; } static uint_T mr_ur5bh_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_ur5bh_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_ur5bh_GetDWork ( ) { static const char * ssDWFieldNames [
3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_ur5bh_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 14 ] = {
"rtDW.i1li4osp2a" , "rtDW.fwxtopu4n1" , "rtDW.nwo32hdec5" , "rtDW.lnslkqpn3s"
, "rtDW.kr0m00wejw" , "rtDW.miab3qaogq" , "rtDW.jfcaombz1g" ,
"rtDW.axcb2lh1bi" , "rtDW.bkgi2udbh5" , "rtDW.g03aqag54v" , "rtDW.hbalhesuyw"
, "rtDW.dwx5bha5ez" , "rtDW.i1hdp5pygn" , "rtDW.coyangkvhg" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 14 , rtdwDataFieldNames ) ;
mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
i1li4osp2a ) , sizeof ( rtDW . i1li4osp2a ) ) ; mr_ur5bh_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . fwxtopu4n1 ) , sizeof ( rtDW .
fwxtopu4n1 ) ) ; mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . nwo32hdec5 ) , sizeof ( rtDW . nwo32hdec5 ) ) ;
mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
lnslkqpn3s ) , sizeof ( rtDW . lnslkqpn3s ) ) ; mr_ur5bh_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . kr0m00wejw ) , sizeof ( rtDW .
kr0m00wejw ) ) ; mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . miab3qaogq ) , sizeof ( rtDW . miab3qaogq ) ) ;
mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
jfcaombz1g ) , sizeof ( rtDW . jfcaombz1g ) ) ; mr_ur5bh_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . axcb2lh1bi ) , sizeof ( rtDW .
axcb2lh1bi ) ) ; mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . bkgi2udbh5 ) , sizeof ( rtDW . bkgi2udbh5 ) ) ;
mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
g03aqag54v ) , sizeof ( rtDW . g03aqag54v ) ) ; mr_ur5bh_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( rtDW . hbalhesuyw ) , sizeof ( rtDW
. hbalhesuyw ) ) ; mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . dwx5bha5ez ) , sizeof ( rtDW . dwx5bha5ez ) ) ;
mr_ur5bh_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW .
i1hdp5pygn ) , sizeof ( rtDW . i1hdp5pygn ) ) ; mr_ur5bh_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( rtDW . coyangkvhg ) , sizeof ( rtDW
. coyangkvhg ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_ur5bh_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . i1li4osp2a )
, rtdwData , 0 , 0 , sizeof ( rtDW . i1li4osp2a ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . fwxtopu4n1 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . fwxtopu4n1 ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . nwo32hdec5 ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . nwo32hdec5 ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . lnslkqpn3s ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . lnslkqpn3s ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . kr0m00wejw ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . kr0m00wejw ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . miab3qaogq ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . miab3qaogq ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . jfcaombz1g ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . jfcaombz1g ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . axcb2lh1bi ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . axcb2lh1bi ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . bkgi2udbh5 ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . bkgi2udbh5 ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . g03aqag54v ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . g03aqag54v ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . hbalhesuyw ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . hbalhesuyw ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . dwx5bha5ez ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . dwx5bha5ez ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . i1hdp5pygn ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . i1hdp5pygn ) ) ;
mr_ur5bh_restoreDataFromMxArray ( ( void * ) & ( rtDW . coyangkvhg ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . coyangkvhg ) ) ; } } mxArray *
mr_ur5bh_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 6 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 6 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeSinkBlock" , "MATLABSystem" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" , } ; static const char *
blockPath [ 6 ] = { "ur5bh/Dynamic/Solver Configuration/EVAL_KEY/STATE_1" ,
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/SINK_1" ,
"ur5bh/Gravity Torque/MATLAB System" ,
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"ur5bh/Dynamic/Solver Configuration/EVAL_KEY/STATE_1" , } ; static const int
reason [ 6 ] = { 0 , 0 , 0 , 5 , 5 , 5 , } ; for ( subs [ 0 ] = 0 ; subs [ 0
] < 6 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript
( data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType
[ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data ,
2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [
0 ] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs
) ; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [
subs [ 0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 28 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 249 ) ;
ssSetNumBlockIO ( rtS , 10 ) ; ssSetNumBlockParams ( rtS , 6 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.001 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3223327412U ) ; ssSetChecksumVal ( rtS , 1 ,
3503003739U ) ; ssSetChecksumVal ( rtS , 2 , 3036973259U ) ; ssSetChecksumVal
( rtS , 3 , 3547340775U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 21 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
ur5bh_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true
) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2
) ; ssSetModelName ( rtS , "ur5bh" ) ; ssSetPath ( rtS , "ur5bh" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 2.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2
, 2 , 2 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2
, 2 , 2 , 2 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"ur5bh/Dynamic/shoulder_pan_joint" , "ur5bh/Dynamic/shoulder_pan_joint" ,
"ur5bh/Dynamic/shoulder_lift_joint" , "ur5bh/Dynamic/shoulder_lift_joint" ,
"ur5bh/Dynamic/elbow_joint" , "ur5bh/Dynamic/elbow_joint" ,
"ur5bh/Dynamic/wrist_1_joint" , "ur5bh/Dynamic/wrist_1_joint" ,
"ur5bh/Dynamic/wrist_2_joint" , "ur5bh/Dynamic/wrist_2_joint" ,
"ur5bh/Dynamic/wrist_3_joint" , "ur5bh/Dynamic/wrist_3_joint" ,
"ur5bh/Dynamic/bh_j11_joint" , "ur5bh/Dynamic/bh_j11_joint" ,
"ur5bh/Dynamic/bh_j12_joint" , "ur5bh/Dynamic/bh_j12_joint" ,
"ur5bh/Dynamic/bh_j13_joint" , "ur5bh/Dynamic/bh_j13_joint" ,
"ur5bh/Dynamic/bh_j21_joint" , "ur5bh/Dynamic/bh_j21_joint" ,
"ur5bh/Dynamic/bh_j22_joint" , "ur5bh/Dynamic/bh_j22_joint" ,
"ur5bh/Dynamic/bh_j23_joint" , "ur5bh/Dynamic/bh_j23_joint" ,
"ur5bh/Dynamic/bh_j32_joint" , "ur5bh/Dynamic/bh_j32_joint" ,
"ur5bh/Dynamic/bh_j33_joint" , "ur5bh/Dynamic/bh_j33_joint" ,
"ur5bh/Dynamic/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"ur5bh/Dynamic/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"ur5bh/Dynamic/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"ur5bh/Dynamic/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"ur5bh/Dynamic/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"ur5bh/Dynamic/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" } ; static const
char_T * rt_LoggedStateNames [ ] = { "ur5bh.Dynamic.shoulder_pan_joint.Rz.q"
, "ur5bh.Dynamic.shoulder_pan_joint.Rz.w" ,
"ur5bh.Dynamic.shoulder_lift_joint.Rz.q" ,
"ur5bh.Dynamic.shoulder_lift_joint.Rz.w" , "ur5bh.Dynamic.elbow_joint.Rz.q" ,
"ur5bh.Dynamic.elbow_joint.Rz.w" , "ur5bh.Dynamic.wrist_1_joint.Rz.q" ,
"ur5bh.Dynamic.wrist_1_joint.Rz.w" , "ur5bh.Dynamic.wrist_2_joint.Rz.q" ,
"ur5bh.Dynamic.wrist_2_joint.Rz.w" , "ur5bh.Dynamic.wrist_3_joint.Rz.q" ,
"ur5bh.Dynamic.wrist_3_joint.Rz.w" , "ur5bh.Dynamic.bh_j11_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j11_joint.Rz.w" , "ur5bh.Dynamic.bh_j12_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j12_joint.Rz.w" , "ur5bh.Dynamic.bh_j13_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j13_joint.Rz.w" , "ur5bh.Dynamic.bh_j21_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j21_joint.Rz.w" , "ur5bh.Dynamic.bh_j22_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j22_joint.Rz.w" , "ur5bh.Dynamic.bh_j23_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j23_joint.Rz.w" , "ur5bh.Dynamic.bh_j32_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j32_joint.Rz.w" , "ur5bh.Dynamic.bh_j33_joint.Rz.q" ,
"ur5bh.Dynamic.bh_j33_joint.Rz.w" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = {
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 34 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 34 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . jkjjiffqck [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . jkjjiffqck [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jkjjiffqck [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . jkjjiffqck [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . jkjjiffqck [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . jkjjiffqck [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . jkjjiffqck [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . jkjjiffqck [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . jkjjiffqck [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . jkjjiffqck [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . jkjjiffqck [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . jkjjiffqck [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . jkjjiffqck [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . jkjjiffqck [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . jkjjiffqck [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . jkjjiffqck [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . jkjjiffqck [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . jkjjiffqck [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . jkjjiffqck [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . jkjjiffqck [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . jkjjiffqck [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . jkjjiffqck [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . jkjjiffqck [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . jkjjiffqck [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . jkjjiffqck [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . jkjjiffqck [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . jkjjiffqck [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . jkjjiffqck [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) rtDW . fwxtopu4n1 ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) rtDW . nwo32hdec5 ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) rtDW . lnslkqpn3s ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) rtDW . kr0m00wejw ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) rtDW . miab3qaogq ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) rtDW . jfcaombz1g ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 28 ] ; static real_T absTol [ 28 ] = { 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static uint8_T
absTolControl [ 28 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 28 ] ; static
real_T contStateJacPerturbBoundMaxVec [ 28 ] ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 1 ] = { { 6 * sizeof ( real_T ) , ( char * ) ( & rtB .
lfn3atmpwu [ 0 ] ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 28 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.001
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 1 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode23" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3223327412U ) ; ssSetChecksumVal ( rtS , 1 ,
3503003739U ) ; ssSetChecksumVal ( rtS , 2 , 3036973259U ) ; ssSetChecksumVal
( rtS , 3 , 3547340775U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 3 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_ur5bh_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_ur5bh_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_ur5bh_SetDWork
) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS
) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
