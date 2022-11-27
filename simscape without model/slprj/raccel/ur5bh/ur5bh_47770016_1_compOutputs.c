#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ur5bh_47770016_1_geometries.h"
PmfMessageId ur5bh_47770016_1_compOutputs ( const RuntimeDerivedValuesBundle
* rtdv , const double * state , const int * modeVector , const double * input
, const double * inputDot , const double * inputDdot , const double *
discreteState , double * output , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 44 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) input ; ( void ) inputDot ; ( void ) inputDdot ; (
void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 2.0 ; xx [ 1 ] =
0.7071067811865476 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 2 ] ; xx
[ 4 ] = xx [ 1 ] * sin ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 1 ] * cos ( xx [ 3 ] )
; xx [ 3 ] = xx [ 4 ] - xx [ 5 ] ; xx [ 6 ] = xx [ 2 ] * state [ 0 ] ; xx [ 7
] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 3 ] * xx [ 7 ] ; xx [ 9 ] = xx [ 2 ] *
state [ 4 ] ; xx [ 10 ] = sin ( xx [ 9 ] ) ; xx [ 11 ] = xx [ 4 ] + xx [ 5 ]
; xx [ 4 ] = xx [ 11 ] * xx [ 7 ] ; xx [ 5 ] = cos ( xx [ 9 ] ) ; xx [ 9 ] =
xx [ 8 ] * xx [ 10 ] - xx [ 4 ] * xx [ 5 ] ; xx [ 12 ] = cos ( xx [ 6 ] ) ;
xx [ 6 ] = xx [ 3 ] * xx [ 12 ] ; xx [ 13 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 14
] = xx [ 6 ] * xx [ 10 ] - xx [ 13 ] * xx [ 5 ] ; xx [ 15 ] = xx [ 4 ] * xx [
10 ] + xx [ 8 ] * xx [ 5 ] ; xx [ 16 ] = xx [ 9 ] ; xx [ 17 ] = - xx [ 14 ] ;
xx [ 18 ] = - xx [ 15 ] ; xx [ 19 ] = 0.196125 ; xx [ 20 ] = 0.093 ; xx [ 21
] = xx [ 19 ] * xx [ 14 ] - xx [ 20 ] * xx [ 15 ] ; xx [ 22 ] = xx [ 19 ] *
xx [ 9 ] ; xx [ 23 ] = xx [ 20 ] * xx [ 9 ] ; xx [ 24 ] = - xx [ 21 ] ; xx [
25 ] = - xx [ 22 ] ; xx [ 26 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 24 , xx + 27 ) ; xx [ 16 ] = xx [ 13 ] * xx [ 10 ] + xx [ 6 ] * xx
[ 5 ] ; xx [ 30 ] = xx [ 6 ] ; xx [ 31 ] = xx [ 4 ] ; xx [ 32 ] = - xx [ 13 ]
; xx [ 33 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 19 ] * xx [ 10 ] ; xx [ 18 ] = xx [
0 ] * xx [ 17 ] * xx [ 5 ] ; xx [ 19 ] = - 0.1197 ; xx [ 20 ] = 0.341125 - xx
[ 0 ] * xx [ 17 ] * xx [ 10 ] ; pm_math_Quaternion_xform_ra ( xx + 30 , xx +
18 , xx + 24 ) ; xx [ 5 ] = 0.28 ; xx [ 10 ] = xx [ 5 ] * xx [ 11 ] ; xx [ 17
] = xx [ 0 ] * xx [ 10 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 17 ] * xx [ 7 ] ; xx [
18 ] = 0.13585 ; xx [ 19 ] = xx [ 18 ] * xx [ 7 ] ; xx [ 20 ] = xx [ 0 ] * (
xx [ 3 ] * xx [ 7 ] - xx [ 19 ] * xx [ 12 ] ) - xx [ 17 ] ; xx [ 17 ] =
0.09465 ; xx [ 30 ] = xx [ 2 ] * state [ 6 ] ; xx [ 31 ] = xx [ 1 ] * sin (
xx [ 30 ] ) ; xx [ 32 ] = xx [ 1 ] * cos ( xx [ 30 ] ) ; xx [ 1 ] = xx [ 31 ]
+ xx [ 32 ] ; xx [ 30 ] = xx [ 31 ] - xx [ 32 ] ; xx [ 31 ] = xx [ 16 ] * xx
[ 1 ] - xx [ 30 ] * xx [ 14 ] ; xx [ 32 ] = xx [ 17 ] * xx [ 31 ] ; xx [ 33 ]
= xx [ 16 ] * xx [ 30 ] + xx [ 14 ] * xx [ 1 ] ; xx [ 14 ] = xx [ 30 ] * xx [
9 ] - xx [ 15 ] * xx [ 1 ] ; xx [ 34 ] = xx [ 17 ] * xx [ 14 ] ; xx [ 17 ] =
xx [ 15 ] * xx [ 30 ] + xx [ 9 ] * xx [ 1 ] ; xx [ 1 ] = 0.06505 ; xx [ 9 ] =
xx [ 2 ] * state [ 8 ] ; xx [ 15 ] = sin ( xx [ 9 ] ) ; xx [ 30 ] = cos ( xx
[ 9 ] ) ; xx [ 9 ] = xx [ 33 ] * xx [ 15 ] + xx [ 17 ] * xx [ 30 ] ; xx [ 35
] = xx [ 1 ] * xx [ 9 ] ; xx [ 36 ] = xx [ 33 ] * xx [ 30 ] - xx [ 17 ] * xx
[ 15 ] ; xx [ 37 ] = xx [ 14 ] * xx [ 30 ] + xx [ 31 ] * xx [ 15 ] ; xx [ 38
] = xx [ 1 ] * xx [ 37 ] ; xx [ 1 ] = xx [ 14 ] * xx [ 15 ] - xx [ 31 ] * xx
[ 30 ] ; xx [ 15 ] = 0.01725 ; xx [ 30 ] = xx [ 2 ] * state [ 10 ] ; xx [ 2 ]
= sin ( xx [ 30 ] ) ; xx [ 39 ] = cos ( xx [ 30 ] ) ; xx [ 30 ] = xx [ 37 ] *
xx [ 2 ] - xx [ 9 ] * xx [ 39 ] ; xx [ 40 ] = xx [ 15 ] * xx [ 30 ] ; xx [ 41
] = xx [ 1 ] * xx [ 2 ] - xx [ 36 ] * xx [ 39 ] ; xx [ 42 ] = xx [ 37 ] * xx
[ 39 ] + xx [ 9 ] * xx [ 2 ] ; xx [ 43 ] = xx [ 15 ] * xx [ 42 ] ; xx [ 15 ]
= xx [ 36 ] * xx [ 2 ] + xx [ 1 ] * xx [ 39 ] ; xx [ 2 ] = xx [ 0 ] * ( xx [
3 ] * xx [ 12 ] + xx [ 19 ] * xx [ 7 ] ) ; xx [ 3 ] = xx [ 0 ] * xx [ 10 ] *
xx [ 11 ] - xx [ 5 ] ; xx [ 7 ] = xx [ 5 ] * xx [ 13 ] ; xx [ 10 ] = xx [ 5 ]
* xx [ 4 ] ; output [ 0 ] = state [ 4 ] ; output [ 1 ] = state [ 5 ] ; output
[ 2 ] = state [ 2 ] ; output [ 3 ] = state [ 3 ] ; output [ 4 ] = state [ 0 ]
; output [ 5 ] = state [ 1 ] ; output [ 6 ] = state [ 6 ] ; output [ 7 ] =
state [ 7 ] ; output [ 8 ] = state [ 8 ] ; output [ 9 ] = state [ 9 ] ;
output [ 10 ] = state [ 10 ] ; output [ 11 ] = state [ 11 ] ; output [ 12 ] =
xx [ 0 ] * ( xx [ 27 ] + xx [ 16 ] * xx [ 21 ] ) + xx [ 24 ] + xx [ 20 ] - xx
[ 0 ] * ( xx [ 32 ] * xx [ 33 ] + xx [ 34 ] * xx [ 17 ] ) - xx [ 0 ] * ( xx [
35 ] * xx [ 36 ] + xx [ 38 ] * xx [ 1 ] ) - xx [ 0 ] * ( xx [ 40 ] * xx [ 41
] + xx [ 43 ] * xx [ 15 ] ) ; output [ 13 ] = xx [ 0 ] * ( xx [ 34 ] * xx [
33 ] - xx [ 32 ] * xx [ 17 ] ) + xx [ 0 ] * ( xx [ 28 ] + xx [ 22 ] * xx [ 16
] ) + xx [ 25 ] - xx [ 2 ] - xx [ 0 ] * ( xx [ 35 ] * xx [ 9 ] + xx [ 38 ] *
xx [ 37 ] ) - xx [ 0 ] * ( xx [ 40 ] * xx [ 30 ] + xx [ 43 ] * xx [ 42 ] ) +
0.31115 ; output [ 14 ] = xx [ 0 ] * ( xx [ 43 ] * xx [ 41 ] - xx [ 40 ] * xx
[ 15 ] ) + xx [ 0 ] * ( xx [ 29 ] - xx [ 23 ] * xx [ 16 ] ) + xx [ 26 ] - xx
[ 3 ] - xx [ 0 ] * ( xx [ 34 ] * xx [ 14 ] + xx [ 32 ] * xx [ 31 ] ) - xx [ 0
] * ( xx [ 38 ] * xx [ 36 ] - xx [ 35 ] * xx [ 1 ] ) + 0.3799339999999998 ;
output [ 15 ] = xx [ 0 ] * ( xx [ 7 ] * xx [ 6 ] - xx [ 10 ] * xx [ 8 ] ) +
xx [ 20 ] ; output [ 16 ] = xx [ 0 ] * ( xx [ 10 ] * xx [ 6 ] + xx [ 7 ] * xx
[ 8 ] ) - xx [ 2 ] + xx [ 18 ] ; output [ 17 ] = - ( 0.190841 + xx [ 3 ] - xx
[ 0 ] * ( xx [ 10 ] * xx [ 4 ] + xx [ 7 ] * xx [ 13 ] ) ) ; return NULL ; }
