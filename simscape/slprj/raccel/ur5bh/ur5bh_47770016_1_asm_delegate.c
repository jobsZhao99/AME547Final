#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void ur5bh_47770016_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv ,
CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
ur5bh_47770016_1_resetAsmStateVector ( const void * mech , double * state ) {
double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ;
state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ;
state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ] ;
state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ] ;
state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ] ;
} void ur5bh_47770016_1_initializeTrackedAngleState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const
double * motionData , double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector
; ( void ) motionData ; } void ur5bh_47770016_1_computeDiscreteState ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , double * state ) {
const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv
-> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) state ; } void ur5bh_47770016_1_adjustPosition ( const void * mech , const
double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [
0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ; state [
4 ] = state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [
3 ] ; state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ; state [ 10 ] = state [ 10
] + dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas [ 6 ] ; state [
14 ] = state [ 14 ] + dofDeltas [ 7 ] ; state [ 16 ] = state [ 16 ] +
dofDeltas [ 8 ] ; state [ 18 ] = state [ 18 ] + dofDeltas [ 9 ] ; state [ 20
] = state [ 20 ] + dofDeltas [ 10 ] ; state [ 22 ] = state [ 22 ] + dofDeltas
[ 11 ] ; state [ 24 ] = state [ 24 ] + dofDeltas [ 12 ] ; state [ 26 ] =
state [ 26 ] + dofDeltas [ 13 ] ; } static void
perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbAsmJointPrimitiveState_2_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 1 ]
= state [ 1 ] - 0.875 * mag ; } static void perturbAsmJointPrimitiveState_3_0
( double mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; } static
void perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state )
{ state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 12 ] = state [ 12 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 14 ] = state [ 14 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 16 ] = state [ 16 ] + mag ; } static void
perturbAsmJointPrimitiveState_12_0v ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_13_0 ( double mag , double * state
) { state [ 18 ] = state [ 18 ] + mag ; } static void
perturbAsmJointPrimitiveState_13_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 19 ] = state [ 19 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 20 ] = state [ 20 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_0v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 22 ] = state [ 22 ] + mag ; } static void
perturbAsmJointPrimitiveState_15_0v ( double mag , double * state ) { state [
22 ] = state [ 22 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_17_0 ( double mag , double * state
) { state [ 24 ] = state [ 24 ] + mag ; } static void
perturbAsmJointPrimitiveState_17_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 25 ] = state [ 25 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_18_0 ( double mag , double * state
) { state [ 26 ] = state [ 26 ] + mag ; } static void
perturbAsmJointPrimitiveState_18_0v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
void ur5bh_47770016_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; case 132 :
perturbAsmJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbAsmJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbAsmJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbAsmJointPrimitiveState_12_0v ( mag , state ) ; break ; case 156 :
perturbAsmJointPrimitiveState_13_0 ( mag , state ) ; break ; case 157 :
perturbAsmJointPrimitiveState_13_0v ( mag , state ) ; break ; case 168 :
perturbAsmJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbAsmJointPrimitiveState_14_0v ( mag , state ) ; break ; case 180 :
perturbAsmJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbAsmJointPrimitiveState_15_0v ( mag , state ) ; break ; case 204 :
perturbAsmJointPrimitiveState_17_0 ( mag , state ) ; break ; case 205 :
perturbAsmJointPrimitiveState_17_0v ( mag , state ) ; break ; case 216 :
perturbAsmJointPrimitiveState_18_0 ( mag , state ) ; break ; case 217 :
perturbAsmJointPrimitiveState_18_0v ( mag , state ) ; break ; } } void
ur5bh_47770016_1_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void ur5bh_47770016_1_computeVelDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primIdx , const double * state , int
partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void
) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
ur5bh_47770016_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primIdx , const double * origState , int partialType ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { } } void ur5bh_47770016_1_propagateMotion (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const double *
state , double * motionData ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 205 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 1.0 ; xx [ 1 ] =
0.0 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 0 ] ; xx [ 4 ] = cos (
xx [ 3 ] ) ; xx [ 5 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = 0.089159 ; xx [ 6 ] =
0.7071067811865476 ; xx [ 7 ] = xx [ 2 ] * state [ 2 ] ; xx [ 8 ] = xx [ 6 ]
* sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 6 ] * cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [
8 ] - xx [ 9 ] ; xx [ 10 ] = xx [ 8 ] + xx [ 9 ] ; xx [ 8 ] = 2.0 ; xx [ 9 ]
= 0.28 ; xx [ 11 ] = xx [ 9 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 8 ] * xx [ 11 ]
* xx [ 7 ] ; xx [ 13 ] = 0.13585 ; xx [ 14 ] = xx [ 8 ] * xx [ 11 ] * xx [ 10
] - xx [ 9 ] ; xx [ 9 ] = xx [ 2 ] * state [ 4 ] ; xx [ 11 ] = cos ( xx [ 9 ]
) ; xx [ 15 ] = sin ( xx [ 9 ] ) ; xx [ 9 ] = 0.196125 ; xx [ 16 ] = xx [ 9 ]
* xx [ 15 ] ; xx [ 17 ] = xx [ 8 ] * xx [ 16 ] * xx [ 11 ] ; xx [ 18 ] = -
0.1197 ; xx [ 19 ] = 0.145 - ( xx [ 8 ] * xx [ 16 ] * xx [ 15 ] - xx [ 9 ] )
; xx [ 16 ] = xx [ 2 ] * state [ 6 ] ; xx [ 20 ] = xx [ 6 ] * sin ( xx [ 16 ]
) ; xx [ 21 ] = xx [ 6 ] * cos ( xx [ 16 ] ) ; xx [ 16 ] = xx [ 20 ] - xx [
21 ] ; xx [ 22 ] = xx [ 20 ] + xx [ 21 ] ; xx [ 20 ] = 0.093 ; xx [ 21 ] = xx
[ 2 ] * state [ 8 ] ; xx [ 23 ] = cos ( xx [ 21 ] ) ; xx [ 24 ] = sin ( xx [
21 ] ) ; xx [ 21 ] = 0.09465 ; xx [ 25 ] = xx [ 2 ] * state [ 10 ] ; xx [ 26
] = cos ( xx [ 25 ] ) ; xx [ 27 ] = sin ( xx [ 25 ] ) ; xx [ 25 ] = 0.06505 ;
xx [ 28 ] = - xx [ 6 ] ; xx [ 29 ] = 0.01725 ; xx [ 30 ] = 0.7071067811882787
; xx [ 31 ] = 0.7071067811848163 ; xx [ 32 ] = 0.7071054825112364 ; xx [ 33 ]
= xx [ 2 ] * state [ 12 ] ; xx [ 34 ] = cos ( xx [ 33 ] ) ; xx [ 35 ] =
0.7071080798594737 ; xx [ 36 ] = sin ( xx [ 33 ] ) ; xx [ 33 ] = xx [ 32 ] *
xx [ 34 ] + xx [ 35 ] * xx [ 36 ] ; xx [ 37 ] = xx [ 32 ] * xx [ 36 ] - xx [
35 ] * xx [ 34 ] ; xx [ 34 ] = 0.025 ; xx [ 36 ] = 0.046 ; xx [ 38 ] = xx [
36 ] * xx [ 37 ] ; xx [ 39 ] = - ( xx [ 34 ] + xx [ 36 ] - xx [ 8 ] * xx [ 38
] * xx [ 37 ] ) ; xx [ 40 ] = xx [ 8 ] * xx [ 38 ] * xx [ 33 ] ; xx [ 38 ] =
0.0252 ; xx [ 41 ] = 0.7071054825112363 ; xx [ 42 ] = xx [ 2 ] * state [ 14 ]
; xx [ 43 ] = cos ( xx [ 42 ] ) ; xx [ 44 ] = - ( xx [ 41 ] * xx [ 43 ] ) ;
xx [ 45 ] = 0.7071080798594735 ; xx [ 46 ] = - ( xx [ 45 ] * xx [ 43 ] ) ; xx
[ 43 ] = sin ( xx [ 42 ] ) ; xx [ 42 ] = - ( xx [ 45 ] * xx [ 43 ] ) ; xx [
47 ] = xx [ 41 ] * xx [ 43 ] ; xx [ 43 ] = 4.000000000000004e-3 ; xx [ 48 ] =
- xx [ 43 ] ; xx [ 49 ] = 0.0339 ; xx [ 50 ] = xx [ 2 ] * state [ 16 ] ; xx [
51 ] = cos ( xx [ 50 ] ) ; xx [ 52 ] = sin ( xx [ 50 ] ) ; xx [ 50 ] =
0.069936 ; xx [ 53 ] = - xx [ 50 ] ; xx [ 54 ] = 3.0e-3 ; xx [ 55 ] = xx [ 2
] * state [ 18 ] ; xx [ 56 ] = sin ( xx [ 55 ] ) ; xx [ 57 ] = cos ( xx [ 55
] ) ; xx [ 55 ] = xx [ 45 ] * xx [ 56 ] - xx [ 41 ] * xx [ 57 ] ; xx [ 58 ] =
xx [ 41 ] * xx [ 56 ] + xx [ 45 ] * xx [ 57 ] ; xx [ 41 ] = xx [ 36 ] * xx [
58 ] ; xx [ 45 ] = xx [ 34 ] - ( xx [ 36 ] - xx [ 8 ] * xx [ 41 ] * xx [ 58 ]
) ; xx [ 34 ] = xx [ 8 ] * xx [ 41 ] * xx [ 55 ] ; xx [ 41 ] = xx [ 2 ] *
state [ 20 ] ; xx [ 56 ] = cos ( xx [ 41 ] ) ; xx [ 57 ] = - ( xx [ 32 ] * xx
[ 56 ] ) ; xx [ 59 ] = - ( xx [ 35 ] * xx [ 56 ] ) ; xx [ 56 ] = sin ( xx [
41 ] ) ; xx [ 41 ] = - ( xx [ 35 ] * xx [ 56 ] ) ; xx [ 60 ] = xx [ 32 ] * xx
[ 56 ] ; xx [ 56 ] = xx [ 2 ] * state [ 22 ] ; xx [ 61 ] = cos ( xx [ 56 ] )
; xx [ 62 ] = sin ( xx [ 56 ] ) ; xx [ 56 ] = 0.7071067811140325 ; xx [ 63 ]
= 0.7071067812590626 ; xx [ 64 ] = 9.434758529991427e-12 ; xx [ 65 ] =
0.04599999999999999 ; xx [ 66 ] = xx [ 2 ] * state [ 24 ] ; xx [ 67 ] = cos (
xx [ 66 ] ) ; xx [ 68 ] = - ( xx [ 32 ] * xx [ 67 ] ) ; xx [ 69 ] = - ( xx [
35 ] * xx [ 67 ] ) ; xx [ 67 ] = sin ( xx [ 66 ] ) ; xx [ 66 ] = - ( xx [ 35
] * xx [ 67 ] ) ; xx [ 35 ] = xx [ 32 ] * xx [ 67 ] ; xx [ 32 ] = xx [ 2 ] *
state [ 26 ] ; xx [ 2 ] = cos ( xx [ 32 ] ) ; xx [ 67 ] = sin ( xx [ 32 ] ) ;
xx [ 32 ] = 1.089159 ; xx [ 70 ] = xx [ 7 ] * xx [ 4 ] ; xx [ 71 ] = xx [ 10
] * xx [ 5 ] ; xx [ 72 ] = xx [ 10 ] * xx [ 4 ] ; xx [ 73 ] = - xx [ 72 ] ;
xx [ 74 ] = xx [ 7 ] * xx [ 5 ] ; xx [ 75 ] = xx [ 12 ] * xx [ 5 ] ; xx [ 76
] = xx [ 13 ] * xx [ 5 ] ; xx [ 77 ] = xx [ 8 ] * ( xx [ 75 ] * xx [ 5 ] - xx
[ 76 ] * xx [ 4 ] ) - xx [ 12 ] ; xx [ 78 ] = xx [ 13 ] - xx [ 8 ] * ( xx [
75 ] * xx [ 4 ] + xx [ 76 ] * xx [ 5 ] ) ; xx [ 75 ] = xx [ 32 ] - xx [ 14 ]
; xx [ 76 ] = xx [ 72 ] * xx [ 15 ] + xx [ 70 ] * xx [ 11 ] ; xx [ 79 ] = xx
[ 74 ] * xx [ 15 ] - xx [ 71 ] * xx [ 11 ] ; xx [ 80 ] = xx [ 70 ] * xx [ 15
] - xx [ 72 ] * xx [ 11 ] ; xx [ 81 ] = - xx [ 80 ] ; xx [ 82 ] = xx [ 71 ] *
xx [ 15 ] + xx [ 74 ] * xx [ 11 ] ; xx [ 83 ] = - xx [ 82 ] ; xx [ 84 ] = xx
[ 70 ] ; xx [ 85 ] = xx [ 71 ] ; xx [ 86 ] = xx [ 73 ] ; xx [ 87 ] = xx [ 74
] ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 17 , xx + 88 ) ; xx [ 84 ] =
xx [ 88 ] + xx [ 77 ] ; xx [ 85 ] = xx [ 89 ] + xx [ 78 ] ; xx [ 86 ] = xx [
90 ] + xx [ 75 ] ; xx [ 87 ] = xx [ 76 ] * xx [ 16 ] + xx [ 80 ] * xx [ 22 ]
; xx [ 88 ] = xx [ 16 ] * xx [ 79 ] - xx [ 82 ] * xx [ 22 ] ; xx [ 89 ] = xx
[ 76 ] * xx [ 22 ] - xx [ 16 ] * xx [ 80 ] ; xx [ 90 ] = xx [ 82 ] * xx [ 16
] + xx [ 79 ] * xx [ 22 ] ; xx [ 91 ] = xx [ 79 ] ; xx [ 92 ] = xx [ 81 ] ;
xx [ 93 ] = xx [ 83 ] ; xx [ 94 ] = xx [ 9 ] * xx [ 80 ] - xx [ 20 ] * xx [
82 ] ; xx [ 80 ] = xx [ 9 ] * xx [ 79 ] ; xx [ 82 ] = xx [ 20 ] * xx [ 79 ] ;
xx [ 95 ] = - xx [ 94 ] ; xx [ 96 ] = - xx [ 80 ] ; xx [ 97 ] = xx [ 82 ] ;
pm_math_Vector3_cross_ra ( xx + 91 , xx + 95 , xx + 98 ) ; xx [ 91 ] = xx [ 8
] * ( xx [ 98 ] + xx [ 76 ] * xx [ 94 ] ) + xx [ 84 ] ; xx [ 92 ] = xx [ 20 ]
+ xx [ 8 ] * ( xx [ 99 ] + xx [ 80 ] * xx [ 76 ] ) + xx [ 85 ] ; xx [ 80 ] =
xx [ 9 ] + xx [ 8 ] * ( xx [ 100 ] - xx [ 82 ] * xx [ 76 ] ) + xx [ 86 ] ; xx
[ 82 ] = xx [ 87 ] * xx [ 23 ] - xx [ 90 ] * xx [ 24 ] ; xx [ 93 ] = xx [ 88
] * xx [ 23 ] + xx [ 89 ] * xx [ 24 ] ; xx [ 94 ] = xx [ 88 ] * xx [ 24 ] -
xx [ 89 ] * xx [ 23 ] ; xx [ 95 ] = xx [ 87 ] * xx [ 24 ] + xx [ 90 ] * xx [
23 ] ; xx [ 96 ] = xx [ 21 ] * xx [ 89 ] ; xx [ 97 ] = xx [ 21 ] * xx [ 88 ]
; xx [ 98 ] = xx [ 91 ] - xx [ 8 ] * ( xx [ 96 ] * xx [ 87 ] + xx [ 97 ] * xx
[ 90 ] ) ; xx [ 99 ] = xx [ 8 ] * ( xx [ 97 ] * xx [ 87 ] - xx [ 96 ] * xx [
90 ] ) + xx [ 92 ] ; xx [ 100 ] = xx [ 21 ] - xx [ 8 ] * ( xx [ 97 ] * xx [
88 ] + xx [ 96 ] * xx [ 89 ] ) + xx [ 80 ] ; xx [ 96 ] = xx [ 94 ] * xx [ 27
] - xx [ 82 ] * xx [ 26 ] ; xx [ 97 ] = xx [ 93 ] * xx [ 26 ] + xx [ 95 ] *
xx [ 27 ] ; xx [ 101 ] = xx [ 82 ] * xx [ 27 ] + xx [ 94 ] * xx [ 26 ] ; xx [
102 ] = xx [ 93 ] * xx [ 27 ] - xx [ 95 ] * xx [ 26 ] ; xx [ 103 ] = xx [ 25
] * xx [ 95 ] ; xx [ 104 ] = xx [ 25 ] * xx [ 93 ] ; xx [ 105 ] = xx [ 98 ] -
xx [ 8 ] * ( xx [ 103 ] * xx [ 82 ] + xx [ 104 ] * xx [ 94 ] ) ; xx [ 106 ] =
xx [ 25 ] - xx [ 8 ] * ( xx [ 103 ] * xx [ 95 ] + xx [ 104 ] * xx [ 93 ] ) +
xx [ 99 ] ; xx [ 107 ] = xx [ 100 ] - xx [ 8 ] * ( xx [ 104 ] * xx [ 82 ] -
xx [ 103 ] * xx [ 94 ] ) ; xx [ 103 ] = xx [ 6 ] * xx [ 102 ] ; xx [ 104 ] =
xx [ 6 ] * xx [ 96 ] ; xx [ 108 ] = xx [ 6 ] * xx [ 101 ] ; xx [ 109 ] = xx [
6 ] * xx [ 97 ] ; xx [ 110 ] = xx [ 29 ] * xx [ 102 ] ; xx [ 111 ] = xx [ 29
] * xx [ 97 ] ; xx [ 112 ] = state [ 1 ] * xx [ 10 ] ; xx [ 113 ] = xx [ 8 ]
* xx [ 112 ] * xx [ 7 ] ; xx [ 114 ] = state [ 1 ] - xx [ 8 ] * xx [ 112 ] *
xx [ 10 ] ; xx [ 112 ] = xx [ 13 ] * state [ 1 ] ; xx [ 115 ] = xx [ 112 ] *
xx [ 10 ] ; xx [ 116 ] = xx [ 8 ] * xx [ 115 ] * xx [ 10 ] - xx [ 112 ] +
0.2800000000000001 * state [ 3 ] ; xx [ 112 ] = xx [ 12 ] * state [ 1 ] ; xx
[ 117 ] = xx [ 8 ] * xx [ 115 ] * xx [ 7 ] ; xx [ 115 ] = xx [ 113 ] * xx [
15 ] ; xx [ 118 ] = xx [ 114 ] * xx [ 15 ] ; xx [ 119 ] = xx [ 113 ] - xx [ 8
] * ( xx [ 115 ] * xx [ 15 ] + xx [ 118 ] * xx [ 11 ] ) ; xx [ 120 ] = state
[ 3 ] + state [ 5 ] ; xx [ 121 ] = xx [ 114 ] - xx [ 8 ] * ( xx [ 118 ] * xx
[ 15 ] - xx [ 115 ] * xx [ 11 ] ) ; xx [ 122 ] = xx [ 113 ] ; xx [ 123 ] =
state [ 3 ] ; xx [ 124 ] = xx [ 114 ] ; pm_math_Vector3_cross_ra ( xx + 122 ,
xx + 17 , xx + 125 ) ; xx [ 115 ] = xx [ 125 ] + xx [ 116 ] ; xx [ 118 ] = xx
[ 127 ] + xx [ 117 ] ; xx [ 122 ] = xx [ 118 ] * xx [ 15 ] ; xx [ 123 ] = xx
[ 115 ] * xx [ 15 ] ; xx [ 124 ] = xx [ 115 ] - xx [ 8 ] * ( xx [ 122 ] * xx
[ 11 ] + xx [ 123 ] * xx [ 15 ] ) + 0.196125 * state [ 5 ] ; xx [ 115 ] = xx
[ 126 ] - xx [ 112 ] ; xx [ 125 ] = xx [ 118 ] + xx [ 8 ] * ( xx [ 123 ] * xx
[ 11 ] - xx [ 122 ] * xx [ 15 ] ) ; xx [ 118 ] = xx [ 119 ] * xx [ 22 ] ; xx
[ 122 ] = xx [ 121 ] * xx [ 22 ] ; xx [ 123 ] = xx [ 119 ] - xx [ 8 ] * ( xx
[ 118 ] * xx [ 22 ] - xx [ 122 ] * xx [ 16 ] ) ; xx [ 126 ] = xx [ 120 ] +
state [ 7 ] ; xx [ 127 ] = xx [ 121 ] - xx [ 8 ] * ( xx [ 118 ] * xx [ 16 ] +
xx [ 122 ] * xx [ 22 ] ) ; xx [ 118 ] = xx [ 9 ] * xx [ 120 ] - xx [ 20 ] *
xx [ 121 ] + xx [ 124 ] ; xx [ 122 ] = xx [ 118 ] * xx [ 22 ] ; xx [ 128 ] =
xx [ 20 ] * xx [ 119 ] + xx [ 125 ] ; xx [ 129 ] = xx [ 128 ] * xx [ 22 ] ;
xx [ 130 ] = xx [ 118 ] - xx [ 8 ] * ( xx [ 122 ] * xx [ 22 ] - xx [ 129 ] *
xx [ 16 ] ) + 2.065014825802791e-17 * state [ 7 ] ; xx [ 118 ] = xx [ 115 ] -
xx [ 9 ] * xx [ 119 ] ; xx [ 131 ] = xx [ 128 ] - xx [ 8 ] * ( xx [ 122 ] *
xx [ 16 ] + xx [ 129 ] * xx [ 22 ] ) ; xx [ 122 ] = xx [ 126 ] * xx [ 24 ] ;
xx [ 128 ] = xx [ 123 ] * xx [ 24 ] ; xx [ 129 ] = xx [ 123 ] + xx [ 8 ] * (
xx [ 122 ] * xx [ 23 ] - xx [ 128 ] * xx [ 24 ] ) ; xx [ 132 ] = xx [ 126 ] -
xx [ 8 ] * ( xx [ 128 ] * xx [ 23 ] + xx [ 122 ] * xx [ 24 ] ) ; xx [ 122 ] =
xx [ 127 ] + state [ 9 ] ; xx [ 128 ] = xx [ 21 ] * xx [ 126 ] + xx [ 130 ] ;
xx [ 133 ] = xx [ 118 ] - xx [ 21 ] * xx [ 123 ] ; xx [ 134 ] = xx [ 133 ] *
xx [ 24 ] ; xx [ 135 ] = xx [ 128 ] * xx [ 24 ] ; xx [ 136 ] = xx [ 128 ] +
xx [ 8 ] * ( xx [ 134 ] * xx [ 23 ] - xx [ 135 ] * xx [ 24 ] ) ; xx [ 128 ] =
xx [ 133 ] - xx [ 8 ] * ( xx [ 135 ] * xx [ 23 ] + xx [ 134 ] * xx [ 24 ] ) ;
xx [ 133 ] = xx [ 122 ] * xx [ 27 ] ; xx [ 134 ] = xx [ 129 ] * xx [ 27 ] ;
xx [ 135 ] = xx [ 129 ] - xx [ 8 ] * ( xx [ 133 ] * xx [ 26 ] + xx [ 134 ] *
xx [ 27 ] ) ; xx [ 137 ] = xx [ 132 ] + state [ 11 ] ; xx [ 138 ] = xx [ 122
] + xx [ 8 ] * ( xx [ 134 ] * xx [ 26 ] - xx [ 133 ] * xx [ 27 ] ) ; xx [ 133
] = xx [ 136 ] - xx [ 25 ] * xx [ 122 ] ; xx [ 134 ] = xx [ 25 ] * xx [ 129 ]
+ xx [ 131 ] ; xx [ 139 ] = xx [ 134 ] * xx [ 27 ] ; xx [ 140 ] = xx [ 133 ]
* xx [ 27 ] ; xx [ 141 ] = xx [ 133 ] - xx [ 8 ] * ( xx [ 139 ] * xx [ 26 ] +
xx [ 140 ] * xx [ 27 ] ) + 1.444400155037329e-17 * state [ 11 ] ; xx [ 133 ]
= xx [ 134 ] + xx [ 8 ] * ( xx [ 140 ] * xx [ 26 ] - xx [ 139 ] * xx [ 27 ] )
; xx [ 134 ] = xx [ 6 ] * xx [ 6 ] * xx [ 135 ] ; xx [ 139 ] = xx [ 6 ] * xx
[ 6 ] * xx [ 137 ] ; xx [ 140 ] = xx [ 135 ] - xx [ 8 ] * ( xx [ 134 ] - xx [
139 ] ) ; xx [ 142 ] = xx [ 137 ] - xx [ 8 ] * ( xx [ 134 ] + xx [ 139 ] ) ;
xx [ 134 ] = xx [ 141 ] - xx [ 29 ] * xx [ 138 ] ; xx [ 143 ] = xx [ 6 ] * xx
[ 6 ] * xx [ 134 ] ; xx [ 144 ] = xx [ 6 ] * xx [ 6 ] * xx [ 128 ] ; xx [ 145
] = xx [ 134 ] - xx [ 8 ] * ( xx [ 143 ] - xx [ 144 ] ) ; xx [ 146 ] = xx [
128 ] - xx [ 8 ] * ( xx [ 143 ] + xx [ 144 ] ) ; xx [ 143 ] = xx [ 29 ] * xx
[ 135 ] + xx [ 133 ] ; xx [ 147 ] = xx [ 31 ] * xx [ 138 ] ; xx [ 148 ] = xx
[ 31 ] * xx [ 140 ] ; xx [ 149 ] = xx [ 140 ] - xx [ 8 ] * ( xx [ 30 ] * xx [
147 ] + xx [ 31 ] * xx [ 148 ] ) ; xx [ 150 ] = xx [ 138 ] - xx [ 8 ] * ( xx
[ 31 ] * xx [ 147 ] - xx [ 30 ] * xx [ 148 ] ) ; xx [ 147 ] = xx [ 31 ] * xx
[ 143 ] ; xx [ 148 ] = xx [ 31 ] * xx [ 145 ] ; xx [ 151 ] = xx [ 145 ] - xx
[ 8 ] * ( xx [ 30 ] * xx [ 147 ] + xx [ 31 ] * xx [ 148 ] ) ; xx [ 152 ] = xx
[ 143 ] - xx [ 8 ] * ( xx [ 31 ] * xx [ 147 ] - xx [ 30 ] * xx [ 148 ] ) ; xx
[ 147 ] = xx [ 37 ] * xx [ 142 ] ; xx [ 148 ] = xx [ 37 ] * xx [ 149 ] ; xx [
153 ] = xx [ 149 ] - xx [ 8 ] * ( xx [ 147 ] * xx [ 33 ] + xx [ 148 ] * xx [
37 ] ) ; xx [ 154 ] = xx [ 142 ] - xx [ 8 ] * ( xx [ 147 ] * xx [ 37 ] - xx [
148 ] * xx [ 33 ] ) ; xx [ 147 ] = xx [ 150 ] - state [ 13 ] ; xx [ 155 ] =
xx [ 149 ] ; xx [ 156 ] = xx [ 142 ] ; xx [ 157 ] = xx [ 150 ] ; xx [ 158 ] =
xx [ 39 ] ; xx [ 159 ] = xx [ 40 ] ; xx [ 160 ] = xx [ 38 ] ;
pm_math_Vector3_cross_ra ( xx + 155 , xx + 158 , xx + 161 ) ; xx [ 148 ] = xx
[ 161 ] + xx [ 151 ] ; xx [ 158 ] = xx [ 162 ] + xx [ 146 ] ; xx [ 159 ] = xx
[ 37 ] * xx [ 158 ] ; xx [ 160 ] = xx [ 37 ] * xx [ 148 ] ; xx [ 164 ] = xx [
148 ] - xx [ 8 ] * ( xx [ 159 ] * xx [ 33 ] + xx [ 160 ] * xx [ 37 ] ) ; xx [
148 ] = xx [ 158 ] - xx [ 8 ] * ( xx [ 159 ] * xx [ 37 ] - xx [ 160 ] * xx [
33 ] ) + xx [ 36 ] * state [ 13 ] ; xx [ 158 ] = xx [ 163 ] + xx [ 152 ] ; xx
[ 159 ] = xx [ 44 ] ; xx [ 160 ] = xx [ 46 ] ; xx [ 161 ] = xx [ 42 ] ; xx [
162 ] = xx [ 47 ] ; xx [ 165 ] = xx [ 153 ] ; xx [ 166 ] = xx [ 154 ] ; xx [
167 ] = xx [ 147 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 159 , xx + 165
, xx + 168 ) ; xx [ 163 ] = xx [ 170 ] - state [ 15 ] ; xx [ 165 ] = xx [ 49
] * xx [ 154 ] + xx [ 164 ] ; xx [ 166 ] = xx [ 148 ] - ( xx [ 43 ] * xx [
147 ] + xx [ 49 ] * xx [ 153 ] ) ; xx [ 167 ] = xx [ 158 ] + xx [ 43 ] * xx [
154 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 159 , xx + 165 , xx + 170 )
; xx [ 159 ] = xx [ 52 ] * xx [ 169 ] ; xx [ 160 ] = xx [ 52 ] * xx [ 168 ] ;
xx [ 161 ] = xx [ 170 ] - xx [ 54 ] * xx [ 163 ] ; xx [ 162 ] = xx [ 171 ] -
xx [ 50 ] * xx [ 163 ] ; xx [ 165 ] = xx [ 162 ] * xx [ 52 ] ; xx [ 166 ] =
xx [ 161 ] * xx [ 52 ] ; xx [ 167 ] = xx [ 142 ] * xx [ 58 ] ; xx [ 173 ] =
xx [ 149 ] * xx [ 58 ] ; xx [ 174 ] = xx [ 149 ] - xx [ 8 ] * ( xx [ 167 ] *
xx [ 55 ] + xx [ 173 ] * xx [ 58 ] ) ; xx [ 175 ] = xx [ 142 ] - xx [ 8 ] * (
xx [ 167 ] * xx [ 58 ] - xx [ 173 ] * xx [ 55 ] ) ; xx [ 167 ] = xx [ 150 ] +
state [ 19 ] ; xx [ 176 ] = xx [ 45 ] ; xx [ 177 ] = xx [ 34 ] ; xx [ 178 ] =
xx [ 38 ] ; pm_math_Vector3_cross_ra ( xx + 155 , xx + 176 , xx + 179 ) ; xx
[ 173 ] = xx [ 179 ] + xx [ 151 ] ; xx [ 176 ] = xx [ 180 ] + xx [ 146 ] ; xx
[ 177 ] = xx [ 58 ] * xx [ 176 ] ; xx [ 178 ] = xx [ 58 ] * xx [ 173 ] ; xx [
182 ] = xx [ 173 ] - xx [ 8 ] * ( xx [ 177 ] * xx [ 55 ] + xx [ 178 ] * xx [
58 ] ) ; xx [ 173 ] = xx [ 176 ] - xx [ 8 ] * ( xx [ 177 ] * xx [ 58 ] - xx [
178 ] * xx [ 55 ] ) - xx [ 36 ] * state [ 19 ] ; xx [ 36 ] = xx [ 181 ] + xx
[ 152 ] ; xx [ 176 ] = xx [ 57 ] ; xx [ 177 ] = xx [ 59 ] ; xx [ 178 ] = xx [
41 ] ; xx [ 179 ] = xx [ 60 ] ; xx [ 183 ] = xx [ 174 ] ; xx [ 184 ] = xx [
175 ] ; xx [ 185 ] = xx [ 167 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
176 , xx + 183 , xx + 186 ) ; xx [ 180 ] = xx [ 188 ] - state [ 21 ] ; xx [
183 ] = xx [ 49 ] * xx [ 175 ] + xx [ 182 ] ; xx [ 184 ] = xx [ 173 ] - ( xx
[ 43 ] * xx [ 167 ] + xx [ 49 ] * xx [ 174 ] ) ; xx [ 185 ] = xx [ 36 ] + xx
[ 43 ] * xx [ 175 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 176 , xx +
183 , xx + 188 ) ; xx [ 176 ] = xx [ 62 ] * xx [ 187 ] ; xx [ 177 ] = xx [ 62
] * xx [ 186 ] ; xx [ 178 ] = xx [ 188 ] - xx [ 54 ] * xx [ 180 ] ; xx [ 179
] = xx [ 189 ] - xx [ 50 ] * xx [ 180 ] ; xx [ 181 ] = xx [ 179 ] * xx [ 62 ]
; xx [ 183 ] = xx [ 178 ] * xx [ 62 ] ; xx [ 184 ] = xx [ 63 ] * xx [ 142 ] ;
xx [ 185 ] = xx [ 63 ] * xx [ 149 ] ; xx [ 191 ] = xx [ 149 ] - xx [ 8 ] * (
xx [ 56 ] * xx [ 184 ] + xx [ 63 ] * xx [ 185 ] ) ; xx [ 192 ] = xx [ 142 ] +
xx [ 8 ] * ( xx [ 56 ] * xx [ 185 ] - xx [ 63 ] * xx [ 184 ] ) ; xx [ 193 ] =
xx [ 64 ] ; xx [ 194 ] = xx [ 65 ] ; xx [ 195 ] = xx [ 38 ] ;
pm_math_Vector3_cross_ra ( xx + 155 , xx + 193 , xx + 196 ) ; xx [ 155 ] = xx
[ 196 ] + xx [ 151 ] ; xx [ 156 ] = xx [ 197 ] + xx [ 146 ] ; xx [ 157 ] = xx
[ 63 ] * xx [ 156 ] ; xx [ 184 ] = xx [ 63 ] * xx [ 155 ] ; xx [ 185 ] = xx [
155 ] - xx [ 8 ] * ( xx [ 56 ] * xx [ 157 ] + xx [ 63 ] * xx [ 184 ] ) ; xx [
155 ] = xx [ 156 ] + xx [ 8 ] * ( xx [ 56 ] * xx [ 184 ] - xx [ 63 ] * xx [
157 ] ) ; xx [ 156 ] = xx [ 198 ] + xx [ 152 ] ; xx [ 193 ] = xx [ 68 ] ; xx
[ 194 ] = xx [ 69 ] ; xx [ 195 ] = xx [ 66 ] ; xx [ 196 ] = xx [ 35 ] ; xx [
197 ] = xx [ 191 ] ; xx [ 198 ] = xx [ 192 ] ; xx [ 199 ] = xx [ 150 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 193 , xx + 197 , xx + 200 ) ; xx [
157 ] = xx [ 202 ] - state [ 25 ] ; xx [ 197 ] = xx [ 49 ] * xx [ 192 ] + xx
[ 185 ] ; xx [ 198 ] = xx [ 155 ] - ( xx [ 43 ] * xx [ 150 ] + xx [ 49 ] * xx
[ 191 ] ) ; xx [ 199 ] = xx [ 156 ] + xx [ 43 ] * xx [ 192 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 193 , xx + 197 , xx + 202 ) ; xx [
43 ] = xx [ 67 ] * xx [ 201 ] ; xx [ 184 ] = xx [ 67 ] * xx [ 200 ] ; xx [
193 ] = xx [ 202 ] - xx [ 54 ] * xx [ 157 ] ; xx [ 194 ] = xx [ 203 ] - xx [
50 ] * xx [ 157 ] ; xx [ 195 ] = xx [ 194 ] * xx [ 67 ] ; xx [ 196 ] = xx [
193 ] * xx [ 67 ] ; xx [ 197 ] = xx [ 6 ] * xx [ 6 ] * xx [ 138 ] ; xx [ 198
] = xx [ 6 ] * xx [ 6 ] * xx [ 143 ] ; motionData [ 0 ] = - xx [ 0 ] ;
motionData [ 1 ] = xx [ 1 ] ; motionData [ 2 ] = xx [ 1 ] ; motionData [ 3 ]
= xx [ 1 ] ; motionData [ 4 ] = xx [ 1 ] ; motionData [ 5 ] = xx [ 1 ] ;
motionData [ 6 ] = xx [ 0 ] ; motionData [ 7 ] = xx [ 1 ] ; motionData [ 8 ]
= xx [ 1 ] ; motionData [ 9 ] = xx [ 1 ] ; motionData [ 10 ] = xx [ 0 ] ;
motionData [ 11 ] = xx [ 1 ] ; motionData [ 12 ] = xx [ 1 ] ; motionData [ 13
] = xx [ 1 ] ; motionData [ 14 ] = - xx [ 4 ] ; motionData [ 15 ] = xx [ 1 ]
; motionData [ 16 ] = xx [ 1 ] ; motionData [ 17 ] = - xx [ 5 ] ; motionData
[ 18 ] = xx [ 1 ] ; motionData [ 19 ] = xx [ 1 ] ; motionData [ 20 ] = xx [ 3
] ; motionData [ 21 ] = xx [ 7 ] ; motionData [ 22 ] = xx [ 1 ] ; motionData
[ 23 ] = - xx [ 10 ] ; motionData [ 24 ] = xx [ 1 ] ; motionData [ 25 ] = -
xx [ 12 ] ; motionData [ 26 ] = xx [ 13 ] ; motionData [ 27 ] = - xx [ 14 ] ;
motionData [ 28 ] = - xx [ 11 ] ; motionData [ 29 ] = xx [ 1 ] ; motionData [
30 ] = - xx [ 15 ] ; motionData [ 31 ] = xx [ 1 ] ; motionData [ 32 ] = xx [
17 ] ; motionData [ 33 ] = xx [ 18 ] ; motionData [ 34 ] = xx [ 19 ] ;
motionData [ 35 ] = xx [ 16 ] ; motionData [ 36 ] = xx [ 1 ] ; motionData [
37 ] = - xx [ 22 ] ; motionData [ 38 ] = xx [ 1 ] ; motionData [ 39 ] = xx [
1 ] ; motionData [ 40 ] = xx [ 20 ] ; motionData [ 41 ] = xx [ 9 ] ;
motionData [ 42 ] = - xx [ 23 ] ; motionData [ 43 ] = xx [ 1 ] ; motionData [
44 ] = xx [ 1 ] ; motionData [ 45 ] = - xx [ 24 ] ; motionData [ 46 ] = xx [
1 ] ; motionData [ 47 ] = xx [ 1 ] ; motionData [ 48 ] = xx [ 21 ] ;
motionData [ 49 ] = - xx [ 26 ] ; motionData [ 50 ] = xx [ 1 ] ; motionData [
51 ] = - xx [ 27 ] ; motionData [ 52 ] = xx [ 1 ] ; motionData [ 53 ] = xx [
1 ] ; motionData [ 54 ] = xx [ 25 ] ; motionData [ 55 ] = xx [ 1 ] ;
motionData [ 56 ] = xx [ 28 ] ; motionData [ 57 ] = xx [ 1 ] ; motionData [
58 ] = xx [ 1 ] ; motionData [ 59 ] = xx [ 28 ] ; motionData [ 60 ] = xx [ 1
] ; motionData [ 61 ] = xx [ 29 ] ; motionData [ 62 ] = xx [ 1 ] ; motionData
[ 63 ] = - xx [ 30 ] ; motionData [ 64 ] = xx [ 1 ] ; motionData [ 65 ] = -
xx [ 31 ] ; motionData [ 66 ] = xx [ 1 ] ; motionData [ 67 ] = xx [ 1 ] ;
motionData [ 68 ] = xx [ 1 ] ; motionData [ 69 ] = xx [ 1 ] ; motionData [ 70
] = - xx [ 33 ] ; motionData [ 71 ] = xx [ 1 ] ; motionData [ 72 ] = xx [ 1 ]
; motionData [ 73 ] = xx [ 37 ] ; motionData [ 74 ] = xx [ 39 ] ; motionData
[ 75 ] = xx [ 40 ] ; motionData [ 76 ] = xx [ 38 ] ; motionData [ 77 ] = xx [
44 ] ; motionData [ 78 ] = xx [ 46 ] ; motionData [ 79 ] = xx [ 42 ] ;
motionData [ 80 ] = xx [ 47 ] ; motionData [ 81 ] = xx [ 48 ] ; motionData [
82 ] = xx [ 1 ] ; motionData [ 83 ] = xx [ 49 ] ; motionData [ 84 ] = - xx [
51 ] ; motionData [ 85 ] = xx [ 1 ] ; motionData [ 86 ] = xx [ 1 ] ;
motionData [ 87 ] = xx [ 52 ] ; motionData [ 88 ] = xx [ 53 ] ; motionData [
89 ] = xx [ 54 ] ; motionData [ 90 ] = xx [ 1 ] ; motionData [ 91 ] = xx [ 55
] ; motionData [ 92 ] = xx [ 1 ] ; motionData [ 93 ] = xx [ 1 ] ; motionData
[ 94 ] = - xx [ 58 ] ; motionData [ 95 ] = xx [ 45 ] ; motionData [ 96 ] = xx
[ 34 ] ; motionData [ 97 ] = xx [ 38 ] ; motionData [ 98 ] = xx [ 57 ] ;
motionData [ 99 ] = xx [ 59 ] ; motionData [ 100 ] = xx [ 41 ] ; motionData [
101 ] = xx [ 60 ] ; motionData [ 102 ] = xx [ 48 ] ; motionData [ 103 ] = xx
[ 1 ] ; motionData [ 104 ] = xx [ 49 ] ; motionData [ 105 ] = - xx [ 61 ] ;
motionData [ 106 ] = xx [ 1 ] ; motionData [ 107 ] = xx [ 1 ] ; motionData [
108 ] = xx [ 62 ] ; motionData [ 109 ] = xx [ 53 ] ; motionData [ 110 ] = xx
[ 54 ] ; motionData [ 111 ] = xx [ 1 ] ; motionData [ 112 ] = - xx [ 56 ] ;
motionData [ 113 ] = xx [ 1 ] ; motionData [ 114 ] = xx [ 1 ] ; motionData [
115 ] = xx [ 63 ] ; motionData [ 116 ] = xx [ 64 ] ; motionData [ 117 ] = xx
[ 65 ] ; motionData [ 118 ] = xx [ 38 ] ; motionData [ 119 ] = xx [ 68 ] ;
motionData [ 120 ] = xx [ 69 ] ; motionData [ 121 ] = xx [ 66 ] ; motionData
[ 122 ] = xx [ 35 ] ; motionData [ 123 ] = xx [ 48 ] ; motionData [ 124 ] =
xx [ 1 ] ; motionData [ 125 ] = xx [ 49 ] ; motionData [ 126 ] = - xx [ 2 ] ;
motionData [ 127 ] = xx [ 1 ] ; motionData [ 128 ] = xx [ 1 ] ; motionData [
129 ] = xx [ 67 ] ; motionData [ 130 ] = xx [ 53 ] ; motionData [ 131 ] = xx
[ 54 ] ; motionData [ 132 ] = xx [ 1 ] ; motionData [ 133 ] = xx [ 28 ] ;
motionData [ 134 ] = xx [ 6 ] ; motionData [ 135 ] = xx [ 1 ] ; motionData [
136 ] = xx [ 1 ] ; motionData [ 137 ] = xx [ 1 ] ; motionData [ 138 ] = xx [
29 ] ; motionData [ 139 ] = xx [ 1 ] ; motionData [ 140 ] = xx [ 4 ] ;
motionData [ 141 ] = xx [ 1 ] ; motionData [ 142 ] = xx [ 1 ] ; motionData [
143 ] = xx [ 5 ] ; motionData [ 144 ] = xx [ 1 ] ; motionData [ 145 ] = xx [
1 ] ; motionData [ 146 ] = xx [ 32 ] ; motionData [ 147 ] = xx [ 70 ] ;
motionData [ 148 ] = xx [ 71 ] ; motionData [ 149 ] = xx [ 73 ] ; motionData
[ 150 ] = xx [ 74 ] ; motionData [ 151 ] = xx [ 77 ] ; motionData [ 152 ] =
xx [ 78 ] ; motionData [ 153 ] = xx [ 75 ] ; motionData [ 154 ] = - xx [ 76 ]
; motionData [ 155 ] = xx [ 79 ] ; motionData [ 156 ] = xx [ 81 ] ;
motionData [ 157 ] = xx [ 83 ] ; motionData [ 158 ] = xx [ 84 ] ; motionData
[ 159 ] = xx [ 85 ] ; motionData [ 160 ] = xx [ 86 ] ; motionData [ 161 ] = -
xx [ 87 ] ; motionData [ 162 ] = xx [ 88 ] ; motionData [ 163 ] = xx [ 89 ] ;
motionData [ 164 ] = - xx [ 90 ] ; motionData [ 165 ] = xx [ 91 ] ;
motionData [ 166 ] = xx [ 92 ] ; motionData [ 167 ] = xx [ 80 ] ; motionData
[ 168 ] = xx [ 82 ] ; motionData [ 169 ] = - xx [ 93 ] ; motionData [ 170 ] =
xx [ 94 ] ; motionData [ 171 ] = xx [ 95 ] ; motionData [ 172 ] = xx [ 98 ] ;
motionData [ 173 ] = xx [ 99 ] ; motionData [ 174 ] = xx [ 100 ] ; motionData
[ 175 ] = xx [ 96 ] ; motionData [ 176 ] = xx [ 97 ] ; motionData [ 177 ] = -
xx [ 101 ] ; motionData [ 178 ] = xx [ 102 ] ; motionData [ 179 ] = xx [ 105
] ; motionData [ 180 ] = xx [ 106 ] ; motionData [ 181 ] = xx [ 107 ] ;
motionData [ 182 ] = xx [ 103 ] - xx [ 104 ] ; motionData [ 183 ] = xx [ 108
] - xx [ 109 ] ; motionData [ 184 ] = xx [ 108 ] + xx [ 109 ] ; motionData [
185 ] = - ( xx [ 104 ] + xx [ 103 ] ) ; motionData [ 186 ] = xx [ 105 ] - xx
[ 8 ] * ( xx [ 110 ] * xx [ 96 ] + xx [ 111 ] * xx [ 101 ] ) ; motionData [
187 ] = xx [ 106 ] - xx [ 8 ] * ( xx [ 110 ] * xx [ 102 ] + xx [ 111 ] * xx [
97 ] ) + xx [ 29 ] ; motionData [ 188 ] = xx [ 8 ] * ( xx [ 111 ] * xx [ 96 ]
- xx [ 110 ] * xx [ 101 ] ) + xx [ 107 ] ; motionData [ 189 ] = - xx [ 70 ] ;
motionData [ 190 ] = - xx [ 71 ] ; motionData [ 191 ] = xx [ 72 ] ;
motionData [ 192 ] = - xx [ 74 ] ; motionData [ 193 ] = xx [ 77 ] ;
motionData [ 194 ] = xx [ 78 ] ; motionData [ 195 ] = xx [ 3 ] - xx [ 14 ] ;
motionData [ 196 ] = xx [ 1 ] ; motionData [ 197 ] = xx [ 1 ] ; motionData [
198 ] = xx [ 1 ] ; motionData [ 199 ] = xx [ 1 ] ; motionData [ 200 ] = xx [
1 ] ; motionData [ 201 ] = xx [ 1 ] ; motionData [ 202 ] = xx [ 1 ] ;
motionData [ 203 ] = xx [ 1 ] ; motionData [ 204 ] = xx [ 1 ] ; motionData [
205 ] = xx [ 1 ] ; motionData [ 206 ] = xx [ 1 ] ; motionData [ 207 ] = xx [
1 ] ; motionData [ 208 ] = xx [ 1 ] ; motionData [ 209 ] = xx [ 1 ] ;
motionData [ 210 ] = state [ 1 ] ; motionData [ 211 ] = xx [ 1 ] ; motionData
[ 212 ] = xx [ 1 ] ; motionData [ 213 ] = xx [ 1 ] ; motionData [ 214 ] = xx
[ 113 ] ; motionData [ 215 ] = state [ 3 ] ; motionData [ 216 ] = xx [ 114 ]
; motionData [ 217 ] = xx [ 116 ] ; motionData [ 218 ] = - xx [ 112 ] ;
motionData [ 219 ] = xx [ 117 ] ; motionData [ 220 ] = xx [ 119 ] ;
motionData [ 221 ] = xx [ 120 ] ; motionData [ 222 ] = xx [ 121 ] ;
motionData [ 223 ] = xx [ 124 ] ; motionData [ 224 ] = xx [ 115 ] ;
motionData [ 225 ] = xx [ 125 ] ; motionData [ 226 ] = xx [ 123 ] ;
motionData [ 227 ] = xx [ 126 ] ; motionData [ 228 ] = xx [ 127 ] ;
motionData [ 229 ] = xx [ 130 ] ; motionData [ 230 ] = xx [ 118 ] ;
motionData [ 231 ] = xx [ 131 ] ; motionData [ 232 ] = xx [ 129 ] ;
motionData [ 233 ] = xx [ 132 ] ; motionData [ 234 ] = xx [ 122 ] ;
motionData [ 235 ] = xx [ 136 ] ; motionData [ 236 ] = xx [ 128 ] ;
motionData [ 237 ] = xx [ 131 ] ; motionData [ 238 ] = xx [ 135 ] ;
motionData [ 239 ] = xx [ 137 ] ; motionData [ 240 ] = xx [ 138 ] ;
motionData [ 241 ] = xx [ 141 ] ; motionData [ 242 ] = xx [ 128 ] ;
motionData [ 243 ] = xx [ 133 ] ; motionData [ 244 ] = xx [ 140 ] ;
motionData [ 245 ] = xx [ 142 ] ; motionData [ 246 ] = xx [ 138 ] ;
motionData [ 247 ] = xx [ 145 ] ; motionData [ 248 ] = xx [ 146 ] ;
motionData [ 249 ] = xx [ 143 ] ; motionData [ 250 ] = xx [ 149 ] ;
motionData [ 251 ] = xx [ 142 ] ; motionData [ 252 ] = xx [ 150 ] ;
motionData [ 253 ] = xx [ 151 ] ; motionData [ 254 ] = xx [ 146 ] ;
motionData [ 255 ] = xx [ 152 ] ; motionData [ 256 ] = xx [ 153 ] ;
motionData [ 257 ] = xx [ 154 ] ; motionData [ 258 ] = xx [ 147 ] ;
motionData [ 259 ] = xx [ 164 ] ; motionData [ 260 ] = xx [ 148 ] ;
motionData [ 261 ] = xx [ 158 ] ; motionData [ 262 ] = xx [ 168 ] ;
motionData [ 263 ] = xx [ 169 ] ; motionData [ 264 ] = xx [ 163 ] ;
motionData [ 265 ] = xx [ 170 ] ; motionData [ 266 ] = xx [ 171 ] ;
motionData [ 267 ] = xx [ 172 ] ; motionData [ 268 ] = xx [ 168 ] - xx [ 8 ]
* ( xx [ 159 ] * xx [ 51 ] + xx [ 160 ] * xx [ 52 ] ) ; motionData [ 269 ] =
xx [ 169 ] + xx [ 8 ] * ( xx [ 160 ] * xx [ 51 ] - xx [ 159 ] * xx [ 52 ] ) ;
motionData [ 270 ] = xx [ 163 ] - state [ 17 ] ; motionData [ 271 ] = xx [
161 ] - xx [ 8 ] * ( xx [ 165 ] * xx [ 51 ] + xx [ 166 ] * xx [ 52 ] ) ;
motionData [ 272 ] = xx [ 162 ] + xx [ 8 ] * ( xx [ 166 ] * xx [ 51 ] - xx [
165 ] * xx [ 52 ] ) ; motionData [ 273 ] = xx [ 54 ] * xx [ 168 ] + xx [ 50 ]
* xx [ 169 ] + xx [ 172 ] ; motionData [ 274 ] = xx [ 174 ] ; motionData [
275 ] = xx [ 175 ] ; motionData [ 276 ] = xx [ 167 ] ; motionData [ 277 ] =
xx [ 182 ] ; motionData [ 278 ] = xx [ 173 ] ; motionData [ 279 ] = xx [ 36 ]
; motionData [ 280 ] = xx [ 186 ] ; motionData [ 281 ] = xx [ 187 ] ;
motionData [ 282 ] = xx [ 180 ] ; motionData [ 283 ] = xx [ 188 ] ;
motionData [ 284 ] = xx [ 189 ] ; motionData [ 285 ] = xx [ 190 ] ;
motionData [ 286 ] = xx [ 186 ] - xx [ 8 ] * ( xx [ 176 ] * xx [ 61 ] + xx [
177 ] * xx [ 62 ] ) ; motionData [ 287 ] = xx [ 187 ] + xx [ 8 ] * ( xx [ 177
] * xx [ 61 ] - xx [ 176 ] * xx [ 62 ] ) ; motionData [ 288 ] = xx [ 180 ] -
state [ 23 ] ; motionData [ 289 ] = xx [ 178 ] - xx [ 8 ] * ( xx [ 181 ] * xx
[ 61 ] + xx [ 183 ] * xx [ 62 ] ) ; motionData [ 290 ] = xx [ 179 ] + xx [ 8
] * ( xx [ 183 ] * xx [ 61 ] - xx [ 181 ] * xx [ 62 ] ) ; motionData [ 291 ]
= xx [ 54 ] * xx [ 186 ] + xx [ 50 ] * xx [ 187 ] + xx [ 190 ] ; motionData [
292 ] = xx [ 191 ] ; motionData [ 293 ] = xx [ 192 ] ; motionData [ 294 ] =
xx [ 150 ] ; motionData [ 295 ] = xx [ 185 ] ; motionData [ 296 ] = xx [ 155
] ; motionData [ 297 ] = xx [ 156 ] ; motionData [ 298 ] = xx [ 200 ] ;
motionData [ 299 ] = xx [ 201 ] ; motionData [ 300 ] = xx [ 157 ] ;
motionData [ 301 ] = xx [ 202 ] ; motionData [ 302 ] = xx [ 203 ] ;
motionData [ 303 ] = xx [ 204 ] ; motionData [ 304 ] = xx [ 200 ] - xx [ 8 ]
* ( xx [ 43 ] * xx [ 2 ] + xx [ 184 ] * xx [ 67 ] ) ; motionData [ 305 ] = xx
[ 201 ] + xx [ 8 ] * ( xx [ 184 ] * xx [ 2 ] - xx [ 43 ] * xx [ 67 ] ) ;
motionData [ 306 ] = xx [ 157 ] - state [ 27 ] ; motionData [ 307 ] = xx [
193 ] - xx [ 8 ] * ( xx [ 195 ] * xx [ 2 ] + xx [ 196 ] * xx [ 67 ] ) ;
motionData [ 308 ] = xx [ 194 ] + xx [ 8 ] * ( xx [ 196 ] * xx [ 2 ] - xx [
195 ] * xx [ 67 ] ) ; motionData [ 309 ] = xx [ 54 ] * xx [ 200 ] + xx [ 50 ]
* xx [ 201 ] + xx [ 204 ] ; motionData [ 310 ] = xx [ 135 ] ; motionData [
311 ] = xx [ 137 ] - xx [ 8 ] * ( xx [ 197 ] + xx [ 139 ] ) ; motionData [
312 ] = xx [ 138 ] + xx [ 8 ] * ( xx [ 139 ] - xx [ 197 ] ) ; motionData [
313 ] = xx [ 134 ] ; motionData [ 314 ] = xx [ 128 ] - xx [ 8 ] * ( xx [ 198
] + xx [ 144 ] ) ; motionData [ 315 ] = xx [ 143 ] + xx [ 8 ] * ( xx [ 144 ]
- xx [ 198 ] ) ; } size_t ur5bh_47770016_1_computeAssemblyError ( const void
* mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx ,
const int * modeVector , const double * motionData , double * error ) { (
void ) mech ; ( void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; (
void ) error ; switch ( constraintIdx ) { } return 0 ; } size_t
ur5bh_47770016_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t ur5bh_47770016_1_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; } boolean_T
ur5bh_47770016_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { } return
0 ; } void ur5bh_47770016_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double *
asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; ( void ) simModeVector
; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ;
simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState
[ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] =
asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState
[ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ;
simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] = asmState [ 24 ] ;
simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] = asmState [ 26 ] ;
simState [ 27 ] = asmState [ 27 ] ; }
