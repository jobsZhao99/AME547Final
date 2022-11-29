#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ur5bh_47770016_1_geometries.h"
PmfMessageId ur5bh_47770016_1_compDerivs ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 406 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ;
xx [ 0 ] = 3.141592653589793 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = state [ 0 ] + xx [
0 ] ; if ( xx [ 1 ] < xx [ 2 ] ) xx [ 2 ] = xx [ 1 ] ; xx [ 3 ] =
1.74532925199433e-3 ; xx [ 4 ] = 1.0 ; xx [ 5 ] = - ( xx [ 2 ] / xx [ 3 ] ) ;
if ( xx [ 4 ] < xx [ 5 ] ) xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = 3.0 ; xx [ 7 ] =
2.0 ; xx [ 8 ] = 572.9577951308231 ; xx [ 9 ] = xx [ 8 ] * state [ 1 ] ; xx [
10 ] = 5.729577951308232e5 ; xx [ 11 ] = xx [ 5 ] * xx [ 5 ] * ( xx [ 6 ] -
xx [ 7 ] * xx [ 5 ] ) * ( ( - xx [ 2 ] == xx [ 1 ] ? xx [ 1 ] : - xx [ 9 ] )
- xx [ 10 ] * xx [ 2 ] ) ; if ( xx [ 1 ] > xx [ 11 ] ) xx [ 11 ] = xx [ 1 ] ;
xx [ 2 ] = state [ 0 ] - xx [ 0 ] ; if ( xx [ 1 ] > xx [ 2 ] ) xx [ 2 ] = xx
[ 1 ] ; xx [ 5 ] = xx [ 2 ] / xx [ 3 ] ; if ( xx [ 4 ] < xx [ 5 ] ) xx [ 5 ]
= xx [ 4 ] ; xx [ 12 ] = xx [ 5 ] * xx [ 5 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 5
] ) * ( xx [ 10 ] * xx [ 2 ] + ( xx [ 2 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 9 ] )
) ; if ( xx [ 1 ] > xx [ 12 ] ) xx [ 12 ] = xx [ 1 ] ; xx [ 2 ] =
0.7071067811865476 ; xx [ 5 ] = 0.5 ; xx [ 9 ] = xx [ 5 ] * state [ 2 ] ; xx
[ 13 ] = xx [ 2 ] * sin ( xx [ 9 ] ) ; xx [ 14 ] = xx [ 2 ] * cos ( xx [ 9 ]
) ; xx [ 9 ] = xx [ 13 ] + xx [ 14 ] ; xx [ 15 ] = state [ 1 ] * xx [ 9 ] ;
xx [ 16 ] = xx [ 13 ] - xx [ 14 ] ; xx [ 13 ] = xx [ 7 ] * xx [ 15 ] * xx [
16 ] ; xx [ 14 ] = state [ 1 ] - xx [ 7 ] * xx [ 15 ] * xx [ 9 ] ; xx [ 17 ]
= xx [ 13 ] ; xx [ 18 ] = state [ 3 ] ; xx [ 19 ] = xx [ 14 ] ; xx [ 15 ] =
0.2268906759103602 ; xx [ 20 ] = 0.01510739999999999 ; xx [ 21 ] = xx [ 15 ]
* xx [ 13 ] ; xx [ 22 ] = xx [ 15 ] * state [ 3 ] ; xx [ 23 ] = xx [ 20 ] *
xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 17 , xx + 21 , xx + 24 ) ; xx [
21 ] = xx [ 5 ] * state [ 4 ] ; xx [ 22 ] = sin ( xx [ 21 ] ) ; xx [ 23 ] =
xx [ 13 ] * xx [ 22 ] ; xx [ 27 ] = xx [ 14 ] * xx [ 22 ] ; xx [ 28 ] = cos (
xx [ 21 ] ) ; xx [ 21 ] = xx [ 13 ] - xx [ 7 ] * ( xx [ 23 ] * xx [ 22 ] + xx
[ 27 ] * xx [ 28 ] ) ; xx [ 29 ] = state [ 3 ] + state [ 5 ] ; xx [ 30 ] = xx
[ 14 ] - xx [ 7 ] * ( xx [ 27 ] * xx [ 22 ] - xx [ 23 ] * xx [ 28 ] ) ; xx [
31 ] = xx [ 21 ] ; xx [ 32 ] = xx [ 29 ] ; xx [ 33 ] = xx [ 30 ] ; xx [ 23 ]
= 0.03121679102890359 ; xx [ 27 ] = 4.095000000000001e-3 ; xx [ 34 ] = xx [
23 ] * xx [ 21 ] ; xx [ 35 ] = xx [ 23 ] * xx [ 29 ] ; xx [ 36 ] = xx [ 27 ]
* xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 31 , xx + 34 , xx + 37 ) ; xx [
34 ] = xx [ 5 ] * state [ 6 ] ; xx [ 35 ] = xx [ 2 ] * sin ( xx [ 34 ] ) ; xx
[ 36 ] = xx [ 2 ] * cos ( xx [ 34 ] ) ; xx [ 34 ] = xx [ 35 ] + xx [ 36 ] ;
xx [ 40 ] = xx [ 21 ] * xx [ 34 ] ; xx [ 41 ] = xx [ 30 ] * xx [ 34 ] ; xx [
42 ] = xx [ 35 ] - xx [ 36 ] ; xx [ 35 ] = xx [ 21 ] - xx [ 7 ] * ( xx [ 40 ]
* xx [ 34 ] - xx [ 41 ] * xx [ 42 ] ) ; xx [ 36 ] = xx [ 29 ] + state [ 7 ] ;
xx [ 43 ] = xx [ 30 ] - xx [ 7 ] * ( xx [ 40 ] * xx [ 42 ] + xx [ 41 ] * xx [
34 ] ) ; xx [ 44 ] = xx [ 35 ] ; xx [ 45 ] = xx [ 36 ] ; xx [ 46 ] = xx [ 43
] ; xx [ 40 ] = 2.55989897604e-3 ; xx [ 41 ] = 2.55989897604e-3 ; xx [ 47 ] =
2.1942e-3 ; xx [ 48 ] = xx [ 40 ] * xx [ 35 ] ; xx [ 49 ] = xx [ 41 ] * xx [
36 ] ; xx [ 50 ] = xx [ 47 ] * xx [ 43 ] ; pm_math_Vector3_cross_ra ( xx + 44
, xx + 48 , xx + 51 ) ; xx [ 44 ] = xx [ 5 ] * state [ 8 ] ; xx [ 45 ] = sin
( xx [ 44 ] ) ; xx [ 46 ] = xx [ 36 ] * xx [ 45 ] ; xx [ 48 ] = cos ( xx [ 44
] ) ; xx [ 44 ] = xx [ 35 ] * xx [ 45 ] ; xx [ 49 ] = xx [ 35 ] + xx [ 7 ] *
( xx [ 46 ] * xx [ 48 ] - xx [ 44 ] * xx [ 45 ] ) ; xx [ 50 ] = xx [ 36 ] -
xx [ 7 ] * ( xx [ 44 ] * xx [ 48 ] + xx [ 46 ] * xx [ 45 ] ) ; xx [ 44 ] = xx
[ 43 ] + state [ 9 ] ; xx [ 54 ] = xx [ 49 ] ; xx [ 55 ] = xx [ 50 ] ; xx [
56 ] = xx [ 44 ] ; xx [ 46 ] = 2.1942e-3 ; xx [ 57 ] = xx [ 40 ] * xx [ 49 ]
; xx [ 58 ] = xx [ 40 ] * xx [ 50 ] ; xx [ 59 ] = xx [ 46 ] * xx [ 44 ] ;
pm_math_Vector3_cross_ra ( xx + 54 , xx + 57 , xx + 60 ) ; xx [ 54 ] = xx [ 5
] * state [ 10 ] ; xx [ 55 ] = sin ( xx [ 54 ] ) ; xx [ 56 ] = xx [ 44 ] * xx
[ 55 ] ; xx [ 57 ] = cos ( xx [ 54 ] ) ; xx [ 54 ] = xx [ 49 ] * xx [ 55 ] ;
xx [ 58 ] = xx [ 49 ] - xx [ 7 ] * ( xx [ 56 ] * xx [ 57 ] + xx [ 54 ] * xx [
55 ] ) ; xx [ 59 ] = xx [ 50 ] + state [ 11 ] ; xx [ 63 ] = xx [ 44 ] + xx [
7 ] * ( xx [ 54 ] * xx [ 57 ] - xx [ 56 ] * xx [ 55 ] ) ; xx [ 64 ] = xx [ 58
] ; xx [ 65 ] = xx [ 59 ] ; xx [ 66 ] = xx [ 63 ] ; xx [ 54 ] =
8.469589112162997e-5 ; xx [ 56 ] = 1.321171875e-4 ; xx [ 67 ] = xx [ 54 ] *
xx [ 58 ] ; xx [ 68 ] = xx [ 56 ] * xx [ 59 ] ; xx [ 69 ] = xx [ 54 ] * xx [
63 ] ; pm_math_Vector3_cross_ra ( xx + 64 , xx + 67 , xx + 70 ) ; xx [ 64 ] =
xx [ 2 ] * xx [ 2 ] * xx [ 58 ] ; xx [ 65 ] = xx [ 2 ] * xx [ 2 ] * xx [ 59 ]
; xx [ 66 ] = xx [ 58 ] - xx [ 7 ] * ( xx [ 64 ] - xx [ 65 ] ) ; xx [ 67 ] =
0.7071067811882787 ; xx [ 68 ] = 0.7071067811848163 ; xx [ 69 ] = xx [ 68 ] *
xx [ 63 ] ; xx [ 73 ] = xx [ 68 ] * xx [ 66 ] ; xx [ 74 ] = xx [ 66 ] - xx [
7 ] * ( xx [ 67 ] * xx [ 69 ] + xx [ 68 ] * xx [ 73 ] ) ; xx [ 66 ] = xx [ 59
] - xx [ 7 ] * ( xx [ 64 ] + xx [ 65 ] ) ; xx [ 64 ] = xx [ 63 ] - xx [ 7 ] *
( xx [ 68 ] * xx [ 69 ] - xx [ 67 ] * xx [ 73 ] ) ; xx [ 75 ] = xx [ 74 ] ;
xx [ 76 ] = xx [ 66 ] ; xx [ 77 ] = xx [ 64 ] ; pm_math_Vector3_cross_ra ( xx
+ 75 , xx + 75 , xx + 78 ) ; xx [ 65 ] = 0.7071067811140325 ; xx [ 69 ] =
0.7071067812590626 ; xx [ 73 ] = xx [ 69 ] * xx [ 66 ] ; xx [ 81 ] = xx [ 69
] * xx [ 74 ] ; xx [ 82 ] = xx [ 74 ] - xx [ 7 ] * ( xx [ 65 ] * xx [ 73 ] +
xx [ 69 ] * xx [ 81 ] ) ; xx [ 83 ] = xx [ 66 ] + xx [ 7 ] * ( xx [ 65 ] * xx
[ 81 ] - xx [ 69 ] * xx [ 73 ] ) ; xx [ 84 ] = xx [ 82 ] ; xx [ 85 ] = xx [
83 ] ; xx [ 86 ] = xx [ 64 ] ; xx [ 73 ] = 0.01 ; xx [ 87 ] = xx [ 73 ] * xx
[ 82 ] ; xx [ 88 ] = xx [ 73 ] * xx [ 83 ] ; xx [ 89 ] = xx [ 73 ] * xx [ 64
] ; pm_math_Vector3_cross_ra ( xx + 84 , xx + 87 , xx + 90 ) ; xx [ 81 ] =
0.7071054825112364 ; xx [ 87 ] = xx [ 5 ] * state [ 24 ] ; xx [ 88 ] = cos (
xx [ 87 ] ) ; xx [ 89 ] = xx [ 81 ] * xx [ 88 ] ; xx [ 93 ] =
0.7071080798594737 ; xx [ 94 ] = xx [ 93 ] * xx [ 88 ] ; xx [ 88 ] = sin ( xx
[ 87 ] ) ; xx [ 87 ] = xx [ 93 ] * xx [ 88 ] ; xx [ 95 ] = xx [ 81 ] * xx [
88 ] ; xx [ 96 ] = - xx [ 89 ] ; xx [ 97 ] = - xx [ 94 ] ; xx [ 98 ] = - xx [
87 ] ; xx [ 99 ] = xx [ 95 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 96 ,
xx + 84 , xx + 100 ) ; xx [ 88 ] = xx [ 102 ] - state [ 25 ] ; xx [ 102 ] =
xx [ 100 ] ; xx [ 103 ] = xx [ 101 ] ; xx [ 104 ] = xx [ 88 ] ; xx [ 105 ] =
xx [ 73 ] * xx [ 100 ] ; xx [ 106 ] = xx [ 73 ] * xx [ 101 ] ; xx [ 107 ] =
xx [ 73 ] * xx [ 88 ] ; pm_math_Vector3_cross_ra ( xx + 102 , xx + 105 , xx +
108 ) ; xx [ 105 ] = xx [ 5 ] * state [ 26 ] ; xx [ 106 ] = sin ( xx [ 105 ]
) ; xx [ 107 ] = xx [ 106 ] * xx [ 101 ] ; xx [ 111 ] = cos ( xx [ 105 ] ) ;
xx [ 105 ] = xx [ 106 ] * xx [ 100 ] ; xx [ 112 ] = xx [ 100 ] - xx [ 7 ] * (
xx [ 107 ] * xx [ 111 ] + xx [ 105 ] * xx [ 106 ] ) ; xx [ 113 ] = xx [ 101 ]
+ xx [ 7 ] * ( xx [ 105 ] * xx [ 111 ] - xx [ 107 ] * xx [ 106 ] ) ; xx [ 105
] = xx [ 88 ] - state [ 27 ] ; xx [ 114 ] = xx [ 112 ] ; xx [ 115 ] = xx [
113 ] ; xx [ 116 ] = xx [ 105 ] ; xx [ 117 ] = xx [ 73 ] * xx [ 112 ] ; xx [
118 ] = xx [ 73 ] * xx [ 113 ] ; xx [ 119 ] = xx [ 73 ] * xx [ 105 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 117 , xx + 120 ) ; xx [ 105 ] = xx
[ 120 ] - xx [ 73 ] * state [ 27 ] * xx [ 113 ] ; xx [ 107 ] = xx [ 121 ] +
xx [ 73 ] * xx [ 112 ] * state [ 27 ] ; xx [ 112 ] = xx [ 107 ] * xx [ 106 ]
; xx [ 113 ] = xx [ 105 ] * xx [ 106 ] ; xx [ 114 ] = 3.0e-3 ; xx [ 115 ] =
0.1 ; xx [ 116 ] = 0.069936 ; xx [ 117 ] = - ( xx [ 114 ] * xx [ 88 ] ) ; xx
[ 118 ] = - ( xx [ 116 ] * xx [ 88 ] ) ; xx [ 119 ] = xx [ 114 ] * xx [ 100 ]
+ xx [ 116 ] * xx [ 101 ] ; pm_math_Vector3_cross_ra ( xx + 102 , xx + 117 ,
xx + 123 ) ; xx [ 88 ] = xx [ 115 ] * xx [ 125 ] ; xx [ 102 ] = state [ 25 ]
* xx [ 100 ] ; xx [ 100 ] = xx [ 111 ] * xx [ 111 ] ; xx [ 103 ] = xx [ 7 ] *
xx [ 100 ] - xx [ 4 ] ; xx [ 104 ] = xx [ 73 ] * xx [ 103 ] ; xx [ 117 ] = xx
[ 7 ] * xx [ 111 ] * xx [ 106 ] ; xx [ 118 ] = xx [ 104 ] * xx [ 117 ] ; xx [
119 ] = xx [ 73 ] * xx [ 117 ] ; xx [ 126 ] = xx [ 119 ] * xx [ 103 ] ; xx [
127 ] = xx [ 7 ] * ( xx [ 100 ] + xx [ 106 ] * xx [ 106 ] ) - xx [ 4 ] ; xx [
100 ] = xx [ 115 ] * xx [ 127 ] * xx [ 127 ] ; xx [ 128 ] = xx [ 116 ] * xx [
100 ] ; xx [ 129 ] = xx [ 118 ] - xx [ 126 ] + xx [ 114 ] * xx [ 128 ] ; xx [
130 ] = state [ 25 ] * xx [ 101 ] ; xx [ 101 ] = xx [ 104 ] * xx [ 103 ] ; xx
[ 104 ] = xx [ 119 ] * xx [ 117 ] ; xx [ 119 ] = xx [ 114 ] * xx [ 100 ] ; xx
[ 131 ] = xx [ 73 ] + xx [ 101 ] + xx [ 104 ] + xx [ 114 ] * xx [ 119 ] ; xx
[ 132 ] = 0.0339 ; xx [ 133 ] = 4.000000000000004e-3 ; xx [ 134 ] = xx [ 132
] * xx [ 83 ] ; xx [ 135 ] = - ( xx [ 133 ] * xx [ 64 ] + xx [ 132 ] * xx [
82 ] ) ; xx [ 136 ] = xx [ 133 ] * xx [ 83 ] ; pm_math_Vector3_cross_ra ( xx
+ 84 , xx + 134 , xx + 137 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 96 ,
xx + 137 , xx + 82 ) ; xx [ 85 ] = xx [ 73 ] + xx [ 104 ] + xx [ 101 ] + xx [
116 ] * xx [ 128 ] ; xx [ 86 ] = xx [ 126 ] - xx [ 118 ] + xx [ 116 ] * xx [
119 ] ; xx [ 101 ] = state [ 26 ] ; if ( xx [ 1 ] < xx [ 101 ] ) xx [ 101 ] =
xx [ 1 ] ; xx [ 104 ] = - ( xx [ 101 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [
104 ] ) xx [ 104 ] = xx [ 4 ] ; xx [ 118 ] = xx [ 8 ] * state [ 27 ] ; xx [
120 ] = xx [ 104 ] * xx [ 104 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 104 ] ) * ( (
- xx [ 101 ] == xx [ 1 ] ? xx [ 1 ] : - xx [ 118 ] ) - xx [ 10 ] * xx [ 101 ]
) ; if ( xx [ 1 ] > xx [ 120 ] ) xx [ 120 ] = xx [ 1 ] ; xx [ 101 ] = 100.0 ;
xx [ 104 ] = 0.84 ; xx [ 121 ] = state [ 26 ] - xx [ 104 ] ; if ( xx [ 1 ] >
xx [ 121 ] ) xx [ 121 ] = xx [ 1 ] ; xx [ 126 ] = xx [ 121 ] / xx [ 3 ] ; if
( xx [ 4 ] < xx [ 126 ] ) xx [ 126 ] = xx [ 4 ] ; xx [ 134 ] = xx [ 126 ] *
xx [ 126 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 126 ] ) * ( xx [ 10 ] * xx [ 121 ]
+ ( xx [ 121 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 118 ] ) ) ; if ( xx [ 1 ] > xx [
134 ] ) xx [ 134 ] = xx [ 1 ] ; memcpy ( xx + 118 , xx + 73 , 1 * sizeof (
double ) ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 118 , 1 , xx + 121 ) ;
bb [ 0 ] = ii [ 0 ] != 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j33_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 121 , xx + 118 , 1 * sizeof ( double ) ) ; xx
[ 126 ] = ( xx [ 120 ] - xx [ 101 ] * state [ 27 ] - xx [ 134 ] + xx [ 122 ]
) / xx [ 121 ] ; xx [ 120 ] = xx [ 106 ] * xx [ 123 ] ; xx [ 125 ] = xx [ 106
] * xx [ 124 ] ; xx [ 134 ] = xx [ 115 ] * ( xx [ 124 ] + xx [ 7 ] * ( xx [
120 ] * xx [ 111 ] - xx [ 125 ] * xx [ 106 ] ) ) ; xx [ 124 ] = xx [ 115 ] *
( xx [ 123 ] - xx [ 7 ] * ( xx [ 125 ] * xx [ 111 ] + xx [ 120 ] * xx [ 106 ]
) ) ; xx [ 120 ] = xx [ 124 ] * xx [ 106 ] ; xx [ 123 ] = xx [ 134 ] * xx [
106 ] ; xx [ 125 ] = xx [ 134 ] - xx [ 7 ] * ( xx [ 120 ] * xx [ 111 ] + xx [
123 ] * xx [ 106 ] ) ; xx [ 134 ] = xx [ 124 ] + xx [ 7 ] * ( xx [ 123 ] * xx
[ 111 ] - xx [ 120 ] * xx [ 106 ] ) ; xx [ 120 ] = xx [ 115 ] * xx [ 103 ] ;
xx [ 123 ] = xx [ 120 ] * xx [ 103 ] ; xx [ 124 ] = xx [ 115 ] * xx [ 117 ] ;
xx [ 135 ] = xx [ 124 ] * xx [ 117 ] ; xx [ 136 ] = xx [ 123 ] + xx [ 135 ] ;
xx [ 137 ] = xx [ 120 ] * xx [ 117 ] ; xx [ 117 ] = xx [ 124 ] * xx [ 103 ] ;
xx [ 103 ] = xx [ 137 ] - xx [ 117 ] ; xx [ 120 ] = xx [ 114 ] * xx [ 136 ] +
xx [ 116 ] * xx [ 103 ] ; xx [ 124 ] = xx [ 117 ] - xx [ 137 ] ; xx [ 117 ] =
xx [ 135 ] + xx [ 123 ] ; xx [ 123 ] = xx [ 114 ] * xx [ 124 ] + xx [ 116 ] *
xx [ 117 ] ; xx [ 135 ] = xx [ 110 ] + xx [ 122 ] - xx [ 73 ] * xx [ 126 ] -
( xx [ 116 ] * xx [ 125 ] + xx [ 114 ] * xx [ 134 ] ) - ( xx [ 120 ] * xx [
82 ] + xx [ 123 ] * xx [ 83 ] ) ; xx [ 110 ] = xx [ 73 ] / xx [ 121 ] ; xx [
121 ] = xx [ 73 ] + ( xx [ 73 ] - xx [ 73 ] * xx [ 110 ] ) * xx [ 127 ] * xx
[ 127 ] + xx [ 116 ] * xx [ 123 ] + xx [ 114 ] * xx [ 120 ] ; xx [ 122 ] =
state [ 24 ] ; if ( xx [ 1 ] < xx [ 122 ] ) xx [ 122 ] = xx [ 1 ] ; xx [ 127
] = - ( xx [ 122 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 127 ] ) xx [ 127 ] =
xx [ 4 ] ; xx [ 137 ] = xx [ 8 ] * state [ 25 ] ; xx [ 138 ] = xx [ 127 ] *
xx [ 127 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 127 ] ) * ( ( - xx [ 122 ] == xx [
1 ] ? xx [ 1 ] : - xx [ 137 ] ) - xx [ 10 ] * xx [ 122 ] ) ; if ( xx [ 1 ] >
xx [ 138 ] ) xx [ 138 ] = xx [ 1 ] ; xx [ 122 ] = 2.44 ; xx [ 127 ] = state [
24 ] - xx [ 122 ] ; if ( xx [ 1 ] > xx [ 127 ] ) xx [ 127 ] = xx [ 1 ] ; xx [
139 ] = xx [ 127 ] / xx [ 3 ] ; if ( xx [ 4 ] < xx [ 139 ] ) xx [ 139 ] = xx
[ 4 ] ; xx [ 140 ] = xx [ 139 ] * xx [ 139 ] * ( xx [ 6 ] - xx [ 7 ] * xx [
139 ] ) * ( xx [ 10 ] * xx [ 127 ] + ( xx [ 127 ] == xx [ 1 ] ? xx [ 1 ] : xx
[ 137 ] ) ) ; if ( xx [ 1 ] > xx [ 140 ] ) xx [ 140 ] = xx [ 1 ] ; memcpy (
xx + 127 , xx + 121 , 1 * sizeof ( double ) ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 127 , 1 , xx + 137 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j32_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 137 ] = ( xx [ 138 ] - xx [ 101 ] * state [ 25 ] - xx
[ 140 ] + xx [ 135 ] ) / xx [ 127 ] ; xx [ 138 ] = xx [ 108 ] + xx [ 105 ] +
xx [ 7 ] * ( xx [ 112 ] * xx [ 111 ] - xx [ 113 ] * xx [ 106 ] ) + xx [ 114 ]
* xx [ 88 ] + xx [ 102 ] * xx [ 129 ] - xx [ 130 ] * xx [ 131 ] + xx [ 119 ]
* xx [ 84 ] ; xx [ 139 ] = xx [ 109 ] + xx [ 107 ] - xx [ 7 ] * ( xx [ 113 ]
* xx [ 111 ] + xx [ 112 ] * xx [ 106 ] ) + xx [ 116 ] * xx [ 88 ] + xx [ 102
] * xx [ 85 ] - xx [ 130 ] * xx [ 86 ] + xx [ 128 ] * xx [ 84 ] ; xx [ 140 ]
= xx [ 135 ] - xx [ 121 ] * xx [ 137 ] ; pm_math_Quaternion_xform_ra ( xx +
96 , xx + 138 , xx + 105 ) ; xx [ 108 ] = xx [ 115 ] + xx [ 136 ] ; xx [ 109
] = xx [ 115 ] + xx [ 117 ] ; xx [ 111 ] = xx [ 115 ] + xx [ 100 ] ; xx [ 138
] = xx [ 134 ] + xx [ 108 ] * xx [ 82 ] + xx [ 103 ] * xx [ 83 ] + xx [ 120 ]
* xx [ 137 ] ; xx [ 139 ] = xx [ 125 ] + xx [ 124 ] * xx [ 82 ] + xx [ 109 ]
* xx [ 83 ] + xx [ 123 ] * xx [ 137 ] ; xx [ 140 ] = xx [ 88 ] + xx [ 111 ] *
xx [ 84 ] - ( xx [ 119 ] * xx [ 130 ] - xx [ 128 ] * xx [ 102 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 96 , xx + 138 , xx + 82 ) ; xx [ 88 ] = xx
[ 89 ] * xx [ 89 ] ; xx [ 100 ] = xx [ 7 ] * ( xx [ 88 ] + xx [ 94 ] * xx [
94 ] ) - xx [ 4 ] ; xx [ 102 ] = xx [ 94 ] * xx [ 87 ] ; xx [ 112 ] = xx [ 89
] * xx [ 95 ] ; xx [ 113 ] = xx [ 7 ] * ( xx [ 102 ] + xx [ 112 ] ) ; xx [
117 ] = xx [ 89 ] * xx [ 87 ] ; xx [ 125 ] = xx [ 95 ] * xx [ 94 ] ; xx [ 130
] = xx [ 7 ] * ( xx [ 117 ] - xx [ 125 ] ) ; xx [ 134 ] = xx [ 7 ] * ( xx [
102 ] - xx [ 112 ] ) ; xx [ 102 ] = xx [ 7 ] * ( xx [ 88 ] + xx [ 87 ] * xx [
87 ] ) - xx [ 4 ] ; xx [ 112 ] = xx [ 95 ] * xx [ 87 ] ; xx [ 87 ] = xx [ 89
] * xx [ 94 ] ; xx [ 89 ] = xx [ 7 ] * ( xx [ 112 ] + xx [ 87 ] ) ; xx [ 94 ]
= xx [ 7 ] * ( xx [ 125 ] + xx [ 117 ] ) ; xx [ 117 ] = xx [ 7 ] * ( xx [ 87
] - xx [ 112 ] ) ; xx [ 87 ] = xx [ 7 ] * ( xx [ 88 ] + xx [ 95 ] * xx [ 95 ]
) - xx [ 4 ] ; xx [ 138 ] = xx [ 100 ] ; xx [ 139 ] = xx [ 113 ] ; xx [ 140 ]
= xx [ 130 ] ; xx [ 141 ] = xx [ 134 ] ; xx [ 142 ] = xx [ 102 ] ; xx [ 143 ]
= - xx [ 89 ] ; xx [ 144 ] = - xx [ 94 ] ; xx [ 145 ] = xx [ 117 ] ; xx [ 146
] = xx [ 87 ] ; xx [ 88 ] = xx [ 120 ] / xx [ 127 ] ; xx [ 95 ] = xx [ 121 ]
* xx [ 88 ] - xx [ 120 ] ; xx [ 112 ] = xx [ 123 ] / xx [ 127 ] ; xx [ 125 ]
= xx [ 121 ] * xx [ 112 ] - xx [ 123 ] ; xx [ 147 ] = xx [ 119 ] * xx [ 130 ]
; xx [ 148 ] = - ( xx [ 119 ] * xx [ 89 ] ) ; xx [ 149 ] = xx [ 119 ] * xx [
87 ] ; xx [ 150 ] = xx [ 128 ] * xx [ 130 ] ; xx [ 151 ] = - ( xx [ 128 ] *
xx [ 89 ] ) ; xx [ 152 ] = xx [ 128 ] * xx [ 87 ] ; xx [ 153 ] = xx [ 100 ] *
xx [ 95 ] + xx [ 113 ] * xx [ 125 ] ; xx [ 154 ] = xx [ 134 ] * xx [ 95 ] +
xx [ 102 ] * xx [ 125 ] ; xx [ 155 ] = xx [ 117 ] * xx [ 125 ] - xx [ 94 ] *
xx [ 95 ] ; pm_math_Matrix3x3_compose_ra ( xx + 138 , xx + 147 , xx + 156 ) ;
xx [ 95 ] = xx [ 108 ] - xx [ 120 ] * xx [ 88 ] ; xx [ 108 ] = xx [ 123 ] *
xx [ 88 ] ; xx [ 119 ] = xx [ 103 ] - xx [ 108 ] ; xx [ 103 ] = xx [ 124 ] -
xx [ 108 ] ; xx [ 108 ] = xx [ 109 ] - xx [ 123 ] * xx [ 112 ] ; xx [ 147 ] =
xx [ 100 ] * xx [ 95 ] + xx [ 113 ] * xx [ 119 ] ; xx [ 148 ] = xx [ 134 ] *
xx [ 95 ] + xx [ 102 ] * xx [ 119 ] ; xx [ 149 ] = xx [ 117 ] * xx [ 119 ] -
xx [ 94 ] * xx [ 95 ] ; xx [ 150 ] = xx [ 100 ] * xx [ 103 ] + xx [ 113 ] *
xx [ 108 ] ; xx [ 151 ] = xx [ 134 ] * xx [ 103 ] + xx [ 102 ] * xx [ 108 ] ;
xx [ 152 ] = xx [ 117 ] * xx [ 108 ] - xx [ 94 ] * xx [ 103 ] ; xx [ 153 ] =
xx [ 130 ] * xx [ 111 ] ; xx [ 154 ] = - ( xx [ 89 ] * xx [ 111 ] ) ; xx [
155 ] = xx [ 87 ] * xx [ 111 ] ; pm_math_Matrix3x3_compose_ra ( xx + 138 , xx
+ 147 , xx + 165 ) ; xx [ 95 ] = xx [ 132 ] * xx [ 166 ] ; xx [ 103 ] = xx [
156 ] - xx [ 95 ] ; xx [ 108 ] = xx [ 132 ] * xx [ 169 ] ; xx [ 109 ] = xx [
157 ] - xx [ 108 ] ; xx [ 111 ] = xx [ 132 ] * xx [ 172 ] ; xx [ 119 ] = xx [
158 ] - xx [ 111 ] ; xx [ 120 ] = xx [ 133 ] * xx [ 167 ] + xx [ 132 ] * xx [
165 ] ; xx [ 123 ] = xx [ 159 ] + xx [ 120 ] ; xx [ 124 ] = xx [ 133 ] * xx [
170 ] + xx [ 132 ] * xx [ 168 ] ; xx [ 125 ] = xx [ 160 ] + xx [ 124 ] ; xx [
128 ] = xx [ 133 ] * xx [ 173 ] + xx [ 132 ] * xx [ 171 ] ; xx [ 135 ] = xx [
161 ] + xx [ 128 ] ; xx [ 136 ] = xx [ 133 ] * xx [ 166 ] ; xx [ 147 ] = xx [
162 ] - xx [ 136 ] ; xx [ 148 ] = xx [ 133 ] * xx [ 169 ] ; xx [ 149 ] = xx [
163 ] - xx [ 148 ] ; xx [ 150 ] = xx [ 133 ] * xx [ 172 ] ; xx [ 151 ] = xx [
164 ] - xx [ 150 ] ; xx [ 174 ] = xx [ 103 ] ; xx [ 175 ] = xx [ 109 ] ; xx [
176 ] = xx [ 119 ] ; xx [ 177 ] = xx [ 123 ] ; xx [ 178 ] = xx [ 125 ] ; xx [
179 ] = xx [ 135 ] ; xx [ 180 ] = xx [ 147 ] ; xx [ 181 ] = xx [ 149 ] ; xx [
182 ] = xx [ 151 ] ; xx [ 152 ] = 0.0252 ; xx [ 153 ] = 9.434758529991427e-12
; xx [ 154 ] = 0.04599999999999999 ; xx [ 155 ] = xx [ 152 ] ;
pm_math_Vector3_cross_ra ( xx + 75 , xx + 153 , xx + 183 ) ;
pm_math_Vector3_cross_ra ( xx + 75 , xx + 183 , xx + 186 ) ; xx [ 183 ] = xx
[ 69 ] * xx [ 187 ] ; xx [ 184 ] = xx [ 69 ] * xx [ 186 ] ; xx [ 185 ] = xx [
186 ] - xx [ 7 ] * ( xx [ 65 ] * xx [ 183 ] + xx [ 69 ] * xx [ 184 ] ) ; xx [
189 ] = xx [ 187 ] + xx [ 7 ] * ( xx [ 65 ] * xx [ 184 ] - xx [ 69 ] * xx [
183 ] ) ; xx [ 190 ] = xx [ 185 ] ; xx [ 191 ] = xx [ 189 ] ; xx [ 192 ] = xx
[ 188 ] ; pm_math_Matrix3x3_xform_ra ( xx + 174 , xx + 190 , xx + 193 ) ; xx
[ 174 ] = xx [ 115 ] + xx [ 165 ] ; xx [ 165 ] = xx [ 115 ] + xx [ 169 ] ; xx
[ 169 ] = xx [ 115 ] + xx [ 173 ] ; xx [ 175 ] = xx [ 174 ] ; xx [ 176 ] = xx
[ 166 ] ; xx [ 177 ] = xx [ 167 ] ; xx [ 178 ] = xx [ 168 ] ; xx [ 179 ] = xx
[ 165 ] ; xx [ 180 ] = xx [ 170 ] ; xx [ 181 ] = xx [ 171 ] ; xx [ 182 ] = xx
[ 172 ] ; xx [ 183 ] = xx [ 169 ] ; pm_math_Matrix3x3_xform_ra ( xx + 175 ,
xx + 190 , xx + 196 ) ; xx [ 175 ] = xx [ 82 ] + xx [ 196 ] ; xx [ 176 ] = xx
[ 69 ] * xx [ 175 ] ; xx [ 177 ] = xx [ 83 ] + xx [ 197 ] ; xx [ 178 ] = xx [
69 ] * xx [ 177 ] ; xx [ 179 ] = xx [ 175 ] - xx [ 7 ] * ( xx [ 69 ] * xx [
176 ] - xx [ 65 ] * xx [ 178 ] ) ; xx [ 175 ] = xx [ 177 ] - xx [ 7 ] * ( xx
[ 65 ] * xx [ 176 ] + xx [ 69 ] * xx [ 178 ] ) ; xx [ 176 ] = xx [ 84 ] + xx
[ 198 ] ; xx [ 180 ] = xx [ 179 ] ; xx [ 181 ] = xx [ 175 ] ; xx [ 182 ] = xx
[ 176 ] ; pm_math_Vector3_cross_ra ( xx + 153 , xx + 180 , xx + 190 ) ; xx [
177 ] = 0.7071054825112363 ; xx [ 178 ] = xx [ 5 ] * state [ 18 ] ; xx [ 180
] = sin ( xx [ 178 ] ) ; xx [ 181 ] = 0.7071080798594735 ; xx [ 182 ] = cos (
xx [ 178 ] ) ; xx [ 178 ] = xx [ 177 ] * xx [ 180 ] + xx [ 181 ] * xx [ 182 ]
; xx [ 183 ] = xx [ 66 ] * xx [ 178 ] ; xx [ 184 ] = xx [ 181 ] * xx [ 180 ]
- xx [ 177 ] * xx [ 182 ] ; xx [ 180 ] = xx [ 74 ] * xx [ 178 ] ; xx [ 182 ]
= xx [ 74 ] - xx [ 7 ] * ( xx [ 183 ] * xx [ 184 ] + xx [ 180 ] * xx [ 178 ]
) ; xx [ 186 ] = xx [ 66 ] - xx [ 7 ] * ( xx [ 183 ] * xx [ 178 ] - xx [ 180
] * xx [ 184 ] ) ; xx [ 180 ] = xx [ 64 ] + state [ 19 ] ; xx [ 196 ] = xx [
182 ] ; xx [ 197 ] = xx [ 186 ] ; xx [ 198 ] = xx [ 180 ] ; xx [ 199 ] = xx [
73 ] * xx [ 182 ] ; xx [ 200 ] = xx [ 73 ] * xx [ 186 ] ; xx [ 201 ] = xx [
73 ] * xx [ 180 ] ; pm_math_Vector3_cross_ra ( xx + 196 , xx + 199 , xx + 202
) ; xx [ 183 ] = xx [ 5 ] * state [ 20 ] ; xx [ 187 ] = cos ( xx [ 183 ] ) ;
xx [ 199 ] = xx [ 81 ] * xx [ 187 ] ; xx [ 200 ] = xx [ 93 ] * xx [ 187 ] ;
xx [ 187 ] = sin ( xx [ 183 ] ) ; xx [ 183 ] = xx [ 93 ] * xx [ 187 ] ; xx [
201 ] = xx [ 81 ] * xx [ 187 ] ; xx [ 205 ] = - xx [ 199 ] ; xx [ 206 ] = -
xx [ 200 ] ; xx [ 207 ] = - xx [ 183 ] ; xx [ 208 ] = xx [ 201 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 205 , xx + 196 , xx + 209 ) ; xx [
187 ] = xx [ 211 ] - state [ 21 ] ; xx [ 211 ] = xx [ 209 ] ; xx [ 212 ] = xx
[ 210 ] ; xx [ 213 ] = xx [ 187 ] ; xx [ 214 ] = xx [ 73 ] * xx [ 209 ] ; xx
[ 215 ] = xx [ 73 ] * xx [ 210 ] ; xx [ 216 ] = xx [ 73 ] * xx [ 187 ] ;
pm_math_Vector3_cross_ra ( xx + 211 , xx + 214 , xx + 217 ) ; xx [ 214 ] = xx
[ 5 ] * state [ 22 ] ; xx [ 215 ] = sin ( xx [ 214 ] ) ; xx [ 216 ] = xx [
215 ] * xx [ 210 ] ; xx [ 220 ] = cos ( xx [ 214 ] ) ; xx [ 214 ] = xx [ 215
] * xx [ 209 ] ; xx [ 221 ] = xx [ 209 ] - xx [ 7 ] * ( xx [ 216 ] * xx [ 220
] + xx [ 214 ] * xx [ 215 ] ) ; xx [ 222 ] = xx [ 210 ] + xx [ 7 ] * ( xx [
214 ] * xx [ 220 ] - xx [ 216 ] * xx [ 215 ] ) ; xx [ 214 ] = xx [ 187 ] -
state [ 23 ] ; xx [ 223 ] = xx [ 221 ] ; xx [ 224 ] = xx [ 222 ] ; xx [ 225 ]
= xx [ 214 ] ; xx [ 226 ] = xx [ 73 ] * xx [ 221 ] ; xx [ 227 ] = xx [ 73 ] *
xx [ 222 ] ; xx [ 228 ] = xx [ 73 ] * xx [ 214 ] ; pm_math_Vector3_cross_ra (
xx + 223 , xx + 226 , xx + 229 ) ; xx [ 214 ] = xx [ 229 ] - xx [ 73 ] *
state [ 23 ] * xx [ 222 ] ; xx [ 216 ] = xx [ 230 ] + xx [ 73 ] * xx [ 221 ]
* state [ 23 ] ; xx [ 221 ] = xx [ 216 ] * xx [ 215 ] ; xx [ 222 ] = xx [ 214
] * xx [ 215 ] ; xx [ 223 ] = - ( xx [ 114 ] * xx [ 187 ] ) ; xx [ 224 ] = -
( xx [ 116 ] * xx [ 187 ] ) ; xx [ 225 ] = xx [ 114 ] * xx [ 209 ] + xx [ 116
] * xx [ 210 ] ; pm_math_Vector3_cross_ra ( xx + 211 , xx + 223 , xx + 226 )
; xx [ 187 ] = xx [ 115 ] * xx [ 228 ] ; xx [ 211 ] = state [ 21 ] * xx [ 209
] ; xx [ 209 ] = xx [ 220 ] * xx [ 220 ] ; xx [ 212 ] = xx [ 7 ] * xx [ 209 ]
- xx [ 4 ] ; xx [ 213 ] = xx [ 73 ] * xx [ 212 ] ; xx [ 223 ] = xx [ 7 ] * xx
[ 220 ] * xx [ 215 ] ; xx [ 224 ] = xx [ 213 ] * xx [ 223 ] ; xx [ 225 ] = xx
[ 73 ] * xx [ 223 ] ; xx [ 232 ] = xx [ 225 ] * xx [ 212 ] ; xx [ 233 ] = xx
[ 7 ] * ( xx [ 209 ] + xx [ 215 ] * xx [ 215 ] ) - xx [ 4 ] ; xx [ 209 ] = xx
[ 115 ] * xx [ 233 ] * xx [ 233 ] ; xx [ 234 ] = xx [ 116 ] * xx [ 209 ] ; xx
[ 235 ] = xx [ 224 ] - xx [ 232 ] + xx [ 114 ] * xx [ 234 ] ; xx [ 236 ] =
state [ 21 ] * xx [ 210 ] ; xx [ 210 ] = xx [ 213 ] * xx [ 212 ] ; xx [ 213 ]
= xx [ 225 ] * xx [ 223 ] ; xx [ 225 ] = xx [ 114 ] * xx [ 209 ] ; xx [ 237 ]
= xx [ 73 ] + xx [ 210 ] + xx [ 213 ] + xx [ 114 ] * xx [ 225 ] ; xx [ 238 ]
= xx [ 132 ] * xx [ 186 ] ; xx [ 239 ] = - ( xx [ 133 ] * xx [ 180 ] + xx [
132 ] * xx [ 182 ] ) ; xx [ 240 ] = xx [ 133 ] * xx [ 186 ] ;
pm_math_Vector3_cross_ra ( xx + 196 , xx + 238 , xx + 241 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 205 , xx + 241 , xx + 196 ) ; xx [
238 ] = xx [ 73 ] + xx [ 213 ] + xx [ 210 ] + xx [ 116 ] * xx [ 234 ] ; xx [
210 ] = xx [ 232 ] - xx [ 224 ] + xx [ 116 ] * xx [ 225 ] ; xx [ 213 ] =
state [ 22 ] ; if ( xx [ 1 ] < xx [ 213 ] ) xx [ 213 ] = xx [ 1 ] ; xx [ 224
] = - ( xx [ 213 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 224 ] ) xx [ 224 ] =
xx [ 4 ] ; xx [ 229 ] = xx [ 8 ] * state [ 23 ] ; xx [ 230 ] = xx [ 224 ] *
xx [ 224 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 224 ] ) * ( ( - xx [ 213 ] == xx [
1 ] ? xx [ 1 ] : - xx [ 229 ] ) - xx [ 10 ] * xx [ 213 ] ) ; if ( xx [ 1 ] >
xx [ 230 ] ) xx [ 230 ] = xx [ 1 ] ; xx [ 213 ] = state [ 22 ] - xx [ 104 ] ;
if ( xx [ 1 ] > xx [ 213 ] ) xx [ 213 ] = xx [ 1 ] ; xx [ 224 ] = xx [ 213 ]
/ xx [ 3 ] ; if ( xx [ 4 ] < xx [ 224 ] ) xx [ 224 ] = xx [ 4 ] ; xx [ 232 ]
= xx [ 224 ] * xx [ 224 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 224 ] ) * ( xx [ 10
] * xx [ 213 ] + ( xx [ 213 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 229 ] ) ) ; if (
xx [ 1 ] > xx [ 232 ] ) xx [ 232 ] = xx [ 1 ] ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j23_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 213 , xx + 118 , 1 * sizeof ( double ) ) ; xx
[ 224 ] = ( xx [ 230 ] - xx [ 101 ] * state [ 23 ] - xx [ 232 ] + xx [ 231 ]
) / xx [ 213 ] ; xx [ 228 ] = xx [ 215 ] * xx [ 226 ] ; xx [ 229 ] = xx [ 215
] * xx [ 227 ] ; xx [ 230 ] = xx [ 115 ] * ( xx [ 227 ] + xx [ 7 ] * ( xx [
228 ] * xx [ 220 ] - xx [ 229 ] * xx [ 215 ] ) ) ; xx [ 227 ] = xx [ 115 ] *
( xx [ 226 ] - xx [ 7 ] * ( xx [ 229 ] * xx [ 220 ] + xx [ 228 ] * xx [ 215 ]
) ) ; xx [ 226 ] = xx [ 227 ] * xx [ 215 ] ; xx [ 228 ] = xx [ 230 ] * xx [
215 ] ; xx [ 229 ] = xx [ 230 ] - xx [ 7 ] * ( xx [ 226 ] * xx [ 220 ] + xx [
228 ] * xx [ 215 ] ) ; xx [ 230 ] = xx [ 227 ] + xx [ 7 ] * ( xx [ 228 ] * xx
[ 220 ] - xx [ 226 ] * xx [ 215 ] ) ; xx [ 226 ] = xx [ 115 ] * xx [ 212 ] ;
xx [ 227 ] = xx [ 226 ] * xx [ 212 ] ; xx [ 228 ] = xx [ 115 ] * xx [ 223 ] ;
xx [ 232 ] = xx [ 228 ] * xx [ 223 ] ; xx [ 239 ] = xx [ 227 ] + xx [ 232 ] ;
xx [ 240 ] = xx [ 226 ] * xx [ 223 ] ; xx [ 223 ] = xx [ 228 ] * xx [ 212 ] ;
xx [ 212 ] = xx [ 240 ] - xx [ 223 ] ; xx [ 226 ] = xx [ 114 ] * xx [ 239 ] +
xx [ 116 ] * xx [ 212 ] ; xx [ 228 ] = xx [ 223 ] - xx [ 240 ] ; xx [ 223 ] =
xx [ 232 ] + xx [ 227 ] ; xx [ 227 ] = xx [ 114 ] * xx [ 228 ] + xx [ 116 ] *
xx [ 223 ] ; xx [ 232 ] = xx [ 219 ] + xx [ 231 ] - xx [ 73 ] * xx [ 224 ] -
( xx [ 116 ] * xx [ 229 ] + xx [ 114 ] * xx [ 230 ] ) - ( xx [ 226 ] * xx [
196 ] + xx [ 227 ] * xx [ 197 ] ) ; xx [ 219 ] = xx [ 73 ] / xx [ 213 ] ; xx
[ 213 ] = xx [ 73 ] + ( xx [ 73 ] - xx [ 73 ] * xx [ 219 ] ) * xx [ 233 ] *
xx [ 233 ] + xx [ 116 ] * xx [ 227 ] + xx [ 114 ] * xx [ 226 ] ; xx [ 231 ] =
state [ 20 ] ; if ( xx [ 1 ] < xx [ 231 ] ) xx [ 231 ] = xx [ 1 ] ; xx [ 233
] = - ( xx [ 231 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 233 ] ) xx [ 233 ] =
xx [ 4 ] ; xx [ 240 ] = xx [ 8 ] * state [ 21 ] ; xx [ 241 ] = xx [ 233 ] *
xx [ 233 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 233 ] ) * ( ( - xx [ 231 ] == xx [
1 ] ? xx [ 1 ] : - xx [ 240 ] ) - xx [ 10 ] * xx [ 231 ] ) ; if ( xx [ 1 ] >
xx [ 241 ] ) xx [ 241 ] = xx [ 1 ] ; xx [ 231 ] = state [ 20 ] - xx [ 122 ] ;
if ( xx [ 1 ] > xx [ 231 ] ) xx [ 231 ] = xx [ 1 ] ; xx [ 233 ] = xx [ 231 ]
/ xx [ 3 ] ; if ( xx [ 4 ] < xx [ 233 ] ) xx [ 233 ] = xx [ 4 ] ; xx [ 242 ]
= xx [ 233 ] * xx [ 233 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 233 ] ) * ( xx [ 10
] * xx [ 231 ] + ( xx [ 231 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 240 ] ) ) ; if (
xx [ 1 ] > xx [ 242 ] ) xx [ 242 ] = xx [ 1 ] ; memcpy ( xx + 231 , xx + 213
, 1 * sizeof ( double ) ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 231 , 1 ,
xx + 233 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j22_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 233 ] = ( xx [ 241 ] - xx [ 101 ] * state [ 21 ] - xx
[ 242 ] + xx [ 232 ] ) / xx [ 231 ] ; xx [ 240 ] = xx [ 217 ] + xx [ 214 ] +
xx [ 7 ] * ( xx [ 221 ] * xx [ 220 ] - xx [ 222 ] * xx [ 215 ] ) + xx [ 114 ]
* xx [ 187 ] + xx [ 211 ] * xx [ 235 ] - xx [ 236 ] * xx [ 237 ] + xx [ 225 ]
* xx [ 198 ] ; xx [ 241 ] = xx [ 218 ] + xx [ 216 ] - xx [ 7 ] * ( xx [ 222 ]
* xx [ 220 ] + xx [ 221 ] * xx [ 215 ] ) + xx [ 116 ] * xx [ 187 ] + xx [ 211
] * xx [ 238 ] - xx [ 236 ] * xx [ 210 ] + xx [ 234 ] * xx [ 198 ] ; xx [ 242
] = xx [ 232 ] - xx [ 213 ] * xx [ 233 ] ; pm_math_Quaternion_xform_ra ( xx +
205 , xx + 240 , xx + 214 ) ; xx [ 217 ] = xx [ 115 ] + xx [ 239 ] ; xx [ 218
] = xx [ 115 ] + xx [ 223 ] ; xx [ 220 ] = xx [ 115 ] + xx [ 209 ] ; xx [ 221
] = xx [ 230 ] + xx [ 217 ] * xx [ 196 ] + xx [ 212 ] * xx [ 197 ] + xx [ 226
] * xx [ 233 ] ; xx [ 222 ] = xx [ 229 ] + xx [ 228 ] * xx [ 196 ] + xx [ 218
] * xx [ 197 ] + xx [ 227 ] * xx [ 233 ] ; xx [ 223 ] = xx [ 187 ] + xx [ 220
] * xx [ 198 ] - ( xx [ 225 ] * xx [ 236 ] - xx [ 234 ] * xx [ 211 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 205 , xx + 221 , xx + 196 ) ; xx [ 187 ] =
xx [ 186 ] * state [ 19 ] ; xx [ 186 ] = xx [ 199 ] * xx [ 199 ] ; xx [ 209 ]
= xx [ 7 ] * ( xx [ 186 ] + xx [ 200 ] * xx [ 200 ] ) - xx [ 4 ] ; xx [ 211 ]
= xx [ 200 ] * xx [ 183 ] ; xx [ 221 ] = xx [ 199 ] * xx [ 201 ] ; xx [ 222 ]
= xx [ 7 ] * ( xx [ 211 ] + xx [ 221 ] ) ; xx [ 223 ] = xx [ 199 ] * xx [ 183
] ; xx [ 229 ] = xx [ 201 ] * xx [ 200 ] ; xx [ 230 ] = xx [ 7 ] * ( xx [ 223
] - xx [ 229 ] ) ; xx [ 232 ] = xx [ 7 ] * ( xx [ 211 ] - xx [ 221 ] ) ; xx [
211 ] = xx [ 7 ] * ( xx [ 186 ] + xx [ 183 ] * xx [ 183 ] ) - xx [ 4 ] ; xx [
221 ] = xx [ 201 ] * xx [ 183 ] ; xx [ 183 ] = xx [ 199 ] * xx [ 200 ] ; xx [
199 ] = xx [ 7 ] * ( xx [ 221 ] + xx [ 183 ] ) ; xx [ 200 ] = xx [ 7 ] * ( xx
[ 229 ] + xx [ 223 ] ) ; xx [ 223 ] = xx [ 7 ] * ( xx [ 183 ] - xx [ 221 ] )
; xx [ 183 ] = xx [ 7 ] * ( xx [ 186 ] + xx [ 201 ] * xx [ 201 ] ) - xx [ 4 ]
; xx [ 239 ] = xx [ 209 ] ; xx [ 240 ] = xx [ 222 ] ; xx [ 241 ] = xx [ 230 ]
; xx [ 242 ] = xx [ 232 ] ; xx [ 243 ] = xx [ 211 ] ; xx [ 244 ] = - xx [ 199
] ; xx [ 245 ] = - xx [ 200 ] ; xx [ 246 ] = xx [ 223 ] ; xx [ 247 ] = xx [
183 ] ; xx [ 186 ] = xx [ 213 ] / xx [ 231 ] ; xx [ 201 ] = xx [ 213 ] - xx [
213 ] * xx [ 186 ] ; xx [ 248 ] = xx [ 209 ] * xx [ 237 ] + xx [ 222 ] * xx [
235 ] ; xx [ 249 ] = xx [ 232 ] * xx [ 237 ] + xx [ 211 ] * xx [ 235 ] ; xx [
250 ] = xx [ 223 ] * xx [ 235 ] - xx [ 200 ] * xx [ 237 ] ; xx [ 251 ] = xx [
209 ] * xx [ 210 ] + xx [ 222 ] * xx [ 238 ] ; xx [ 252 ] = xx [ 232 ] * xx [
210 ] + xx [ 211 ] * xx [ 238 ] ; xx [ 253 ] = xx [ 223 ] * xx [ 238 ] - xx [
200 ] * xx [ 210 ] ; xx [ 254 ] = xx [ 230 ] * xx [ 201 ] ; xx [ 255 ] = - (
xx [ 199 ] * xx [ 201 ] ) ; xx [ 256 ] = xx [ 183 ] * xx [ 201 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 239 , xx + 248 , xx + 257 ) ; xx [ 201 ]
= xx [ 226 ] / xx [ 231 ] ; xx [ 210 ] = xx [ 213 ] * xx [ 201 ] - xx [ 226 ]
; xx [ 221 ] = xx [ 227 ] / xx [ 231 ] ; xx [ 229 ] = xx [ 213 ] * xx [ 221 ]
- xx [ 227 ] ; xx [ 248 ] = xx [ 225 ] * xx [ 230 ] ; xx [ 249 ] = - ( xx [
225 ] * xx [ 199 ] ) ; xx [ 250 ] = xx [ 225 ] * xx [ 183 ] ; xx [ 251 ] = xx
[ 234 ] * xx [ 230 ] ; xx [ 252 ] = - ( xx [ 234 ] * xx [ 199 ] ) ; xx [ 253
] = xx [ 234 ] * xx [ 183 ] ; xx [ 254 ] = xx [ 209 ] * xx [ 210 ] + xx [ 222
] * xx [ 229 ] ; xx [ 255 ] = xx [ 232 ] * xx [ 210 ] + xx [ 211 ] * xx [ 229
] ; xx [ 256 ] = xx [ 223 ] * xx [ 229 ] - xx [ 200 ] * xx [ 210 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 239 , xx + 248 , xx + 266 ) ; xx [ 210 ]
= xx [ 132 ] * xx [ 273 ] ; xx [ 213 ] = xx [ 133 ] * xx [ 267 ] ; xx [ 225 ]
= xx [ 217 ] - xx [ 226 ] * xx [ 201 ] ; xx [ 217 ] = xx [ 227 ] * xx [ 201 ]
; xx [ 226 ] = xx [ 212 ] - xx [ 217 ] ; xx [ 212 ] = xx [ 228 ] - xx [ 217 ]
; xx [ 217 ] = xx [ 218 ] - xx [ 227 ] * xx [ 221 ] ; xx [ 248 ] = xx [ 209 ]
* xx [ 225 ] + xx [ 222 ] * xx [ 226 ] ; xx [ 249 ] = xx [ 232 ] * xx [ 225 ]
+ xx [ 211 ] * xx [ 226 ] ; xx [ 250 ] = xx [ 223 ] * xx [ 226 ] - xx [ 200 ]
* xx [ 225 ] ; xx [ 251 ] = xx [ 209 ] * xx [ 212 ] + xx [ 222 ] * xx [ 217 ]
; xx [ 252 ] = xx [ 232 ] * xx [ 212 ] + xx [ 211 ] * xx [ 217 ] ; xx [ 253 ]
= xx [ 223 ] * xx [ 217 ] - xx [ 200 ] * xx [ 212 ] ; xx [ 254 ] = xx [ 230 ]
* xx [ 220 ] ; xx [ 255 ] = - ( xx [ 199 ] * xx [ 220 ] ) ; xx [ 256 ] = xx [
183 ] * xx [ 220 ] ; pm_math_Matrix3x3_compose_ra ( xx + 239 , xx + 248 , xx
+ 275 ) ; xx [ 183 ] = xx [ 132 ] * xx [ 279 ] ; xx [ 199 ] = xx [ 263 ] - xx
[ 210 ] - xx [ 213 ] + xx [ 133 ] * xx [ 183 ] ; xx [ 200 ] = state [ 19 ] *
xx [ 182 ] ; xx [ 209 ] = xx [ 133 ] * xx [ 274 ] + xx [ 132 ] * xx [ 272 ] ;
xx [ 211 ] = xx [ 133 ] * xx [ 270 ] ; xx [ 212 ] = xx [ 133 ] * xx [ 280 ] +
xx [ 132 ] * xx [ 278 ] ; xx [ 217 ] = xx [ 264 ] + xx [ 209 ] - xx [ 211 ] -
xx [ 133 ] * xx [ 212 ] ; xx [ 218 ] = xx [ 132 ] * xx [ 276 ] ; xx [ 220 ] =
xx [ 266 ] - xx [ 218 ] ; xx [ 222 ] = xx [ 267 ] - xx [ 183 ] ; xx [ 223 ] =
xx [ 132 ] * xx [ 282 ] ; xx [ 225 ] = xx [ 268 ] - xx [ 223 ] ; xx [ 226 ] =
xx [ 133 ] * xx [ 277 ] + xx [ 132 ] * xx [ 275 ] ; xx [ 227 ] = xx [ 269 ] +
xx [ 226 ] ; xx [ 228 ] = xx [ 270 ] + xx [ 212 ] ; xx [ 229 ] = xx [ 133 ] *
xx [ 283 ] + xx [ 132 ] * xx [ 281 ] ; xx [ 230 ] = xx [ 271 ] + xx [ 229 ] ;
xx [ 231 ] = xx [ 133 ] * xx [ 276 ] ; xx [ 232 ] = xx [ 272 ] - xx [ 231 ] ;
xx [ 234 ] = xx [ 133 ] * xx [ 279 ] ; xx [ 235 ] = xx [ 273 ] - xx [ 234 ] ;
xx [ 236 ] = xx [ 133 ] * xx [ 282 ] ; xx [ 237 ] = xx [ 274 ] - xx [ 236 ] ;
xx [ 238 ] = xx [ 220 ] ; xx [ 239 ] = xx [ 222 ] ; xx [ 240 ] = xx [ 225 ] ;
xx [ 241 ] = xx [ 227 ] ; xx [ 242 ] = xx [ 228 ] ; xx [ 243 ] = xx [ 230 ] ;
xx [ 244 ] = xx [ 232 ] ; xx [ 245 ] = xx [ 235 ] ; xx [ 246 ] = xx [ 237 ] ;
xx [ 247 ] = 0.025 ; xx [ 248 ] = 0.046 ; xx [ 249 ] = xx [ 248 ] * xx [ 178
] ; xx [ 250 ] = xx [ 247 ] - ( xx [ 248 ] - xx [ 7 ] * xx [ 249 ] * xx [ 178
] ) ; xx [ 251 ] = xx [ 7 ] * xx [ 249 ] * xx [ 184 ] ; xx [ 252 ] = xx [ 152
] ; pm_math_Vector3_cross_ra ( xx + 75 , xx + 250 , xx + 253 ) ;
pm_math_Vector3_cross_ra ( xx + 75 , xx + 253 , xx + 284 ) ; xx [ 249 ] = xx
[ 178 ] * xx [ 285 ] ; xx [ 253 ] = xx [ 178 ] * xx [ 284 ] ; xx [ 254 ] = xx
[ 248 ] * state [ 19 ] ; xx [ 255 ] = xx [ 284 ] - xx [ 7 ] * ( xx [ 249 ] *
xx [ 184 ] + xx [ 253 ] * xx [ 178 ] ) + xx [ 254 ] * ( xx [ 64 ] + xx [ 180
] ) ; xx [ 180 ] = xx [ 285 ] - xx [ 7 ] * ( xx [ 249 ] * xx [ 178 ] - xx [
253 ] * xx [ 184 ] ) ; xx [ 249 ] = xx [ 286 ] - xx [ 254 ] * ( xx [ 182 ] +
xx [ 182 ] ) ; xx [ 284 ] = xx [ 255 ] ; xx [ 285 ] = xx [ 180 ] ; xx [ 286 ]
= xx [ 249 ] ; pm_math_Matrix3x3_xform_ra ( xx + 238 , xx + 284 , xx + 287 )
; xx [ 182 ] = xx [ 204 ] + xx [ 216 ] - xx [ 133 ] * xx [ 197 ] + xx [ 187 ]
* xx [ 199 ] - xx [ 200 ] * xx [ 217 ] + xx [ 289 ] ; xx [ 238 ] = xx [ 133 ]
* xx [ 273 ] ; xx [ 239 ] = xx [ 73 ] + xx [ 265 ] - xx [ 238 ] - xx [ 238 ]
+ xx [ 133 ] * xx [ 234 ] ; xx [ 238 ] = xx [ 239 ] - xx [ 248 ] * xx [ 235 ]
; xx [ 240 ] = state [ 18 ] ; if ( xx [ 1 ] < xx [ 240 ] ) xx [ 240 ] = xx [
1 ] ; xx [ 241 ] = - ( xx [ 240 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 241 ] )
xx [ 241 ] = xx [ 4 ] ; xx [ 242 ] = xx [ 8 ] * state [ 19 ] ; xx [ 243 ] =
xx [ 241 ] * xx [ 241 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 241 ] ) * ( ( - xx [
240 ] == xx [ 1 ] ? xx [ 1 ] : - xx [ 242 ] ) - xx [ 10 ] * xx [ 240 ] ) ; if
( xx [ 1 ] > xx [ 243 ] ) xx [ 243 ] = xx [ 1 ] ; xx [ 240 ] = 3.1416 ; xx [
241 ] = state [ 18 ] - xx [ 240 ] ; if ( xx [ 1 ] > xx [ 241 ] ) xx [ 241 ] =
xx [ 1 ] ; xx [ 244 ] = xx [ 241 ] / xx [ 3 ] ; if ( xx [ 4 ] < xx [ 244 ] )
xx [ 244 ] = xx [ 4 ] ; xx [ 245 ] = xx [ 244 ] * xx [ 244 ] * ( xx [ 6 ] -
xx [ 7 ] * xx [ 244 ] ) * ( xx [ 10 ] * xx [ 241 ] + ( xx [ 241 ] == xx [ 1 ]
? xx [ 1 ] : xx [ 242 ] ) ) ; if ( xx [ 1 ] > xx [ 245 ] ) xx [ 245 ] = xx [
1 ] ; xx [ 241 ] = xx [ 115 ] + xx [ 279 ] ; xx [ 290 ] = xx [ 115 ] + xx [
275 ] ; xx [ 291 ] = xx [ 276 ] ; xx [ 292 ] = xx [ 277 ] ; xx [ 293 ] = xx [
278 ] ; xx [ 294 ] = xx [ 241 ] ; xx [ 295 ] = xx [ 280 ] ; xx [ 296 ] = xx [
281 ] ; xx [ 297 ] = xx [ 282 ] ; xx [ 298 ] = xx [ 115 ] + xx [ 283 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 290 , xx + 284 , xx + 272 ) ; xx [ 242 ] =
xx [ 197 ] + xx [ 187 ] * xx [ 222 ] - xx [ 200 ] * xx [ 228 ] + xx [ 273 ] ;
xx [ 244 ] = xx [ 235 ] - xx [ 248 ] * xx [ 241 ] ; xx [ 246 ] = xx [ 238 ] -
xx [ 248 ] * xx [ 244 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 246 , 1 ,
xx + 253 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j21_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 253 ] = ( xx [ 243 ] - xx [ 101 ] * state [ 19 ] - xx
[ 245 ] - ( xx [ 182 ] - xx [ 248 ] * xx [ 242 ] ) ) / xx [ 246 ] ; xx [ 243
] = xx [ 232 ] - xx [ 248 ] * xx [ 276 ] ; xx [ 245 ] = xx [ 196 ] + xx [ 187
] * xx [ 220 ] - xx [ 200 ] * xx [ 227 ] + xx [ 272 ] + xx [ 243 ] * xx [ 253
] ; xx [ 254 ] = xx [ 245 ] * xx [ 178 ] ; xx [ 256 ] = xx [ 242 ] + xx [ 244
] * xx [ 253 ] ; xx [ 242 ] = xx [ 256 ] * xx [ 178 ] ; xx [ 279 ] = xx [ 245
] - xx [ 7 ] * ( xx [ 254 ] * xx [ 178 ] - xx [ 242 ] * xx [ 184 ] ) ; xx [
245 ] = xx [ 256 ] - xx [ 7 ] * ( xx [ 254 ] * xx [ 184 ] + xx [ 242 ] * xx [
178 ] ) ; xx [ 242 ] = xx [ 237 ] - xx [ 248 ] * xx [ 282 ] ; xx [ 254 ] = xx
[ 198 ] + xx [ 187 ] * xx [ 225 ] - xx [ 200 ] * xx [ 230 ] + xx [ 274 ] + xx
[ 242 ] * xx [ 253 ] ; xx [ 272 ] = xx [ 279 ] ; xx [ 273 ] = xx [ 245 ] ; xx
[ 274 ] = xx [ 254 ] ; pm_math_Vector3_cross_ra ( xx + 250 , xx + 272 , xx +
284 ) ; xx [ 256 ] = xx [ 5 ] * state [ 12 ] ; xx [ 272 ] = sin ( xx [ 256 ]
) ; xx [ 273 ] = cos ( xx [ 256 ] ) ; xx [ 256 ] = xx [ 81 ] * xx [ 272 ] -
xx [ 93 ] * xx [ 273 ] ; xx [ 274 ] = xx [ 256 ] * xx [ 66 ] ; xx [ 290 ] =
xx [ 81 ] * xx [ 273 ] + xx [ 93 ] * xx [ 272 ] ; xx [ 81 ] = xx [ 256 ] * xx
[ 74 ] ; xx [ 93 ] = xx [ 74 ] - xx [ 7 ] * ( xx [ 274 ] * xx [ 290 ] + xx [
81 ] * xx [ 256 ] ) ; xx [ 74 ] = xx [ 66 ] - xx [ 7 ] * ( xx [ 274 ] * xx [
256 ] - xx [ 81 ] * xx [ 290 ] ) ; xx [ 66 ] = xx [ 64 ] - state [ 13 ] ; xx
[ 272 ] = xx [ 93 ] ; xx [ 273 ] = xx [ 74 ] ; xx [ 274 ] = xx [ 66 ] ; xx [
291 ] = xx [ 73 ] * xx [ 93 ] ; xx [ 292 ] = xx [ 73 ] * xx [ 74 ] ; xx [ 293
] = xx [ 73 ] * xx [ 66 ] ; pm_math_Vector3_cross_ra ( xx + 272 , xx + 291 ,
xx + 294 ) ; xx [ 81 ] = xx [ 5 ] * state [ 14 ] ; xx [ 291 ] = cos ( xx [ 81
] ) ; xx [ 292 ] = xx [ 177 ] * xx [ 291 ] ; xx [ 293 ] = xx [ 181 ] * xx [
291 ] ; xx [ 291 ] = sin ( xx [ 81 ] ) ; xx [ 81 ] = xx [ 181 ] * xx [ 291 ]
; xx [ 181 ] = xx [ 177 ] * xx [ 291 ] ; xx [ 297 ] = - xx [ 292 ] ; xx [ 298
] = - xx [ 293 ] ; xx [ 299 ] = - xx [ 81 ] ; xx [ 300 ] = xx [ 181 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 297 , xx + 272 , xx + 301 ) ; xx [
177 ] = xx [ 303 ] - state [ 15 ] ; xx [ 303 ] = xx [ 301 ] ; xx [ 304 ] = xx
[ 302 ] ; xx [ 305 ] = xx [ 177 ] ; xx [ 306 ] = xx [ 73 ] * xx [ 301 ] ; xx
[ 307 ] = xx [ 73 ] * xx [ 302 ] ; xx [ 308 ] = xx [ 73 ] * xx [ 177 ] ;
pm_math_Vector3_cross_ra ( xx + 303 , xx + 306 , xx + 309 ) ; xx [ 291 ] = xx
[ 5 ] * state [ 16 ] ; xx [ 5 ] = sin ( xx [ 291 ] ) ; xx [ 306 ] = xx [ 5 ]
* xx [ 302 ] ; xx [ 307 ] = cos ( xx [ 291 ] ) ; xx [ 291 ] = xx [ 5 ] * xx [
301 ] ; xx [ 308 ] = xx [ 301 ] - xx [ 7 ] * ( xx [ 306 ] * xx [ 307 ] + xx [
291 ] * xx [ 5 ] ) ; xx [ 312 ] = xx [ 302 ] + xx [ 7 ] * ( xx [ 291 ] * xx [
307 ] - xx [ 306 ] * xx [ 5 ] ) ; xx [ 291 ] = xx [ 177 ] - state [ 17 ] ; xx
[ 313 ] = xx [ 308 ] ; xx [ 314 ] = xx [ 312 ] ; xx [ 315 ] = xx [ 291 ] ; xx
[ 316 ] = xx [ 73 ] * xx [ 308 ] ; xx [ 317 ] = xx [ 73 ] * xx [ 312 ] ; xx [
318 ] = xx [ 73 ] * xx [ 291 ] ; pm_math_Vector3_cross_ra ( xx + 313 , xx +
316 , xx + 319 ) ; xx [ 291 ] = xx [ 319 ] - xx [ 73 ] * state [ 17 ] * xx [
312 ] ; xx [ 306 ] = xx [ 320 ] + xx [ 73 ] * xx [ 308 ] * state [ 17 ] ; xx
[ 308 ] = xx [ 306 ] * xx [ 5 ] ; xx [ 312 ] = xx [ 291 ] * xx [ 5 ] ; xx [
313 ] = - ( xx [ 114 ] * xx [ 177 ] ) ; xx [ 314 ] = - ( xx [ 116 ] * xx [
177 ] ) ; xx [ 315 ] = xx [ 114 ] * xx [ 301 ] + xx [ 116 ] * xx [ 302 ] ;
pm_math_Vector3_cross_ra ( xx + 303 , xx + 313 , xx + 316 ) ; xx [ 177 ] = xx
[ 115 ] * xx [ 318 ] ; xx [ 303 ] = state [ 15 ] * xx [ 301 ] ; xx [ 301 ] =
xx [ 307 ] * xx [ 307 ] ; xx [ 304 ] = xx [ 7 ] * xx [ 301 ] - xx [ 4 ] ; xx
[ 305 ] = xx [ 73 ] * xx [ 304 ] ; xx [ 313 ] = xx [ 7 ] * xx [ 307 ] * xx [
5 ] ; xx [ 314 ] = xx [ 305 ] * xx [ 313 ] ; xx [ 315 ] = xx [ 73 ] * xx [
313 ] ; xx [ 322 ] = xx [ 315 ] * xx [ 304 ] ; xx [ 323 ] = xx [ 7 ] * ( xx [
301 ] + xx [ 5 ] * xx [ 5 ] ) - xx [ 4 ] ; xx [ 301 ] = xx [ 115 ] * xx [ 323
] * xx [ 323 ] ; xx [ 324 ] = xx [ 116 ] * xx [ 301 ] ; xx [ 325 ] = xx [ 314
] - xx [ 322 ] + xx [ 114 ] * xx [ 324 ] ; xx [ 326 ] = state [ 15 ] * xx [
302 ] ; xx [ 302 ] = xx [ 305 ] * xx [ 304 ] ; xx [ 305 ] = xx [ 315 ] * xx [
313 ] ; xx [ 315 ] = xx [ 114 ] * xx [ 301 ] ; xx [ 327 ] = xx [ 73 ] + xx [
302 ] + xx [ 305 ] + xx [ 114 ] * xx [ 315 ] ; xx [ 328 ] = xx [ 132 ] * xx [
74 ] ; xx [ 329 ] = - ( xx [ 133 ] * xx [ 66 ] + xx [ 132 ] * xx [ 93 ] ) ;
xx [ 330 ] = xx [ 133 ] * xx [ 74 ] ; pm_math_Vector3_cross_ra ( xx + 272 ,
xx + 328 , xx + 331 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 297 , xx +
331 , xx + 272 ) ; xx [ 328 ] = xx [ 73 ] + xx [ 305 ] + xx [ 302 ] + xx [
116 ] * xx [ 324 ] ; xx [ 302 ] = xx [ 322 ] - xx [ 314 ] + xx [ 116 ] * xx [
315 ] ; xx [ 305 ] = state [ 16 ] ; if ( xx [ 1 ] < xx [ 305 ] ) xx [ 305 ] =
xx [ 1 ] ; xx [ 314 ] = - ( xx [ 305 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [
314 ] ) xx [ 314 ] = xx [ 4 ] ; xx [ 319 ] = xx [ 8 ] * state [ 17 ] ; xx [
320 ] = xx [ 314 ] * xx [ 314 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 314 ] ) * ( (
- xx [ 305 ] == xx [ 1 ] ? xx [ 1 ] : - xx [ 319 ] ) - xx [ 10 ] * xx [ 305 ]
) ; if ( xx [ 1 ] > xx [ 320 ] ) xx [ 320 ] = xx [ 1 ] ; xx [ 305 ] = state [
16 ] - xx [ 104 ] ; if ( xx [ 1 ] > xx [ 305 ] ) xx [ 305 ] = xx [ 1 ] ; xx [
104 ] = xx [ 305 ] / xx [ 3 ] ; if ( xx [ 4 ] < xx [ 104 ] ) xx [ 104 ] = xx
[ 4 ] ; xx [ 314 ] = xx [ 104 ] * xx [ 104 ] * ( xx [ 6 ] - xx [ 7 ] * xx [
104 ] ) * ( xx [ 10 ] * xx [ 305 ] + ( xx [ 305 ] == xx [ 1 ] ? xx [ 1 ] : xx
[ 319 ] ) ) ; if ( xx [ 1 ] > xx [ 314 ] ) xx [ 314 ] = xx [ 1 ] ; if ( bb [
0 ] ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j13_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 104 ] = ( xx [ 320 ] - xx [ 101 ] * state [ 17 ] - xx
[ 314 ] + xx [ 321 ] ) / xx [ 118 ] ; xx [ 305 ] = xx [ 5 ] * xx [ 316 ] ; xx
[ 314 ] = xx [ 5 ] * xx [ 317 ] ; xx [ 318 ] = xx [ 115 ] * ( xx [ 317 ] + xx
[ 7 ] * ( xx [ 305 ] * xx [ 307 ] - xx [ 314 ] * xx [ 5 ] ) ) ; xx [ 317 ] =
xx [ 115 ] * ( xx [ 316 ] - xx [ 7 ] * ( xx [ 314 ] * xx [ 307 ] + xx [ 305 ]
* xx [ 5 ] ) ) ; xx [ 305 ] = xx [ 317 ] * xx [ 5 ] ; xx [ 314 ] = xx [ 318 ]
* xx [ 5 ] ; xx [ 316 ] = xx [ 318 ] - xx [ 7 ] * ( xx [ 305 ] * xx [ 307 ] +
xx [ 314 ] * xx [ 5 ] ) ; xx [ 318 ] = xx [ 317 ] + xx [ 7 ] * ( xx [ 314 ] *
xx [ 307 ] - xx [ 305 ] * xx [ 5 ] ) ; xx [ 305 ] = xx [ 115 ] * xx [ 304 ] ;
xx [ 314 ] = xx [ 305 ] * xx [ 304 ] ; xx [ 317 ] = xx [ 115 ] * xx [ 313 ] ;
xx [ 319 ] = xx [ 317 ] * xx [ 313 ] ; xx [ 320 ] = xx [ 314 ] + xx [ 319 ] ;
xx [ 322 ] = xx [ 305 ] * xx [ 313 ] ; xx [ 305 ] = xx [ 317 ] * xx [ 304 ] ;
xx [ 304 ] = xx [ 322 ] - xx [ 305 ] ; xx [ 313 ] = xx [ 114 ] * xx [ 320 ] +
xx [ 116 ] * xx [ 304 ] ; xx [ 317 ] = xx [ 305 ] - xx [ 322 ] ; xx [ 305 ] =
xx [ 319 ] + xx [ 314 ] ; xx [ 314 ] = xx [ 114 ] * xx [ 317 ] + xx [ 116 ] *
xx [ 305 ] ; xx [ 319 ] = xx [ 311 ] + xx [ 321 ] - xx [ 73 ] * xx [ 104 ] -
( xx [ 116 ] * xx [ 316 ] + xx [ 114 ] * xx [ 318 ] ) - ( xx [ 313 ] * xx [
272 ] + xx [ 314 ] * xx [ 273 ] ) ; xx [ 311 ] = xx [ 73 ] / xx [ 118 ] ; xx
[ 118 ] = xx [ 73 ] + ( xx [ 73 ] - xx [ 73 ] * xx [ 311 ] ) * xx [ 323 ] *
xx [ 323 ] + xx [ 116 ] * xx [ 314 ] + xx [ 114 ] * xx [ 313 ] ; xx [ 321 ] =
state [ 14 ] ; if ( xx [ 1 ] < xx [ 321 ] ) xx [ 321 ] = xx [ 1 ] ; xx [ 322
] = - ( xx [ 321 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 322 ] ) xx [ 322 ] =
xx [ 4 ] ; xx [ 323 ] = xx [ 8 ] * state [ 15 ] ; xx [ 329 ] = xx [ 322 ] *
xx [ 322 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 322 ] ) * ( ( - xx [ 321 ] == xx [
1 ] ? xx [ 1 ] : - xx [ 323 ] ) - xx [ 10 ] * xx [ 321 ] ) ; if ( xx [ 1 ] >
xx [ 329 ] ) xx [ 329 ] = xx [ 1 ] ; xx [ 321 ] = state [ 14 ] - xx [ 122 ] ;
if ( xx [ 1 ] > xx [ 321 ] ) xx [ 321 ] = xx [ 1 ] ; xx [ 122 ] = xx [ 321 ]
/ xx [ 3 ] ; if ( xx [ 4 ] < xx [ 122 ] ) xx [ 122 ] = xx [ 4 ] ; xx [ 322 ]
= xx [ 122 ] * xx [ 122 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 122 ] ) * ( xx [ 10
] * xx [ 321 ] + ( xx [ 321 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 323 ] ) ) ; if (
xx [ 1 ] > xx [ 322 ] ) xx [ 322 ] = xx [ 1 ] ; memcpy ( xx + 122 , xx + 118
, 1 * sizeof ( double ) ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 122 , 1 ,
xx + 321 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j12_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 321 ] = ( xx [ 329 ] - xx [ 101 ] * state [ 15 ] - xx
[ 322 ] + xx [ 319 ] ) / xx [ 122 ] ; xx [ 329 ] = xx [ 309 ] + xx [ 291 ] +
xx [ 7 ] * ( xx [ 308 ] * xx [ 307 ] - xx [ 312 ] * xx [ 5 ] ) + xx [ 114 ] *
xx [ 177 ] + xx [ 303 ] * xx [ 325 ] - xx [ 326 ] * xx [ 327 ] + xx [ 315 ] *
xx [ 274 ] ; xx [ 330 ] = xx [ 310 ] + xx [ 306 ] - xx [ 7 ] * ( xx [ 312 ] *
xx [ 307 ] + xx [ 308 ] * xx [ 5 ] ) + xx [ 116 ] * xx [ 177 ] + xx [ 303 ] *
xx [ 328 ] - xx [ 326 ] * xx [ 302 ] + xx [ 324 ] * xx [ 274 ] ; xx [ 331 ] =
xx [ 319 ] - xx [ 118 ] * xx [ 321 ] ; pm_math_Quaternion_xform_ra ( xx + 297
, xx + 329 , xx + 306 ) ; xx [ 5 ] = xx [ 115 ] + xx [ 320 ] ; xx [ 114 ] =
xx [ 115 ] + xx [ 305 ] ; xx [ 116 ] = xx [ 115 ] + xx [ 301 ] ; xx [ 329 ] =
xx [ 318 ] + xx [ 5 ] * xx [ 272 ] + xx [ 304 ] * xx [ 273 ] + xx [ 313 ] *
xx [ 321 ] ; xx [ 330 ] = xx [ 316 ] + xx [ 317 ] * xx [ 272 ] + xx [ 114 ] *
xx [ 273 ] + xx [ 314 ] * xx [ 321 ] ; xx [ 331 ] = xx [ 177 ] + xx [ 116 ] *
xx [ 274 ] - ( xx [ 315 ] * xx [ 326 ] - xx [ 324 ] * xx [ 303 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 297 , xx + 329 , xx + 272 ) ; xx [ 177 ] =
state [ 13 ] * xx [ 93 ] ; xx [ 291 ] = xx [ 292 ] * xx [ 292 ] ; xx [ 301 ]
= xx [ 7 ] * ( xx [ 291 ] + xx [ 293 ] * xx [ 293 ] ) - xx [ 4 ] ; xx [ 303 ]
= xx [ 293 ] * xx [ 81 ] ; xx [ 305 ] = xx [ 292 ] * xx [ 181 ] ; xx [ 309 ]
= xx [ 7 ] * ( xx [ 303 ] + xx [ 305 ] ) ; xx [ 310 ] = xx [ 292 ] * xx [ 81
] ; xx [ 312 ] = xx [ 181 ] * xx [ 293 ] ; xx [ 316 ] = xx [ 7 ] * ( xx [ 310
] - xx [ 312 ] ) ; xx [ 318 ] = xx [ 7 ] * ( xx [ 303 ] - xx [ 305 ] ) ; xx [
303 ] = xx [ 7 ] * ( xx [ 291 ] + xx [ 81 ] * xx [ 81 ] ) - xx [ 4 ] ; xx [
305 ] = xx [ 181 ] * xx [ 81 ] ; xx [ 81 ] = xx [ 292 ] * xx [ 293 ] ; xx [
292 ] = xx [ 7 ] * ( xx [ 305 ] + xx [ 81 ] ) ; xx [ 293 ] = xx [ 7 ] * ( xx
[ 312 ] + xx [ 310 ] ) ; xx [ 310 ] = xx [ 7 ] * ( xx [ 81 ] - xx [ 305 ] ) ;
xx [ 81 ] = xx [ 7 ] * ( xx [ 291 ] + xx [ 181 ] * xx [ 181 ] ) - xx [ 4 ] ;
xx [ 329 ] = xx [ 301 ] ; xx [ 330 ] = xx [ 309 ] ; xx [ 331 ] = xx [ 316 ] ;
xx [ 332 ] = xx [ 318 ] ; xx [ 333 ] = xx [ 303 ] ; xx [ 334 ] = - xx [ 292 ]
; xx [ 335 ] = - xx [ 293 ] ; xx [ 336 ] = xx [ 310 ] ; xx [ 337 ] = xx [ 81
] ; xx [ 181 ] = xx [ 118 ] / xx [ 122 ] ; xx [ 291 ] = xx [ 118 ] - xx [ 118
] * xx [ 181 ] ; xx [ 338 ] = xx [ 301 ] * xx [ 327 ] + xx [ 309 ] * xx [ 325
] ; xx [ 339 ] = xx [ 318 ] * xx [ 327 ] + xx [ 303 ] * xx [ 325 ] ; xx [ 340
] = xx [ 310 ] * xx [ 325 ] - xx [ 293 ] * xx [ 327 ] ; xx [ 341 ] = xx [ 301
] * xx [ 302 ] + xx [ 309 ] * xx [ 328 ] ; xx [ 342 ] = xx [ 318 ] * xx [ 302
] + xx [ 303 ] * xx [ 328 ] ; xx [ 343 ] = xx [ 310 ] * xx [ 328 ] - xx [ 293
] * xx [ 302 ] ; xx [ 344 ] = xx [ 316 ] * xx [ 291 ] ; xx [ 345 ] = - ( xx [
292 ] * xx [ 291 ] ) ; xx [ 346 ] = xx [ 81 ] * xx [ 291 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 329 , xx + 338 , xx + 347 ) ; xx [ 291 ]
= xx [ 313 ] / xx [ 122 ] ; xx [ 302 ] = xx [ 118 ] * xx [ 291 ] - xx [ 313 ]
; xx [ 305 ] = xx [ 314 ] / xx [ 122 ] ; xx [ 122 ] = xx [ 118 ] * xx [ 305 ]
- xx [ 314 ] ; xx [ 338 ] = xx [ 315 ] * xx [ 316 ] ; xx [ 339 ] = - ( xx [
315 ] * xx [ 292 ] ) ; xx [ 340 ] = xx [ 315 ] * xx [ 81 ] ; xx [ 341 ] = xx
[ 324 ] * xx [ 316 ] ; xx [ 342 ] = - ( xx [ 324 ] * xx [ 292 ] ) ; xx [ 343
] = xx [ 324 ] * xx [ 81 ] ; xx [ 344 ] = xx [ 301 ] * xx [ 302 ] + xx [ 309
] * xx [ 122 ] ; xx [ 345 ] = xx [ 318 ] * xx [ 302 ] + xx [ 303 ] * xx [ 122
] ; xx [ 346 ] = xx [ 310 ] * xx [ 122 ] - xx [ 293 ] * xx [ 302 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 329 , xx + 338 , xx + 356 ) ; xx [ 118 ]
= xx [ 133 ] * xx [ 364 ] + xx [ 132 ] * xx [ 362 ] ; xx [ 122 ] = xx [ 133 ]
* xx [ 360 ] ; xx [ 302 ] = xx [ 5 ] - xx [ 313 ] * xx [ 291 ] ; xx [ 5 ] =
xx [ 314 ] * xx [ 291 ] ; xx [ 312 ] = xx [ 304 ] - xx [ 5 ] ; xx [ 304 ] =
xx [ 317 ] - xx [ 5 ] ; xx [ 5 ] = xx [ 114 ] - xx [ 314 ] * xx [ 305 ] ; xx
[ 338 ] = xx [ 301 ] * xx [ 302 ] + xx [ 309 ] * xx [ 312 ] ; xx [ 339 ] = xx
[ 318 ] * xx [ 302 ] + xx [ 303 ] * xx [ 312 ] ; xx [ 340 ] = xx [ 310 ] * xx
[ 312 ] - xx [ 293 ] * xx [ 302 ] ; xx [ 341 ] = xx [ 301 ] * xx [ 304 ] + xx
[ 309 ] * xx [ 5 ] ; xx [ 342 ] = xx [ 318 ] * xx [ 304 ] + xx [ 303 ] * xx [
5 ] ; xx [ 343 ] = xx [ 310 ] * xx [ 5 ] - xx [ 293 ] * xx [ 304 ] ; xx [ 344
] = xx [ 316 ] * xx [ 116 ] ; xx [ 345 ] = - ( xx [ 292 ] * xx [ 116 ] ) ; xx
[ 346 ] = xx [ 81 ] * xx [ 116 ] ; pm_math_Matrix3x3_compose_ra ( xx + 329 ,
xx + 338 , xx + 312 ) ; xx [ 5 ] = xx [ 133 ] * xx [ 317 ] + xx [ 132 ] * xx
[ 315 ] ; xx [ 81 ] = xx [ 354 ] + xx [ 118 ] - xx [ 122 ] - xx [ 133 ] * xx
[ 5 ] ; xx [ 114 ] = xx [ 74 ] * state [ 13 ] ; xx [ 74 ] = xx [ 132 ] * xx [
363 ] ; xx [ 116 ] = xx [ 133 ] * xx [ 357 ] ; xx [ 292 ] = xx [ 132 ] * xx [
316 ] ; xx [ 293 ] = xx [ 353 ] - xx [ 74 ] - xx [ 116 ] + xx [ 133 ] * xx [
292 ] ; xx [ 301 ] = xx [ 132 ] * xx [ 313 ] ; xx [ 302 ] = xx [ 356 ] - xx [
301 ] ; xx [ 303 ] = xx [ 357 ] - xx [ 292 ] ; xx [ 304 ] = xx [ 132 ] * xx [
319 ] ; xx [ 309 ] = xx [ 358 ] - xx [ 304 ] ; xx [ 310 ] = xx [ 133 ] * xx [
314 ] + xx [ 132 ] * xx [ 312 ] ; xx [ 322 ] = xx [ 359 ] + xx [ 310 ] ; xx [
323 ] = xx [ 360 ] + xx [ 5 ] ; xx [ 324 ] = xx [ 133 ] * xx [ 320 ] + xx [
132 ] * xx [ 318 ] ; xx [ 325 ] = xx [ 361 ] + xx [ 324 ] ; xx [ 326 ] = xx [
133 ] * xx [ 313 ] ; xx [ 327 ] = xx [ 362 ] - xx [ 326 ] ; xx [ 328 ] = xx [
133 ] * xx [ 316 ] ; xx [ 329 ] = xx [ 363 ] - xx [ 328 ] ; xx [ 330 ] = xx [
133 ] * xx [ 319 ] ; xx [ 331 ] = xx [ 364 ] - xx [ 330 ] ; xx [ 332 ] = xx [
302 ] ; xx [ 333 ] = xx [ 303 ] ; xx [ 334 ] = xx [ 309 ] ; xx [ 335 ] = xx [
322 ] ; xx [ 336 ] = xx [ 323 ] ; xx [ 337 ] = xx [ 325 ] ; xx [ 338 ] = xx [
327 ] ; xx [ 339 ] = xx [ 329 ] ; xx [ 340 ] = xx [ 331 ] ; xx [ 341 ] = xx [
248 ] * xx [ 256 ] ; xx [ 342 ] = - ( xx [ 247 ] + xx [ 248 ] - xx [ 7 ] * xx
[ 341 ] * xx [ 256 ] ) ; xx [ 343 ] = xx [ 7 ] * xx [ 341 ] * xx [ 290 ] ; xx
[ 344 ] = xx [ 152 ] ; pm_math_Vector3_cross_ra ( xx + 75 , xx + 342 , xx +
364 ) ; pm_math_Vector3_cross_ra ( xx + 75 , xx + 364 , xx + 367 ) ; xx [ 75
] = xx [ 256 ] * xx [ 368 ] ; xx [ 76 ] = xx [ 256 ] * xx [ 367 ] ; xx [ 77 ]
= xx [ 248 ] * state [ 13 ] ; xx [ 152 ] = xx [ 367 ] - xx [ 7 ] * ( xx [ 75
] * xx [ 290 ] + xx [ 76 ] * xx [ 256 ] ) - xx [ 77 ] * ( xx [ 64 ] + xx [ 66
] ) ; xx [ 64 ] = xx [ 368 ] - xx [ 7 ] * ( xx [ 75 ] * xx [ 256 ] - xx [ 76
] * xx [ 290 ] ) ; xx [ 66 ] = xx [ 77 ] * ( xx [ 93 ] + xx [ 93 ] ) + xx [
369 ] ; xx [ 75 ] = xx [ 152 ] ; xx [ 76 ] = xx [ 64 ] ; xx [ 77 ] = xx [ 66
] ; pm_math_Matrix3x3_xform_ra ( xx + 332 , xx + 75 , xx + 364 ) ; xx [ 93 ]
= xx [ 296 ] + xx [ 308 ] - xx [ 133 ] * xx [ 273 ] + xx [ 177 ] * xx [ 81 ]
- xx [ 114 ] * xx [ 293 ] + xx [ 366 ] ; xx [ 247 ] = xx [ 133 ] * xx [ 363 ]
; xx [ 332 ] = xx [ 73 ] + xx [ 355 ] - xx [ 247 ] - xx [ 247 ] + xx [ 133 ]
* xx [ 328 ] ; xx [ 247 ] = xx [ 248 ] * xx [ 329 ] - xx [ 332 ] ; xx [ 333 ]
= state [ 12 ] ; if ( xx [ 1 ] < xx [ 333 ] ) xx [ 333 ] = xx [ 1 ] ; xx [
334 ] = - ( xx [ 333 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 334 ] ) xx [ 334 ]
= xx [ 4 ] ; xx [ 335 ] = xx [ 8 ] * state [ 13 ] ; xx [ 336 ] = xx [ 334 ] *
xx [ 334 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 334 ] ) * ( ( - xx [ 333 ] == xx [
1 ] ? xx [ 1 ] : - xx [ 335 ] ) - xx [ 10 ] * xx [ 333 ] ) ; if ( xx [ 1 ] >
xx [ 336 ] ) xx [ 336 ] = xx [ 1 ] ; xx [ 333 ] = state [ 12 ] - xx [ 240 ] ;
if ( xx [ 1 ] > xx [ 333 ] ) xx [ 333 ] = xx [ 1 ] ; xx [ 240 ] = xx [ 333 ]
/ xx [ 3 ] ; if ( xx [ 4 ] < xx [ 240 ] ) xx [ 240 ] = xx [ 4 ] ; xx [ 334 ]
= xx [ 240 ] * xx [ 240 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 240 ] ) * ( xx [ 10
] * xx [ 333 ] + ( xx [ 333 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 335 ] ) ) ; if (
xx [ 1 ] > xx [ 334 ] ) xx [ 334 ] = xx [ 1 ] ; xx [ 240 ] = xx [ 115 ] + xx
[ 316 ] ; xx [ 367 ] = xx [ 115 ] + xx [ 312 ] ; xx [ 368 ] = xx [ 313 ] ; xx
[ 369 ] = xx [ 314 ] ; xx [ 370 ] = xx [ 315 ] ; xx [ 371 ] = xx [ 240 ] ; xx
[ 372 ] = xx [ 317 ] ; xx [ 373 ] = xx [ 318 ] ; xx [ 374 ] = xx [ 319 ] ; xx
[ 375 ] = xx [ 115 ] + xx [ 320 ] ; pm_math_Matrix3x3_xform_ra ( xx + 367 ,
xx + 75 , xx + 337 ) ; xx [ 75 ] = xx [ 273 ] + xx [ 177 ] * xx [ 323 ] - xx
[ 114 ] * xx [ 303 ] + xx [ 338 ] ; xx [ 76 ] = xx [ 248 ] * xx [ 240 ] - xx
[ 329 ] ; xx [ 77 ] = xx [ 248 ] * xx [ 76 ] - xx [ 247 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 77 , 1 , xx + 316 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j11_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 316 ] = ( xx [ 336 ] - xx [ 101 ] * state [ 13 ] - xx
[ 334 ] - ( xx [ 248 ] * xx [ 75 ] - xx [ 93 ] ) ) / xx [ 77 ] ; xx [ 101 ] =
xx [ 248 ] * xx [ 313 ] - xx [ 327 ] ; xx [ 333 ] = xx [ 272 ] + xx [ 177 ] *
xx [ 322 ] - xx [ 114 ] * xx [ 302 ] + xx [ 337 ] + xx [ 101 ] * xx [ 316 ] ;
xx [ 334 ] = xx [ 256 ] * xx [ 333 ] ; xx [ 335 ] = xx [ 75 ] + xx [ 76 ] *
xx [ 316 ] ; xx [ 75 ] = xx [ 256 ] * xx [ 335 ] ; xx [ 336 ] = xx [ 333 ] -
xx [ 7 ] * ( xx [ 334 ] * xx [ 256 ] - xx [ 75 ] * xx [ 290 ] ) ; xx [ 333 ]
= xx [ 335 ] - xx [ 7 ] * ( xx [ 334 ] * xx [ 290 ] + xx [ 75 ] * xx [ 256 ]
) ; xx [ 75 ] = xx [ 248 ] * xx [ 319 ] - xx [ 331 ] ; xx [ 334 ] = xx [ 274
] + xx [ 177 ] * xx [ 325 ] - xx [ 114 ] * xx [ 309 ] + xx [ 339 ] + xx [ 75
] * xx [ 316 ] ; xx [ 337 ] = xx [ 336 ] ; xx [ 338 ] = xx [ 333 ] ; xx [ 339
] = xx [ 334 ] ; pm_math_Vector3_cross_ra ( xx + 342 , xx + 337 , xx + 367 )
; xx [ 335 ] = xx [ 80 ] + xx [ 92 ] + xx [ 107 ] - xx [ 133 ] * xx [ 83 ] +
xx [ 195 ] + xx [ 192 ] + xx [ 182 ] + xx [ 238 ] * xx [ 253 ] + xx [ 286 ] +
xx [ 93 ] + xx [ 247 ] * xx [ 316 ] + xx [ 369 ] ; xx [ 93 ] = xx [ 90 ] + xx
[ 105 ] - xx [ 132 ] * xx [ 83 ] + xx [ 193 ] ; xx [ 83 ] = xx [ 69 ] * xx [
93 ] ; xx [ 90 ] = xx [ 91 ] + xx [ 106 ] + xx [ 132 ] * xx [ 82 ] + xx [ 133
] * xx [ 84 ] + xx [ 194 ] ; xx [ 82 ] = xx [ 69 ] * xx [ 90 ] ; xx [ 84 ] =
xx [ 132 ] * xx [ 267 ] ; xx [ 91 ] = xx [ 73 ] + xx [ 257 ] - xx [ 84 ] - xx
[ 84 ] + xx [ 132 ] * xx [ 183 ] ; xx [ 84 ] = xx [ 133 ] * xx [ 268 ] + xx [
132 ] * xx [ 266 ] ; xx [ 92 ] = xx [ 132 ] * xx [ 270 ] ; xx [ 105 ] = xx [
258 ] + xx [ 84 ] - xx [ 92 ] - xx [ 132 ] * xx [ 212 ] ; xx [ 106 ] = xx [
259 ] - xx [ 213 ] - xx [ 210 ] + xx [ 132 ] * xx [ 234 ] ; xx [ 107 ] = xx [
106 ] - xx [ 248 ] * xx [ 222 ] ; xx [ 182 ] = xx [ 202 ] + xx [ 214 ] - xx [
132 ] * xx [ 197 ] + xx [ 187 ] * xx [ 91 ] - xx [ 200 ] * xx [ 105 ] + xx [
287 ] + xx [ 107 ] * xx [ 253 ] ; xx [ 183 ] = xx [ 182 ] * xx [ 178 ] ; xx [
193 ] = xx [ 260 ] - xx [ 92 ] + xx [ 84 ] - ( xx [ 132 ] * xx [ 218 ] + xx [
133 ] * xx [ 223 ] ) ; xx [ 84 ] = xx [ 133 ] * xx [ 271 ] + xx [ 132 ] * xx
[ 269 ] ; xx [ 92 ] = xx [ 73 ] + xx [ 261 ] + xx [ 84 ] + xx [ 84 ] + xx [
132 ] * xx [ 226 ] + xx [ 133 ] * xx [ 229 ] ; xx [ 84 ] = xx [ 262 ] - xx [
211 ] + xx [ 209 ] - ( xx [ 133 ] * xx [ 236 ] + xx [ 132 ] * xx [ 231 ] ) ;
xx [ 194 ] = xx [ 84 ] - xx [ 248 ] * xx [ 228 ] ; xx [ 195 ] = xx [ 203 ] +
xx [ 215 ] + xx [ 132 ] * xx [ 196 ] + xx [ 133 ] * xx [ 198 ] + xx [ 187 ] *
xx [ 193 ] - xx [ 200 ] * xx [ 92 ] + xx [ 288 ] + xx [ 194 ] * xx [ 253 ] ;
xx [ 196 ] = xx [ 195 ] * xx [ 178 ] ; xx [ 197 ] = xx [ 133 ] * xx [ 358 ] +
xx [ 132 ] * xx [ 356 ] ; xx [ 198 ] = xx [ 132 ] * xx [ 360 ] ; xx [ 202 ] =
xx [ 348 ] + xx [ 197 ] - xx [ 198 ] - xx [ 132 ] * xx [ 5 ] ; xx [ 5 ] = xx
[ 132 ] * xx [ 357 ] ; xx [ 203 ] = xx [ 73 ] + xx [ 347 ] - xx [ 5 ] - xx [
5 ] + xx [ 132 ] * xx [ 292 ] ; xx [ 5 ] = xx [ 349 ] - xx [ 116 ] - xx [ 74
] + xx [ 132 ] * xx [ 328 ] ; xx [ 74 ] = xx [ 248 ] * xx [ 303 ] - xx [ 5 ]
; xx [ 116 ] = xx [ 294 ] + xx [ 306 ] - xx [ 132 ] * xx [ 273 ] + xx [ 177 ]
* xx [ 202 ] - xx [ 114 ] * xx [ 203 ] + xx [ 364 ] + xx [ 74 ] * xx [ 316 ]
; xx [ 204 ] = xx [ 256 ] * xx [ 116 ] ; xx [ 209 ] = xx [ 133 ] * xx [ 361 ]
+ xx [ 132 ] * xx [ 359 ] ; xx [ 210 ] = xx [ 73 ] + xx [ 351 ] + xx [ 209 ]
+ xx [ 209 ] + xx [ 132 ] * xx [ 310 ] + xx [ 133 ] * xx [ 324 ] ; xx [ 209 ]
= xx [ 350 ] - xx [ 198 ] + xx [ 197 ] - ( xx [ 132 ] * xx [ 301 ] + xx [ 133
] * xx [ 304 ] ) ; xx [ 197 ] = xx [ 352 ] - xx [ 122 ] + xx [ 118 ] - ( xx [
133 ] * xx [ 330 ] + xx [ 132 ] * xx [ 326 ] ) ; xx [ 118 ] = xx [ 248 ] * xx
[ 323 ] - xx [ 197 ] ; xx [ 122 ] = xx [ 295 ] + xx [ 307 ] + xx [ 132 ] * xx
[ 272 ] + xx [ 133 ] * xx [ 274 ] + xx [ 177 ] * xx [ 210 ] - xx [ 114 ] * xx
[ 209 ] + xx [ 365 ] + xx [ 118 ] * xx [ 316 ] ; xx [ 198 ] = xx [ 256 ] * xx
[ 122 ] ; xx [ 211 ] = xx [ 78 ] + xx [ 93 ] - xx [ 7 ] * ( xx [ 69 ] * xx [
83 ] - xx [ 65 ] * xx [ 82 ] ) + xx [ 190 ] + xx [ 182 ] - xx [ 7 ] * ( xx [
183 ] * xx [ 178 ] - xx [ 196 ] * xx [ 184 ] ) + xx [ 284 ] + xx [ 116 ] - xx
[ 7 ] * ( xx [ 204 ] * xx [ 256 ] - xx [ 198 ] * xx [ 290 ] ) + xx [ 367 ] ;
xx [ 93 ] = xx [ 68 ] * xx [ 211 ] ; xx [ 116 ] = xx [ 68 ] * xx [ 335 ] ; xx
[ 182 ] = 4.89652762780679e-12 ; xx [ 212 ] = 2.051036007699736e-10 ; xx [
213 ] = xx [ 125 ] - xx [ 212 ] * xx [ 123 ] ; xx [ 214 ] = xx [ 109 ] - xx [
212 ] * xx [ 103 ] ; xx [ 215 ] = xx [ 213 ] - xx [ 212 ] * xx [ 214 ] ; xx [
216 ] = xx [ 165 ] - xx [ 212 ] * xx [ 168 ] ; xx [ 218 ] = xx [ 166 ] - xx [
212 ] * xx [ 174 ] ; xx [ 223 ] = xx [ 216 ] - xx [ 212 ] * xx [ 218 ] ; xx [
226 ] = xx [ 212 ] * xx [ 166 ] + xx [ 174 ] ; xx [ 166 ] = xx [ 212 ] * xx [
165 ] + xx [ 168 ] ; xx [ 165 ] = xx [ 212 ] * xx [ 226 ] - xx [ 166 ] ; xx [
168 ] = xx [ 170 ] - xx [ 212 ] * xx [ 167 ] ; xx [ 174 ] = xx [ 212 ] * xx [
216 ] + xx [ 218 ] ; xx [ 216 ] = xx [ 212 ] * xx [ 166 ] + xx [ 226 ] ; xx [
166 ] = xx [ 212 ] * xx [ 170 ] + xx [ 167 ] ; xx [ 167 ] = xx [ 172 ] - xx [
212 ] * xx [ 171 ] ; xx [ 170 ] = xx [ 212 ] * xx [ 172 ] + xx [ 171 ] ; xx [
257 ] = xx [ 223 ] ; xx [ 258 ] = xx [ 165 ] ; xx [ 259 ] = xx [ 168 ] ; xx [
260 ] = - xx [ 174 ] ; xx [ 261 ] = xx [ 216 ] ; xx [ 262 ] = - xx [ 166 ] ;
xx [ 263 ] = xx [ 167 ] ; xx [ 264 ] = - xx [ 170 ] ; xx [ 265 ] = xx [ 169 ]
; pm_math_Matrix3x3_postCross_ra ( xx + 257 , xx + 153 , xx + 266 ) ; xx [
169 ] = xx [ 184 ] * xx [ 184 ] ; xx [ 171 ] = xx [ 7 ] * xx [ 169 ] - xx [ 4
] ; xx [ 172 ] = xx [ 243 ] / xx [ 246 ] ; xx [ 218 ] = xx [ 220 ] - xx [ 107
] * xx [ 172 ] ; xx [ 220 ] = xx [ 7 ] * xx [ 184 ] * xx [ 178 ] ; xx [ 226 ]
= xx [ 244 ] / xx [ 246 ] ; xx [ 229 ] = xx [ 222 ] - xx [ 107 ] * xx [ 226 ]
; xx [ 222 ] = xx [ 171 ] * xx [ 218 ] + xx [ 220 ] * xx [ 229 ] ; xx [ 231 ]
= xx [ 227 ] - xx [ 194 ] * xx [ 172 ] ; xx [ 227 ] = xx [ 228 ] - xx [ 194 ]
* xx [ 226 ] ; xx [ 228 ] = xx [ 171 ] * xx [ 231 ] + xx [ 220 ] * xx [ 227 ]
; xx [ 234 ] = xx [ 171 ] * xx [ 222 ] + xx [ 220 ] * xx [ 228 ] ; xx [ 236 ]
= xx [ 275 ] - xx [ 243 ] * xx [ 172 ] + xx [ 115 ] ; xx [ 243 ] = xx [ 244 ]
* xx [ 172 ] ; xx [ 257 ] = xx [ 276 ] - xx [ 243 ] ; xx [ 258 ] = xx [ 171 ]
* xx [ 236 ] + xx [ 220 ] * xx [ 257 ] ; xx [ 259 ] = xx [ 171 ] * xx [ 258 ]
; xx [ 260 ] = xx [ 278 ] - xx [ 243 ] ; xx [ 243 ] = xx [ 241 ] - xx [ 244 ]
* xx [ 226 ] ; xx [ 241 ] = xx [ 171 ] * xx [ 260 ] + xx [ 220 ] * xx [ 243 ]
; xx [ 244 ] = xx [ 220 ] * xx [ 241 ] ; xx [ 261 ] = xx [ 171 ] * xx [ 257 ]
- xx [ 220 ] * xx [ 236 ] ; xx [ 236 ] = xx [ 171 ] * xx [ 243 ] - xx [ 220 ]
* xx [ 260 ] ; xx [ 243 ] = xx [ 171 ] * xx [ 261 ] + xx [ 220 ] * xx [ 236 ]
; xx [ 257 ] = xx [ 7 ] * ( xx [ 169 ] + xx [ 178 ] * xx [ 178 ] ) - xx [ 4 ]
; xx [ 169 ] = xx [ 242 ] * xx [ 172 ] ; xx [ 260 ] = xx [ 257 ] * ( xx [ 277
] - xx [ 169 ] ) ; xx [ 262 ] = xx [ 242 ] * xx [ 226 ] ; xx [ 263 ] = xx [
257 ] * ( xx [ 280 ] - xx [ 262 ] ) ; xx [ 264 ] = xx [ 260 ] * xx [ 171 ] +
xx [ 220 ] * xx [ 263 ] ; xx [ 265 ] = xx [ 171 ] * xx [ 241 ] - xx [ 220 ] *
xx [ 258 ] ; xx [ 241 ] = xx [ 171 ] * xx [ 236 ] ; xx [ 236 ] = xx [ 220 ] *
xx [ 261 ] ; xx [ 258 ] = xx [ 263 ] * xx [ 171 ] - xx [ 220 ] * xx [ 260 ] ;
xx [ 260 ] = xx [ 281 ] - xx [ 169 ] ; xx [ 169 ] = xx [ 282 ] - xx [ 262 ] ;
xx [ 261 ] = xx [ 257 ] * ( xx [ 171 ] * xx [ 260 ] + xx [ 220 ] * xx [ 169 ]
) ; xx [ 262 ] = xx [ 257 ] * ( xx [ 171 ] * xx [ 169 ] - xx [ 220 ] * xx [
260 ] ) ; xx [ 169 ] = xx [ 242 ] / xx [ 246 ] ; xx [ 260 ] = xx [ 257 ] * (
xx [ 283 ] - xx [ 242 ] * xx [ 169 ] + xx [ 115 ] ) * xx [ 257 ] ; xx [ 345 ]
= xx [ 259 ] + xx [ 244 ] ; xx [ 346 ] = xx [ 243 ] ; xx [ 347 ] = xx [ 264 ]
; xx [ 348 ] = xx [ 265 ] ; xx [ 349 ] = xx [ 241 ] - xx [ 236 ] ; xx [ 350 ]
= xx [ 258 ] ; xx [ 351 ] = xx [ 261 ] ; xx [ 352 ] = xx [ 262 ] ; xx [ 353 ]
= xx [ 260 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 345 , xx + 250 , xx +
354 ) ; xx [ 242 ] = xx [ 290 ] * xx [ 290 ] ; xx [ 263 ] = xx [ 7 ] * xx [
242 ] - xx [ 4 ] ; xx [ 275 ] = xx [ 101 ] / xx [ 77 ] ; xx [ 276 ] = xx [
302 ] - xx [ 74 ] * xx [ 275 ] ; xx [ 277 ] = xx [ 7 ] * xx [ 256 ] * xx [
290 ] ; xx [ 278 ] = xx [ 76 ] / xx [ 77 ] ; xx [ 280 ] = xx [ 303 ] - xx [
74 ] * xx [ 278 ] ; xx [ 281 ] = xx [ 263 ] * xx [ 276 ] + xx [ 277 ] * xx [
280 ] ; xx [ 282 ] = xx [ 322 ] - xx [ 118 ] * xx [ 275 ] ; xx [ 283 ] = xx [
323 ] - xx [ 118 ] * xx [ 278 ] ; xx [ 287 ] = xx [ 263 ] * xx [ 282 ] + xx [
277 ] * xx [ 283 ] ; xx [ 288 ] = xx [ 263 ] * xx [ 281 ] + xx [ 277 ] * xx [
287 ] ; xx [ 289 ] = xx [ 312 ] - xx [ 101 ] * xx [ 275 ] + xx [ 115 ] ; xx [
101 ] = xx [ 76 ] * xx [ 275 ] ; xx [ 292 ] = xx [ 313 ] - xx [ 101 ] ; xx [
294 ] = xx [ 263 ] * xx [ 289 ] + xx [ 277 ] * xx [ 292 ] ; xx [ 295 ] = xx [
263 ] * xx [ 294 ] ; xx [ 296 ] = xx [ 315 ] - xx [ 101 ] ; xx [ 101 ] = xx [
240 ] - xx [ 76 ] * xx [ 278 ] ; xx [ 76 ] = xx [ 263 ] * xx [ 296 ] + xx [
277 ] * xx [ 101 ] ; xx [ 240 ] = xx [ 277 ] * xx [ 76 ] ; xx [ 301 ] = xx [
263 ] * xx [ 292 ] - xx [ 277 ] * xx [ 289 ] ; xx [ 289 ] = xx [ 263 ] * xx [
101 ] - xx [ 277 ] * xx [ 296 ] ; xx [ 101 ] = xx [ 263 ] * xx [ 301 ] + xx [
277 ] * xx [ 289 ] ; xx [ 292 ] = xx [ 7 ] * ( xx [ 242 ] + xx [ 256 ] * xx [
256 ] ) - xx [ 4 ] ; xx [ 242 ] = xx [ 75 ] * xx [ 275 ] ; xx [ 296 ] = xx [
292 ] * ( xx [ 314 ] - xx [ 242 ] ) ; xx [ 302 ] = xx [ 75 ] * xx [ 278 ] ;
xx [ 303 ] = xx [ 292 ] * ( xx [ 317 ] - xx [ 302 ] ) ; xx [ 304 ] = xx [ 296
] * xx [ 263 ] + xx [ 277 ] * xx [ 303 ] ; xx [ 306 ] = xx [ 263 ] * xx [ 76
] - xx [ 277 ] * xx [ 294 ] ; xx [ 76 ] = xx [ 263 ] * xx [ 289 ] - xx [ 277
] * xx [ 301 ] ; xx [ 289 ] = xx [ 303 ] * xx [ 263 ] - xx [ 277 ] * xx [ 296
] ; xx [ 294 ] = xx [ 318 ] - xx [ 242 ] ; xx [ 242 ] = xx [ 319 ] - xx [ 302
] ; xx [ 296 ] = xx [ 292 ] * ( xx [ 263 ] * xx [ 294 ] + xx [ 277 ] * xx [
242 ] ) ; xx [ 301 ] = xx [ 292 ] * ( xx [ 263 ] * xx [ 242 ] - xx [ 277 ] *
xx [ 294 ] ) ; xx [ 242 ] = xx [ 75 ] / xx [ 77 ] ; xx [ 294 ] = xx [ 292 ] *
( xx [ 320 ] - xx [ 75 ] * xx [ 242 ] + xx [ 115 ] ) * xx [ 292 ] ; xx [ 345
] = xx [ 295 ] + xx [ 240 ] ; xx [ 346 ] = xx [ 101 ] ; xx [ 347 ] = xx [ 304
] ; xx [ 348 ] = xx [ 306 ] ; xx [ 349 ] = xx [ 76 ] ; xx [ 350 ] = xx [ 289
] ; xx [ 351 ] = xx [ 296 ] ; xx [ 352 ] = xx [ 301 ] ; xx [ 353 ] = xx [ 294
] ; pm_math_Matrix3x3_postCross_ra ( xx + 345 , xx + 342 , xx + 370 ) ; xx [
75 ] = xx [ 215 ] - xx [ 266 ] + xx [ 234 ] - xx [ 354 ] + xx [ 288 ] - xx [
370 ] ; xx [ 115 ] = xx [ 135 ] - xx [ 212 ] * xx [ 119 ] ; xx [ 302 ] = xx [
257 ] * ( xx [ 225 ] - xx [ 107 ] * xx [ 169 ] ) ; xx [ 225 ] = xx [ 257 ] *
( xx [ 230 ] - xx [ 194 ] * xx [ 169 ] ) ; xx [ 230 ] = xx [ 302 ] * xx [ 171
] + xx [ 220 ] * xx [ 225 ] ; xx [ 303 ] = xx [ 292 ] * ( xx [ 309 ] - xx [
74 ] * xx [ 242 ] ) ; xx [ 307 ] = xx [ 292 ] * ( xx [ 325 ] - xx [ 118 ] *
xx [ 242 ] ) ; xx [ 308 ] = xx [ 303 ] * xx [ 263 ] + xx [ 277 ] * xx [ 307 ]
; xx [ 309 ] = xx [ 115 ] - xx [ 272 ] + xx [ 230 ] - xx [ 360 ] + xx [ 308 ]
- xx [ 376 ] ; xx [ 310 ] = xx [ 182 ] * xx [ 75 ] + xx [ 309 ] ; xx [ 312 ]
= xx [ 149 ] - xx [ 212 ] * xx [ 147 ] ; xx [ 313 ] = xx [ 232 ] - xx [ 238 ]
* xx [ 172 ] ; xx [ 232 ] = xx [ 235 ] - xx [ 238 ] * xx [ 226 ] ; xx [ 235 ]
= xx [ 257 ] * ( xx [ 171 ] * xx [ 313 ] + xx [ 220 ] * xx [ 232 ] ) ; xx [
314 ] = xx [ 327 ] - xx [ 247 ] * xx [ 275 ] ; xx [ 315 ] = xx [ 329 ] - xx [
247 ] * xx [ 278 ] ; xx [ 317 ] = xx [ 292 ] * ( xx [ 263 ] * xx [ 314 ] + xx
[ 277 ] * xx [ 315 ] ) ; xx [ 318 ] = xx [ 312 ] - xx [ 268 ] + xx [ 235 ] -
xx [ 356 ] + xx [ 317 ] - xx [ 372 ] ; xx [ 319 ] = xx [ 257 ] * ( xx [ 237 ]
- xx [ 238 ] * xx [ 169 ] ) * xx [ 257 ] ; xx [ 237 ] = xx [ 292 ] * ( xx [
331 ] - xx [ 247 ] * xx [ 242 ] ) * xx [ 292 ] ; xx [ 320 ] = xx [ 151 ] - xx
[ 274 ] + xx [ 319 ] - xx [ 362 ] + xx [ 237 ] - xx [ 378 ] ; xx [ 322 ] = xx
[ 182 ] * xx [ 318 ] + xx [ 320 ] ; xx [ 323 ] = xx [ 182 ] * xx [ 310 ] + xx
[ 322 ] ; xx [ 324 ] = xx [ 212 ] * xx [ 109 ] + xx [ 103 ] ; xx [ 103 ] = xx
[ 212 ] * xx [ 125 ] + xx [ 123 ] ; xx [ 109 ] = xx [ 212 ] * xx [ 324 ] - xx
[ 103 ] ; xx [ 123 ] = xx [ 171 ] * xx [ 229 ] - xx [ 220 ] * xx [ 218 ] ; xx
[ 125 ] = xx [ 171 ] * xx [ 227 ] - xx [ 220 ] * xx [ 231 ] ; xx [ 218 ] = xx
[ 171 ] * xx [ 123 ] + xx [ 220 ] * xx [ 125 ] ; xx [ 227 ] = xx [ 263 ] * xx
[ 280 ] - xx [ 277 ] * xx [ 276 ] ; xx [ 229 ] = xx [ 263 ] * xx [ 283 ] - xx
[ 277 ] * xx [ 282 ] ; xx [ 231 ] = xx [ 263 ] * xx [ 227 ] + xx [ 277 ] * xx
[ 229 ] ; xx [ 276 ] = xx [ 109 ] - xx [ 269 ] + xx [ 218 ] - xx [ 357 ] + xx
[ 231 ] - xx [ 373 ] ; xx [ 280 ] = xx [ 257 ] * ( xx [ 171 ] * xx [ 232 ] -
xx [ 220 ] * xx [ 313 ] ) ; xx [ 232 ] = xx [ 212 ] * xx [ 149 ] + xx [ 147 ]
; xx [ 147 ] = xx [ 292 ] * ( xx [ 263 ] * xx [ 315 ] - xx [ 277 ] * xx [ 314
] ) ; xx [ 149 ] = xx [ 280 ] - xx [ 359 ] - ( xx [ 232 ] + xx [ 271 ] ) + xx
[ 147 ] - xx [ 375 ] ; xx [ 282 ] = xx [ 182 ] * xx [ 276 ] + xx [ 149 ] ; xx
[ 283 ] = xx [ 182 ] * xx [ 309 ] - xx [ 75 ] ; xx [ 75 ] = xx [ 182 ] * xx [
320 ] - xx [ 318 ] ; xx [ 309 ] = xx [ 182 ] * xx [ 283 ] + xx [ 75 ] ; xx [
313 ] = xx [ 171 ] * xx [ 228 ] - xx [ 220 ] * xx [ 222 ] ; xx [ 222 ] = xx [
212 ] * xx [ 213 ] + xx [ 214 ] ; xx [ 213 ] = xx [ 263 ] * xx [ 287 ] - xx [
277 ] * xx [ 281 ] ; xx [ 214 ] = xx [ 313 ] - xx [ 355 ] - ( xx [ 222 ] + xx
[ 267 ] ) + xx [ 213 ] - xx [ 371 ] ; xx [ 228 ] = xx [ 225 ] * xx [ 171 ] -
xx [ 220 ] * xx [ 302 ] ; xx [ 225 ] = xx [ 212 ] * xx [ 135 ] + xx [ 119 ] ;
xx [ 119 ] = xx [ 307 ] * xx [ 263 ] - xx [ 277 ] * xx [ 303 ] ; xx [ 135 ] =
xx [ 228 ] - xx [ 361 ] - ( xx [ 225 ] + xx [ 273 ] ) + xx [ 119 ] - xx [ 377
] ; xx [ 281 ] = xx [ 182 ] * xx [ 214 ] + xx [ 135 ] ; xx [ 287 ] = xx [ 212
] * xx [ 103 ] + xx [ 324 ] ; xx [ 103 ] = xx [ 171 ] * xx [ 125 ] - xx [ 220
] * xx [ 123 ] ; xx [ 123 ] = xx [ 263 ] * xx [ 229 ] - xx [ 277 ] * xx [ 227
] ; xx [ 125 ] = xx [ 287 ] - xx [ 270 ] + xx [ 103 ] - xx [ 358 ] + xx [ 123
] - xx [ 374 ] ; xx [ 227 ] = xx [ 182 ] * xx [ 135 ] - xx [ 214 ] ; xx [ 135
] = xx [ 182 ] * xx [ 322 ] - xx [ 310 ] ; xx [ 214 ] = xx [ 182 ] * xx [ 149
] - xx [ 276 ] ; xx [ 149 ] = xx [ 182 ] * xx [ 75 ] - xx [ 283 ] ; xx [ 345
] = xx [ 323 ] ; xx [ 346 ] = xx [ 282 ] ; xx [ 347 ] = xx [ 309 ] ; xx [ 348
] = xx [ 281 ] ; xx [ 349 ] = xx [ 125 ] ; xx [ 350 ] = xx [ 227 ] ; xx [ 351
] = xx [ 135 ] ; xx [ 352 ] = xx [ 214 ] ; xx [ 353 ] = xx [ 149 ] ; xx [ 75
] = 0.01725 ; xx [ 229 ] = xx [ 75 ] * xx [ 58 ] ; xx [ 276 ] = xx [ 229 ] *
xx [ 59 ] ; xx [ 283 ] = xx [ 75 ] * xx [ 63 ] ; xx [ 302 ] = xx [ 283 ] * xx
[ 63 ] + xx [ 229 ] * xx [ 58 ] ; xx [ 229 ] = xx [ 2 ] * xx [ 2 ] * xx [ 302
] ; xx [ 303 ] = xx [ 2 ] * xx [ 2 ] * xx [ 276 ] ; xx [ 307 ] = xx [ 276 ] -
xx [ 7 ] * ( xx [ 229 ] + xx [ 303 ] ) ; xx [ 276 ] = xx [ 7 ] * ( xx [ 229 ]
- xx [ 303 ] ) - xx [ 302 ] ; xx [ 229 ] = xx [ 283 ] * xx [ 59 ] ; xx [ 324
] = xx [ 307 ] ; xx [ 325 ] = xx [ 276 ] ; xx [ 326 ] = xx [ 229 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 345 , xx + 324 , xx + 327 ) ; xx [ 283 ] =
xx [ 179 ] + xx [ 279 ] + xx [ 336 ] ; xx [ 179 ] = xx [ 176 ] + xx [ 254 ] +
xx [ 334 ] ; xx [ 176 ] = xx [ 68 ] * xx [ 179 ] ; xx [ 254 ] = xx [ 68 ] *
xx [ 283 ] ; xx [ 279 ] = xx [ 223 ] + xx [ 259 ] + xx [ 244 ] + xx [ 295 ] +
xx [ 240 ] + xx [ 4 ] ; xx [ 223 ] = xx [ 168 ] + xx [ 264 ] + xx [ 304 ] ;
xx [ 168 ] = xx [ 182 ] * xx [ 279 ] + xx [ 223 ] ; xx [ 240 ] = xx [ 167 ] +
xx [ 261 ] + xx [ 296 ] ; xx [ 167 ] = xx [ 173 ] + xx [ 260 ] + xx [ 294 ] +
1.1 ; xx [ 173 ] = xx [ 182 ] * xx [ 240 ] + xx [ 167 ] ; xx [ 244 ] = xx [
182 ] * xx [ 168 ] + xx [ 173 ] ; xx [ 259 ] = xx [ 165 ] + xx [ 243 ] + xx [
101 ] ; xx [ 101 ] = xx [ 262 ] - xx [ 170 ] + xx [ 301 ] ; xx [ 165 ] = xx [
182 ] * xx [ 259 ] + xx [ 101 ] ; xx [ 170 ] = xx [ 182 ] * xx [ 223 ] - xx [
279 ] ; xx [ 223 ] = xx [ 182 ] * xx [ 167 ] - xx [ 240 ] ; xx [ 167 ] = xx [
182 ] * xx [ 170 ] + xx [ 223 ] ; xx [ 240 ] = xx [ 265 ] - xx [ 174 ] + xx [
306 ] ; xx [ 174 ] = xx [ 258 ] - xx [ 166 ] + xx [ 289 ] ; xx [ 166 ] = xx [
182 ] * xx [ 240 ] + xx [ 174 ] ; xx [ 243 ] = xx [ 216 ] - xx [ 236 ] + xx [
241 ] + xx [ 4 ] + xx [ 76 ] ; xx [ 76 ] = xx [ 182 ] * xx [ 174 ] - xx [ 240
] ; xx [ 174 ] = xx [ 182 ] * xx [ 173 ] - xx [ 168 ] ; xx [ 168 ] = xx [ 182
] * xx [ 101 ] - xx [ 259 ] ; xx [ 101 ] = xx [ 182 ] * xx [ 223 ] - xx [ 170
] ; xx [ 345 ] = xx [ 244 ] ; xx [ 346 ] = xx [ 165 ] ; xx [ 347 ] = xx [ 167
] ; xx [ 348 ] = xx [ 166 ] ; xx [ 349 ] = xx [ 243 ] ; xx [ 350 ] = xx [ 76
] ; xx [ 351 ] = xx [ 174 ] ; xx [ 352 ] = xx [ 168 ] ; xx [ 353 ] = xx [ 101
] ; pm_math_Matrix3x3_xform_ra ( xx + 345 , xx + 324 , xx + 258 ) ; xx [ 170
] = xx [ 283 ] + xx [ 7 ] * ( xx [ 67 ] * xx [ 176 ] - xx [ 68 ] * xx [ 254 ]
) + xx [ 258 ] ; xx [ 173 ] = xx [ 175 ] + xx [ 245 ] + xx [ 333 ] + xx [ 259
] ; xx [ 175 ] = xx [ 2 ] * xx [ 2 ] * xx [ 173 ] ; xx [ 216 ] = xx [ 2 ] *
xx [ 2 ] * xx [ 170 ] ; xx [ 223 ] = xx [ 170 ] - xx [ 7 ] * ( xx [ 175 ] +
xx [ 216 ] ) ; xx [ 170 ] = xx [ 58 ] * state [ 11 ] ; xx [ 58 ] =
1.000000000000001 ; xx [ 236 ] = xx [ 121 ] / xx [ 127 ] ; xx [ 127 ] = xx [
121 ] - xx [ 121 ] * xx [ 236 ] ; xx [ 345 ] = xx [ 100 ] * xx [ 131 ] + xx [
113 ] * xx [ 129 ] ; xx [ 346 ] = xx [ 134 ] * xx [ 131 ] + xx [ 102 ] * xx [
129 ] ; xx [ 347 ] = xx [ 117 ] * xx [ 129 ] - xx [ 94 ] * xx [ 131 ] ; xx [
348 ] = xx [ 100 ] * xx [ 86 ] + xx [ 113 ] * xx [ 85 ] ; xx [ 349 ] = xx [
134 ] * xx [ 86 ] + xx [ 102 ] * xx [ 85 ] ; xx [ 350 ] = xx [ 117 ] * xx [
85 ] - xx [ 94 ] * xx [ 86 ] ; xx [ 351 ] = xx [ 130 ] * xx [ 127 ] ; xx [
352 ] = - ( xx [ 89 ] * xx [ 127 ] ) ; xx [ 353 ] = xx [ 87 ] * xx [ 127 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 138 , xx + 345 , xx + 379 ) ; xx [ 85 ] =
xx [ 133 ] * xx [ 163 ] ; xx [ 138 ] = xx [ 215 ] ; xx [ 139 ] = xx [ 109 ] ;
xx [ 140 ] = xx [ 115 ] ; xx [ 141 ] = - xx [ 222 ] ; xx [ 142 ] = xx [ 287 ]
; xx [ 143 ] = - xx [ 225 ] ; xx [ 144 ] = xx [ 312 ] ; xx [ 145 ] = - xx [
232 ] ; xx [ 146 ] = xx [ 151 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 138 ,
xx + 153 , xx + 345 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 266 , xx + 153 ,
xx + 138 ) ; xx [ 86 ] = xx [ 238 ] / xx [ 246 ] ; xx [ 264 ] = xx [ 234 ] ;
xx [ 265 ] = xx [ 218 ] ; xx [ 266 ] = xx [ 230 ] ; xx [ 267 ] = xx [ 313 ] ;
xx [ 268 ] = xx [ 103 ] ; xx [ 269 ] = xx [ 228 ] ; xx [ 270 ] = xx [ 235 ] ;
xx [ 271 ] = xx [ 280 ] ; xx [ 272 ] = xx [ 319 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 264 , xx + 250 , xx + 388 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 354 , xx + 250 , xx + 264 ) ; xx [ 87 ]
= xx [ 247 ] / xx [ 77 ] ; xx [ 354 ] = xx [ 288 ] ; xx [ 355 ] = xx [ 231 ]
; xx [ 356 ] = xx [ 308 ] ; xx [ 357 ] = xx [ 213 ] ; xx [ 358 ] = xx [ 123 ]
; xx [ 359 ] = xx [ 119 ] ; xx [ 360 ] = xx [ 317 ] ; xx [ 361 ] = xx [ 147 ]
; xx [ 362 ] = xx [ 237 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 354 , xx +
342 , xx + 397 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 370 , xx + 342 , xx +
354 ) ; xx [ 89 ] = xx [ 387 ] - xx [ 85 ] - xx [ 85 ] + xx [ 133 ] * xx [
148 ] - xx [ 353 ] - xx [ 353 ] - xx [ 146 ] + xx [ 257 ] * ( xx [ 239 ] - xx
[ 238 ] * xx [ 86 ] ) * xx [ 257 ] - xx [ 396 ] - xx [ 396 ] - xx [ 272 ] +
xx [ 292 ] * ( xx [ 332 ] - xx [ 247 ] * xx [ 87 ] ) * xx [ 292 ] - xx [ 405
] - xx [ 405 ] - xx [ 362 ] + 1.01 ; xx [ 85 ] = xx [ 133 ] * xx [ 164 ] + xx
[ 132 ] * xx [ 162 ] ; xx [ 94 ] = xx [ 133 ] * xx [ 160 ] ; xx [ 100 ] = xx
[ 386 ] + xx [ 85 ] - xx [ 94 ] - xx [ 133 ] * xx [ 124 ] ; xx [ 102 ] = xx [
132 ] * xx [ 163 ] ; xx [ 103 ] = xx [ 133 ] * xx [ 157 ] ; xx [ 109 ] = xx [
385 ] - xx [ 102 ] - xx [ 103 ] + xx [ 133 ] * xx [ 108 ] ; xx [ 113 ] = xx [
107 ] / xx [ 246 ] ; xx [ 115 ] = xx [ 238 ] * xx [ 113 ] ; xx [ 117 ] = xx [
199 ] - xx [ 115 ] ; xx [ 119 ] = xx [ 194 ] / xx [ 246 ] ; xx [ 121 ] = xx [
238 ] * xx [ 119 ] ; xx [ 123 ] = xx [ 217 ] - xx [ 121 ] ; xx [ 127 ] = xx [
74 ] / xx [ 77 ] ; xx [ 129 ] = xx [ 247 ] * xx [ 127 ] ; xx [ 130 ] = xx [
293 ] - xx [ 129 ] ; xx [ 131 ] = xx [ 118 ] / xx [ 77 ] ; xx [ 77 ] = xx [
247 ] * xx [ 131 ] ; xx [ 134 ] = xx [ 81 ] - xx [ 77 ] ; xx [ 81 ] = xx [
100 ] - xx [ 212 ] * xx [ 109 ] - xx [ 351 ] - xx [ 347 ] - xx [ 144 ] + xx [
257 ] * ( xx [ 171 ] * xx [ 117 ] + xx [ 220 ] * xx [ 123 ] ) - xx [ 394 ] -
xx [ 390 ] - xx [ 270 ] + xx [ 292 ] * ( xx [ 263 ] * xx [ 130 ] + xx [ 277 ]
* xx [ 134 ] ) - xx [ 403 ] - xx [ 399 ] - xx [ 360 ] ; xx [ 147 ] = xx [ 182
] * xx [ 89 ] - xx [ 81 ] ; xx [ 151 ] = xx [ 384 ] - xx [ 94 ] + xx [ 85 ] -
( xx [ 133 ] * xx [ 150 ] + xx [ 132 ] * xx [ 136 ] ) ; xx [ 85 ] = xx [ 381
] - xx [ 103 ] - xx [ 102 ] + xx [ 132 ] * xx [ 148 ] ; xx [ 94 ] = xx [ 257
] * ( xx [ 106 ] - xx [ 115 ] ) ; xx [ 102 ] = xx [ 257 ] * ( xx [ 84 ] - xx
[ 121 ] ) ; xx [ 84 ] = xx [ 292 ] * ( xx [ 5 ] - xx [ 129 ] ) ; xx [ 5 ] =
xx [ 292 ] * ( xx [ 197 ] - xx [ 77 ] ) ; xx [ 77 ] = xx [ 151 ] - xx [ 212 ]
* xx [ 85 ] - xx [ 347 ] - xx [ 351 ] - xx [ 140 ] + xx [ 94 ] * xx [ 171 ] +
xx [ 220 ] * xx [ 102 ] - xx [ 390 ] - xx [ 394 ] - xx [ 266 ] + xx [ 84 ] *
xx [ 263 ] + xx [ 277 ] * xx [ 5 ] - xx [ 399 ] - xx [ 403 ] - xx [ 356 ] ;
xx [ 103 ] = xx [ 133 ] * xx [ 161 ] + xx [ 132 ] * xx [ 159 ] ; xx [ 106 ] =
xx [ 73 ] + xx [ 383 ] + xx [ 103 ] + xx [ 103 ] + xx [ 132 ] * xx [ 120 ] +
xx [ 133 ] * xx [ 128 ] ; xx [ 103 ] = xx [ 132 ] * xx [ 160 ] ; xx [ 115 ] =
xx [ 133 ] * xx [ 158 ] + xx [ 132 ] * xx [ 156 ] ; xx [ 120 ] = xx [ 382 ] -
xx [ 103 ] + xx [ 115 ] - ( xx [ 132 ] * xx [ 95 ] + xx [ 133 ] * xx [ 111 ]
) ; xx [ 95 ] = xx [ 106 ] - xx [ 212 ] * xx [ 120 ] ; xx [ 111 ] = xx [ 380
] + xx [ 115 ] - xx [ 103 ] - xx [ 132 ] * xx [ 124 ] ; xx [ 103 ] = xx [ 132
] * xx [ 157 ] ; xx [ 115 ] = xx [ 73 ] + xx [ 379 ] - xx [ 103 ] - xx [ 103
] + xx [ 132 ] * xx [ 108 ] ; xx [ 73 ] = xx [ 111 ] - xx [ 212 ] * xx [ 115
] ; xx [ 103 ] = xx [ 91 ] - xx [ 107 ] * xx [ 113 ] ; xx [ 91 ] = xx [ 194 ]
* xx [ 113 ] ; xx [ 107 ] = xx [ 105 ] - xx [ 91 ] ; xx [ 105 ] = xx [ 171 ]
* xx [ 103 ] + xx [ 220 ] * xx [ 107 ] ; xx [ 108 ] = xx [ 193 ] - xx [ 91 ]
; xx [ 91 ] = xx [ 92 ] - xx [ 194 ] * xx [ 119 ] ; xx [ 92 ] = xx [ 171 ] *
xx [ 108 ] + xx [ 220 ] * xx [ 91 ] ; xx [ 121 ] = xx [ 203 ] - xx [ 74 ] *
xx [ 127 ] ; xx [ 74 ] = xx [ 118 ] * xx [ 127 ] ; xx [ 124 ] = xx [ 202 ] -
xx [ 74 ] ; xx [ 128 ] = xx [ 263 ] * xx [ 121 ] + xx [ 277 ] * xx [ 124 ] ;
xx [ 129 ] = xx [ 209 ] - xx [ 74 ] ; xx [ 74 ] = xx [ 210 ] - xx [ 118 ] *
xx [ 131 ] ; xx [ 118 ] = xx [ 263 ] * xx [ 129 ] + xx [ 277 ] * xx [ 74 ] ;
xx [ 136 ] = xx [ 95 ] - xx [ 212 ] * xx [ 73 ] - xx [ 345 ] - xx [ 345 ] -
xx [ 138 ] + xx [ 171 ] * xx [ 105 ] + xx [ 220 ] * xx [ 92 ] - xx [ 388 ] -
xx [ 388 ] - xx [ 264 ] + xx [ 263 ] * xx [ 128 ] + xx [ 277 ] * xx [ 118 ] -
xx [ 397 ] - xx [ 397 ] - xx [ 354 ] + xx [ 4 ] ; xx [ 148 ] = xx [ 182 ] *
xx [ 77 ] - xx [ 136 ] ; xx [ 150 ] = 1.0 ; xx [ 156 ] =
2.220446049250313e-16 ; xx [ 157 ] = 1.0 ; xx [ 158 ] = xx [ 150 ] * ( xx [
156 ] * xx [ 135 ] - xx [ 157 ] * xx [ 214 ] ) ; xx [ 159 ] = xx [ 75 ] * xx
[ 158 ] ; xx [ 160 ] = xx [ 156 ] * xx [ 244 ] - xx [ 157 ] * xx [ 165 ] ; xx
[ 161 ] = xx [ 156 ] * xx [ 166 ] - xx [ 157 ] * xx [ 243 ] ; xx [ 162 ] = xx
[ 156 ] * xx [ 160 ] - xx [ 157 ] * xx [ 161 ] ; xx [ 163 ] = xx [ 75 ] * xx
[ 162 ] ; xx [ 164 ] = xx [ 54 ] + xx [ 58 ] * ( xx [ 182 ] * xx [ 147 ] - xx
[ 148 ] ) - xx [ 159 ] - xx [ 159 ] + xx [ 75 ] * xx [ 163 ] ; xx [ 159 ] =
state [ 11 ] * xx [ 63 ] ; xx [ 193 ] = xx [ 182 ] * xx [ 81 ] + xx [ 89 ] ;
xx [ 81 ] = xx [ 182 ] * xx [ 136 ] + xx [ 77 ] ; xx [ 77 ] = xx [ 182 ] * xx
[ 193 ] - xx [ 81 ] ; xx [ 89 ] = xx [ 257 ] * ( xx [ 171 ] * xx [ 123 ] - xx
[ 220 ] * xx [ 117 ] ) - xx [ 395 ] - xx [ 393 ] - xx [ 271 ] - ( xx [ 212 ]
* xx [ 100 ] + xx [ 109 ] + xx [ 352 ] + xx [ 350 ] + xx [ 145 ] ) + xx [ 292
] * ( xx [ 263 ] * xx [ 134 ] - xx [ 277 ] * xx [ 130 ] ) - xx [ 404 ] - xx [
402 ] - xx [ 361 ] ; xx [ 100 ] = xx [ 212 ] * xx [ 111 ] + xx [ 115 ] ; xx [
109 ] = xx [ 212 ] * xx [ 106 ] + xx [ 120 ] ; xx [ 106 ] = xx [ 171 ] * xx [
107 ] - xx [ 220 ] * xx [ 103 ] ; xx [ 103 ] = xx [ 171 ] * xx [ 91 ] - xx [
220 ] * xx [ 108 ] ; xx [ 91 ] = xx [ 263 ] * xx [ 124 ] - xx [ 277 ] * xx [
121 ] ; xx [ 107 ] = xx [ 263 ] * xx [ 74 ] - xx [ 277 ] * xx [ 129 ] ; xx [
74 ] = xx [ 212 ] * xx [ 100 ] - xx [ 109 ] - xx [ 346 ] - xx [ 348 ] - xx [
139 ] + xx [ 171 ] * xx [ 106 ] + xx [ 220 ] * xx [ 103 ] - xx [ 389 ] - xx [
391 ] - xx [ 265 ] + xx [ 263 ] * xx [ 91 ] + xx [ 277 ] * xx [ 107 ] - xx [
398 ] - xx [ 400 ] - xx [ 355 ] ; xx [ 108 ] = xx [ 182 ] * xx [ 89 ] - xx [
74 ] ; xx [ 111 ] = xx [ 58 ] * xx [ 149 ] ; xx [ 115 ] = xx [ 75 ] * xx [
111 ] ; xx [ 117 ] = xx [ 156 ] * xx [ 323 ] - xx [ 157 ] * xx [ 282 ] ; xx [
120 ] = xx [ 156 ] * xx [ 281 ] - xx [ 157 ] * xx [ 125 ] ; xx [ 121 ] = xx [
156 ] * xx [ 117 ] - xx [ 157 ] * xx [ 120 ] ; xx [ 123 ] = xx [ 75 ] * xx [
121 ] ; xx [ 124 ] = xx [ 150 ] * xx [ 167 ] ; xx [ 129 ] = xx [ 150 ] * xx [
76 ] ; xx [ 76 ] = xx [ 156 ] * xx [ 124 ] - xx [ 157 ] * xx [ 129 ] ; xx [
130 ] = xx [ 75 ] * xx [ 76 ] ; xx [ 134 ] = xx [ 150 ] * ( xx [ 156 ] * xx [
77 ] - xx [ 157 ] * xx [ 108 ] ) + xx [ 115 ] - xx [ 123 ] - xx [ 75 ] * xx [
130 ] ; xx [ 136 ] = xx [ 121 ] + xx [ 130 ] ; xx [ 121 ] = xx [ 157 ] * xx [
323 ] + xx [ 156 ] * xx [ 282 ] ; xx [ 130 ] = xx [ 157 ] * xx [ 281 ] + xx [
156 ] * xx [ 125 ] ; xx [ 125 ] = xx [ 157 ] * xx [ 124 ] + xx [ 156 ] * xx [
129 ] ; xx [ 124 ] = xx [ 156 ] * xx [ 121 ] - xx [ 157 ] * xx [ 130 ] + xx [
75 ] * xx [ 125 ] ; xx [ 129 ] = xx [ 150 ] * xx [ 309 ] ; xx [ 149 ] = xx [
150 ] * xx [ 227 ] ; xx [ 167 ] = xx [ 156 ] * xx [ 129 ] - xx [ 157 ] * xx [
149 ] ; xx [ 194 ] = xx [ 58 ] * xx [ 101 ] ; xx [ 58 ] = xx [ 75 ] * xx [
194 ] ; xx [ 101 ] = xx [ 167 ] + xx [ 58 ] ; xx [ 197 ] = xx [ 157 ] * xx [
117 ] + xx [ 156 ] * xx [ 120 ] ; xx [ 117 ] = xx [ 157 ] * xx [ 121 ] + xx [
156 ] * xx [ 130 ] ; xx [ 120 ] = xx [ 157 ] * xx [ 129 ] + xx [ 156 ] * xx [
149 ] ; xx [ 121 ] = xx [ 158 ] - xx [ 163 ] ; xx [ 129 ] = xx [ 157 ] * xx [
160 ] + xx [ 156 ] * xx [ 161 ] ; xx [ 130 ] = xx [ 150 ] * ( xx [ 157 ] * xx
[ 135 ] + xx [ 156 ] * xx [ 214 ] ) - xx [ 75 ] * xx [ 129 ] ; xx [ 135 ] =
xx [ 150 ] * ( xx [ 156 ] * xx [ 174 ] - xx [ 157 ] * xx [ 168 ] ) ; xx [ 149
] = xx [ 75 ] * xx [ 135 ] ; xx [ 158 ] = xx [ 111 ] - xx [ 149 ] ; xx [ 370
] = xx [ 136 ] ; xx [ 371 ] = xx [ 124 ] ; xx [ 372 ] = xx [ 101 ] ; xx [ 373
] = xx [ 197 ] ; xx [ 374 ] = xx [ 117 ] ; xx [ 375 ] = xx [ 120 ] ; xx [ 376
] = xx [ 121 ] ; xx [ 377 ] = xx [ 130 ] ; xx [ 378 ] = xx [ 158 ] ; xx [ 111
] = 0.06505 ; xx [ 160 ] = xx [ 111 ] * xx [ 49 ] ; xx [ 161 ] = xx [ 160 ] *
xx [ 50 ] ; xx [ 163 ] = xx [ 111 ] * xx [ 44 ] ; xx [ 199 ] = xx [ 163 ] *
xx [ 50 ] ; xx [ 202 ] = xx [ 199 ] * xx [ 55 ] ; xx [ 203 ] = xx [ 161 ] *
xx [ 55 ] ; xx [ 209 ] = xx [ 161 ] - xx [ 7 ] * ( xx [ 202 ] * xx [ 57 ] +
xx [ 203 ] * xx [ 55 ] ) ; xx [ 161 ] = 1.444400155037329e-17 ; xx [ 210 ] =
xx [ 161 ] * state [ 11 ] ; xx [ 213 ] = xx [ 210 ] * ( xx [ 63 ] + xx [ 63 ]
) - ( xx [ 163 ] * xx [ 44 ] + xx [ 160 ] * xx [ 49 ] ) ; xx [ 44 ] = xx [
199 ] + xx [ 7 ] * ( xx [ 203 ] * xx [ 57 ] - xx [ 202 ] * xx [ 55 ] ) - xx [
210 ] * ( xx [ 50 ] + xx [ 59 ] ) ; xx [ 230 ] = xx [ 209 ] ; xx [ 231 ] = xx
[ 213 ] ; xx [ 232 ] = xx [ 44 ] ; pm_math_Matrix3x3_xform_ra ( xx + 370 , xx
+ 230 , xx + 237 ) ; xx [ 59 ] = xx [ 75 ] * xx [ 197 ] ; xx [ 63 ] = xx [
150 ] * ( xx [ 157 ] * xx [ 77 ] + xx [ 156 ] * xx [ 108 ] ) - xx [ 59 ] ; xx
[ 77 ] = xx [ 63 ] + xx [ 161 ] * xx [ 121 ] ; xx [ 108 ] = state [ 10 ] + xx
[ 0 ] ; if ( xx [ 1 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 1 ] ; xx [ 160 ] = - (
xx [ 108 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 160 ] ) xx [ 160 ] = xx [ 4 ]
; xx [ 163 ] = xx [ 8 ] * state [ 11 ] ; xx [ 199 ] = xx [ 160 ] * xx [ 160 ]
* ( xx [ 6 ] - xx [ 7 ] * xx [ 160 ] ) * ( ( - xx [ 108 ] == xx [ 1 ] ? xx [
1 ] : - xx [ 163 ] ) - xx [ 10 ] * xx [ 108 ] ) ; if ( xx [ 1 ] > xx [ 199 ]
) xx [ 199 ] = xx [ 1 ] ; xx [ 108 ] = state [ 10 ] - xx [ 0 ] ; if ( xx [ 1
] > xx [ 108 ] ) xx [ 108 ] = xx [ 1 ] ; xx [ 160 ] = xx [ 108 ] / xx [ 3 ] ;
if ( xx [ 4 ] < xx [ 160 ] ) xx [ 160 ] = xx [ 4 ] ; xx [ 202 ] = xx [ 160 ]
* xx [ 160 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 160 ] ) * ( xx [ 10 ] * xx [ 108
] + ( xx [ 108 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 163 ] ) ) ; if ( xx [ 1 ] > xx
[ 202 ] ) xx [ 202 ] = xx [ 1 ] ; xx [ 78 ] = xx [ 79 ] + xx [ 90 ] - xx [ 7
] * ( xx [ 65 ] * xx [ 83 ] + xx [ 69 ] * xx [ 82 ] ) + xx [ 191 ] + xx [ 195
] - xx [ 7 ] * ( xx [ 183 ] * xx [ 184 ] + xx [ 196 ] * xx [ 178 ] ) + xx [
285 ] + xx [ 122 ] - xx [ 7 ] * ( xx [ 204 ] * xx [ 290 ] + xx [ 198 ] * xx [
256 ] ) + xx [ 368 ] + xx [ 328 ] ; xx [ 79 ] = xx [ 211 ] + xx [ 7 ] * ( xx
[ 67 ] * xx [ 116 ] - xx [ 68 ] * xx [ 93 ] ) + xx [ 327 ] ; xx [ 80 ] = xx [
2 ] * xx [ 2 ] * xx [ 79 ] ; xx [ 82 ] = xx [ 2 ] * xx [ 2 ] * xx [ 78 ] ; xx
[ 83 ] = xx [ 150 ] * ( xx [ 182 ] * xx [ 148 ] + xx [ 147 ] ) ; xx [ 90 ] =
xx [ 102 ] * xx [ 171 ] - xx [ 220 ] * xx [ 94 ] - xx [ 393 ] - xx [ 395 ] -
xx [ 269 ] - ( xx [ 212 ] * xx [ 151 ] + xx [ 85 ] + xx [ 350 ] + xx [ 352 ]
+ xx [ 143 ] ) + xx [ 5 ] * xx [ 263 ] - xx [ 277 ] * xx [ 84 ] - xx [ 402 ]
- xx [ 404 ] - xx [ 359 ] ; xx [ 5 ] = xx [ 171 ] * xx [ 92 ] - xx [ 220 ] *
xx [ 105 ] - xx [ 391 ] - xx [ 389 ] - xx [ 267 ] - ( xx [ 212 ] * xx [ 95 ]
+ xx [ 73 ] + xx [ 348 ] + xx [ 346 ] + xx [ 141 ] ) + xx [ 263 ] * xx [ 118
] - xx [ 277 ] * xx [ 128 ] - xx [ 400 ] - xx [ 398 ] - xx [ 357 ] ; xx [ 73
] = xx [ 150 ] * ( xx [ 182 ] * xx [ 90 ] - xx [ 5 ] ) ; xx [ 84 ] = xx [ 157
] * xx [ 83 ] + xx [ 156 ] * xx [ 73 ] - xx [ 59 ] ; xx [ 59 ] = xx [ 182 ] *
xx [ 81 ] + xx [ 193 ] ; xx [ 81 ] = xx [ 182 ] * xx [ 74 ] + xx [ 89 ] ; xx
[ 74 ] = xx [ 156 ] * xx [ 59 ] - xx [ 157 ] * xx [ 81 ] ; xx [ 85 ] = xx [
182 ] * xx [ 5 ] + xx [ 90 ] ; xx [ 5 ] = xx [ 212 ] * xx [ 109 ] + xx [ 100
] - xx [ 349 ] - xx [ 349 ] - xx [ 142 ] + xx [ 171 ] * xx [ 103 ] - xx [ 220
] * xx [ 106 ] - xx [ 392 ] - xx [ 392 ] - xx [ 268 ] + xx [ 263 ] * xx [ 107
] - xx [ 277 ] * xx [ 91 ] - xx [ 401 ] - xx [ 401 ] - xx [ 358 ] + xx [ 4 ]
; xx [ 89 ] = xx [ 156 ] * xx [ 85 ] - xx [ 157 ] * xx [ 5 ] ; xx [ 90 ] = xx
[ 75 ] * xx [ 120 ] ; xx [ 91 ] = xx [ 157 ] * xx [ 74 ] + xx [ 156 ] * xx [
89 ] + xx [ 90 ] ; xx [ 92 ] = xx [ 71 ] + xx [ 78 ] + xx [ 7 ] * ( xx [ 80 ]
- xx [ 82 ] ) + xx [ 170 ] * xx [ 84 ] - xx [ 159 ] * xx [ 91 ] + xx [ 238 ]
; xx [ 78 ] = 0.1879 ; xx [ 94 ] = xx [ 78 ] + xx [ 162 ] ; xx [ 95 ] = xx [
157 ] * xx [ 244 ] + xx [ 156 ] * xx [ 165 ] ; xx [ 100 ] = xx [ 157 ] * xx [
166 ] + xx [ 156 ] * xx [ 243 ] ; xx [ 102 ] = xx [ 156 ] * xx [ 95 ] - xx [
157 ] * xx [ 100 ] ; xx [ 103 ] = xx [ 157 ] * xx [ 95 ] + xx [ 156 ] * xx [
100 ] ; xx [ 95 ] = xx [ 150 ] * ( xx [ 157 ] * xx [ 174 ] + xx [ 156 ] * xx
[ 168 ] ) ; xx [ 138 ] = xx [ 94 ] ; xx [ 139 ] = xx [ 102 ] ; xx [ 140 ] =
xx [ 76 ] ; xx [ 141 ] = xx [ 129 ] ; xx [ 142 ] = xx [ 78 ] + xx [ 103 ] ;
xx [ 143 ] = xx [ 125 ] ; xx [ 144 ] = xx [ 135 ] ; xx [ 145 ] = xx [ 95 ] ;
xx [ 146 ] = xx [ 78 ] + xx [ 194 ] ; pm_math_Matrix3x3_xform_ra ( xx + 138 ,
xx + 230 , xx + 105 ) ; xx [ 100 ] = xx [ 223 ] + xx [ 170 ] * xx [ 121 ] -
xx [ 159 ] * xx [ 136 ] + xx [ 105 ] ; xx [ 108 ] = xx [ 157 ] * xx [ 59 ] +
xx [ 156 ] * xx [ 81 ] ; xx [ 59 ] = xx [ 157 ] * xx [ 85 ] + xx [ 156 ] * xx
[ 5 ] ; xx [ 5 ] = xx [ 56 ] + xx [ 157 ] * xx [ 108 ] + xx [ 156 ] * xx [ 59
] ; xx [ 56 ] = xx [ 5 ] + xx [ 161 ] * xx [ 197 ] ; xx [ 81 ] = xx [ 197 ] +
xx [ 161 ] * xx [ 94 ] ; xx [ 85 ] = xx [ 56 ] + xx [ 161 ] * xx [ 81 ] ; ii
[ 0 ] = factorSymmetricPosDef ( xx + 85 , 1 , xx + 109 ) ; if ( ii [ 0 ] != 0
) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/wrist_3_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 109 ] = ( input [ 5 ] + xx [ 199 ] - xx [ 202 ] - ( xx
[ 92 ] + xx [ 161 ] * xx [ 100 ] ) ) / xx [ 85 ] ; xx [ 118 ] = xx [ 72 ] +
xx [ 335 ] - xx [ 7 ] * ( xx [ 67 ] * xx [ 93 ] + xx [ 68 ] * xx [ 116 ] ) +
xx [ 329 ] - xx [ 75 ] * xx [ 223 ] + xx [ 170 ] * xx [ 164 ] - xx [ 159 ] *
xx [ 134 ] + xx [ 239 ] + xx [ 77 ] * xx [ 109 ] ; xx [ 71 ] = xx [ 179 ] -
xx [ 7 ] * ( xx [ 67 ] * xx [ 254 ] + xx [ 68 ] * xx [ 176 ] ) + xx [ 260 ] ;
xx [ 72 ] = xx [ 156 ] * xx [ 83 ] - xx [ 157 ] * xx [ 73 ] - xx [ 123 ] + xx
[ 115 ] - xx [ 75 ] * xx [ 149 ] ; xx [ 73 ] = xx [ 75 ] * xx [ 167 ] ; xx [
83 ] = xx [ 54 ] + xx [ 156 ] * xx [ 74 ] - xx [ 157 ] * xx [ 89 ] + xx [ 73
] + xx [ 73 ] + xx [ 75 ] * xx [ 58 ] ; xx [ 54 ] = xx [ 156 ] * xx [ 108 ] -
xx [ 157 ] * xx [ 59 ] + xx [ 90 ] ; xx [ 58 ] = xx [ 54 ] + xx [ 161 ] * xx
[ 136 ] ; xx [ 59 ] = xx [ 70 ] + xx [ 79 ] - xx [ 7 ] * ( xx [ 82 ] + xx [
80 ] ) + xx [ 75 ] * xx [ 71 ] + xx [ 170 ] * xx [ 72 ] - xx [ 159 ] * xx [
83 ] + xx [ 237 ] + xx [ 58 ] * xx [ 109 ] ; xx [ 70 ] = xx [ 59 ] * xx [ 55
] ; xx [ 73 ] = xx [ 118 ] * xx [ 55 ] ; xx [ 74 ] = xx [ 100 ] + xx [ 81 ] *
xx [ 109 ] ; xx [ 79 ] = xx [ 120 ] + xx [ 161 ] * xx [ 135 ] ; xx [ 80 ] =
xx [ 71 ] + xx [ 170 ] * xx [ 158 ] - xx [ 159 ] * xx [ 101 ] + xx [ 107 ] +
xx [ 79 ] * xx [ 109 ] ; xx [ 71 ] = xx [ 80 ] * xx [ 55 ] ; xx [ 82 ] = xx [
74 ] * xx [ 55 ] ; xx [ 89 ] = xx [ 74 ] + xx [ 7 ] * ( xx [ 71 ] * xx [ 57 ]
- xx [ 82 ] * xx [ 55 ] ) ; xx [ 74 ] = xx [ 50 ] * state [ 9 ] ; xx [ 50 ] =
xx [ 57 ] * xx [ 57 ] ; xx [ 90 ] = xx [ 7 ] * xx [ 50 ] - xx [ 4 ] ; xx [ 93
] = xx [ 58 ] / xx [ 85 ] ; xx [ 100 ] = xx [ 77 ] * xx [ 93 ] ; xx [ 108 ] =
xx [ 134 ] - xx [ 100 ] ; xx [ 115 ] = xx [ 7 ] * xx [ 57 ] * xx [ 55 ] ; xx
[ 116 ] = xx [ 77 ] / xx [ 85 ] ; xx [ 122 ] = xx [ 164 ] - xx [ 77 ] * xx [
116 ] ; xx [ 123 ] = xx [ 90 ] * xx [ 108 ] + xx [ 115 ] * xx [ 122 ] ; xx [
128 ] = xx [ 83 ] - xx [ 58 ] * xx [ 93 ] ; xx [ 83 ] = xx [ 72 ] - xx [ 100
] ; xx [ 72 ] = xx [ 90 ] * xx [ 128 ] + xx [ 115 ] * xx [ 83 ] ; xx [ 100 ]
= xx [ 79 ] / xx [ 85 ] ; xx [ 134 ] = xx [ 158 ] - xx [ 77 ] * xx [ 100 ] ;
xx [ 138 ] = xx [ 81 ] / xx [ 85 ] ; xx [ 139 ] = xx [ 121 ] - xx [ 77 ] * xx
[ 138 ] ; xx [ 121 ] = xx [ 90 ] * xx [ 134 ] - xx [ 115 ] * xx [ 139 ] ; xx
[ 140 ] = xx [ 101 ] - xx [ 58 ] * xx [ 100 ] ; xx [ 101 ] = xx [ 136 ] - xx
[ 58 ] * xx [ 138 ] ; xx [ 136 ] = xx [ 90 ] * xx [ 140 ] - xx [ 115 ] * xx [
101 ] ; xx [ 141 ] = xx [ 90 ] * xx [ 121 ] - xx [ 115 ] * xx [ 136 ] ; xx [
142 ] = xx [ 111 ] * xx [ 141 ] ; xx [ 143 ] = xx [ 90 ] * xx [ 101 ] + xx [
115 ] * xx [ 140 ] ; xx [ 101 ] = xx [ 90 ] * xx [ 139 ] + xx [ 115 ] * xx [
134 ] ; xx [ 134 ] = xx [ 90 ] * xx [ 143 ] + xx [ 115 ] * xx [ 101 ] ; xx [
139 ] = xx [ 111 ] * xx [ 134 ] ; xx [ 140 ] = xx [ 79 ] * xx [ 138 ] ; xx [
144 ] = xx [ 76 ] - xx [ 140 ] ; xx [ 76 ] = xx [ 94 ] - xx [ 81 ] * xx [ 138
] ; xx [ 81 ] = xx [ 90 ] * xx [ 144 ] - xx [ 115 ] * xx [ 76 ] ; xx [ 94 ] =
xx [ 194 ] - xx [ 79 ] * xx [ 100 ] + xx [ 78 ] ; xx [ 145 ] = xx [ 135 ] -
xx [ 140 ] ; xx [ 135 ] = xx [ 90 ] * xx [ 94 ] - xx [ 115 ] * xx [ 145 ] ;
xx [ 140 ] = xx [ 90 ] * xx [ 81 ] + xx [ 115 ] * xx [ 135 ] ; xx [ 146 ] =
xx [ 111 ] * xx [ 140 ] ; xx [ 147 ] = xx [ 90 ] * xx [ 123 ] - xx [ 115 ] *
xx [ 72 ] + xx [ 142 ] - xx [ 139 ] - xx [ 111 ] * xx [ 146 ] ; xx [ 148 ] =
state [ 9 ] * xx [ 49 ] ; xx [ 49 ] = xx [ 7 ] * ( xx [ 50 ] + xx [ 55 ] * xx
[ 55 ] ) - xx [ 4 ] ; xx [ 50 ] = xx [ 56 ] / xx [ 85 ] ; xx [ 149 ] = xx [
77 ] * xx [ 50 ] ; xx [ 150 ] = xx [ 49 ] * ( xx [ 63 ] - xx [ 149 ] ) ; xx [
63 ] = xx [ 56 ] * xx [ 93 ] ; xx [ 151 ] = xx [ 49 ] * ( xx [ 54 ] - xx [ 63
] ) ; xx [ 54 ] = xx [ 197 ] - xx [ 56 ] * xx [ 138 ] ; xx [ 156 ] = xx [ 120
] - xx [ 56 ] * xx [ 100 ] ; xx [ 120 ] = xx [ 49 ] * ( xx [ 90 ] * xx [ 54 ]
+ xx [ 115 ] * xx [ 156 ] ) ; xx [ 157 ] = xx [ 111 ] * xx [ 120 ] ; xx [ 158
] = xx [ 150 ] * xx [ 90 ] - xx [ 115 ] * xx [ 151 ] - xx [ 157 ] ; xx [ 160
] = xx [ 134 ] + xx [ 146 ] ; xx [ 134 ] = xx [ 117 ] + xx [ 161 ] * xx [ 129
] ; xx [ 146 ] = xx [ 134 ] / xx [ 85 ] ; xx [ 85 ] = xx [ 49 ] * ( xx [ 124
] - xx [ 58 ] * xx [ 146 ] ) ; xx [ 58 ] = xx [ 49 ] * ( xx [ 130 ] - xx [ 77
] * xx [ 146 ] ) ; xx [ 77 ] = xx [ 79 ] * xx [ 146 ] ; xx [ 79 ] = xx [ 125
] - xx [ 77 ] ; xx [ 125 ] = xx [ 134 ] * xx [ 138 ] ; xx [ 162 ] = xx [ 129
] - xx [ 125 ] ; xx [ 129 ] = xx [ 49 ] * ( xx [ 90 ] * xx [ 79 ] - xx [ 115
] * xx [ 162 ] ) ; xx [ 163 ] = xx [ 85 ] * xx [ 90 ] + xx [ 115 ] * xx [ 58
] + xx [ 111 ] * xx [ 129 ] ; xx [ 164 ] = xx [ 90 ] * xx [ 136 ] + xx [ 115
] * xx [ 121 ] ; xx [ 121 ] = xx [ 90 ] * xx [ 135 ] - xx [ 115 ] * xx [ 81 ]
; xx [ 81 ] = xx [ 111 ] * xx [ 121 ] ; xx [ 135 ] = xx [ 164 ] + xx [ 81 ] ;
xx [ 136 ] = xx [ 49 ] * ( xx [ 117 ] - xx [ 56 ] * xx [ 146 ] ) * xx [ 49 ]
; xx [ 117 ] = xx [ 49 ] * ( xx [ 90 ] * xx [ 156 ] - xx [ 115 ] * xx [ 54 ]
) ; xx [ 54 ] = xx [ 90 ] * xx [ 101 ] - xx [ 115 ] * xx [ 143 ] ; xx [ 101 ]
= xx [ 90 ] * xx [ 76 ] + xx [ 115 ] * xx [ 144 ] ; xx [ 76 ] = xx [ 145 ] *
xx [ 90 ] + xx [ 115 ] * xx [ 94 ] ; xx [ 94 ] = xx [ 90 ] * xx [ 101 ] + xx
[ 115 ] * xx [ 76 ] ; xx [ 143 ] = xx [ 111 ] * xx [ 94 ] ; xx [ 144 ] = xx [
54 ] - xx [ 143 ] ; xx [ 145 ] = xx [ 49 ] * ( xx [ 90 ] * xx [ 162 ] + xx [
115 ] * xx [ 79 ] ) ; xx [ 79 ] = xx [ 58 ] * xx [ 90 ] - xx [ 115 ] * xx [
85 ] - xx [ 111 ] * xx [ 145 ] ; xx [ 58 ] = xx [ 90 ] * xx [ 76 ] - xx [ 115
] * xx [ 101 ] ; xx [ 76 ] = xx [ 111 ] * xx [ 58 ] ; xx [ 85 ] = xx [ 141 ]
- xx [ 76 ] ; xx [ 190 ] = xx [ 160 ] ; xx [ 191 ] = xx [ 163 ] ; xx [ 192 ]
= xx [ 135 ] ; xx [ 193 ] = xx [ 120 ] ; xx [ 194 ] = xx [ 136 ] ; xx [ 195 ]
= xx [ 117 ] ; xx [ 196 ] = xx [ 144 ] ; xx [ 197 ] = xx [ 79 ] ; xx [ 198 ]
= xx [ 85 ] ; xx [ 101 ] = 0.09465 ; xx [ 141 ] = xx [ 101 ] * xx [ 35 ] ; xx
[ 156 ] = xx [ 141 ] * xx [ 43 ] ; xx [ 162 ] = xx [ 101 ] * xx [ 36 ] ; xx [
165 ] = xx [ 162 ] * xx [ 43 ] ; xx [ 166 ] = xx [ 165 ] * xx [ 45 ] ; xx [
167 ] = xx [ 156 ] * xx [ 45 ] ; xx [ 168 ] = xx [ 156 ] + xx [ 7 ] * ( xx [
166 ] * xx [ 48 ] - xx [ 167 ] * xx [ 45 ] ) ; xx [ 156 ] = xx [ 165 ] - xx [
7 ] * ( xx [ 167 ] * xx [ 48 ] + xx [ 166 ] * xx [ 45 ] ) ; xx [ 165 ] = xx [
141 ] * xx [ 35 ] + xx [ 162 ] * xx [ 36 ] ; xx [ 202 ] = xx [ 168 ] ; xx [
203 ] = xx [ 156 ] ; xx [ 204 ] = - xx [ 165 ] ; pm_math_Matrix3x3_xform_ra (
xx + 190 , xx + 202 , xx + 210 ) ; xx [ 141 ] = xx [ 62 ] + xx [ 118 ] - xx [
7 ] * ( xx [ 70 ] * xx [ 57 ] + xx [ 73 ] * xx [ 55 ] ) - xx [ 111 ] * xx [
89 ] + xx [ 74 ] * xx [ 147 ] - xx [ 148 ] * xx [ 158 ] + xx [ 212 ] ; xx [
118 ] = xx [ 90 ] * xx [ 122 ] - xx [ 115 ] * xx [ 108 ] ; xx [ 108 ] = xx [
90 ] * xx [ 83 ] - xx [ 115 ] * xx [ 128 ] ; xx [ 83 ] = xx [ 111 ] * xx [ 54
] ; xx [ 54 ] = xx [ 46 ] + xx [ 90 ] * xx [ 118 ] - xx [ 115 ] * xx [ 108 ]
- xx [ 83 ] - xx [ 83 ] + xx [ 111 ] * xx [ 143 ] ; xx [ 46 ] = state [ 8 ] +
xx [ 0 ] ; if ( xx [ 1 ] < xx [ 46 ] ) xx [ 46 ] = xx [ 1 ] ; xx [ 83 ] = - (
xx [ 46 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 83 ] ) xx [ 83 ] = xx [ 4 ] ;
xx [ 122 ] = xx [ 8 ] * state [ 9 ] ; xx [ 128 ] = xx [ 83 ] * xx [ 83 ] * (
xx [ 6 ] - xx [ 7 ] * xx [ 83 ] ) * ( ( - xx [ 46 ] == xx [ 1 ] ? xx [ 1 ] :
- xx [ 122 ] ) - xx [ 10 ] * xx [ 46 ] ) ; if ( xx [ 1 ] > xx [ 128 ] ) xx [
128 ] = xx [ 1 ] ; xx [ 46 ] = state [ 8 ] - xx [ 0 ] ; if ( xx [ 1 ] > xx [
46 ] ) xx [ 46 ] = xx [ 1 ] ; xx [ 83 ] = xx [ 46 ] / xx [ 3 ] ; if ( xx [ 4
] < xx [ 83 ] ) xx [ 83 ] = xx [ 4 ] ; xx [ 143 ] = xx [ 83 ] * xx [ 83 ] * (
xx [ 6 ] - xx [ 7 ] * xx [ 83 ] ) * ( xx [ 10 ] * xx [ 46 ] + ( xx [ 46 ] ==
xx [ 1 ] ? xx [ 1 ] : xx [ 122 ] ) ) ; if ( xx [ 1 ] > xx [ 143 ] ) xx [ 143
] = xx [ 1 ] ; memcpy ( xx + 46 , xx + 54 , 1 * sizeof ( double ) ) ; ii [ 0
] = factorSymmetricPosDef ( xx + 46 , 1 , xx + 83 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/wrist_2_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 83 ] = ( input [ 4 ] + xx [ 128 ] - xx [ 143 ] - xx [
141 ] ) / xx [ 46 ] ; xx [ 122 ] = xx [ 35 ] * state [ 7 ] ; xx [ 35 ] = xx [
48 ] * xx [ 48 ] ; xx [ 128 ] = xx [ 7 ] * ( xx [ 35 ] + xx [ 45 ] * xx [ 45
] ) - xx [ 4 ] ; xx [ 143 ] = xx [ 54 ] / xx [ 46 ] ; xx [ 162 ] = xx [ 47 ]
+ xx [ 128 ] * ( xx [ 54 ] - xx [ 54 ] * xx [ 143 ] ) * xx [ 128 ] ; xx [ 47
] = state [ 7 ] * xx [ 43 ] ; xx [ 166 ] = xx [ 7 ] * xx [ 35 ] - xx [ 4 ] ;
xx [ 35 ] = xx [ 90 ] * xx [ 108 ] + xx [ 115 ] * xx [ 118 ] - xx [ 139 ] +
xx [ 142 ] - xx [ 111 ] * xx [ 76 ] ; xx [ 76 ] = xx [ 35 ] / xx [ 46 ] ; xx
[ 108 ] = xx [ 54 ] * xx [ 76 ] ; xx [ 118 ] = xx [ 147 ] - xx [ 108 ] ; xx [
139 ] = xx [ 7 ] * xx [ 48 ] * xx [ 45 ] ; xx [ 142 ] = xx [ 84 ] - xx [ 149
] ; xx [ 84 ] = xx [ 91 ] - xx [ 63 ] ; xx [ 63 ] = xx [ 49 ] * ( xx [ 90 ] *
xx [ 142 ] - xx [ 115 ] * xx [ 84 ] ) - xx [ 157 ] ; xx [ 91 ] = xx [ 63 ] /
xx [ 46 ] ; xx [ 147 ] = xx [ 54 ] * xx [ 91 ] ; xx [ 149 ] = xx [ 158 ] - xx
[ 147 ] ; xx [ 157 ] = xx [ 144 ] / xx [ 46 ] ; xx [ 158 ] = xx [ 144 ] - xx
[ 54 ] * xx [ 157 ] ; xx [ 167 ] = xx [ 79 ] / xx [ 46 ] ; xx [ 171 ] = xx [
79 ] - xx [ 54 ] * xx [ 167 ] ; xx [ 174 ] = xx [ 128 ] * ( xx [ 139 ] * xx [
158 ] + xx [ 166 ] * xx [ 171 ] ) ; xx [ 176 ] = xx [ 101 ] * xx [ 174 ] ; xx
[ 179 ] = xx [ 128 ] * ( xx [ 166 ] * xx [ 118 ] - xx [ 139 ] * xx [ 149 ] )
- xx [ 176 ] ; xx [ 182 ] = xx [ 160 ] - xx [ 35 ] * xx [ 157 ] ; xx [ 183 ]
= xx [ 163 ] - xx [ 35 ] * xx [ 167 ] ; xx [ 190 ] = xx [ 166 ] * xx [ 182 ]
- xx [ 139 ] * xx [ 183 ] ; xx [ 191 ] = xx [ 120 ] - xx [ 63 ] * xx [ 157 ]
; xx [ 192 ] = xx [ 136 ] - xx [ 63 ] * xx [ 167 ] ; xx [ 193 ] = xx [ 166 ]
* xx [ 191 ] - xx [ 139 ] * xx [ 192 ] ; xx [ 194 ] = xx [ 166 ] * xx [ 190 ]
- xx [ 139 ] * xx [ 193 ] ; xx [ 195 ] = 1.219 ; xx [ 196 ] = xx [ 94 ] - xx
[ 144 ] * xx [ 157 ] + xx [ 195 ] ; xx [ 197 ] = xx [ 49 ] * ( xx [ 102 ] -
xx [ 125 ] ) ; xx [ 102 ] = ( xx [ 95 ] - xx [ 77 ] ) * xx [ 49 ] ; xx [ 77 ]
= xx [ 197 ] * xx [ 90 ] + xx [ 115 ] * xx [ 102 ] ; xx [ 95 ] = xx [ 79 ] *
xx [ 157 ] ; xx [ 125 ] = xx [ 77 ] - xx [ 95 ] ; xx [ 198 ] = xx [ 139 ] *
xx [ 196 ] + xx [ 166 ] * xx [ 125 ] ; xx [ 199 ] = xx [ 145 ] - xx [ 95 ] ;
xx [ 95 ] = xx [ 49 ] * ( xx [ 103 ] - xx [ 134 ] * xx [ 146 ] + xx [ 78 ] )
* xx [ 49 ] ; xx [ 78 ] = xx [ 95 ] - xx [ 79 ] * xx [ 167 ] + xx [ 195 ] ;
xx [ 103 ] = xx [ 139 ] * xx [ 199 ] + xx [ 166 ] * xx [ 78 ] ; xx [ 214 ] =
xx [ 166 ] * xx [ 198 ] - xx [ 139 ] * xx [ 103 ] ; xx [ 215 ] = xx [ 101 ] *
xx [ 214 ] ; xx [ 217 ] = xx [ 194 ] - xx [ 215 ] ; xx [ 218 ] = xx [ 139 ] *
xx [ 182 ] + xx [ 166 ] * xx [ 183 ] ; xx [ 182 ] = xx [ 139 ] * xx [ 191 ] +
xx [ 166 ] * xx [ 192 ] ; xx [ 183 ] = xx [ 166 ] * xx [ 218 ] - xx [ 139 ] *
xx [ 182 ] ; xx [ 191 ] = xx [ 139 ] * xx [ 198 ] + xx [ 166 ] * xx [ 103 ] ;
xx [ 103 ] = xx [ 101 ] * xx [ 191 ] ; xx [ 192 ] = xx [ 183 ] - xx [ 103 ] ;
xx [ 198 ] = xx [ 85 ] / xx [ 46 ] ; xx [ 46 ] = xx [ 128 ] * ( xx [ 135 ] -
xx [ 35 ] * xx [ 198 ] ) ; xx [ 220 ] = xx [ 128 ] * ( xx [ 117 ] - xx [ 63 ]
* xx [ 198 ] ) ; xx [ 222 ] = xx [ 85 ] * xx [ 157 ] ; xx [ 223 ] = xx [ 58 ]
- xx [ 222 ] ; xx [ 225 ] = xx [ 102 ] * xx [ 90 ] - xx [ 115 ] * xx [ 197 ]
; xx [ 102 ] = xx [ 85 ] * xx [ 167 ] ; xx [ 197 ] = xx [ 225 ] - xx [ 102 ]
; xx [ 227 ] = xx [ 128 ] * ( xx [ 139 ] * xx [ 223 ] + xx [ 166 ] * xx [ 197
] ) ; xx [ 228 ] = xx [ 46 ] * xx [ 166 ] - xx [ 139 ] * xx [ 220 ] - xx [
101 ] * xx [ 227 ] ; xx [ 230 ] = xx [ 139 ] * xx [ 190 ] + xx [ 166 ] * xx [
193 ] ; xx [ 190 ] = xx [ 166 ] * xx [ 196 ] - xx [ 139 ] * xx [ 125 ] ; xx [
125 ] = xx [ 166 ] * xx [ 199 ] - xx [ 139 ] * xx [ 78 ] ; xx [ 78 ] = xx [
166 ] * xx [ 190 ] - xx [ 139 ] * xx [ 125 ] ; xx [ 193 ] = xx [ 101 ] * xx [
78 ] ; xx [ 196 ] = xx [ 230 ] + xx [ 193 ] ; xx [ 199 ] = xx [ 139 ] * xx [
218 ] + xx [ 166 ] * xx [ 182 ] ; xx [ 182 ] = xx [ 139 ] * xx [ 190 ] + xx [
166 ] * xx [ 125 ] ; xx [ 125 ] = xx [ 101 ] * xx [ 182 ] ; xx [ 190 ] = xx [
199 ] + xx [ 125 ] ; xx [ 218 ] = xx [ 128 ] * ( xx [ 166 ] * xx [ 223 ] - xx
[ 139 ] * xx [ 197 ] ) ; xx [ 197 ] = xx [ 139 ] * xx [ 46 ] + xx [ 220 ] *
xx [ 166 ] + xx [ 101 ] * xx [ 218 ] ; xx [ 46 ] = xx [ 128 ] * ( xx [ 166 ]
* xx [ 158 ] - xx [ 139 ] * xx [ 171 ] ) ; xx [ 158 ] = xx [ 128 ] * ( xx [
85 ] - xx [ 54 ] * xx [ 198 ] ) * xx [ 128 ] ; xx [ 257 ] = xx [ 217 ] ; xx [
258 ] = xx [ 192 ] ; xx [ 259 ] = xx [ 228 ] ; xx [ 260 ] = xx [ 196 ] ; xx [
261 ] = xx [ 190 ] ; xx [ 262 ] = xx [ 197 ] ; xx [ 263 ] = xx [ 46 ] ; xx [
264 ] = xx [ 174 ] ; xx [ 265 ] = xx [ 158 ] ; xx [ 171 ] = 0.196125 ; xx [
220 ] = 0.093 ; xx [ 237 ] = xx [ 171 ] * xx [ 29 ] - xx [ 220 ] * xx [ 30 ]
; xx [ 238 ] = - ( xx [ 171 ] * xx [ 21 ] ) ; xx [ 239 ] = xx [ 220 ] * xx [
21 ] ; pm_math_Vector3_cross_ra ( xx + 31 , xx + 237 , xx + 243 ) ; xx [ 31 ]
= xx [ 34 ] * xx [ 243 ] ; xx [ 32 ] = xx [ 34 ] * xx [ 245 ] ; xx [ 33 ] =
xx [ 243 ] - xx [ 7 ] * ( xx [ 31 ] * xx [ 34 ] - xx [ 32 ] * xx [ 42 ] ) ;
xx [ 223 ] = 2.065014825802791e-17 ; xx [ 231 ] = xx [ 223 ] * state [ 7 ] ;
xx [ 232 ] = xx [ 231 ] * ( xx [ 43 ] + xx [ 43 ] ) + xx [ 244 ] ; xx [ 43 ]
= xx [ 245 ] - xx [ 7 ] * ( xx [ 31 ] * xx [ 42 ] + xx [ 32 ] * xx [ 34 ] ) -
xx [ 231 ] * ( xx [ 29 ] + xx [ 36 ] ) ; xx [ 237 ] = xx [ 33 ] ; xx [ 238 ]
= xx [ 232 ] ; xx [ 239 ] = xx [ 43 ] ; pm_math_Matrix3x3_xform_ra ( xx + 257
, xx + 237 , xx + 243 ) ; xx [ 31 ] = xx [ 101 ] * xx [ 46 ] ; xx [ 32 ] = xx
[ 128 ] * ( xx [ 139 ] * xx [ 118 ] + xx [ 166 ] * xx [ 149 ] ) + xx [ 31 ] ;
xx [ 36 ] = xx [ 32 ] + xx [ 223 ] * xx [ 46 ] ; xx [ 118 ] = state [ 6 ] +
xx [ 0 ] ; if ( xx [ 1 ] < xx [ 118 ] ) xx [ 118 ] = xx [ 1 ] ; xx [ 149 ] =
- ( xx [ 118 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 149 ] ) xx [ 149 ] = xx [
4 ] ; xx [ 231 ] = xx [ 8 ] * state [ 7 ] ; xx [ 234 ] = xx [ 149 ] * xx [
149 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 149 ] ) * ( ( - xx [ 118 ] == xx [ 1 ] ?
xx [ 1 ] : - xx [ 231 ] ) - xx [ 10 ] * xx [ 118 ] ) ; if ( xx [ 1 ] > xx [
234 ] ) xx [ 234 ] = xx [ 1 ] ; xx [ 118 ] = state [ 6 ] - xx [ 0 ] ; if ( xx
[ 1 ] > xx [ 118 ] ) xx [ 118 ] = xx [ 1 ] ; xx [ 149 ] = xx [ 118 ] / xx [ 3
] ; if ( xx [ 4 ] < xx [ 149 ] ) xx [ 149 ] = xx [ 4 ] ; xx [ 235 ] = xx [
149 ] * xx [ 149 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 149 ] ) * ( xx [ 10 ] * xx
[ 118 ] + ( xx [ 118 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 231 ] ) ) ; if ( xx [ 1
] > xx [ 235 ] ) xx [ 235 ] = xx [ 1 ] ; xx [ 118 ] = xx [ 111 ] * xx [ 117 ]
; xx [ 149 ] = xx [ 49 ] * ( xx [ 90 ] * xx [ 84 ] + xx [ 115 ] * xx [ 142 ]
) + xx [ 118 ] ; xx [ 84 ] = xx [ 40 ] + xx [ 49 ] * ( xx [ 5 ] - xx [ 56 ] *
xx [ 50 ] ) * xx [ 49 ] ; xx [ 5 ] = xx [ 61 ] + xx [ 92 ] + xx [ 56 ] * xx [
109 ] + xx [ 74 ] * xx [ 149 ] - xx [ 148 ] * xx [ 84 ] + xx [ 211 ] + xx [
63 ] * xx [ 83 ] ; xx [ 49 ] = xx [ 80 ] - xx [ 7 ] * ( xx [ 82 ] * xx [ 57 ]
+ xx [ 71 ] * xx [ 55 ] ) ; xx [ 56 ] = xx [ 111 ] * xx [ 164 ] ; xx [ 61 ] =
xx [ 40 ] + xx [ 90 ] * xx [ 72 ] + xx [ 115 ] * xx [ 123 ] + xx [ 56 ] + xx
[ 56 ] + xx [ 111 ] * xx [ 81 ] ; xx [ 56 ] = xx [ 151 ] * xx [ 90 ] + xx [
115 ] * xx [ 150 ] + xx [ 118 ] ; xx [ 62 ] = xx [ 60 ] + xx [ 59 ] + xx [ 7
] * ( xx [ 73 ] * xx [ 57 ] - xx [ 70 ] * xx [ 55 ] ) + xx [ 111 ] * xx [ 49
] + xx [ 74 ] * xx [ 61 ] - xx [ 148 ] * xx [ 56 ] + xx [ 210 ] + xx [ 35 ] *
xx [ 83 ] ; xx [ 59 ] = xx [ 62 ] * xx [ 45 ] ; xx [ 60 ] = xx [ 5 ] * xx [
45 ] ; xx [ 257 ] = xx [ 195 ] + xx [ 94 ] ; xx [ 258 ] = xx [ 77 ] ; xx [
259 ] = xx [ 140 ] ; xx [ 260 ] = xx [ 145 ] ; xx [ 261 ] = xx [ 195 ] + xx [
95 ] ; xx [ 262 ] = xx [ 129 ] ; xx [ 263 ] = xx [ 58 ] ; xx [ 264 ] = xx [
225 ] ; xx [ 265 ] = xx [ 195 ] + xx [ 121 ] ; pm_math_Matrix3x3_xform_ra (
xx + 257 , xx + 202 , xx + 70 ) ; xx [ 58 ] = xx [ 89 ] + xx [ 74 ] * xx [
160 ] - xx [ 120 ] * xx [ 148 ] + xx [ 70 ] + xx [ 144 ] * xx [ 83 ] ; xx [
73 ] = xx [ 173 ] + xx [ 7 ] * ( xx [ 216 ] - xx [ 175 ] ) + xx [ 170 ] * xx
[ 130 ] - xx [ 159 ] * xx [ 124 ] + xx [ 106 ] + xx [ 134 ] * xx [ 109 ] + xx
[ 74 ] * xx [ 163 ] - xx [ 136 ] * xx [ 148 ] + xx [ 71 ] + xx [ 79 ] * xx [
83 ] ; xx [ 77 ] = xx [ 73 ] * xx [ 45 ] ; xx [ 79 ] = xx [ 58 ] * xx [ 45 ]
; xx [ 80 ] = xx [ 58 ] - xx [ 7 ] * ( xx [ 77 ] * xx [ 48 ] + xx [ 79 ] * xx
[ 45 ] ) ; xx [ 58 ] = xx [ 128 ] * ( xx [ 35 ] - xx [ 108 ] ) ; xx [ 81 ] =
xx [ 128 ] * ( xx [ 63 ] - xx [ 147 ] ) ; xx [ 82 ] = xx [ 139 ] * xx [ 58 ]
+ xx [ 81 ] * xx [ 166 ] + xx [ 31 ] ; xx [ 31 ] = xx [ 61 ] - xx [ 35 ] * xx
[ 76 ] ; xx [ 35 ] = xx [ 63 ] * xx [ 76 ] ; xx [ 61 ] = xx [ 56 ] - xx [ 35
] ; xx [ 56 ] = xx [ 166 ] * xx [ 31 ] - xx [ 139 ] * xx [ 61 ] ; xx [ 89 ] =
xx [ 149 ] - xx [ 35 ] ; xx [ 35 ] = xx [ 84 ] - xx [ 63 ] * xx [ 91 ] ; xx [
63 ] = xx [ 166 ] * xx [ 89 ] - xx [ 139 ] * xx [ 35 ] ; xx [ 84 ] = xx [ 101
] * xx [ 199 ] ; xx [ 90 ] = xx [ 101 ] * xx [ 194 ] ; xx [ 92 ] = xx [ 139 ]
* xx [ 56 ] + xx [ 166 ] * xx [ 63 ] - xx [ 84 ] + xx [ 90 ] - xx [ 101 ] *
xx [ 215 ] ; xx [ 94 ] = xx [ 52 ] + xx [ 5 ] + xx [ 7 ] * ( xx [ 59 ] * xx [
48 ] - xx [ 60 ] * xx [ 45 ] ) + xx [ 101 ] * xx [ 80 ] + xx [ 122 ] * xx [
82 ] - xx [ 47 ] * xx [ 92 ] + xx [ 244 ] ; xx [ 5 ] = xx [ 195 ] + xx [ 78 ]
; xx [ 78 ] = xx [ 128 ] * ( xx [ 140 ] - xx [ 222 ] ) ; xx [ 95 ] = xx [ 128
] * ( xx [ 129 ] - xx [ 102 ] ) ; xx [ 102 ] = xx [ 78 ] * xx [ 166 ] - xx [
139 ] * xx [ 95 ] ; xx [ 105 ] = xx [ 139 ] * xx [ 78 ] + xx [ 95 ] * xx [
166 ] ; xx [ 78 ] = xx [ 128 ] * ( xx [ 121 ] - xx [ 85 ] * xx [ 198 ] + xx [
195 ] ) * xx [ 128 ] ; xx [ 257 ] = xx [ 5 ] ; xx [ 258 ] = xx [ 214 ] ; xx [
259 ] = xx [ 102 ] ; xx [ 260 ] = xx [ 182 ] ; xx [ 261 ] = xx [ 195 ] + xx [
191 ] ; xx [ 262 ] = xx [ 105 ] ; xx [ 263 ] = xx [ 218 ] ; xx [ 264 ] = xx [
227 ] ; xx [ 265 ] = xx [ 195 ] + xx [ 78 ] ; pm_math_Matrix3x3_xform_ra ( xx
+ 257 , xx + 237 , xx + 106 ) ; xx [ 95 ] = xx [ 80 ] + xx [ 46 ] * xx [ 122
] - xx [ 47 ] * xx [ 217 ] + xx [ 106 ] ; xx [ 80 ] = xx [ 139 ] * xx [ 31 ]
+ xx [ 166 ] * xx [ 61 ] ; xx [ 31 ] = xx [ 139 ] * xx [ 89 ] + xx [ 166 ] *
xx [ 35 ] ; xx [ 35 ] = xx [ 101 ] * xx [ 230 ] ; xx [ 61 ] = xx [ 41 ] + xx
[ 139 ] * xx [ 80 ] + xx [ 166 ] * xx [ 31 ] + xx [ 35 ] + xx [ 35 ] + xx [
101 ] * xx [ 193 ] ; xx [ 35 ] = xx [ 61 ] + xx [ 223 ] * xx [ 196 ] ; xx [
41 ] = xx [ 196 ] + xx [ 223 ] * xx [ 5 ] ; xx [ 89 ] = xx [ 35 ] + xx [ 223
] * xx [ 41 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 89 , 1 , xx + 115 ) ;
if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/wrist_1_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 115 ] = ( input [ 3 ] + xx [ 234 ] - xx [ 235 ] - ( xx
[ 94 ] + xx [ 223 ] * xx [ 95 ] ) ) / xx [ 89 ] ; xx [ 118 ] = xx [ 53 ] + xx
[ 141 ] + xx [ 54 ] * xx [ 83 ] + xx [ 122 ] * xx [ 162 ] - xx [ 47 ] * xx [
179 ] + xx [ 245 ] + xx [ 36 ] * xx [ 115 ] ; xx [ 54 ] = xx [ 118 ] * xx [
34 ] ; xx [ 52 ] = xx [ 73 ] + xx [ 7 ] * ( xx [ 79 ] * xx [ 48 ] - xx [ 77 ]
* xx [ 45 ] ) ; xx [ 53 ] = xx [ 58 ] * xx [ 166 ] - xx [ 139 ] * xx [ 81 ] -
xx [ 176 ] ; xx [ 58 ] = xx [ 101 ] * xx [ 183 ] ; xx [ 73 ] = xx [ 40 ] + xx
[ 166 ] * xx [ 56 ] - xx [ 139 ] * xx [ 63 ] - xx [ 58 ] - xx [ 58 ] + xx [
101 ] * xx [ 103 ] ; xx [ 40 ] = xx [ 166 ] * xx [ 80 ] - xx [ 139 ] * xx [
31 ] + xx [ 90 ] - xx [ 84 ] - xx [ 101 ] * xx [ 125 ] ; xx [ 31 ] = xx [ 40
] + xx [ 223 ] * xx [ 217 ] ; xx [ 56 ] = xx [ 51 ] + xx [ 62 ] - xx [ 7 ] *
( xx [ 60 ] * xx [ 48 ] + xx [ 59 ] * xx [ 45 ] ) - xx [ 101 ] * xx [ 52 ] +
xx [ 122 ] * xx [ 53 ] - xx [ 47 ] * xx [ 73 ] + xx [ 243 ] + xx [ 31 ] * xx
[ 115 ] ; xx [ 51 ] = xx [ 56 ] * xx [ 34 ] ; xx [ 58 ] = xx [ 95 ] + xx [ 41
] * xx [ 115 ] ; xx [ 59 ] = xx [ 197 ] + xx [ 223 ] * xx [ 218 ] ; xx [ 60 ]
= xx [ 49 ] + xx [ 74 ] * xx [ 135 ] - xx [ 117 ] * xx [ 148 ] + xx [ 72 ] +
xx [ 85 ] * xx [ 83 ] + xx [ 158 ] * xx [ 122 ] - xx [ 47 ] * xx [ 228 ] + xx
[ 108 ] + xx [ 59 ] * xx [ 115 ] ; xx [ 49 ] = xx [ 60 ] * xx [ 34 ] ; xx [
62 ] = xx [ 58 ] * xx [ 34 ] ; xx [ 63 ] = xx [ 58 ] - xx [ 7 ] * ( xx [ 49 ]
* xx [ 42 ] + xx [ 62 ] * xx [ 34 ] ) ; xx [ 58 ] = xx [ 21 ] * state [ 5 ] ;
xx [ 21 ] = xx [ 42 ] * xx [ 42 ] ; xx [ 70 ] = xx [ 7 ] * xx [ 21 ] - xx [ 4
] ; xx [ 71 ] = xx [ 36 ] / xx [ 89 ] ; xx [ 72 ] = xx [ 162 ] - xx [ 36 ] *
xx [ 71 ] ; xx [ 77 ] = xx [ 7 ] * xx [ 42 ] * xx [ 34 ] ; xx [ 79 ] = xx [
31 ] / xx [ 89 ] ; xx [ 80 ] = xx [ 36 ] * xx [ 79 ] ; xx [ 81 ] = xx [ 179 ]
- xx [ 80 ] ; xx [ 84 ] = xx [ 70 ] * xx [ 72 ] + xx [ 77 ] * xx [ 81 ] ; xx
[ 85 ] = xx [ 53 ] - xx [ 80 ] ; xx [ 53 ] = xx [ 73 ] - xx [ 31 ] * xx [ 79
] ; xx [ 73 ] = xx [ 70 ] * xx [ 85 ] + xx [ 77 ] * xx [ 53 ] ; xx [ 80 ] =
xx [ 41 ] / xx [ 89 ] ; xx [ 90 ] = xx [ 46 ] - xx [ 36 ] * xx [ 80 ] ; xx [
46 ] = xx [ 59 ] / xx [ 89 ] ; xx [ 95 ] = xx [ 158 ] - xx [ 36 ] * xx [ 46 ]
; xx [ 103 ] = xx [ 70 ] * xx [ 90 ] - xx [ 77 ] * xx [ 95 ] ; xx [ 117 ] =
xx [ 217 ] - xx [ 31 ] * xx [ 80 ] ; xx [ 120 ] = xx [ 228 ] - xx [ 31 ] * xx
[ 46 ] ; xx [ 121 ] = xx [ 70 ] * xx [ 117 ] - xx [ 77 ] * xx [ 120 ] ; xx [
123 ] = xx [ 70 ] * xx [ 103 ] + xx [ 77 ] * xx [ 121 ] ; xx [ 124 ] = xx [
220 ] * xx [ 123 ] ; xx [ 125 ] = xx [ 5 ] - xx [ 41 ] * xx [ 80 ] ; xx [ 5 ]
= xx [ 59 ] * xx [ 80 ] ; xx [ 41 ] = xx [ 102 ] - xx [ 5 ] ; xx [ 102 ] = xx
[ 70 ] * xx [ 125 ] - xx [ 77 ] * xx [ 41 ] ; xx [ 128 ] = xx [ 218 ] - xx [
5 ] ; xx [ 5 ] = xx [ 78 ] - xx [ 59 ] * xx [ 46 ] + xx [ 195 ] ; xx [ 78 ] =
xx [ 70 ] * xx [ 128 ] - xx [ 77 ] * xx [ 5 ] ; xx [ 129 ] = xx [ 70 ] * xx [
102 ] - xx [ 77 ] * xx [ 78 ] ; xx [ 130 ] = xx [ 220 ] * xx [ 129 ] ; xx [
134 ] = xx [ 27 ] + xx [ 70 ] * xx [ 84 ] + xx [ 77 ] * xx [ 73 ] - xx [ 124
] - xx [ 124 ] + xx [ 220 ] * xx [ 130 ] ; xx [ 27 ] = xx [ 30 ] * state [ 5
] ; xx [ 124 ] = xx [ 70 ] * xx [ 81 ] - xx [ 77 ] * xx [ 72 ] ; xx [ 72 ] =
xx [ 70 ] * xx [ 53 ] - xx [ 77 ] * xx [ 85 ] ; xx [ 53 ] = xx [ 7 ] * ( xx [
21 ] + xx [ 34 ] * xx [ 34 ] ) - xx [ 4 ] ; xx [ 21 ] = xx [ 190 ] + xx [ 223
] * xx [ 182 ] ; xx [ 81 ] = xx [ 21 ] / xx [ 89 ] ; xx [ 85 ] = xx [ 53 ] *
( xx [ 174 ] - xx [ 36 ] * xx [ 81 ] ) ; xx [ 135 ] = xx [ 53 ] * ( xx [ 192
] - xx [ 31 ] * xx [ 81 ] ) ; xx [ 31 ] = xx [ 85 ] * xx [ 70 ] + xx [ 77 ] *
xx [ 135 ] ; xx [ 136 ] = xx [ 70 ] * xx [ 95 ] + xx [ 77 ] * xx [ 90 ] ; xx
[ 90 ] = xx [ 70 ] * xx [ 120 ] + xx [ 77 ] * xx [ 117 ] ; xx [ 95 ] = xx [
70 ] * xx [ 136 ] + xx [ 77 ] * xx [ 90 ] ; xx [ 117 ] = xx [ 171 ] * xx [ 31
] - xx [ 220 ] * xx [ 95 ] ; xx [ 120 ] = xx [ 70 ] * xx [ 121 ] - xx [ 77 ]
* xx [ 103 ] ; xx [ 103 ] = xx [ 220 ] * xx [ 120 ] ; xx [ 121 ] = xx [ 21 ]
* xx [ 80 ] ; xx [ 139 ] = xx [ 53 ] * ( xx [ 214 ] - xx [ 121 ] ) ; xx [ 140
] = xx [ 59 ] * xx [ 81 ] ; xx [ 59 ] = xx [ 53 ] * ( xx [ 227 ] - xx [ 140 ]
) ; xx [ 141 ] = xx [ 139 ] * xx [ 70 ] - xx [ 77 ] * xx [ 59 ] ; xx [ 142 ]
= xx [ 70 ] * xx [ 41 ] + xx [ 77 ] * xx [ 125 ] ; xx [ 41 ] = xx [ 70 ] * xx
[ 5 ] + xx [ 77 ] * xx [ 128 ] ; xx [ 5 ] = xx [ 70 ] * xx [ 142 ] - xx [ 77
] * xx [ 41 ] ; xx [ 125 ] = xx [ 171 ] * xx [ 141 ] - xx [ 220 ] * xx [ 5 ]
; xx [ 128 ] = xx [ 70 ] * xx [ 124 ] + xx [ 77 ] * xx [ 72 ] - xx [ 117 ] -
xx [ 103 ] + xx [ 220 ] * xx [ 125 ] ; xx [ 144 ] = xx [ 120 ] - xx [ 125 ] ;
xx [ 145 ] = xx [ 135 ] * xx [ 70 ] - xx [ 77 ] * xx [ 85 ] ; xx [ 85 ] = xx
[ 53 ] * ( xx [ 191 ] - xx [ 21 ] * xx [ 81 ] + xx [ 195 ] ) * xx [ 53 ] ; xx
[ 135 ] = xx [ 105 ] - xx [ 140 ] ; xx [ 105 ] = xx [ 182 ] - xx [ 121 ] ; xx
[ 121 ] = xx [ 53 ] * ( xx [ 70 ] * xx [ 135 ] + xx [ 77 ] * xx [ 105 ] ) ;
xx [ 140 ] = xx [ 171 ] * xx [ 85 ] - xx [ 220 ] * xx [ 121 ] ; xx [ 147 ] =
xx [ 145 ] - xx [ 140 ] ; xx [ 149 ] = xx [ 70 ] * xx [ 90 ] - xx [ 77 ] * xx
[ 136 ] ; xx [ 90 ] = xx [ 59 ] * xx [ 70 ] + xx [ 77 ] * xx [ 139 ] ; xx [
59 ] = xx [ 70 ] * xx [ 41 ] + xx [ 77 ] * xx [ 142 ] ; xx [ 41 ] = xx [ 171
] * xx [ 90 ] - xx [ 220 ] * xx [ 59 ] ; xx [ 136 ] = xx [ 149 ] - xx [ 41 ]
; xx [ 139 ] = xx [ 196 ] - xx [ 35 ] * xx [ 80 ] ; xx [ 142 ] = xx [ 197 ] -
xx [ 35 ] * xx [ 46 ] ; xx [ 150 ] = xx [ 53 ] * ( xx [ 70 ] * xx [ 139 ] -
xx [ 77 ] * xx [ 142 ] ) ; xx [ 151 ] = xx [ 171 ] * xx [ 129 ] ; xx [ 158 ]
= xx [ 150 ] + xx [ 151 ] ; xx [ 160 ] = xx [ 53 ] * ( xx [ 190 ] - xx [ 35 ]
* xx [ 81 ] ) * xx [ 53 ] ; xx [ 162 ] = xx [ 53 ] * ( xx [ 70 ] * xx [ 105 ]
- xx [ 77 ] * xx [ 135 ] ) ; xx [ 105 ] = xx [ 171 ] * xx [ 162 ] ; xx [ 135
] = xx [ 160 ] + xx [ 105 ] ; xx [ 163 ] = xx [ 53 ] * ( xx [ 70 ] * xx [ 142
] + xx [ 77 ] * xx [ 139 ] ) ; xx [ 139 ] = xx [ 70 ] * xx [ 78 ] + xx [ 77 ]
* xx [ 102 ] ; xx [ 78 ] = xx [ 171 ] * xx [ 139 ] ; xx [ 102 ] = xx [ 163 ]
+ xx [ 78 ] ; xx [ 142 ] = xx [ 123 ] - xx [ 130 ] ; xx [ 164 ] = xx [ 220 ]
* xx [ 162 ] ; xx [ 166 ] = xx [ 31 ] - xx [ 164 ] ; xx [ 31 ] = xx [ 220 ] *
xx [ 139 ] ; xx [ 173 ] = xx [ 95 ] - xx [ 31 ] ; xx [ 257 ] = xx [ 144 ] ;
xx [ 258 ] = xx [ 147 ] ; xx [ 259 ] = xx [ 136 ] ; xx [ 260 ] = xx [ 158 ] ;
xx [ 261 ] = xx [ 135 ] ; xx [ 262 ] = xx [ 102 ] ; xx [ 263 ] = xx [ 142 ] ;
xx [ 264 ] = xx [ 166 ] ; xx [ 265 ] = xx [ 173 ] ; xx [ 95 ] = xx [ 171 ] *
xx [ 22 ] ; xx [ 193 ] = xx [ 7 ] * xx [ 95 ] * xx [ 28 ] ; xx [ 194 ] = -
0.1197 ; xx [ 195 ] = 0.145 - ( xx [ 7 ] * xx [ 95 ] * xx [ 22 ] - xx [ 171 ]
) ; pm_math_Vector3_cross_ra ( xx + 17 , xx + 193 , xx + 202 ) ;
pm_math_Vector3_cross_ra ( xx + 17 , xx + 202 , xx + 210 ) ; xx [ 17 ] = xx [
22 ] * xx [ 212 ] ; xx [ 18 ] = xx [ 22 ] * xx [ 210 ] ; xx [ 19 ] = xx [ 210
] - xx [ 7 ] * ( xx [ 17 ] * xx [ 28 ] + xx [ 18 ] * xx [ 22 ] ) ; xx [ 95 ]
= 0.196125 ; xx [ 175 ] = xx [ 95 ] * state [ 5 ] ; xx [ 176 ] = xx [ 175 ] *
( xx [ 30 ] + xx [ 30 ] ) + xx [ 211 ] ; xx [ 30 ] = xx [ 212 ] + xx [ 7 ] *
( xx [ 18 ] * xx [ 28 ] - xx [ 17 ] * xx [ 22 ] ) - xx [ 175 ] * ( state [ 3
] + xx [ 29 ] ) ; xx [ 202 ] = xx [ 19 ] ; xx [ 203 ] = xx [ 176 ] ; xx [ 204
] = xx [ 30 ] ; pm_math_Matrix3x3_xform_ra ( xx + 257 , xx + 202 , xx + 210 )
; xx [ 17 ] = xx [ 35 ] / xx [ 89 ] ; xx [ 18 ] = xx [ 36 ] * xx [ 17 ] ; xx
[ 29 ] = xx [ 53 ] * ( xx [ 32 ] - xx [ 18 ] ) ; xx [ 32 ] = xx [ 35 ] * xx [
79 ] ; xx [ 36 ] = xx [ 53 ] * ( xx [ 40 ] - xx [ 32 ] ) ; xx [ 40 ] = xx [
171 ] * xx [ 123 ] ; xx [ 89 ] = xx [ 220 ] * xx [ 150 ] ; xx [ 123 ] = xx [
29 ] * xx [ 70 ] + xx [ 77 ] * xx [ 36 ] + xx [ 40 ] - xx [ 89 ] - xx [ 220 ]
* xx [ 151 ] ; xx [ 175 ] = xx [ 123 ] + xx [ 95 ] * xx [ 142 ] ; xx [ 179 ]
= state [ 4 ] + xx [ 0 ] ; if ( xx [ 1 ] < xx [ 179 ] ) xx [ 179 ] = xx [ 1 ]
; xx [ 182 ] = - ( xx [ 179 ] / xx [ 3 ] ) ; if ( xx [ 4 ] < xx [ 182 ] ) xx
[ 182 ] = xx [ 4 ] ; xx [ 183 ] = xx [ 8 ] * state [ 5 ] ; xx [ 190 ] = xx [
182 ] * xx [ 182 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 182 ] ) * ( ( - xx [ 179 ]
== xx [ 1 ] ? xx [ 1 ] : - xx [ 183 ] ) - xx [ 10 ] * xx [ 179 ] ) ; if ( xx
[ 1 ] > xx [ 190 ] ) xx [ 190 ] = xx [ 1 ] ; xx [ 179 ] = state [ 4 ] - xx [
0 ] ; if ( xx [ 1 ] > xx [ 179 ] ) xx [ 179 ] = xx [ 1 ] ; xx [ 182 ] = xx [
179 ] / xx [ 3 ] ; if ( xx [ 4 ] < xx [ 182 ] ) xx [ 182 ] = xx [ 4 ] ; xx [
191 ] = xx [ 182 ] * xx [ 182 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 182 ] ) * ( xx
[ 10 ] * xx [ 179 ] + ( xx [ 179 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 183 ] ) ) ;
if ( xx [ 1 ] > xx [ 191 ] ) xx [ 191 ] = xx [ 1 ] ; xx [ 179 ] = xx [ 82 ] -
xx [ 18 ] ; xx [ 18 ] = xx [ 92 ] - xx [ 32 ] ; xx [ 32 ] = xx [ 53 ] * ( xx
[ 70 ] * xx [ 179 ] + xx [ 77 ] * xx [ 18 ] ) - xx [ 89 ] + xx [ 40 ] - xx [
171 ] * xx [ 130 ] ; xx [ 40 ] = xx [ 171 ] * xx [ 160 ] - xx [ 220 ] * xx [
163 ] ; xx [ 82 ] = xx [ 171 ] * xx [ 120 ] ; xx [ 89 ] = xx [ 53 ] * ( xx [
70 ] * xx [ 18 ] - xx [ 77 ] * xx [ 179 ] ) - xx [ 40 ] + xx [ 82 ] - xx [
171 ] * xx [ 125 ] ; xx [ 18 ] = xx [ 38 ] + xx [ 94 ] + xx [ 35 ] * xx [ 115
] + xx [ 171 ] * xx [ 63 ] + xx [ 58 ] * xx [ 32 ] - xx [ 27 ] * xx [ 89 ] +
xx [ 211 ] ; xx [ 92 ] = 2.275 ; xx [ 94 ] = xx [ 92 ] + xx [ 129 ] ; xx [
257 ] = xx [ 94 ] ; xx [ 258 ] = xx [ 141 ] ; xx [ 259 ] = xx [ 5 ] ; xx [
260 ] = xx [ 162 ] ; xx [ 261 ] = xx [ 92 ] + xx [ 85 ] ; xx [ 262 ] = xx [
121 ] ; xx [ 263 ] = xx [ 139 ] ; xx [ 264 ] = xx [ 90 ] ; xx [ 265 ] = xx [
92 ] + xx [ 59 ] ; pm_math_Matrix3x3_xform_ra ( xx + 257 , xx + 202 , xx +
214 ) ; xx [ 120 ] = xx [ 63 ] + xx [ 58 ] * xx [ 142 ] - xx [ 27 ] * xx [
144 ] + xx [ 214 ] ; xx [ 125 ] = xx [ 171 ] * xx [ 150 ] ; xx [ 129 ] = xx [
23 ] + xx [ 53 ] * ( xx [ 61 ] - xx [ 35 ] * xx [ 17 ] ) * xx [ 53 ] + xx [
125 ] + xx [ 125 ] + xx [ 171 ] * xx [ 151 ] ; xx [ 35 ] = xx [ 129 ] + xx [
95 ] * xx [ 158 ] ; xx [ 53 ] = xx [ 158 ] + xx [ 95 ] * xx [ 94 ] ; xx [ 61
] = xx [ 35 ] + xx [ 95 ] * xx [ 53 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx
+ 61 , 1 , xx + 125 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/elbow_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 125 ] = ( input [ 0 ] + xx [ 190 ] - xx [ 191 ] - ( xx
[ 18 ] + xx [ 95 ] * xx [ 120 ] ) ) / xx [ 61 ] ; xx [ 130 ] = xx [ 39 ] + xx
[ 118 ] - xx [ 7 ] * ( xx [ 54 ] * xx [ 34 ] - xx [ 51 ] * xx [ 42 ] ) - xx [
220 ] * xx [ 63 ] + xx [ 58 ] * xx [ 134 ] - xx [ 27 ] * xx [ 128 ] + xx [
212 ] + xx [ 175 ] * xx [ 125 ] ; xx [ 38 ] = xx [ 60 ] - xx [ 7 ] * ( xx [
49 ] * xx [ 34 ] - xx [ 62 ] * xx [ 42 ] ) ; xx [ 39 ] = xx [ 52 ] + xx [ 174
] * xx [ 122 ] - xx [ 47 ] * xx [ 192 ] + xx [ 107 ] + xx [ 21 ] * xx [ 115 ]
; xx [ 21 ] = xx [ 70 ] * xx [ 73 ] - xx [ 77 ] * xx [ 84 ] - xx [ 103 ] - xx
[ 117 ] - ( xx [ 220 ] * xx [ 31 ] - xx [ 171 ] * xx [ 164 ] ) ; xx [ 31 ] =
xx [ 171 ] * xx [ 145 ] - xx [ 220 ] * xx [ 149 ] ; xx [ 49 ] = xx [ 23 ] +
xx [ 70 ] * xx [ 72 ] - xx [ 77 ] * xx [ 124 ] - xx [ 31 ] - xx [ 31 ] - ( xx
[ 220 ] * xx [ 41 ] - xx [ 171 ] * xx [ 140 ] ) ; xx [ 23 ] = xx [ 36 ] * xx
[ 70 ] - xx [ 77 ] * xx [ 29 ] + xx [ 82 ] - xx [ 40 ] - ( xx [ 171 ] * xx [
105 ] - xx [ 220 ] * xx [ 78 ] ) ; xx [ 29 ] = xx [ 23 ] + xx [ 95 ] * xx [
144 ] ; xx [ 31 ] = xx [ 37 ] + xx [ 56 ] - xx [ 7 ] * ( xx [ 54 ] * xx [ 42
] + xx [ 51 ] * xx [ 34 ] ) + xx [ 220 ] * xx [ 38 ] - xx [ 171 ] * xx [ 39 ]
+ xx [ 58 ] * xx [ 21 ] - xx [ 27 ] * xx [ 49 ] + xx [ 210 ] + xx [ 29 ] * xx
[ 125 ] ; xx [ 36 ] = xx [ 31 ] * xx [ 22 ] ; xx [ 37 ] = xx [ 130 ] * xx [
22 ] ; xx [ 40 ] = xx [ 120 ] + xx [ 53 ] * xx [ 125 ] ; xx [ 41 ] = xx [ 102
] + xx [ 95 ] * xx [ 139 ] ; xx [ 51 ] = xx [ 38 ] + xx [ 58 ] * xx [ 173 ] -
xx [ 27 ] * xx [ 136 ] + xx [ 216 ] + xx [ 41 ] * xx [ 125 ] ; xx [ 38 ] = xx
[ 51 ] * xx [ 22 ] ; xx [ 52 ] = xx [ 40 ] * xx [ 22 ] ; xx [ 54 ] = xx [ 40
] + xx [ 7 ] * ( xx [ 38 ] * xx [ 28 ] - xx [ 52 ] * xx [ 22 ] ) ; xx [ 40 ]
= xx [ 135 ] + xx [ 95 ] * xx [ 162 ] ; xx [ 56 ] = xx [ 39 ] + xx [ 58 ] *
xx [ 166 ] - xx [ 27 ] * xx [ 147 ] + xx [ 215 ] + xx [ 40 ] * xx [ 125 ] ;
xx [ 39 ] = xx [ 51 ] - xx [ 7 ] * ( xx [ 52 ] * xx [ 28 ] + xx [ 38 ] * xx [
22 ] ) ; xx [ 105 ] = xx [ 54 ] ; xx [ 106 ] = xx [ 56 ] ; xx [ 107 ] = xx [
39 ] ; pm_math_Vector3_cross_ra ( xx + 193 , xx + 105 , xx + 149 ) ; xx [ 38
] = xx [ 28 ] * xx [ 28 ] ; xx [ 51 ] = xx [ 7 ] * xx [ 38 ] - xx [ 4 ] ; xx
[ 52 ] = xx [ 53 ] / xx [ 61 ] ; xx [ 60 ] = xx [ 144 ] - xx [ 29 ] * xx [ 52
] ; xx [ 62 ] = xx [ 7 ] * xx [ 28 ] * xx [ 22 ] ; xx [ 63 ] = xx [ 41 ] / xx
[ 61 ] ; xx [ 70 ] = xx [ 136 ] - xx [ 29 ] * xx [ 63 ] ; xx [ 72 ] = xx [ 51
] * xx [ 60 ] + xx [ 62 ] * xx [ 70 ] ; xx [ 73 ] = xx [ 142 ] - xx [ 175 ] *
xx [ 52 ] ; xx [ 77 ] = xx [ 173 ] - xx [ 175 ] * xx [ 63 ] ; xx [ 78 ] = xx
[ 51 ] * xx [ 73 ] + xx [ 62 ] * xx [ 77 ] ; xx [ 82 ] = xx [ 51 ] * xx [ 72
] + xx [ 62 ] * xx [ 78 ] ; xx [ 84 ] = xx [ 94 ] - xx [ 53 ] * xx [ 52 ] ;
xx [ 53 ] = xx [ 41 ] * xx [ 52 ] ; xx [ 94 ] = xx [ 5 ] - xx [ 53 ] ; xx [ 5
] = xx [ 51 ] * xx [ 84 ] + xx [ 62 ] * xx [ 94 ] ; xx [ 103 ] = xx [ 139 ] -
xx [ 53 ] ; xx [ 53 ] = xx [ 59 ] - xx [ 41 ] * xx [ 63 ] + xx [ 92 ] ; xx [
59 ] = xx [ 51 ] * xx [ 103 ] + xx [ 62 ] * xx [ 53 ] ; xx [ 105 ] = xx [ 51
] * xx [ 5 ] + xx [ 62 ] * xx [ 59 ] ; xx [ 106 ] = xx [ 7 ] * ( xx [ 38 ] +
xx [ 22 ] * xx [ 22 ] ) - xx [ 4 ] ; xx [ 38 ] = xx [ 40 ] * xx [ 52 ] ; xx [
107 ] = xx [ 106 ] * ( xx [ 141 ] - xx [ 38 ] ) ; xx [ 108 ] = xx [ 40 ] / xx
[ 61 ] ; xx [ 117 ] = xx [ 41 ] * xx [ 108 ] ; xx [ 41 ] = xx [ 106 ] * ( xx
[ 90 ] - xx [ 117 ] ) ; xx [ 90 ] = xx [ 107 ] * xx [ 51 ] + xx [ 62 ] * xx [
41 ] ; xx [ 118 ] = xx [ 51 ] * xx [ 94 ] - xx [ 62 ] * xx [ 84 ] ; xx [ 84 ]
= xx [ 51 ] * xx [ 53 ] - xx [ 62 ] * xx [ 103 ] ; xx [ 53 ] = xx [ 51 ] * xx
[ 118 ] + xx [ 62 ] * xx [ 84 ] ; xx [ 94 ] = xx [ 162 ] - xx [ 38 ] ; xx [
38 ] = xx [ 121 ] - xx [ 117 ] ; xx [ 103 ] = xx [ 106 ] * ( xx [ 51 ] * xx [
94 ] + xx [ 62 ] * xx [ 38 ] ) ; xx [ 117 ] = xx [ 106 ] * ( xx [ 85 ] - xx [
40 ] * xx [ 108 ] + xx [ 92 ] ) * xx [ 106 ] ; xx [ 40 ] = xx [ 106 ] * ( xx
[ 51 ] * xx [ 38 ] - xx [ 62 ] * xx [ 94 ] ) ; xx [ 38 ] = xx [ 51 ] * xx [
59 ] - xx [ 62 ] * xx [ 5 ] ; xx [ 5 ] = xx [ 41 ] * xx [ 51 ] - xx [ 62 ] *
xx [ 107 ] ; xx [ 41 ] = xx [ 51 ] * xx [ 84 ] - xx [ 62 ] * xx [ 118 ] ; xx
[ 257 ] = xx [ 105 ] ; xx [ 258 ] = xx [ 90 ] ; xx [ 259 ] = xx [ 53 ] ; xx [
260 ] = xx [ 103 ] ; xx [ 261 ] = xx [ 117 ] ; xx [ 262 ] = xx [ 40 ] ; xx [
263 ] = xx [ 38 ] ; xx [ 264 ] = xx [ 5 ] ; xx [ 265 ] = xx [ 41 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 257 , xx + 193 , xx + 266 ) ; xx [ 59 ]
= xx [ 82 ] - xx [ 266 ] ; xx [ 84 ] = xx [ 106 ] * ( xx [ 147 ] - xx [ 29 ]
* xx [ 108 ] ) ; xx [ 85 ] = xx [ 106 ] * ( xx [ 166 ] - xx [ 175 ] * xx [
108 ] ) ; xx [ 92 ] = xx [ 84 ] * xx [ 51 ] + xx [ 62 ] * xx [ 85 ] ; xx [ 94
] = xx [ 92 ] - xx [ 269 ] ; xx [ 107 ] = xx [ 51 ] * xx [ 70 ] - xx [ 62 ] *
xx [ 60 ] ; xx [ 60 ] = xx [ 51 ] * xx [ 77 ] - xx [ 62 ] * xx [ 73 ] ; xx [
70 ] = xx [ 51 ] * xx [ 107 ] + xx [ 62 ] * xx [ 60 ] ; xx [ 73 ] = xx [ 70 ]
- xx [ 272 ] ; xx [ 77 ] = xx [ 158 ] - xx [ 35 ] * xx [ 52 ] ; xx [ 118 ] =
xx [ 102 ] - xx [ 35 ] * xx [ 63 ] ; xx [ 102 ] = xx [ 106 ] * ( xx [ 51 ] *
xx [ 77 ] + xx [ 62 ] * xx [ 118 ] ) ; xx [ 120 ] = xx [ 102 ] - xx [ 267 ] ;
xx [ 121 ] = xx [ 106 ] * ( xx [ 135 ] - xx [ 35 ] * xx [ 108 ] ) * xx [ 106
] ; xx [ 124 ] = xx [ 121 ] - xx [ 270 ] ; xx [ 135 ] = xx [ 106 ] * ( xx [
51 ] * xx [ 118 ] - xx [ 62 ] * xx [ 77 ] ) ; xx [ 77 ] = xx [ 135 ] - xx [
273 ] ; xx [ 118 ] = xx [ 51 ] * xx [ 78 ] - xx [ 62 ] * xx [ 72 ] ; xx [ 72
] = xx [ 118 ] - xx [ 268 ] ; xx [ 78 ] = xx [ 85 ] * xx [ 51 ] - xx [ 62 ] *
xx [ 84 ] ; xx [ 84 ] = xx [ 78 ] - xx [ 271 ] ; xx [ 85 ] = xx [ 51 ] * xx [
60 ] - xx [ 62 ] * xx [ 107 ] ; xx [ 60 ] = xx [ 85 ] - xx [ 274 ] ; xx [ 257
] = xx [ 59 ] ; xx [ 258 ] = xx [ 94 ] ; xx [ 259 ] = xx [ 73 ] ; xx [ 260 ]
= xx [ 120 ] ; xx [ 261 ] = xx [ 124 ] ; xx [ 262 ] = xx [ 77 ] ; xx [ 263 ]
= xx [ 72 ] ; xx [ 264 ] = xx [ 84 ] ; xx [ 265 ] = xx [ 60 ] ; xx [ 107 ] =
0.28 ; xx [ 136 ] = xx [ 107 ] * xx [ 9 ] ; xx [ 139 ] = xx [ 7 ] * xx [ 136
] * xx [ 16 ] ; xx [ 140 ] = xx [ 139 ] * state [ 1 ] * state [ 1 ] ; xx [
141 ] = xx [ 140 ] * xx [ 9 ] ; xx [ 142 ] = xx [ 140 ] - xx [ 7 ] * xx [ 141
] * xx [ 9 ] ; xx [ 140 ] = 0.2800000000000001 ; xx [ 144 ] = xx [ 140 ] *
state [ 3 ] ; xx [ 145 ] = 0.13585 ; xx [ 147 ] = xx [ 144 ] * ( xx [ 14 ] +
xx [ 14 ] ) - xx [ 145 ] * state [ 1 ] * state [ 1 ] ; xx [ 158 ] = xx [ 7 ]
* xx [ 141 ] * xx [ 16 ] ; xx [ 141 ] = xx [ 144 ] * state [ 3 ] ; xx [ 162 ]
= xx [ 142 ] ; xx [ 163 ] = xx [ 147 ] ; xx [ 164 ] = - ( xx [ 158 ] + xx [
141 ] ) ; pm_math_Matrix3x3_xform_ra ( xx + 257 , xx + 162 , xx + 190 ) ; xx
[ 144 ] = xx [ 14 ] * state [ 3 ] ; xx [ 14 ] = xx [ 29 ] / xx [ 61 ] ; xx [
160 ] = xx [ 175 ] * xx [ 14 ] ; xx [ 166 ] = xx [ 128 ] - xx [ 160 ] ; xx [
128 ] = xx [ 175 ] / xx [ 61 ] ; xx [ 173 ] = xx [ 134 ] - xx [ 175 ] * xx [
128 ] ; xx [ 134 ] = xx [ 51 ] * xx [ 166 ] + xx [ 62 ] * xx [ 173 ] ; xx [
174 ] = xx [ 49 ] - xx [ 29 ] * xx [ 14 ] ; xx [ 29 ] = xx [ 21 ] - xx [ 160
] ; xx [ 21 ] = xx [ 51 ] * xx [ 174 ] + xx [ 62 ] * xx [ 29 ] ; xx [ 257 ] =
xx [ 82 ] ; xx [ 258 ] = xx [ 92 ] ; xx [ 259 ] = xx [ 70 ] ; xx [ 260 ] = xx
[ 102 ] ; xx [ 261 ] = xx [ 121 ] ; xx [ 262 ] = xx [ 135 ] ; xx [ 263 ] = xx
[ 118 ] ; xx [ 264 ] = xx [ 78 ] ; xx [ 265 ] = xx [ 85 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 257 , xx + 193 , xx + 279 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 266 , xx + 193 , xx + 257 ) ; xx [ 49 ]
= xx [ 51 ] * xx [ 134 ] - xx [ 62 ] * xx [ 21 ] - xx [ 285 ] - xx [ 281 ] -
xx [ 263 ] ; xx [ 70 ] = xx [ 13 ] * state [ 3 ] ; xx [ 13 ] = xx [ 51 ] * xx
[ 173 ] - xx [ 62 ] * xx [ 166 ] ; xx [ 78 ] = xx [ 51 ] * xx [ 29 ] - xx [
62 ] * xx [ 174 ] ; xx [ 29 ] = xx [ 20 ] + xx [ 51 ] * xx [ 13 ] - xx [ 62 ]
* xx [ 78 ] - xx [ 287 ] - xx [ 287 ] - xx [ 265 ] ; xx [ 20 ] = xx [ 35 ] /
xx [ 61 ] ; xx [ 61 ] = xx [ 175 ] * xx [ 20 ] ; xx [ 82 ] = xx [ 106 ] * (
xx [ 123 ] - xx [ 61 ] ) ; xx [ 85 ] = xx [ 35 ] * xx [ 14 ] ; xx [ 92 ] = xx
[ 106 ] * ( xx [ 23 ] - xx [ 85 ] ) ; xx [ 23 ] = xx [ 82 ] * xx [ 51 ] - xx
[ 62 ] * xx [ 92 ] - xx [ 286 ] - xx [ 284 ] - xx [ 264 ] + xx [ 140 ] * xx [
72 ] ; xx [ 102 ] = state [ 2 ] + xx [ 0 ] ; if ( xx [ 1 ] < xx [ 102 ] ) xx
[ 102 ] = xx [ 1 ] ; xx [ 118 ] = - ( xx [ 102 ] / xx [ 3 ] ) ; if ( xx [ 4 ]
< xx [ 118 ] ) xx [ 118 ] = xx [ 4 ] ; xx [ 121 ] = xx [ 8 ] * state [ 3 ] ;
xx [ 8 ] = xx [ 118 ] * xx [ 118 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 118 ] ) * (
( - xx [ 102 ] == xx [ 1 ] ? xx [ 1 ] : - xx [ 121 ] ) - xx [ 10 ] * xx [ 102
] ) ; if ( xx [ 1 ] > xx [ 8 ] ) xx [ 8 ] = xx [ 1 ] ; xx [ 102 ] = state [ 2
] - xx [ 0 ] ; if ( xx [ 1 ] > xx [ 102 ] ) xx [ 102 ] = xx [ 1 ] ; xx [ 0 ]
= xx [ 102 ] / xx [ 3 ] ; if ( xx [ 4 ] < xx [ 0 ] ) xx [ 0 ] = xx [ 4 ] ; xx
[ 3 ] = xx [ 0 ] * xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] * xx [ 0 ] ) * ( xx [ 10
] * xx [ 102 ] + ( xx [ 102 ] == xx [ 1 ] ? xx [ 1 ] : xx [ 121 ] ) ) ; if (
xx [ 1 ] > xx [ 3 ] ) xx [ 3 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 89 ] - xx [ 85 ]
; xx [ 6 ] = xx [ 32 ] - xx [ 61 ] ; xx [ 10 ] = 8.393000000000001 ; xx [ 32
] = xx [ 10 ] + xx [ 105 ] ; xx [ 266 ] = xx [ 32 ] ; xx [ 267 ] = xx [ 90 ]
; xx [ 268 ] = xx [ 53 ] ; xx [ 269 ] = xx [ 103 ] ; xx [ 270 ] = xx [ 10 ] +
xx [ 117 ] ; xx [ 271 ] = xx [ 40 ] ; xx [ 272 ] = xx [ 38 ] ; xx [ 273 ] =
xx [ 5 ] ; xx [ 274 ] = xx [ 10 ] + xx [ 41 ] ; pm_math_Matrix3x3_xform_ra (
xx + 266 , xx + 162 , xx + 173 ) ; xx [ 61 ] = xx [ 54 ] + xx [ 173 ] - ( xx
[ 144 ] * xx [ 59 ] - xx [ 70 ] * xx [ 72 ] ) ; xx [ 54 ] = xx [ 106 ] * ( xx
[ 129 ] - xx [ 35 ] * xx [ 20 ] ) * xx [ 106 ] - xx [ 283 ] - xx [ 283 ] - xx
[ 261 ] + xx [ 140 ] * xx [ 120 ] + xx [ 15 ] ; xx [ 85 ] = xx [ 120 ] + xx [
140 ] * xx [ 32 ] ; xx [ 89 ] = xx [ 54 ] + xx [ 140 ] * xx [ 85 ] ; ii [ 0 ]
= factorSymmetricPosDef ( xx + 89 , 1 , xx + 102 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/shoulder_lift_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 102 ] = ( input [ 1 ] + xx [ 8 ] - xx [ 3 ] - ( xx [
25 ] + xx [ 18 ] + xx [ 35 ] * xx [ 125 ] + xx [ 150 ] + xx [ 191 ] - ( xx [
144 ] * ( xx [ 106 ] * ( xx [ 51 ] * xx [ 0 ] + xx [ 62 ] * xx [ 6 ] ) - xx [
282 ] - xx [ 280 ] - xx [ 260 ] ) - xx [ 70 ] * ( xx [ 106 ] * ( xx [ 51 ] *
xx [ 6 ] - xx [ 62 ] * xx [ 0 ] ) - xx [ 284 ] - xx [ 286 ] - xx [ 262 ] ) )
+ xx [ 140 ] * xx [ 61 ] ) ) / xx [ 89 ] ; xx [ 0 ] = xx [ 26 ] + xx [ 130 ]
- xx [ 7 ] * ( xx [ 36 ] * xx [ 28 ] + xx [ 37 ] * xx [ 22 ] ) + xx [ 151 ] +
xx [ 192 ] - ( xx [ 144 ] * xx [ 49 ] - xx [ 70 ] * xx [ 29 ] ) + xx [ 23 ] *
xx [ 102 ] ; xx [ 3 ] = xx [ 15 ] + xx [ 51 ] * xx [ 21 ] + xx [ 62 ] * xx [
134 ] - xx [ 279 ] - xx [ 279 ] - xx [ 257 ] ; xx [ 6 ] = xx [ 51 ] * xx [ 78
] + xx [ 62 ] * xx [ 13 ] - xx [ 281 ] - xx [ 285 ] - xx [ 259 ] ; xx [ 8 ] =
xx [ 92 ] * xx [ 51 ] + xx [ 62 ] * xx [ 82 ] - xx [ 280 ] - xx [ 282 ] - xx
[ 258 ] + xx [ 140 ] * xx [ 59 ] ; xx [ 162 ] = - xx [ 139 ] ; xx [ 163 ] =
xx [ 145 ] ; xx [ 164 ] = - ( xx [ 7 ] * xx [ 136 ] * xx [ 9 ] - xx [ 107 ] )
; xx [ 13 ] = xx [ 61 ] + xx [ 85 ] * xx [ 102 ] ; xx [ 15 ] = xx [ 77 ] + xx
[ 140 ] * xx [ 38 ] ; xx [ 18 ] = xx [ 39 ] + xx [ 175 ] - ( xx [ 144 ] * xx
[ 73 ] - xx [ 70 ] * xx [ 60 ] ) + xx [ 15 ] * xx [ 102 ] ; xx [ 21 ] = xx [
18 ] * xx [ 9 ] ; xx [ 25 ] = xx [ 13 ] * xx [ 9 ] ; xx [ 26 ] = xx [ 124 ] +
xx [ 140 ] * xx [ 103 ] ; xx [ 105 ] = xx [ 13 ] - xx [ 7 ] * ( xx [ 21 ] *
xx [ 16 ] + xx [ 25 ] * xx [ 9 ] ) ; xx [ 106 ] = xx [ 56 ] + xx [ 174 ] - (
xx [ 144 ] * xx [ 94 ] - xx [ 70 ] * xx [ 84 ] ) + xx [ 26 ] * xx [ 102 ] ;
xx [ 107 ] = xx [ 18 ] - xx [ 7 ] * ( xx [ 21 ] * xx [ 9 ] - xx [ 25 ] * xx [
16 ] ) ; pm_math_Vector3_cross_ra ( xx + 162 , xx + 105 , xx + 134 ) ; xx [
13 ] = xx [ 16 ] * xx [ 16 ] ; xx [ 18 ] = xx [ 7 ] * xx [ 13 ] - xx [ 4 ] ;
xx [ 21 ] = xx [ 23 ] / xx [ 89 ] ; xx [ 25 ] = xx [ 7 ] * xx [ 16 ] * xx [ 9
] ; xx [ 35 ] = xx [ 8 ] / xx [ 89 ] ; xx [ 39 ] = xx [ 23 ] * xx [ 35 ] ; xx
[ 51 ] = xx [ 85 ] / xx [ 89 ] ; xx [ 56 ] = xx [ 59 ] - xx [ 8 ] * xx [ 51 ]
; xx [ 59 ] = xx [ 15 ] / xx [ 89 ] ; xx [ 61 ] = xx [ 73 ] - xx [ 8 ] * xx [
59 ] ; xx [ 62 ] = xx [ 18 ] * xx [ 56 ] - xx [ 25 ] * xx [ 61 ] ; xx [ 73 ]
= xx [ 72 ] - xx [ 23 ] * xx [ 51 ] ; xx [ 72 ] = xx [ 60 ] - xx [ 23 ] * xx
[ 59 ] ; xx [ 60 ] = xx [ 18 ] * xx [ 73 ] - xx [ 25 ] * xx [ 72 ] ; xx [ 78
] = xx [ 7 ] * ( xx [ 13 ] + xx [ 9 ] * xx [ 9 ] ) - xx [ 4 ] ; xx [ 4 ] = xx
[ 26 ] / xx [ 89 ] ; xx [ 13 ] = xx [ 78 ] * ( xx [ 94 ] - xx [ 8 ] * xx [ 4
] ) ; xx [ 82 ] = xx [ 78 ] * ( xx [ 84 ] - xx [ 23 ] * xx [ 4 ] ) ; xx [ 84
] = xx [ 18 ] * xx [ 61 ] + xx [ 25 ] * xx [ 56 ] ; xx [ 56 ] = xx [ 18 ] *
xx [ 72 ] + xx [ 25 ] * xx [ 73 ] ; xx [ 61 ] = xx [ 120 ] - xx [ 54 ] * xx [
51 ] ; xx [ 72 ] = xx [ 77 ] - xx [ 54 ] * xx [ 59 ] ; xx [ 73 ] = xx [ 18 ]
* xx [ 56 ] + xx [ 25 ] * xx [ 84 ] ; xx [ 257 ] = xx [ 18 ] * xx [ 62 ] - xx
[ 25 ] * xx [ 60 ] ; xx [ 258 ] = xx [ 13 ] * xx [ 18 ] - xx [ 25 ] * xx [ 82
] ; xx [ 259 ] = xx [ 18 ] * xx [ 84 ] - xx [ 25 ] * xx [ 56 ] ; xx [ 260 ] =
xx [ 78 ] * ( xx [ 18 ] * xx [ 61 ] - xx [ 25 ] * xx [ 72 ] ) ; xx [ 261 ] =
xx [ 78 ] * ( xx [ 124 ] - xx [ 54 ] * xx [ 4 ] ) * xx [ 78 ] ; xx [ 262 ] =
xx [ 78 ] * ( xx [ 18 ] * xx [ 72 ] + xx [ 25 ] * xx [ 61 ] ) ; xx [ 263 ] =
xx [ 18 ] * xx [ 60 ] + xx [ 25 ] * xx [ 62 ] ; xx [ 264 ] = xx [ 82 ] * xx [
18 ] + xx [ 25 ] * xx [ 13 ] ; xx [ 265 ] = xx [ 73 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 257 , xx + 162 , xx + 266 ) ; xx [ 13 ]
= xx [ 32 ] - xx [ 85 ] * xx [ 51 ] ; xx [ 32 ] = xx [ 15 ] * xx [ 51 ] ; xx
[ 54 ] = xx [ 53 ] - xx [ 32 ] ; xx [ 53 ] = xx [ 18 ] * xx [ 13 ] - xx [ 25
] * xx [ 54 ] ; xx [ 56 ] = xx [ 38 ] - xx [ 32 ] ; xx [ 32 ] = xx [ 41 ] -
xx [ 15 ] * xx [ 59 ] + xx [ 10 ] ; xx [ 38 ] = xx [ 18 ] * xx [ 56 ] - xx [
25 ] * xx [ 32 ] ; xx [ 41 ] = xx [ 26 ] * xx [ 51 ] ; xx [ 60 ] = xx [ 78 ]
* ( xx [ 90 ] - xx [ 41 ] ) ; xx [ 61 ] = xx [ 15 ] * xx [ 4 ] ; xx [ 15 ] =
xx [ 78 ] * ( xx [ 5 ] - xx [ 61 ] ) ; xx [ 5 ] = xx [ 18 ] * xx [ 54 ] + xx
[ 25 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 18 ] * xx [ 32 ] + xx [ 25 ] * xx [ 56
] ; xx [ 32 ] = xx [ 103 ] - xx [ 41 ] ; xx [ 41 ] = xx [ 40 ] - xx [ 61 ] ;
xx [ 257 ] = xx [ 18 ] * xx [ 53 ] - xx [ 25 ] * xx [ 38 ] ; xx [ 258 ] = xx
[ 60 ] * xx [ 18 ] - xx [ 25 ] * xx [ 15 ] ; xx [ 259 ] = xx [ 18 ] * xx [ 5
] - xx [ 25 ] * xx [ 13 ] ; xx [ 260 ] = xx [ 78 ] * ( xx [ 18 ] * xx [ 32 ]
- xx [ 25 ] * xx [ 41 ] ) ; xx [ 261 ] = xx [ 78 ] * ( xx [ 117 ] - xx [ 26 ]
* xx [ 4 ] + xx [ 10 ] ) * xx [ 78 ] ; xx [ 262 ] = xx [ 78 ] * ( xx [ 18 ] *
xx [ 41 ] + xx [ 25 ] * xx [ 32 ] ) ; xx [ 263 ] = xx [ 18 ] * xx [ 38 ] + xx
[ 25 ] * xx [ 53 ] ; xx [ 264 ] = xx [ 15 ] * xx [ 18 ] + xx [ 25 ] * xx [ 60
] ; xx [ 265 ] = xx [ 18 ] * xx [ 13 ] + xx [ 25 ] * xx [ 5 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 257 , xx + 162 , xx + 279 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 279 , xx + 162 , xx + 257 ) ; xx [ 5 ] =
6.660000000000001e-3 + xx [ 18 ] * ( xx [ 18 ] * ( xx [ 29 ] - xx [ 23 ] * xx
[ 21 ] ) + xx [ 25 ] * ( xx [ 49 ] - xx [ 39 ] ) ) + xx [ 25 ] * ( xx [ 18 ]
* ( xx [ 6 ] - xx [ 39 ] ) + xx [ 25 ] * ( xx [ 3 ] - xx [ 8 ] * xx [ 35 ] )
) - xx [ 274 ] - xx [ 274 ] - xx [ 265 ] ; ii [ 0 ] = factorSymmetricPosDef (
xx + 5 , 1 , xx + 10 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/shoulder_pan_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 10 ] = 9.806649999999999 ; xx [ 13 ] = ( input [ 2 ] +
xx [ 11 ] - xx [ 12 ] - ( xx [ 0 ] - xx [ 7 ] * ( xx [ 0 ] * xx [ 9 ] * xx [
9 ] - ( xx [ 24 ] + xx [ 31 ] + xx [ 7 ] * ( xx [ 37 ] * xx [ 28 ] - xx [ 36
] * xx [ 22 ] ) + xx [ 149 ] + xx [ 190 ] - ( xx [ 144 ] * xx [ 3 ] - xx [ 70
] * xx [ 6 ] ) + xx [ 8 ] * xx [ 102 ] ) * xx [ 9 ] * xx [ 16 ] ) + xx [ 136
] ) ) / xx [ 5 ] - xx [ 10 ] * ( xx [ 73 ] - xx [ 287 ] ) / xx [ 5 ] ; xx [ 0
] = xx [ 13 ] * xx [ 9 ] ; xx [ 3 ] = xx [ 13 ] - xx [ 7 ] * xx [ 0 ] * xx [
9 ] ; xx [ 5 ] = xx [ 7 ] * xx [ 0 ] * xx [ 16 ] ; xx [ 23 ] = xx [ 51 ] ; xx
[ 24 ] = xx [ 4 ] ; xx [ 25 ] = xx [ 59 ] ; xx [ 0 ] = xx [ 145 ] * xx [ 13 ]
; xx [ 4 ] = xx [ 0 ] * xx [ 9 ] ; xx [ 6 ] = xx [ 10 ] * xx [ 9 ] ; xx [ 8 ]
= xx [ 7 ] * ( xx [ 4 ] * xx [ 9 ] + xx [ 6 ] * xx [ 16 ] ) - xx [ 0 ] ; xx [
0 ] = xx [ 139 ] * xx [ 13 ] ; xx [ 11 ] = xx [ 7 ] * ( xx [ 6 ] * xx [ 9 ] -
xx [ 4 ] * xx [ 16 ] ) ; xx [ 36 ] = xx [ 8 ] ; xx [ 37 ] = - xx [ 0 ] ; xx [
38 ] = xx [ 10 ] - xx [ 11 ] ; xx [ 4 ] = xx [ 102 ] - ( xx [ 3 ] * xx [ 21 ]
+ xx [ 5 ] * xx [ 35 ] + pm_math_Vector3_dot_ra ( xx + 23 , xx + 36 ) ) ; xx
[ 23 ] = xx [ 14 ] ; xx [ 24 ] = xx [ 20 ] ; xx [ 25 ] = xx [ 128 ] ; xx [ 6
] = xx [ 144 ] - xx [ 5 ] ; xx [ 5 ] = xx [ 6 ] * xx [ 22 ] ; xx [ 9 ] = xx [
3 ] + xx [ 70 ] ; xx [ 3 ] = xx [ 9 ] * xx [ 22 ] ; xx [ 12 ] = xx [ 7 ] * (
xx [ 5 ] * xx [ 22 ] - xx [ 3 ] * xx [ 28 ] ) - xx [ 6 ] ; xx [ 14 ] = xx [ 9
] - xx [ 7 ] * ( xx [ 5 ] * xx [ 28 ] + xx [ 3 ] * xx [ 22 ] ) ; xx [ 35 ] =
xx [ 12 ] ; xx [ 36 ] = xx [ 4 ] ; xx [ 37 ] = xx [ 14 ] ; xx [ 38 ] = xx [
52 ] ; xx [ 39 ] = xx [ 108 ] ; xx [ 40 ] = xx [ 63 ] ; xx [ 51 ] = - xx [ 6
] ; xx [ 52 ] = xx [ 4 ] ; xx [ 53 ] = xx [ 9 ] ; pm_math_Vector3_cross_ra (
xx + 51 , xx + 193 , xx + 59 ) ; xx [ 3 ] = xx [ 8 ] + xx [ 140 ] * xx [ 4 ]
+ xx [ 142 ] + xx [ 59 ] ; xx [ 5 ] = xx [ 61 ] - ( xx [ 158 ] + xx [ 11 ] +
xx [ 141 ] ) + xx [ 10 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 22 ] ; xx [ 8 ] = xx [
3 ] * xx [ 22 ] ; xx [ 9 ] = xx [ 3 ] - xx [ 7 ] * ( xx [ 6 ] * xx [ 28 ] +
xx [ 8 ] * xx [ 22 ] ) ; xx [ 3 ] = xx [ 147 ] - xx [ 0 ] + xx [ 60 ] ; xx [
0 ] = xx [ 5 ] + xx [ 7 ] * ( xx [ 8 ] * xx [ 28 ] - xx [ 6 ] * xx [ 22 ] ) ;
xx [ 20 ] = xx [ 9 ] ; xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 0 ] ; xx [ 5 ]
= xx [ 125 ] - ( pm_math_Vector3_dot_ra ( xx + 23 , xx + 35 ) +
pm_math_Vector3_dot_ra ( xx + 38 , xx + 20 ) ) ; xx [ 20 ] = xx [ 79 ] ; xx [
21 ] = xx [ 17 ] ; xx [ 22 ] = xx [ 71 ] ; xx [ 6 ] = xx [ 12 ] - xx [ 27 ] ;
xx [ 8 ] = xx [ 6 ] * xx [ 34 ] ; xx [ 10 ] = xx [ 14 ] + xx [ 58 ] ; xx [ 11
] = xx [ 10 ] * xx [ 34 ] ; xx [ 12 ] = xx [ 6 ] - xx [ 7 ] * ( xx [ 8 ] * xx
[ 34 ] - xx [ 11 ] * xx [ 42 ] ) ; xx [ 14 ] = xx [ 4 ] + xx [ 5 ] ; xx [ 15
] = xx [ 10 ] - xx [ 7 ] * ( xx [ 8 ] * xx [ 42 ] + xx [ 11 ] * xx [ 34 ] ) ;
xx [ 16 ] = xx [ 12 ] ; xx [ 17 ] = xx [ 14 ] ; xx [ 18 ] = xx [ 15 ] ; xx [
23 ] = xx [ 80 ] ; xx [ 24 ] = xx [ 81 ] ; xx [ 25 ] = xx [ 46 ] ; xx [ 8 ] =
xx [ 9 ] + xx [ 95 ] * xx [ 5 ] + xx [ 19 ] + xx [ 171 ] * xx [ 14 ] - xx [
220 ] * xx [ 10 ] ; xx [ 9 ] = xx [ 8 ] * xx [ 34 ] ; xx [ 10 ] = xx [ 0 ] +
xx [ 30 ] + xx [ 220 ] * xx [ 6 ] ; xx [ 0 ] = xx [ 10 ] * xx [ 34 ] ; xx [
11 ] = xx [ 8 ] - xx [ 7 ] * ( xx [ 9 ] * xx [ 34 ] - xx [ 0 ] * xx [ 42 ] )
; xx [ 8 ] = xx [ 3 ] + xx [ 176 ] - xx [ 171 ] * xx [ 6 ] ; xx [ 3 ] = xx [
10 ] - xx [ 7 ] * ( xx [ 9 ] * xx [ 42 ] + xx [ 0 ] * xx [ 34 ] ) ; xx [ 26 ]
= xx [ 11 ] ; xx [ 27 ] = xx [ 8 ] ; xx [ 28 ] = xx [ 3 ] ; xx [ 0 ] = xx [
115 ] - ( pm_math_Vector3_dot_ra ( xx + 20 , xx + 16 ) +
pm_math_Vector3_dot_ra ( xx + 23 , xx + 26 ) ) ; xx [ 16 ] = xx [ 76 ] ; xx [
17 ] = xx [ 91 ] ; xx [ 18 ] = xx [ 143 ] ; xx [ 6 ] = xx [ 12 ] - xx [ 47 ]
; xx [ 9 ] = xx [ 14 ] + xx [ 0 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 45 ] ; xx [
12 ] = xx [ 6 ] * xx [ 45 ] ; xx [ 14 ] = xx [ 6 ] + xx [ 7 ] * ( xx [ 10 ] *
xx [ 48 ] - xx [ 12 ] * xx [ 45 ] ) ; xx [ 19 ] = xx [ 9 ] - xx [ 7 ] * ( xx
[ 12 ] * xx [ 48 ] + xx [ 10 ] * xx [ 45 ] ) ; xx [ 10 ] = xx [ 15 ] + xx [
122 ] ; xx [ 20 ] = xx [ 14 ] ; xx [ 21 ] = xx [ 19 ] ; xx [ 22 ] = xx [ 10 ]
; xx [ 23 ] = xx [ 157 ] ; xx [ 24 ] = xx [ 167 ] ; xx [ 25 ] = xx [ 198 ] ;
xx [ 12 ] = xx [ 11 ] + xx [ 223 ] * xx [ 0 ] + xx [ 33 ] + xx [ 101 ] * xx [
9 ] ; xx [ 9 ] = xx [ 8 ] + xx [ 232 ] - xx [ 101 ] * xx [ 6 ] ; xx [ 6 ] =
xx [ 9 ] * xx [ 45 ] ; xx [ 8 ] = xx [ 12 ] * xx [ 45 ] ; xx [ 11 ] = xx [ 12
] + xx [ 7 ] * ( xx [ 6 ] * xx [ 48 ] - xx [ 8 ] * xx [ 45 ] ) ; xx [ 12 ] =
xx [ 9 ] - xx [ 7 ] * ( xx [ 8 ] * xx [ 48 ] + xx [ 6 ] * xx [ 45 ] ) ; xx [
6 ] = xx [ 3 ] + xx [ 43 ] ; xx [ 26 ] = xx [ 11 ] ; xx [ 27 ] = xx [ 12 ] ;
xx [ 28 ] = xx [ 6 ] ; xx [ 3 ] = xx [ 83 ] - ( pm_math_Vector3_dot_ra ( xx +
16 , xx + 20 ) + pm_math_Vector3_dot_ra ( xx + 23 , xx + 26 ) ) ; xx [ 15 ] =
xx [ 93 ] ; xx [ 16 ] = xx [ 50 ] ; xx [ 17 ] = xx [ 116 ] ; xx [ 8 ] = xx [
14 ] + xx [ 74 ] ; xx [ 9 ] = xx [ 10 ] + xx [ 3 ] ; xx [ 10 ] = xx [ 9 ] *
xx [ 55 ] ; xx [ 14 ] = xx [ 8 ] * xx [ 55 ] ; xx [ 18 ] = xx [ 8 ] - xx [ 7
] * ( xx [ 10 ] * xx [ 57 ] + xx [ 14 ] * xx [ 55 ] ) ; xx [ 20 ] = xx [ 19 ]
- xx [ 148 ] ; xx [ 19 ] = xx [ 9 ] + xx [ 7 ] * ( xx [ 14 ] * xx [ 57 ] - xx
[ 10 ] * xx [ 55 ] ) ; xx [ 21 ] = xx [ 18 ] ; xx [ 22 ] = xx [ 20 ] ; xx [
23 ] = xx [ 19 ] ; xx [ 24 ] = xx [ 138 ] ; xx [ 25 ] = xx [ 146 ] ; xx [ 26
] = xx [ 100 ] ; xx [ 10 ] = xx [ 11 ] + xx [ 168 ] - xx [ 111 ] * xx [ 9 ] ;
xx [ 9 ] = xx [ 6 ] - xx [ 165 ] + xx [ 111 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 9
] * xx [ 55 ] ; xx [ 8 ] = xx [ 10 ] * xx [ 55 ] ; xx [ 11 ] = xx [ 10 ] - xx
[ 7 ] * ( xx [ 6 ] * xx [ 57 ] + xx [ 8 ] * xx [ 55 ] ) ; xx [ 10 ] = xx [ 12
] + xx [ 156 ] ; xx [ 12 ] = xx [ 9 ] + xx [ 7 ] * ( xx [ 8 ] * xx [ 57 ] -
xx [ 6 ] * xx [ 55 ] ) ; xx [ 27 ] = xx [ 11 ] ; xx [ 28 ] = xx [ 10 ] ; xx [
29 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 109 ] - ( pm_math_Vector3_dot_ra ( xx + 15
, xx + 21 ) + pm_math_Vector3_dot_ra ( xx + 24 , xx + 27 ) ) ; xx [ 14 ] = xx
[ 127 ] ; xx [ 15 ] = xx [ 131 ] ; xx [ 16 ] = xx [ 87 ] ; xx [ 8 ] = xx [ 18
] - xx [ 159 ] ; xx [ 9 ] = xx [ 2 ] * xx [ 2 ] * xx [ 8 ] ; xx [ 17 ] = xx [
20 ] + xx [ 6 ] ; xx [ 18 ] = xx [ 2 ] * xx [ 2 ] * xx [ 17 ] ; xx [ 20 ] =
xx [ 8 ] - xx [ 7 ] * ( xx [ 9 ] - xx [ 18 ] ) ; xx [ 21 ] = xx [ 19 ] + xx [
170 ] ; xx [ 19 ] = xx [ 68 ] * xx [ 21 ] ; xx [ 22 ] = xx [ 68 ] * xx [ 20 ]
; xx [ 23 ] = xx [ 20 ] - xx [ 7 ] * ( xx [ 67 ] * xx [ 19 ] + xx [ 68 ] * xx
[ 22 ] ) ; xx [ 20 ] = xx [ 17 ] - xx [ 7 ] * ( xx [ 9 ] + xx [ 18 ] ) ; xx [
9 ] = xx [ 256 ] * xx [ 20 ] ; xx [ 17 ] = xx [ 256 ] * xx [ 23 ] ; xx [ 18 ]
= xx [ 23 ] - xx [ 7 ] * ( xx [ 9 ] * xx [ 290 ] + xx [ 17 ] * xx [ 256 ] ) ;
xx [ 24 ] = xx [ 20 ] - xx [ 7 ] * ( xx [ 9 ] * xx [ 256 ] - xx [ 17 ] * xx [
290 ] ) ; xx [ 9 ] = xx [ 21 ] - xx [ 7 ] * ( xx [ 68 ] * xx [ 19 ] - xx [ 67
] * xx [ 22 ] ) ; xx [ 25 ] = xx [ 18 ] ; xx [ 26 ] = xx [ 24 ] ; xx [ 27 ] =
xx [ 9 ] ; xx [ 28 ] = xx [ 275 ] ; xx [ 29 ] = xx [ 278 ] ; xx [ 30 ] = xx [
242 ] ; xx [ 17 ] = xx [ 11 ] + xx [ 161 ] * xx [ 6 ] + xx [ 209 ] - xx [ 75
] * xx [ 21 ] ; xx [ 11 ] = xx [ 2 ] * xx [ 2 ] * xx [ 17 ] ; xx [ 19 ] = xx
[ 10 ] + xx [ 213 ] ; xx [ 10 ] = xx [ 2 ] * xx [ 2 ] * xx [ 19 ] ; xx [ 2 ]
= xx [ 17 ] - xx [ 7 ] * ( xx [ 11 ] - xx [ 10 ] ) + xx [ 307 ] ; xx [ 17 ] =
xx [ 12 ] + xx [ 44 ] + xx [ 75 ] * xx [ 8 ] + xx [ 229 ] ; xx [ 8 ] = xx [
68 ] * xx [ 17 ] ; xx [ 12 ] = xx [ 68 ] * xx [ 2 ] ; xx [ 21 ] = xx [ 2 ] -
xx [ 7 ] * ( xx [ 67 ] * xx [ 8 ] + xx [ 68 ] * xx [ 12 ] ) ; xx [ 31 ] = xx
[ 23 ] ; xx [ 32 ] = xx [ 20 ] ; xx [ 33 ] = xx [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 31 , xx + 342 , xx + 34 ) ; xx [ 2 ] = xx [
21 ] + xx [ 34 ] ; xx [ 22 ] = xx [ 19 ] - xx [ 7 ] * ( xx [ 11 ] + xx [ 10 ]
) + xx [ 276 ] ; xx [ 10 ] = xx [ 22 ] + xx [ 35 ] ; xx [ 11 ] = xx [ 256 ] *
xx [ 10 ] ; xx [ 19 ] = xx [ 256 ] * xx [ 2 ] ; xx [ 37 ] = xx [ 2 ] - xx [ 7
] * ( xx [ 11 ] * xx [ 290 ] + xx [ 19 ] * xx [ 256 ] ) ; xx [ 2 ] = xx [ 10
] - xx [ 7 ] * ( xx [ 11 ] * xx [ 256 ] - xx [ 19 ] * xx [ 290 ] ) ; xx [ 10
] = xx [ 17 ] - xx [ 7 ] * ( xx [ 68 ] * xx [ 8 ] - xx [ 67 ] * xx [ 12 ] ) ;
xx [ 8 ] = xx [ 10 ] + xx [ 36 ] ; xx [ 34 ] = xx [ 37 ] ; xx [ 35 ] = xx [ 2
] ; xx [ 36 ] = xx [ 8 ] ; xx [ 11 ] = xx [ 316 ] - ( pm_math_Vector3_dot_ra
( xx + 14 , xx + 25 ) + pm_math_Vector3_dot_ra ( xx + 28 , xx + 34 ) ) ; xx [
12 ] = xx [ 24 ] + xx [ 177 ] ; xx [ 14 ] = xx [ 9 ] - xx [ 11 ] ; xx [ 15 ]
= xx [ 18 ] - xx [ 114 ] ; xx [ 16 ] = xx [ 37 ] + xx [ 152 ] + xx [ 132 ] *
xx [ 12 ] ; xx [ 17 ] = xx [ 2 ] + xx [ 248 ] * xx [ 11 ] + xx [ 64 ] - ( xx
[ 133 ] * xx [ 14 ] + xx [ 132 ] * xx [ 15 ] ) ; xx [ 18 ] = xx [ 8 ] + xx [
66 ] + xx [ 133 ] * xx [ 12 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 297
, xx + 16 , xx + 24 ) ; xx [ 16 ] = xx [ 15 ] ; xx [ 17 ] = xx [ 12 ] ; xx [
18 ] = xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 297 , xx + 16 ,
xx + 26 ) ; xx [ 2 ] = xx [ 321 ] - ( xx [ 291 ] * xx [ 24 ] + xx [ 305 ] *
xx [ 25 ] - xx [ 181 ] * xx [ 28 ] ) ; xx [ 14 ] = xx [ 113 ] ; xx [ 15 ] =
xx [ 119 ] ; xx [ 16 ] = xx [ 86 ] ; xx [ 8 ] = xx [ 20 ] * xx [ 178 ] ; xx [
12 ] = xx [ 23 ] * xx [ 178 ] ; xx [ 17 ] = xx [ 23 ] - xx [ 7 ] * ( xx [ 8 ]
* xx [ 184 ] + xx [ 12 ] * xx [ 178 ] ) ; xx [ 18 ] = xx [ 20 ] - xx [ 7 ] *
( xx [ 8 ] * xx [ 178 ] - xx [ 12 ] * xx [ 184 ] ) ; xx [ 24 ] = xx [ 17 ] ;
xx [ 25 ] = xx [ 18 ] ; xx [ 26 ] = xx [ 9 ] ; xx [ 34 ] = xx [ 172 ] ; xx [
35 ] = xx [ 226 ] ; xx [ 36 ] = xx [ 169 ] ; pm_math_Vector3_cross_ra ( xx +
31 , xx + 250 , xx + 37 ) ; xx [ 8 ] = xx [ 21 ] + xx [ 37 ] ; xx [ 12 ] = xx
[ 22 ] + xx [ 38 ] ; xx [ 19 ] = xx [ 12 ] * xx [ 178 ] ; xx [ 27 ] = xx [ 8
] * xx [ 178 ] ; xx [ 29 ] = xx [ 8 ] - xx [ 7 ] * ( xx [ 19 ] * xx [ 184 ] +
xx [ 27 ] * xx [ 178 ] ) ; xx [ 8 ] = xx [ 12 ] - xx [ 7 ] * ( xx [ 19 ] * xx
[ 178 ] - xx [ 27 ] * xx [ 184 ] ) ; xx [ 12 ] = xx [ 10 ] + xx [ 39 ] ; xx [
37 ] = xx [ 29 ] ; xx [ 38 ] = xx [ 8 ] ; xx [ 39 ] = xx [ 12 ] ; xx [ 19 ] =
xx [ 253 ] - ( pm_math_Vector3_dot_ra ( xx + 14 , xx + 24 ) +
pm_math_Vector3_dot_ra ( xx + 34 , xx + 37 ) ) ; xx [ 14 ] = xx [ 18 ] - xx [
200 ] ; xx [ 15 ] = xx [ 9 ] + xx [ 19 ] ; xx [ 16 ] = xx [ 17 ] + xx [ 187 ]
; xx [ 24 ] = xx [ 29 ] + xx [ 255 ] + xx [ 132 ] * xx [ 14 ] ; xx [ 25 ] =
xx [ 8 ] - xx [ 248 ] * xx [ 19 ] + xx [ 180 ] - ( xx [ 133 ] * xx [ 15 ] +
xx [ 132 ] * xx [ 16 ] ) ; xx [ 26 ] = xx [ 12 ] + xx [ 249 ] + xx [ 133 ] *
xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 205 , xx + 24 , xx + 34
) ; xx [ 24 ] = xx [ 16 ] ; xx [ 25 ] = xx [ 14 ] ; xx [ 26 ] = xx [ 15 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 205 , xx + 24 , xx + 14 ) ; xx [ 8
] = xx [ 233 ] - ( xx [ 201 ] * xx [ 34 ] + xx [ 221 ] * xx [ 35 ] - xx [ 186
] * xx [ 16 ] ) ; pm_math_Vector3_cross_ra ( xx + 31 , xx + 153 , xx + 24 ) ;
xx [ 12 ] = xx [ 21 ] + xx [ 24 ] ; xx [ 14 ] = xx [ 22 ] + xx [ 25 ] ; xx [
15 ] = xx [ 69 ] * xx [ 14 ] ; xx [ 17 ] = xx [ 69 ] * xx [ 12 ] ; xx [ 18 ]
= xx [ 69 ] * xx [ 23 ] ; xx [ 21 ] = xx [ 69 ] * xx [ 20 ] ; xx [ 22 ] = xx
[ 20 ] + xx [ 7 ] * ( xx [ 65 ] * xx [ 18 ] - xx [ 69 ] * xx [ 21 ] ) ; xx [
20 ] = xx [ 23 ] - xx [ 7 ] * ( xx [ 65 ] * xx [ 21 ] + xx [ 69 ] * xx [ 18 ]
) ; xx [ 23 ] = xx [ 12 ] - xx [ 7 ] * ( xx [ 65 ] * xx [ 15 ] + xx [ 69 ] *
xx [ 17 ] ) + xx [ 185 ] + xx [ 132 ] * xx [ 22 ] ; xx [ 24 ] = xx [ 14 ] +
xx [ 7 ] * ( xx [ 65 ] * xx [ 17 ] - xx [ 69 ] * xx [ 15 ] ) + xx [ 189 ] - (
xx [ 133 ] * xx [ 9 ] + xx [ 132 ] * xx [ 20 ] ) ; xx [ 25 ] = xx [ 10 ] + xx
[ 26 ] + xx [ 188 ] + xx [ 133 ] * xx [ 22 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 96 , xx + 23 , xx + 29 ) ; xx [ 23
] = xx [ 20 ] ; xx [ 24 ] = xx [ 22 ] ; xx [ 25 ] = xx [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 96 , xx + 23 , xx + 20 ) ; xx [ 7 ]
= xx [ 137 ] - ( xx [ 88 ] * xx [ 29 ] + xx [ 112 ] * xx [ 30 ] - xx [ 236 ]
* xx [ 22 ] ) ; deriv [ 0 ] = state [ 1 ] ; deriv [ 1 ] = xx [ 13 ] ; deriv [
2 ] = state [ 3 ] ; deriv [ 3 ] = xx [ 4 ] ; deriv [ 4 ] = state [ 5 ] ;
deriv [ 5 ] = xx [ 5 ] ; deriv [ 6 ] = state [ 7 ] ; deriv [ 7 ] = xx [ 0 ] ;
deriv [ 8 ] = state [ 9 ] ; deriv [ 9 ] = xx [ 3 ] ; deriv [ 10 ] = state [
11 ] ; deriv [ 11 ] = xx [ 6 ] ; deriv [ 12 ] = state [ 13 ] ; deriv [ 13 ] =
xx [ 11 ] ; deriv [ 14 ] = state [ 15 ] ; deriv [ 15 ] = xx [ 2 ] ; deriv [
16 ] = state [ 17 ] ; deriv [ 17 ] = xx [ 104 ] + ( xx [ 28 ] - xx [ 2 ] ) *
xx [ 311 ] ; deriv [ 18 ] = state [ 19 ] ; deriv [ 19 ] = xx [ 19 ] ; deriv [
20 ] = state [ 21 ] ; deriv [ 21 ] = xx [ 8 ] ; deriv [ 22 ] = state [ 23 ] ;
deriv [ 23 ] = xx [ 224 ] + ( xx [ 16 ] - xx [ 8 ] ) * xx [ 219 ] ; deriv [
24 ] = state [ 25 ] ; deriv [ 25 ] = xx [ 7 ] ; deriv [ 26 ] = state [ 27 ] ;
deriv [ 27 ] = xx [ 126 ] + ( xx [ 22 ] - xx [ 7 ] ) * xx [ 110 ] ;
errorResult [ 0 ] = xx [ 1 ] ; return NULL ; } PmfMessageId
ur5bh_47770016_1_numJacPerturbLoBounds ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * bounds , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ;
( void ) state ; ( void ) modeVector ; ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] =
xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] =
xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] =
xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ; bounds [ 10 ] = xx [ 0 ] ; bounds [ 11 ]
= xx [ 0 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] = xx [ 0 ] ; bounds [
14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16 ] = xx [ 0 ] ;
bounds [ 17 ] = xx [ 0 ] ; bounds [ 18 ] = xx [ 0 ] ; bounds [ 19 ] = xx [ 0
] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx [ 0 ] ; bounds [ 22 ] = xx
[ 0 ] ; bounds [ 23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0 ] ; bounds [ 25 ] =
xx [ 0 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27 ] = xx [ 0 ] ; errorResult
[ 0 ] = 0.0 ; return NULL ; } PmfMessageId
ur5bh_47770016_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * bounds , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ;
( void ) state ; ( void ) modeVector ; ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] =
xx [ 1 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 1 ] ; bounds [ 4 ] =
xx [ 0 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] =
xx [ 1 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 1 ] ; bounds [ 10 ]
= xx [ 0 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [
13 ] = xx [ 1 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 1 ] ;
bounds [ 16 ] = xx [ 0 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [ 18 ] = xx [ 0
] ; bounds [ 19 ] = xx [ 1 ] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx
[ 1 ] ; bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 1 ] ; bounds [ 24 ] =
xx [ 0 ] ; bounds [ 25 ] = xx [ 1 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27
] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
