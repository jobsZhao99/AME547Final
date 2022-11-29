#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ur5bh_47770016_1_geometries.h"
PmfMessageId ur5bh_47770016_1_recordLog ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , double * logVector , double * errorResult , NeuDiagnosticManager
* neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 1 ] ; int ii [ 1 ] ;
double xx [ 407 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags
; ( void ) modeVector ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
neDiagMgr ; xx [ 0 ] = 57.29577951308232 ; xx [ 1 ] = 3.141592653589793 ; xx
[ 2 ] = 0.0 ; xx [ 3 ] = state [ 0 ] + xx [ 1 ] ; if ( xx [ 2 ] < xx [ 3 ] )
xx [ 3 ] = xx [ 2 ] ; xx [ 4 ] = 1.74532925199433e-3 ; xx [ 5 ] = 1.0 ; xx [
6 ] = - ( xx [ 3 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 6 ] ) xx [ 6 ] = xx [
5 ] ; xx [ 7 ] = 3.0 ; xx [ 8 ] = 2.0 ; xx [ 9 ] = 572.9577951308231 ; xx [
10 ] = xx [ 9 ] * state [ 1 ] ; xx [ 11 ] = 5.729577951308232e5 ; xx [ 12 ] =
xx [ 6 ] * xx [ 6 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 6 ] ) * ( ( - xx [ 3 ] ==
xx [ 2 ] ? xx [ 2 ] : - xx [ 10 ] ) - xx [ 11 ] * xx [ 3 ] ) ; if ( xx [ 2 ]
> xx [ 12 ] ) xx [ 12 ] = xx [ 2 ] ; xx [ 3 ] = state [ 0 ] - xx [ 1 ] ; if (
xx [ 2 ] > xx [ 3 ] ) xx [ 3 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 3 ] / xx [ 4 ] ;
if ( xx [ 5 ] < xx [ 6 ] ) xx [ 6 ] = xx [ 5 ] ; xx [ 13 ] = xx [ 6 ] * xx [
6 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 6 ] ) * ( xx [ 11 ] * xx [ 3 ] + ( xx [ 3
] == xx [ 2 ] ? xx [ 2 ] : xx [ 10 ] ) ) ; if ( xx [ 2 ] > xx [ 13 ] ) xx [
13 ] = xx [ 2 ] ; xx [ 3 ] = 0.7071067811865476 ; xx [ 6 ] = 0.5 ; xx [ 10 ]
= xx [ 6 ] * state [ 2 ] ; xx [ 14 ] = xx [ 3 ] * sin ( xx [ 10 ] ) ; xx [ 15
] = xx [ 3 ] * cos ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 14 ] + xx [ 15 ] ; xx [
16 ] = state [ 1 ] * xx [ 10 ] ; xx [ 17 ] = xx [ 14 ] - xx [ 15 ] ; xx [ 14
] = xx [ 8 ] * xx [ 16 ] * xx [ 17 ] ; xx [ 15 ] = state [ 1 ] - xx [ 8 ] *
xx [ 16 ] * xx [ 10 ] ; xx [ 18 ] = xx [ 14 ] ; xx [ 19 ] = state [ 3 ] ; xx
[ 20 ] = xx [ 15 ] ; xx [ 16 ] = 0.2268906759103602 ; xx [ 21 ] =
0.01510739999999999 ; xx [ 22 ] = xx [ 16 ] * xx [ 14 ] ; xx [ 23 ] = xx [ 16
] * state [ 3 ] ; xx [ 24 ] = xx [ 21 ] * xx [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 22 , xx + 25 ) ; xx [ 22 ] = xx [ 6
] * state [ 4 ] ; xx [ 23 ] = sin ( xx [ 22 ] ) ; xx [ 24 ] = xx [ 14 ] * xx
[ 23 ] ; xx [ 28 ] = xx [ 15 ] * xx [ 23 ] ; xx [ 29 ] = cos ( xx [ 22 ] ) ;
xx [ 22 ] = xx [ 14 ] - xx [ 8 ] * ( xx [ 24 ] * xx [ 23 ] + xx [ 28 ] * xx [
29 ] ) ; xx [ 30 ] = state [ 3 ] + state [ 5 ] ; xx [ 31 ] = xx [ 15 ] - xx [
8 ] * ( xx [ 28 ] * xx [ 23 ] - xx [ 24 ] * xx [ 29 ] ) ; xx [ 32 ] = xx [ 22
] ; xx [ 33 ] = xx [ 30 ] ; xx [ 34 ] = xx [ 31 ] ; xx [ 24 ] =
0.03121679102890359 ; xx [ 28 ] = 4.095000000000001e-3 ; xx [ 35 ] = xx [ 24
] * xx [ 22 ] ; xx [ 36 ] = xx [ 24 ] * xx [ 30 ] ; xx [ 37 ] = xx [ 28 ] *
xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 32 , xx + 35 , xx + 38 ) ; xx [
35 ] = xx [ 6 ] * state [ 6 ] ; xx [ 36 ] = xx [ 3 ] * sin ( xx [ 35 ] ) ; xx
[ 37 ] = xx [ 3 ] * cos ( xx [ 35 ] ) ; xx [ 35 ] = xx [ 36 ] + xx [ 37 ] ;
xx [ 41 ] = xx [ 22 ] * xx [ 35 ] ; xx [ 42 ] = xx [ 31 ] * xx [ 35 ] ; xx [
43 ] = xx [ 36 ] - xx [ 37 ] ; xx [ 36 ] = xx [ 22 ] - xx [ 8 ] * ( xx [ 41 ]
* xx [ 35 ] - xx [ 42 ] * xx [ 43 ] ) ; xx [ 37 ] = xx [ 30 ] + state [ 7 ] ;
xx [ 44 ] = xx [ 31 ] - xx [ 8 ] * ( xx [ 41 ] * xx [ 43 ] + xx [ 42 ] * xx [
35 ] ) ; xx [ 45 ] = xx [ 36 ] ; xx [ 46 ] = xx [ 37 ] ; xx [ 47 ] = xx [ 44
] ; xx [ 41 ] = 2.55989897604e-3 ; xx [ 42 ] = 2.55989897604e-3 ; xx [ 48 ] =
2.1942e-3 ; xx [ 49 ] = xx [ 41 ] * xx [ 36 ] ; xx [ 50 ] = xx [ 42 ] * xx [
37 ] ; xx [ 51 ] = xx [ 48 ] * xx [ 44 ] ; pm_math_Vector3_cross_ra ( xx + 45
, xx + 49 , xx + 52 ) ; xx [ 45 ] = xx [ 6 ] * state [ 8 ] ; xx [ 46 ] = sin
( xx [ 45 ] ) ; xx [ 47 ] = xx [ 37 ] * xx [ 46 ] ; xx [ 49 ] = cos ( xx [ 45
] ) ; xx [ 45 ] = xx [ 36 ] * xx [ 46 ] ; xx [ 50 ] = xx [ 36 ] + xx [ 8 ] *
( xx [ 47 ] * xx [ 49 ] - xx [ 45 ] * xx [ 46 ] ) ; xx [ 51 ] = xx [ 37 ] -
xx [ 8 ] * ( xx [ 45 ] * xx [ 49 ] + xx [ 47 ] * xx [ 46 ] ) ; xx [ 45 ] = xx
[ 44 ] + state [ 9 ] ; xx [ 55 ] = xx [ 50 ] ; xx [ 56 ] = xx [ 51 ] ; xx [
57 ] = xx [ 45 ] ; xx [ 47 ] = 2.1942e-3 ; xx [ 58 ] = xx [ 41 ] * xx [ 50 ]
; xx [ 59 ] = xx [ 41 ] * xx [ 51 ] ; xx [ 60 ] = xx [ 47 ] * xx [ 45 ] ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 58 , xx + 61 ) ; xx [ 55 ] = xx [ 6
] * state [ 10 ] ; xx [ 56 ] = sin ( xx [ 55 ] ) ; xx [ 57 ] = xx [ 45 ] * xx
[ 56 ] ; xx [ 58 ] = cos ( xx [ 55 ] ) ; xx [ 55 ] = xx [ 50 ] * xx [ 56 ] ;
xx [ 59 ] = xx [ 50 ] - xx [ 8 ] * ( xx [ 57 ] * xx [ 58 ] + xx [ 55 ] * xx [
56 ] ) ; xx [ 60 ] = xx [ 51 ] + state [ 11 ] ; xx [ 64 ] = xx [ 45 ] + xx [
8 ] * ( xx [ 55 ] * xx [ 58 ] - xx [ 57 ] * xx [ 56 ] ) ; xx [ 65 ] = xx [ 59
] ; xx [ 66 ] = xx [ 60 ] ; xx [ 67 ] = xx [ 64 ] ; xx [ 55 ] =
8.469589112162997e-5 ; xx [ 57 ] = 1.321171875e-4 ; xx [ 68 ] = xx [ 55 ] *
xx [ 59 ] ; xx [ 69 ] = xx [ 57 ] * xx [ 60 ] ; xx [ 70 ] = xx [ 55 ] * xx [
64 ] ; pm_math_Vector3_cross_ra ( xx + 65 , xx + 68 , xx + 71 ) ; xx [ 65 ] =
xx [ 3 ] * xx [ 3 ] * xx [ 59 ] ; xx [ 66 ] = xx [ 3 ] * xx [ 3 ] * xx [ 60 ]
; xx [ 67 ] = xx [ 59 ] - xx [ 8 ] * ( xx [ 65 ] - xx [ 66 ] ) ; xx [ 68 ] =
0.7071067811882787 ; xx [ 69 ] = 0.7071067811848163 ; xx [ 70 ] = xx [ 69 ] *
xx [ 64 ] ; xx [ 74 ] = xx [ 69 ] * xx [ 67 ] ; xx [ 75 ] = xx [ 67 ] - xx [
8 ] * ( xx [ 68 ] * xx [ 70 ] + xx [ 69 ] * xx [ 74 ] ) ; xx [ 67 ] = xx [ 60
] - xx [ 8 ] * ( xx [ 65 ] + xx [ 66 ] ) ; xx [ 65 ] = xx [ 64 ] - xx [ 8 ] *
( xx [ 69 ] * xx [ 70 ] - xx [ 68 ] * xx [ 74 ] ) ; xx [ 76 ] = xx [ 75 ] ;
xx [ 77 ] = xx [ 67 ] ; xx [ 78 ] = xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx
+ 76 , xx + 76 , xx + 79 ) ; xx [ 66 ] = 0.7071067811140325 ; xx [ 70 ] =
0.7071067812590626 ; xx [ 74 ] = xx [ 70 ] * xx [ 67 ] ; xx [ 82 ] = xx [ 70
] * xx [ 75 ] ; xx [ 83 ] = xx [ 75 ] - xx [ 8 ] * ( xx [ 66 ] * xx [ 74 ] +
xx [ 70 ] * xx [ 82 ] ) ; xx [ 84 ] = xx [ 67 ] + xx [ 8 ] * ( xx [ 66 ] * xx
[ 82 ] - xx [ 70 ] * xx [ 74 ] ) ; xx [ 85 ] = xx [ 83 ] ; xx [ 86 ] = xx [
84 ] ; xx [ 87 ] = xx [ 65 ] ; xx [ 74 ] = 0.01 ; xx [ 88 ] = xx [ 74 ] * xx
[ 83 ] ; xx [ 89 ] = xx [ 74 ] * xx [ 84 ] ; xx [ 90 ] = xx [ 74 ] * xx [ 65
] ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 88 , xx + 91 ) ; xx [ 82 ] =
0.7071054825112364 ; xx [ 88 ] = xx [ 6 ] * state [ 24 ] ; xx [ 89 ] = cos (
xx [ 88 ] ) ; xx [ 90 ] = xx [ 82 ] * xx [ 89 ] ; xx [ 94 ] =
0.7071080798594737 ; xx [ 95 ] = xx [ 94 ] * xx [ 89 ] ; xx [ 89 ] = sin ( xx
[ 88 ] ) ; xx [ 88 ] = xx [ 94 ] * xx [ 89 ] ; xx [ 96 ] = xx [ 82 ] * xx [
89 ] ; xx [ 97 ] = - xx [ 90 ] ; xx [ 98 ] = - xx [ 95 ] ; xx [ 99 ] = - xx [
88 ] ; xx [ 100 ] = xx [ 96 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 97
, xx + 85 , xx + 101 ) ; xx [ 89 ] = xx [ 103 ] - state [ 25 ] ; xx [ 103 ] =
xx [ 101 ] ; xx [ 104 ] = xx [ 102 ] ; xx [ 105 ] = xx [ 89 ] ; xx [ 106 ] =
xx [ 74 ] * xx [ 101 ] ; xx [ 107 ] = xx [ 74 ] * xx [ 102 ] ; xx [ 108 ] =
xx [ 74 ] * xx [ 89 ] ; pm_math_Vector3_cross_ra ( xx + 103 , xx + 106 , xx +
109 ) ; xx [ 106 ] = xx [ 6 ] * state [ 26 ] ; xx [ 107 ] = sin ( xx [ 106 ]
) ; xx [ 108 ] = xx [ 107 ] * xx [ 102 ] ; xx [ 112 ] = cos ( xx [ 106 ] ) ;
xx [ 106 ] = xx [ 107 ] * xx [ 101 ] ; xx [ 113 ] = xx [ 101 ] - xx [ 8 ] * (
xx [ 108 ] * xx [ 112 ] + xx [ 106 ] * xx [ 107 ] ) ; xx [ 114 ] = xx [ 102 ]
+ xx [ 8 ] * ( xx [ 106 ] * xx [ 112 ] - xx [ 108 ] * xx [ 107 ] ) ; xx [ 106
] = xx [ 89 ] - state [ 27 ] ; xx [ 115 ] = xx [ 113 ] ; xx [ 116 ] = xx [
114 ] ; xx [ 117 ] = xx [ 106 ] ; xx [ 118 ] = xx [ 74 ] * xx [ 113 ] ; xx [
119 ] = xx [ 74 ] * xx [ 114 ] ; xx [ 120 ] = xx [ 74 ] * xx [ 106 ] ;
pm_math_Vector3_cross_ra ( xx + 115 , xx + 118 , xx + 121 ) ; xx [ 106 ] = xx
[ 121 ] - xx [ 74 ] * state [ 27 ] * xx [ 114 ] ; xx [ 108 ] = xx [ 122 ] +
xx [ 74 ] * xx [ 113 ] * state [ 27 ] ; xx [ 113 ] = xx [ 108 ] * xx [ 107 ]
; xx [ 114 ] = xx [ 106 ] * xx [ 107 ] ; xx [ 115 ] = 3.0e-3 ; xx [ 116 ] =
0.1 ; xx [ 117 ] = 0.069936 ; xx [ 118 ] = - ( xx [ 115 ] * xx [ 89 ] ) ; xx
[ 119 ] = - ( xx [ 117 ] * xx [ 89 ] ) ; xx [ 120 ] = xx [ 115 ] * xx [ 101 ]
+ xx [ 117 ] * xx [ 102 ] ; pm_math_Vector3_cross_ra ( xx + 103 , xx + 118 ,
xx + 124 ) ; xx [ 89 ] = xx [ 116 ] * xx [ 126 ] ; xx [ 103 ] = state [ 25 ]
* xx [ 101 ] ; xx [ 101 ] = xx [ 112 ] * xx [ 112 ] ; xx [ 104 ] = xx [ 8 ] *
xx [ 101 ] - xx [ 5 ] ; xx [ 105 ] = xx [ 74 ] * xx [ 104 ] ; xx [ 118 ] = xx
[ 8 ] * xx [ 112 ] * xx [ 107 ] ; xx [ 119 ] = xx [ 105 ] * xx [ 118 ] ; xx [
120 ] = xx [ 74 ] * xx [ 118 ] ; xx [ 127 ] = xx [ 120 ] * xx [ 104 ] ; xx [
128 ] = xx [ 8 ] * ( xx [ 101 ] + xx [ 107 ] * xx [ 107 ] ) - xx [ 5 ] ; xx [
101 ] = xx [ 116 ] * xx [ 128 ] * xx [ 128 ] ; xx [ 129 ] = xx [ 117 ] * xx [
101 ] ; xx [ 130 ] = xx [ 119 ] - xx [ 127 ] + xx [ 115 ] * xx [ 129 ] ; xx [
131 ] = state [ 25 ] * xx [ 102 ] ; xx [ 102 ] = xx [ 105 ] * xx [ 104 ] ; xx
[ 105 ] = xx [ 120 ] * xx [ 118 ] ; xx [ 120 ] = xx [ 115 ] * xx [ 101 ] ; xx
[ 132 ] = xx [ 74 ] + xx [ 102 ] + xx [ 105 ] + xx [ 115 ] * xx [ 120 ] ; xx
[ 133 ] = 0.0339 ; xx [ 134 ] = 4.000000000000004e-3 ; xx [ 135 ] = xx [ 133
] * xx [ 84 ] ; xx [ 136 ] = - ( xx [ 134 ] * xx [ 65 ] + xx [ 133 ] * xx [
83 ] ) ; xx [ 137 ] = xx [ 134 ] * xx [ 84 ] ; pm_math_Vector3_cross_ra ( xx
+ 85 , xx + 135 , xx + 138 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 97 ,
xx + 138 , xx + 83 ) ; xx [ 86 ] = xx [ 74 ] + xx [ 105 ] + xx [ 102 ] + xx [
117 ] * xx [ 129 ] ; xx [ 87 ] = xx [ 127 ] - xx [ 119 ] + xx [ 117 ] * xx [
120 ] ; xx [ 102 ] = state [ 26 ] ; if ( xx [ 2 ] < xx [ 102 ] ) xx [ 102 ] =
xx [ 2 ] ; xx [ 105 ] = - ( xx [ 102 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [
105 ] ) xx [ 105 ] = xx [ 5 ] ; xx [ 119 ] = xx [ 9 ] * state [ 27 ] ; xx [
121 ] = xx [ 105 ] * xx [ 105 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 105 ] ) * ( (
- xx [ 102 ] == xx [ 2 ] ? xx [ 2 ] : - xx [ 119 ] ) - xx [ 11 ] * xx [ 102 ]
) ; if ( xx [ 2 ] > xx [ 121 ] ) xx [ 121 ] = xx [ 2 ] ; xx [ 102 ] = 100.0 ;
xx [ 105 ] = 0.84 ; xx [ 122 ] = state [ 26 ] - xx [ 105 ] ; if ( xx [ 2 ] >
xx [ 122 ] ) xx [ 122 ] = xx [ 2 ] ; xx [ 127 ] = xx [ 122 ] / xx [ 4 ] ; if
( xx [ 5 ] < xx [ 127 ] ) xx [ 127 ] = xx [ 5 ] ; xx [ 135 ] = xx [ 127 ] *
xx [ 127 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 127 ] ) * ( xx [ 11 ] * xx [ 122 ]
+ ( xx [ 122 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 119 ] ) ) ; if ( xx [ 2 ] > xx [
135 ] ) xx [ 135 ] = xx [ 2 ] ; memcpy ( xx + 119 , xx + 74 , 1 * sizeof (
double ) ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 119 , 1 , xx + 122 ) ;
bb [ 0 ] = ii [ 0 ] != 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j33_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 122 , xx + 119 , 1 * sizeof ( double ) ) ; xx
[ 127 ] = ( xx [ 121 ] - xx [ 102 ] * state [ 27 ] - xx [ 135 ] + xx [ 123 ]
) / xx [ 122 ] ; xx [ 121 ] = xx [ 107 ] * xx [ 124 ] ; xx [ 126 ] = xx [ 107
] * xx [ 125 ] ; xx [ 135 ] = xx [ 116 ] * ( xx [ 125 ] + xx [ 8 ] * ( xx [
121 ] * xx [ 112 ] - xx [ 126 ] * xx [ 107 ] ) ) ; xx [ 125 ] = xx [ 116 ] *
( xx [ 124 ] - xx [ 8 ] * ( xx [ 126 ] * xx [ 112 ] + xx [ 121 ] * xx [ 107 ]
) ) ; xx [ 121 ] = xx [ 125 ] * xx [ 107 ] ; xx [ 124 ] = xx [ 135 ] * xx [
107 ] ; xx [ 126 ] = xx [ 135 ] - xx [ 8 ] * ( xx [ 121 ] * xx [ 112 ] + xx [
124 ] * xx [ 107 ] ) ; xx [ 135 ] = xx [ 125 ] + xx [ 8 ] * ( xx [ 124 ] * xx
[ 112 ] - xx [ 121 ] * xx [ 107 ] ) ; xx [ 121 ] = xx [ 116 ] * xx [ 104 ] ;
xx [ 124 ] = xx [ 121 ] * xx [ 104 ] ; xx [ 125 ] = xx [ 116 ] * xx [ 118 ] ;
xx [ 136 ] = xx [ 125 ] * xx [ 118 ] ; xx [ 137 ] = xx [ 124 ] + xx [ 136 ] ;
xx [ 138 ] = xx [ 121 ] * xx [ 118 ] ; xx [ 118 ] = xx [ 125 ] * xx [ 104 ] ;
xx [ 104 ] = xx [ 138 ] - xx [ 118 ] ; xx [ 121 ] = xx [ 115 ] * xx [ 137 ] +
xx [ 117 ] * xx [ 104 ] ; xx [ 125 ] = xx [ 118 ] - xx [ 138 ] ; xx [ 118 ] =
xx [ 136 ] + xx [ 124 ] ; xx [ 124 ] = xx [ 115 ] * xx [ 125 ] + xx [ 117 ] *
xx [ 118 ] ; xx [ 136 ] = xx [ 111 ] + xx [ 123 ] - xx [ 74 ] * xx [ 127 ] -
( xx [ 117 ] * xx [ 126 ] + xx [ 115 ] * xx [ 135 ] ) - ( xx [ 121 ] * xx [
83 ] + xx [ 124 ] * xx [ 84 ] ) ; xx [ 111 ] = xx [ 74 ] / xx [ 122 ] ; xx [
122 ] = xx [ 74 ] + ( xx [ 74 ] - xx [ 74 ] * xx [ 111 ] ) * xx [ 128 ] * xx
[ 128 ] + xx [ 117 ] * xx [ 124 ] + xx [ 115 ] * xx [ 121 ] ; xx [ 123 ] =
state [ 24 ] ; if ( xx [ 2 ] < xx [ 123 ] ) xx [ 123 ] = xx [ 2 ] ; xx [ 128
] = - ( xx [ 123 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 128 ] ) xx [ 128 ] =
xx [ 5 ] ; xx [ 138 ] = xx [ 9 ] * state [ 25 ] ; xx [ 139 ] = xx [ 128 ] *
xx [ 128 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 128 ] ) * ( ( - xx [ 123 ] == xx [
2 ] ? xx [ 2 ] : - xx [ 138 ] ) - xx [ 11 ] * xx [ 123 ] ) ; if ( xx [ 2 ] >
xx [ 139 ] ) xx [ 139 ] = xx [ 2 ] ; xx [ 123 ] = 2.44 ; xx [ 128 ] = state [
24 ] - xx [ 123 ] ; if ( xx [ 2 ] > xx [ 128 ] ) xx [ 128 ] = xx [ 2 ] ; xx [
140 ] = xx [ 128 ] / xx [ 4 ] ; if ( xx [ 5 ] < xx [ 140 ] ) xx [ 140 ] = xx
[ 5 ] ; xx [ 141 ] = xx [ 140 ] * xx [ 140 ] * ( xx [ 7 ] - xx [ 8 ] * xx [
140 ] ) * ( xx [ 11 ] * xx [ 128 ] + ( xx [ 128 ] == xx [ 2 ] ? xx [ 2 ] : xx
[ 138 ] ) ) ; if ( xx [ 2 ] > xx [ 141 ] ) xx [ 141 ] = xx [ 2 ] ; memcpy (
xx + 128 , xx + 122 , 1 * sizeof ( double ) ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 128 , 1 , xx + 138 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j32_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 138 ] = ( xx [ 139 ] - xx [ 102 ] * state [ 25 ] - xx
[ 141 ] + xx [ 136 ] ) / xx [ 128 ] ; xx [ 139 ] = xx [ 109 ] + xx [ 106 ] +
xx [ 8 ] * ( xx [ 113 ] * xx [ 112 ] - xx [ 114 ] * xx [ 107 ] ) + xx [ 115 ]
* xx [ 89 ] + xx [ 103 ] * xx [ 130 ] - xx [ 131 ] * xx [ 132 ] + xx [ 120 ]
* xx [ 85 ] ; xx [ 140 ] = xx [ 110 ] + xx [ 108 ] - xx [ 8 ] * ( xx [ 114 ]
* xx [ 112 ] + xx [ 113 ] * xx [ 107 ] ) + xx [ 117 ] * xx [ 89 ] + xx [ 103
] * xx [ 86 ] - xx [ 131 ] * xx [ 87 ] + xx [ 129 ] * xx [ 85 ] ; xx [ 141 ]
= xx [ 136 ] - xx [ 122 ] * xx [ 138 ] ; pm_math_Quaternion_xform_ra ( xx +
97 , xx + 139 , xx + 106 ) ; xx [ 109 ] = xx [ 116 ] + xx [ 137 ] ; xx [ 110
] = xx [ 116 ] + xx [ 118 ] ; xx [ 112 ] = xx [ 116 ] + xx [ 101 ] ; xx [ 139
] = xx [ 135 ] + xx [ 109 ] * xx [ 83 ] + xx [ 104 ] * xx [ 84 ] + xx [ 121 ]
* xx [ 138 ] ; xx [ 140 ] = xx [ 126 ] + xx [ 125 ] * xx [ 83 ] + xx [ 110 ]
* xx [ 84 ] + xx [ 124 ] * xx [ 138 ] ; xx [ 141 ] = xx [ 89 ] + xx [ 112 ] *
xx [ 85 ] - ( xx [ 120 ] * xx [ 131 ] - xx [ 129 ] * xx [ 103 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 97 , xx + 139 , xx + 83 ) ; xx [ 89 ] = xx
[ 90 ] * xx [ 90 ] ; xx [ 101 ] = xx [ 8 ] * ( xx [ 89 ] + xx [ 95 ] * xx [
95 ] ) - xx [ 5 ] ; xx [ 103 ] = xx [ 95 ] * xx [ 88 ] ; xx [ 113 ] = xx [ 90
] * xx [ 96 ] ; xx [ 114 ] = xx [ 8 ] * ( xx [ 103 ] + xx [ 113 ] ) ; xx [
118 ] = xx [ 90 ] * xx [ 88 ] ; xx [ 126 ] = xx [ 96 ] * xx [ 95 ] ; xx [ 131
] = xx [ 8 ] * ( xx [ 118 ] - xx [ 126 ] ) ; xx [ 135 ] = xx [ 8 ] * ( xx [
103 ] - xx [ 113 ] ) ; xx [ 103 ] = xx [ 8 ] * ( xx [ 89 ] + xx [ 88 ] * xx [
88 ] ) - xx [ 5 ] ; xx [ 113 ] = xx [ 96 ] * xx [ 88 ] ; xx [ 88 ] = xx [ 90
] * xx [ 95 ] ; xx [ 90 ] = xx [ 8 ] * ( xx [ 113 ] + xx [ 88 ] ) ; xx [ 95 ]
= xx [ 8 ] * ( xx [ 126 ] + xx [ 118 ] ) ; xx [ 118 ] = xx [ 8 ] * ( xx [ 88
] - xx [ 113 ] ) ; xx [ 88 ] = xx [ 8 ] * ( xx [ 89 ] + xx [ 96 ] * xx [ 96 ]
) - xx [ 5 ] ; xx [ 139 ] = xx [ 101 ] ; xx [ 140 ] = xx [ 114 ] ; xx [ 141 ]
= xx [ 131 ] ; xx [ 142 ] = xx [ 135 ] ; xx [ 143 ] = xx [ 103 ] ; xx [ 144 ]
= - xx [ 90 ] ; xx [ 145 ] = - xx [ 95 ] ; xx [ 146 ] = xx [ 118 ] ; xx [ 147
] = xx [ 88 ] ; xx [ 89 ] = xx [ 121 ] / xx [ 128 ] ; xx [ 96 ] = xx [ 122 ]
* xx [ 89 ] - xx [ 121 ] ; xx [ 113 ] = xx [ 124 ] / xx [ 128 ] ; xx [ 126 ]
= xx [ 122 ] * xx [ 113 ] - xx [ 124 ] ; xx [ 148 ] = xx [ 120 ] * xx [ 131 ]
; xx [ 149 ] = - ( xx [ 120 ] * xx [ 90 ] ) ; xx [ 150 ] = xx [ 120 ] * xx [
88 ] ; xx [ 151 ] = xx [ 129 ] * xx [ 131 ] ; xx [ 152 ] = - ( xx [ 129 ] *
xx [ 90 ] ) ; xx [ 153 ] = xx [ 129 ] * xx [ 88 ] ; xx [ 154 ] = xx [ 101 ] *
xx [ 96 ] + xx [ 114 ] * xx [ 126 ] ; xx [ 155 ] = xx [ 135 ] * xx [ 96 ] +
xx [ 103 ] * xx [ 126 ] ; xx [ 156 ] = xx [ 118 ] * xx [ 126 ] - xx [ 95 ] *
xx [ 96 ] ; pm_math_Matrix3x3_compose_ra ( xx + 139 , xx + 148 , xx + 157 ) ;
xx [ 96 ] = xx [ 109 ] - xx [ 121 ] * xx [ 89 ] ; xx [ 109 ] = xx [ 124 ] *
xx [ 89 ] ; xx [ 120 ] = xx [ 104 ] - xx [ 109 ] ; xx [ 104 ] = xx [ 125 ] -
xx [ 109 ] ; xx [ 109 ] = xx [ 110 ] - xx [ 124 ] * xx [ 113 ] ; xx [ 148 ] =
xx [ 101 ] * xx [ 96 ] + xx [ 114 ] * xx [ 120 ] ; xx [ 149 ] = xx [ 135 ] *
xx [ 96 ] + xx [ 103 ] * xx [ 120 ] ; xx [ 150 ] = xx [ 118 ] * xx [ 120 ] -
xx [ 95 ] * xx [ 96 ] ; xx [ 151 ] = xx [ 101 ] * xx [ 104 ] + xx [ 114 ] *
xx [ 109 ] ; xx [ 152 ] = xx [ 135 ] * xx [ 104 ] + xx [ 103 ] * xx [ 109 ] ;
xx [ 153 ] = xx [ 118 ] * xx [ 109 ] - xx [ 95 ] * xx [ 104 ] ; xx [ 154 ] =
xx [ 131 ] * xx [ 112 ] ; xx [ 155 ] = - ( xx [ 90 ] * xx [ 112 ] ) ; xx [
156 ] = xx [ 88 ] * xx [ 112 ] ; pm_math_Matrix3x3_compose_ra ( xx + 139 , xx
+ 148 , xx + 166 ) ; xx [ 96 ] = xx [ 133 ] * xx [ 167 ] ; xx [ 104 ] = xx [
157 ] - xx [ 96 ] ; xx [ 109 ] = xx [ 133 ] * xx [ 170 ] ; xx [ 110 ] = xx [
158 ] - xx [ 109 ] ; xx [ 112 ] = xx [ 133 ] * xx [ 173 ] ; xx [ 120 ] = xx [
159 ] - xx [ 112 ] ; xx [ 121 ] = xx [ 134 ] * xx [ 168 ] + xx [ 133 ] * xx [
166 ] ; xx [ 124 ] = xx [ 160 ] + xx [ 121 ] ; xx [ 125 ] = xx [ 134 ] * xx [
171 ] + xx [ 133 ] * xx [ 169 ] ; xx [ 126 ] = xx [ 161 ] + xx [ 125 ] ; xx [
129 ] = xx [ 134 ] * xx [ 174 ] + xx [ 133 ] * xx [ 172 ] ; xx [ 136 ] = xx [
162 ] + xx [ 129 ] ; xx [ 137 ] = xx [ 134 ] * xx [ 167 ] ; xx [ 148 ] = xx [
163 ] - xx [ 137 ] ; xx [ 149 ] = xx [ 134 ] * xx [ 170 ] ; xx [ 150 ] = xx [
164 ] - xx [ 149 ] ; xx [ 151 ] = xx [ 134 ] * xx [ 173 ] ; xx [ 152 ] = xx [
165 ] - xx [ 151 ] ; xx [ 175 ] = xx [ 104 ] ; xx [ 176 ] = xx [ 110 ] ; xx [
177 ] = xx [ 120 ] ; xx [ 178 ] = xx [ 124 ] ; xx [ 179 ] = xx [ 126 ] ; xx [
180 ] = xx [ 136 ] ; xx [ 181 ] = xx [ 148 ] ; xx [ 182 ] = xx [ 150 ] ; xx [
183 ] = xx [ 152 ] ; xx [ 153 ] = 0.0252 ; xx [ 154 ] = 9.434758529991427e-12
; xx [ 155 ] = 0.04599999999999999 ; xx [ 156 ] = xx [ 153 ] ;
pm_math_Vector3_cross_ra ( xx + 76 , xx + 154 , xx + 184 ) ;
pm_math_Vector3_cross_ra ( xx + 76 , xx + 184 , xx + 187 ) ; xx [ 184 ] = xx
[ 70 ] * xx [ 188 ] ; xx [ 185 ] = xx [ 70 ] * xx [ 187 ] ; xx [ 186 ] = xx [
187 ] - xx [ 8 ] * ( xx [ 66 ] * xx [ 184 ] + xx [ 70 ] * xx [ 185 ] ) ; xx [
190 ] = xx [ 188 ] + xx [ 8 ] * ( xx [ 66 ] * xx [ 185 ] - xx [ 70 ] * xx [
184 ] ) ; xx [ 191 ] = xx [ 186 ] ; xx [ 192 ] = xx [ 190 ] ; xx [ 193 ] = xx
[ 189 ] ; pm_math_Matrix3x3_xform_ra ( xx + 175 , xx + 191 , xx + 194 ) ; xx
[ 175 ] = xx [ 116 ] + xx [ 166 ] ; xx [ 166 ] = xx [ 116 ] + xx [ 170 ] ; xx
[ 170 ] = xx [ 116 ] + xx [ 174 ] ; xx [ 176 ] = xx [ 175 ] ; xx [ 177 ] = xx
[ 167 ] ; xx [ 178 ] = xx [ 168 ] ; xx [ 179 ] = xx [ 169 ] ; xx [ 180 ] = xx
[ 166 ] ; xx [ 181 ] = xx [ 171 ] ; xx [ 182 ] = xx [ 172 ] ; xx [ 183 ] = xx
[ 173 ] ; xx [ 184 ] = xx [ 170 ] ; pm_math_Matrix3x3_xform_ra ( xx + 176 ,
xx + 191 , xx + 197 ) ; xx [ 176 ] = xx [ 83 ] + xx [ 197 ] ; xx [ 177 ] = xx
[ 70 ] * xx [ 176 ] ; xx [ 178 ] = xx [ 84 ] + xx [ 198 ] ; xx [ 179 ] = xx [
70 ] * xx [ 178 ] ; xx [ 180 ] = xx [ 176 ] - xx [ 8 ] * ( xx [ 70 ] * xx [
177 ] - xx [ 66 ] * xx [ 179 ] ) ; xx [ 176 ] = xx [ 178 ] - xx [ 8 ] * ( xx
[ 66 ] * xx [ 177 ] + xx [ 70 ] * xx [ 179 ] ) ; xx [ 177 ] = xx [ 85 ] + xx
[ 199 ] ; xx [ 181 ] = xx [ 180 ] ; xx [ 182 ] = xx [ 176 ] ; xx [ 183 ] = xx
[ 177 ] ; pm_math_Vector3_cross_ra ( xx + 154 , xx + 181 , xx + 191 ) ; xx [
178 ] = 0.7071054825112363 ; xx [ 179 ] = xx [ 6 ] * state [ 18 ] ; xx [ 181
] = sin ( xx [ 179 ] ) ; xx [ 182 ] = 0.7071080798594735 ; xx [ 183 ] = cos (
xx [ 179 ] ) ; xx [ 179 ] = xx [ 178 ] * xx [ 181 ] + xx [ 182 ] * xx [ 183 ]
; xx [ 184 ] = xx [ 67 ] * xx [ 179 ] ; xx [ 185 ] = xx [ 182 ] * xx [ 181 ]
- xx [ 178 ] * xx [ 183 ] ; xx [ 181 ] = xx [ 75 ] * xx [ 179 ] ; xx [ 183 ]
= xx [ 75 ] - xx [ 8 ] * ( xx [ 184 ] * xx [ 185 ] + xx [ 181 ] * xx [ 179 ]
) ; xx [ 187 ] = xx [ 67 ] - xx [ 8 ] * ( xx [ 184 ] * xx [ 179 ] - xx [ 181
] * xx [ 185 ] ) ; xx [ 181 ] = xx [ 65 ] + state [ 19 ] ; xx [ 197 ] = xx [
183 ] ; xx [ 198 ] = xx [ 187 ] ; xx [ 199 ] = xx [ 181 ] ; xx [ 200 ] = xx [
74 ] * xx [ 183 ] ; xx [ 201 ] = xx [ 74 ] * xx [ 187 ] ; xx [ 202 ] = xx [
74 ] * xx [ 181 ] ; pm_math_Vector3_cross_ra ( xx + 197 , xx + 200 , xx + 203
) ; xx [ 184 ] = xx [ 6 ] * state [ 20 ] ; xx [ 188 ] = cos ( xx [ 184 ] ) ;
xx [ 200 ] = xx [ 82 ] * xx [ 188 ] ; xx [ 201 ] = xx [ 94 ] * xx [ 188 ] ;
xx [ 188 ] = sin ( xx [ 184 ] ) ; xx [ 184 ] = xx [ 94 ] * xx [ 188 ] ; xx [
202 ] = xx [ 82 ] * xx [ 188 ] ; xx [ 206 ] = - xx [ 200 ] ; xx [ 207 ] = -
xx [ 201 ] ; xx [ 208 ] = - xx [ 184 ] ; xx [ 209 ] = xx [ 202 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 206 , xx + 197 , xx + 210 ) ; xx [
188 ] = xx [ 212 ] - state [ 21 ] ; xx [ 212 ] = xx [ 210 ] ; xx [ 213 ] = xx
[ 211 ] ; xx [ 214 ] = xx [ 188 ] ; xx [ 215 ] = xx [ 74 ] * xx [ 210 ] ; xx
[ 216 ] = xx [ 74 ] * xx [ 211 ] ; xx [ 217 ] = xx [ 74 ] * xx [ 188 ] ;
pm_math_Vector3_cross_ra ( xx + 212 , xx + 215 , xx + 218 ) ; xx [ 215 ] = xx
[ 6 ] * state [ 22 ] ; xx [ 216 ] = sin ( xx [ 215 ] ) ; xx [ 217 ] = xx [
216 ] * xx [ 211 ] ; xx [ 221 ] = cos ( xx [ 215 ] ) ; xx [ 215 ] = xx [ 216
] * xx [ 210 ] ; xx [ 222 ] = xx [ 210 ] - xx [ 8 ] * ( xx [ 217 ] * xx [ 221
] + xx [ 215 ] * xx [ 216 ] ) ; xx [ 223 ] = xx [ 211 ] + xx [ 8 ] * ( xx [
215 ] * xx [ 221 ] - xx [ 217 ] * xx [ 216 ] ) ; xx [ 215 ] = xx [ 188 ] -
state [ 23 ] ; xx [ 224 ] = xx [ 222 ] ; xx [ 225 ] = xx [ 223 ] ; xx [ 226 ]
= xx [ 215 ] ; xx [ 227 ] = xx [ 74 ] * xx [ 222 ] ; xx [ 228 ] = xx [ 74 ] *
xx [ 223 ] ; xx [ 229 ] = xx [ 74 ] * xx [ 215 ] ; pm_math_Vector3_cross_ra (
xx + 224 , xx + 227 , xx + 230 ) ; xx [ 215 ] = xx [ 230 ] - xx [ 74 ] *
state [ 23 ] * xx [ 223 ] ; xx [ 217 ] = xx [ 231 ] + xx [ 74 ] * xx [ 222 ]
* state [ 23 ] ; xx [ 222 ] = xx [ 217 ] * xx [ 216 ] ; xx [ 223 ] = xx [ 215
] * xx [ 216 ] ; xx [ 224 ] = - ( xx [ 115 ] * xx [ 188 ] ) ; xx [ 225 ] = -
( xx [ 117 ] * xx [ 188 ] ) ; xx [ 226 ] = xx [ 115 ] * xx [ 210 ] + xx [ 117
] * xx [ 211 ] ; pm_math_Vector3_cross_ra ( xx + 212 , xx + 224 , xx + 227 )
; xx [ 188 ] = xx [ 116 ] * xx [ 229 ] ; xx [ 212 ] = state [ 21 ] * xx [ 210
] ; xx [ 210 ] = xx [ 221 ] * xx [ 221 ] ; xx [ 213 ] = xx [ 8 ] * xx [ 210 ]
- xx [ 5 ] ; xx [ 214 ] = xx [ 74 ] * xx [ 213 ] ; xx [ 224 ] = xx [ 8 ] * xx
[ 221 ] * xx [ 216 ] ; xx [ 225 ] = xx [ 214 ] * xx [ 224 ] ; xx [ 226 ] = xx
[ 74 ] * xx [ 224 ] ; xx [ 233 ] = xx [ 226 ] * xx [ 213 ] ; xx [ 234 ] = xx
[ 8 ] * ( xx [ 210 ] + xx [ 216 ] * xx [ 216 ] ) - xx [ 5 ] ; xx [ 210 ] = xx
[ 116 ] * xx [ 234 ] * xx [ 234 ] ; xx [ 235 ] = xx [ 117 ] * xx [ 210 ] ; xx
[ 236 ] = xx [ 225 ] - xx [ 233 ] + xx [ 115 ] * xx [ 235 ] ; xx [ 237 ] =
state [ 21 ] * xx [ 211 ] ; xx [ 211 ] = xx [ 214 ] * xx [ 213 ] ; xx [ 214 ]
= xx [ 226 ] * xx [ 224 ] ; xx [ 226 ] = xx [ 115 ] * xx [ 210 ] ; xx [ 238 ]
= xx [ 74 ] + xx [ 211 ] + xx [ 214 ] + xx [ 115 ] * xx [ 226 ] ; xx [ 239 ]
= xx [ 133 ] * xx [ 187 ] ; xx [ 240 ] = - ( xx [ 134 ] * xx [ 181 ] + xx [
133 ] * xx [ 183 ] ) ; xx [ 241 ] = xx [ 134 ] * xx [ 187 ] ;
pm_math_Vector3_cross_ra ( xx + 197 , xx + 239 , xx + 242 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 206 , xx + 242 , xx + 197 ) ; xx [
239 ] = xx [ 74 ] + xx [ 214 ] + xx [ 211 ] + xx [ 117 ] * xx [ 235 ] ; xx [
211 ] = xx [ 233 ] - xx [ 225 ] + xx [ 117 ] * xx [ 226 ] ; xx [ 214 ] =
state [ 22 ] ; if ( xx [ 2 ] < xx [ 214 ] ) xx [ 214 ] = xx [ 2 ] ; xx [ 225
] = - ( xx [ 214 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 225 ] ) xx [ 225 ] =
xx [ 5 ] ; xx [ 230 ] = xx [ 9 ] * state [ 23 ] ; xx [ 231 ] = xx [ 225 ] *
xx [ 225 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 225 ] ) * ( ( - xx [ 214 ] == xx [
2 ] ? xx [ 2 ] : - xx [ 230 ] ) - xx [ 11 ] * xx [ 214 ] ) ; if ( xx [ 2 ] >
xx [ 231 ] ) xx [ 231 ] = xx [ 2 ] ; xx [ 214 ] = state [ 22 ] - xx [ 105 ] ;
if ( xx [ 2 ] > xx [ 214 ] ) xx [ 214 ] = xx [ 2 ] ; xx [ 225 ] = xx [ 214 ]
/ xx [ 4 ] ; if ( xx [ 5 ] < xx [ 225 ] ) xx [ 225 ] = xx [ 5 ] ; xx [ 233 ]
= xx [ 225 ] * xx [ 225 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 225 ] ) * ( xx [ 11
] * xx [ 214 ] + ( xx [ 214 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 230 ] ) ) ; if (
xx [ 2 ] > xx [ 233 ] ) xx [ 233 ] = xx [ 2 ] ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j23_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 214 , xx + 119 , 1 * sizeof ( double ) ) ; xx
[ 225 ] = ( xx [ 231 ] - xx [ 102 ] * state [ 23 ] - xx [ 233 ] + xx [ 232 ]
) / xx [ 214 ] ; xx [ 229 ] = xx [ 216 ] * xx [ 227 ] ; xx [ 230 ] = xx [ 216
] * xx [ 228 ] ; xx [ 231 ] = xx [ 116 ] * ( xx [ 228 ] + xx [ 8 ] * ( xx [
229 ] * xx [ 221 ] - xx [ 230 ] * xx [ 216 ] ) ) ; xx [ 228 ] = xx [ 116 ] *
( xx [ 227 ] - xx [ 8 ] * ( xx [ 230 ] * xx [ 221 ] + xx [ 229 ] * xx [ 216 ]
) ) ; xx [ 227 ] = xx [ 228 ] * xx [ 216 ] ; xx [ 229 ] = xx [ 231 ] * xx [
216 ] ; xx [ 230 ] = xx [ 231 ] - xx [ 8 ] * ( xx [ 227 ] * xx [ 221 ] + xx [
229 ] * xx [ 216 ] ) ; xx [ 231 ] = xx [ 228 ] + xx [ 8 ] * ( xx [ 229 ] * xx
[ 221 ] - xx [ 227 ] * xx [ 216 ] ) ; xx [ 227 ] = xx [ 116 ] * xx [ 213 ] ;
xx [ 228 ] = xx [ 227 ] * xx [ 213 ] ; xx [ 229 ] = xx [ 116 ] * xx [ 224 ] ;
xx [ 233 ] = xx [ 229 ] * xx [ 224 ] ; xx [ 240 ] = xx [ 228 ] + xx [ 233 ] ;
xx [ 241 ] = xx [ 227 ] * xx [ 224 ] ; xx [ 224 ] = xx [ 229 ] * xx [ 213 ] ;
xx [ 213 ] = xx [ 241 ] - xx [ 224 ] ; xx [ 227 ] = xx [ 115 ] * xx [ 240 ] +
xx [ 117 ] * xx [ 213 ] ; xx [ 229 ] = xx [ 224 ] - xx [ 241 ] ; xx [ 224 ] =
xx [ 233 ] + xx [ 228 ] ; xx [ 228 ] = xx [ 115 ] * xx [ 229 ] + xx [ 117 ] *
xx [ 224 ] ; xx [ 233 ] = xx [ 220 ] + xx [ 232 ] - xx [ 74 ] * xx [ 225 ] -
( xx [ 117 ] * xx [ 230 ] + xx [ 115 ] * xx [ 231 ] ) - ( xx [ 227 ] * xx [
197 ] + xx [ 228 ] * xx [ 198 ] ) ; xx [ 220 ] = xx [ 74 ] / xx [ 214 ] ; xx
[ 214 ] = xx [ 74 ] + ( xx [ 74 ] - xx [ 74 ] * xx [ 220 ] ) * xx [ 234 ] *
xx [ 234 ] + xx [ 117 ] * xx [ 228 ] + xx [ 115 ] * xx [ 227 ] ; xx [ 232 ] =
state [ 20 ] ; if ( xx [ 2 ] < xx [ 232 ] ) xx [ 232 ] = xx [ 2 ] ; xx [ 234
] = - ( xx [ 232 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 234 ] ) xx [ 234 ] =
xx [ 5 ] ; xx [ 241 ] = xx [ 9 ] * state [ 21 ] ; xx [ 242 ] = xx [ 234 ] *
xx [ 234 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 234 ] ) * ( ( - xx [ 232 ] == xx [
2 ] ? xx [ 2 ] : - xx [ 241 ] ) - xx [ 11 ] * xx [ 232 ] ) ; if ( xx [ 2 ] >
xx [ 242 ] ) xx [ 242 ] = xx [ 2 ] ; xx [ 232 ] = state [ 20 ] - xx [ 123 ] ;
if ( xx [ 2 ] > xx [ 232 ] ) xx [ 232 ] = xx [ 2 ] ; xx [ 234 ] = xx [ 232 ]
/ xx [ 4 ] ; if ( xx [ 5 ] < xx [ 234 ] ) xx [ 234 ] = xx [ 5 ] ; xx [ 243 ]
= xx [ 234 ] * xx [ 234 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 234 ] ) * ( xx [ 11
] * xx [ 232 ] + ( xx [ 232 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 241 ] ) ) ; if (
xx [ 2 ] > xx [ 243 ] ) xx [ 243 ] = xx [ 2 ] ; memcpy ( xx + 232 , xx + 214
, 1 * sizeof ( double ) ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 232 , 1 ,
xx + 234 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j22_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 234 ] = ( xx [ 242 ] - xx [ 102 ] * state [ 21 ] - xx
[ 243 ] + xx [ 233 ] ) / xx [ 232 ] ; xx [ 241 ] = xx [ 218 ] + xx [ 215 ] +
xx [ 8 ] * ( xx [ 222 ] * xx [ 221 ] - xx [ 223 ] * xx [ 216 ] ) + xx [ 115 ]
* xx [ 188 ] + xx [ 212 ] * xx [ 236 ] - xx [ 237 ] * xx [ 238 ] + xx [ 226 ]
* xx [ 199 ] ; xx [ 242 ] = xx [ 219 ] + xx [ 217 ] - xx [ 8 ] * ( xx [ 223 ]
* xx [ 221 ] + xx [ 222 ] * xx [ 216 ] ) + xx [ 117 ] * xx [ 188 ] + xx [ 212
] * xx [ 239 ] - xx [ 237 ] * xx [ 211 ] + xx [ 235 ] * xx [ 199 ] ; xx [ 243
] = xx [ 233 ] - xx [ 214 ] * xx [ 234 ] ; pm_math_Quaternion_xform_ra ( xx +
206 , xx + 241 , xx + 215 ) ; xx [ 218 ] = xx [ 116 ] + xx [ 240 ] ; xx [ 219
] = xx [ 116 ] + xx [ 224 ] ; xx [ 221 ] = xx [ 116 ] + xx [ 210 ] ; xx [ 222
] = xx [ 231 ] + xx [ 218 ] * xx [ 197 ] + xx [ 213 ] * xx [ 198 ] + xx [ 227
] * xx [ 234 ] ; xx [ 223 ] = xx [ 230 ] + xx [ 229 ] * xx [ 197 ] + xx [ 219
] * xx [ 198 ] + xx [ 228 ] * xx [ 234 ] ; xx [ 224 ] = xx [ 188 ] + xx [ 221
] * xx [ 199 ] - ( xx [ 226 ] * xx [ 237 ] - xx [ 235 ] * xx [ 212 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 206 , xx + 222 , xx + 197 ) ; xx [ 188 ] =
xx [ 187 ] * state [ 19 ] ; xx [ 187 ] = xx [ 200 ] * xx [ 200 ] ; xx [ 210 ]
= xx [ 8 ] * ( xx [ 187 ] + xx [ 201 ] * xx [ 201 ] ) - xx [ 5 ] ; xx [ 212 ]
= xx [ 201 ] * xx [ 184 ] ; xx [ 222 ] = xx [ 200 ] * xx [ 202 ] ; xx [ 223 ]
= xx [ 8 ] * ( xx [ 212 ] + xx [ 222 ] ) ; xx [ 224 ] = xx [ 200 ] * xx [ 184
] ; xx [ 230 ] = xx [ 202 ] * xx [ 201 ] ; xx [ 231 ] = xx [ 8 ] * ( xx [ 224
] - xx [ 230 ] ) ; xx [ 233 ] = xx [ 8 ] * ( xx [ 212 ] - xx [ 222 ] ) ; xx [
212 ] = xx [ 8 ] * ( xx [ 187 ] + xx [ 184 ] * xx [ 184 ] ) - xx [ 5 ] ; xx [
222 ] = xx [ 202 ] * xx [ 184 ] ; xx [ 184 ] = xx [ 200 ] * xx [ 201 ] ; xx [
200 ] = xx [ 8 ] * ( xx [ 222 ] + xx [ 184 ] ) ; xx [ 201 ] = xx [ 8 ] * ( xx
[ 230 ] + xx [ 224 ] ) ; xx [ 224 ] = xx [ 8 ] * ( xx [ 184 ] - xx [ 222 ] )
; xx [ 184 ] = xx [ 8 ] * ( xx [ 187 ] + xx [ 202 ] * xx [ 202 ] ) - xx [ 5 ]
; xx [ 240 ] = xx [ 210 ] ; xx [ 241 ] = xx [ 223 ] ; xx [ 242 ] = xx [ 231 ]
; xx [ 243 ] = xx [ 233 ] ; xx [ 244 ] = xx [ 212 ] ; xx [ 245 ] = - xx [ 200
] ; xx [ 246 ] = - xx [ 201 ] ; xx [ 247 ] = xx [ 224 ] ; xx [ 248 ] = xx [
184 ] ; xx [ 187 ] = xx [ 214 ] / xx [ 232 ] ; xx [ 202 ] = xx [ 214 ] - xx [
214 ] * xx [ 187 ] ; xx [ 249 ] = xx [ 210 ] * xx [ 238 ] + xx [ 223 ] * xx [
236 ] ; xx [ 250 ] = xx [ 233 ] * xx [ 238 ] + xx [ 212 ] * xx [ 236 ] ; xx [
251 ] = xx [ 224 ] * xx [ 236 ] - xx [ 201 ] * xx [ 238 ] ; xx [ 252 ] = xx [
210 ] * xx [ 211 ] + xx [ 223 ] * xx [ 239 ] ; xx [ 253 ] = xx [ 233 ] * xx [
211 ] + xx [ 212 ] * xx [ 239 ] ; xx [ 254 ] = xx [ 224 ] * xx [ 239 ] - xx [
201 ] * xx [ 211 ] ; xx [ 255 ] = xx [ 231 ] * xx [ 202 ] ; xx [ 256 ] = - (
xx [ 200 ] * xx [ 202 ] ) ; xx [ 257 ] = xx [ 184 ] * xx [ 202 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 240 , xx + 249 , xx + 258 ) ; xx [ 202 ]
= xx [ 227 ] / xx [ 232 ] ; xx [ 211 ] = xx [ 214 ] * xx [ 202 ] - xx [ 227 ]
; xx [ 222 ] = xx [ 228 ] / xx [ 232 ] ; xx [ 230 ] = xx [ 214 ] * xx [ 222 ]
- xx [ 228 ] ; xx [ 249 ] = xx [ 226 ] * xx [ 231 ] ; xx [ 250 ] = - ( xx [
226 ] * xx [ 200 ] ) ; xx [ 251 ] = xx [ 226 ] * xx [ 184 ] ; xx [ 252 ] = xx
[ 235 ] * xx [ 231 ] ; xx [ 253 ] = - ( xx [ 235 ] * xx [ 200 ] ) ; xx [ 254
] = xx [ 235 ] * xx [ 184 ] ; xx [ 255 ] = xx [ 210 ] * xx [ 211 ] + xx [ 223
] * xx [ 230 ] ; xx [ 256 ] = xx [ 233 ] * xx [ 211 ] + xx [ 212 ] * xx [ 230
] ; xx [ 257 ] = xx [ 224 ] * xx [ 230 ] - xx [ 201 ] * xx [ 211 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 240 , xx + 249 , xx + 267 ) ; xx [ 211 ]
= xx [ 133 ] * xx [ 274 ] ; xx [ 214 ] = xx [ 134 ] * xx [ 268 ] ; xx [ 226 ]
= xx [ 218 ] - xx [ 227 ] * xx [ 202 ] ; xx [ 218 ] = xx [ 228 ] * xx [ 202 ]
; xx [ 227 ] = xx [ 213 ] - xx [ 218 ] ; xx [ 213 ] = xx [ 229 ] - xx [ 218 ]
; xx [ 218 ] = xx [ 219 ] - xx [ 228 ] * xx [ 222 ] ; xx [ 249 ] = xx [ 210 ]
* xx [ 226 ] + xx [ 223 ] * xx [ 227 ] ; xx [ 250 ] = xx [ 233 ] * xx [ 226 ]
+ xx [ 212 ] * xx [ 227 ] ; xx [ 251 ] = xx [ 224 ] * xx [ 227 ] - xx [ 201 ]
* xx [ 226 ] ; xx [ 252 ] = xx [ 210 ] * xx [ 213 ] + xx [ 223 ] * xx [ 218 ]
; xx [ 253 ] = xx [ 233 ] * xx [ 213 ] + xx [ 212 ] * xx [ 218 ] ; xx [ 254 ]
= xx [ 224 ] * xx [ 218 ] - xx [ 201 ] * xx [ 213 ] ; xx [ 255 ] = xx [ 231 ]
* xx [ 221 ] ; xx [ 256 ] = - ( xx [ 200 ] * xx [ 221 ] ) ; xx [ 257 ] = xx [
184 ] * xx [ 221 ] ; pm_math_Matrix3x3_compose_ra ( xx + 240 , xx + 249 , xx
+ 276 ) ; xx [ 184 ] = xx [ 133 ] * xx [ 280 ] ; xx [ 200 ] = xx [ 264 ] - xx
[ 211 ] - xx [ 214 ] + xx [ 134 ] * xx [ 184 ] ; xx [ 201 ] = state [ 19 ] *
xx [ 183 ] ; xx [ 210 ] = xx [ 134 ] * xx [ 275 ] + xx [ 133 ] * xx [ 273 ] ;
xx [ 212 ] = xx [ 134 ] * xx [ 271 ] ; xx [ 213 ] = xx [ 134 ] * xx [ 281 ] +
xx [ 133 ] * xx [ 279 ] ; xx [ 218 ] = xx [ 265 ] + xx [ 210 ] - xx [ 212 ] -
xx [ 134 ] * xx [ 213 ] ; xx [ 219 ] = xx [ 133 ] * xx [ 277 ] ; xx [ 221 ] =
xx [ 267 ] - xx [ 219 ] ; xx [ 223 ] = xx [ 268 ] - xx [ 184 ] ; xx [ 224 ] =
xx [ 133 ] * xx [ 283 ] ; xx [ 226 ] = xx [ 269 ] - xx [ 224 ] ; xx [ 227 ] =
xx [ 134 ] * xx [ 278 ] + xx [ 133 ] * xx [ 276 ] ; xx [ 228 ] = xx [ 270 ] +
xx [ 227 ] ; xx [ 229 ] = xx [ 271 ] + xx [ 213 ] ; xx [ 230 ] = xx [ 134 ] *
xx [ 284 ] + xx [ 133 ] * xx [ 282 ] ; xx [ 231 ] = xx [ 272 ] + xx [ 230 ] ;
xx [ 232 ] = xx [ 134 ] * xx [ 277 ] ; xx [ 233 ] = xx [ 273 ] - xx [ 232 ] ;
xx [ 235 ] = xx [ 134 ] * xx [ 280 ] ; xx [ 236 ] = xx [ 274 ] - xx [ 235 ] ;
xx [ 237 ] = xx [ 134 ] * xx [ 283 ] ; xx [ 238 ] = xx [ 275 ] - xx [ 237 ] ;
xx [ 239 ] = xx [ 221 ] ; xx [ 240 ] = xx [ 223 ] ; xx [ 241 ] = xx [ 226 ] ;
xx [ 242 ] = xx [ 228 ] ; xx [ 243 ] = xx [ 229 ] ; xx [ 244 ] = xx [ 231 ] ;
xx [ 245 ] = xx [ 233 ] ; xx [ 246 ] = xx [ 236 ] ; xx [ 247 ] = xx [ 238 ] ;
xx [ 248 ] = 0.025 ; xx [ 249 ] = 0.046 ; xx [ 250 ] = xx [ 249 ] * xx [ 179
] ; xx [ 251 ] = xx [ 248 ] - ( xx [ 249 ] - xx [ 8 ] * xx [ 250 ] * xx [ 179
] ) ; xx [ 252 ] = xx [ 8 ] * xx [ 250 ] * xx [ 185 ] ; xx [ 253 ] = xx [ 153
] ; pm_math_Vector3_cross_ra ( xx + 76 , xx + 251 , xx + 254 ) ;
pm_math_Vector3_cross_ra ( xx + 76 , xx + 254 , xx + 285 ) ; xx [ 250 ] = xx
[ 179 ] * xx [ 286 ] ; xx [ 254 ] = xx [ 179 ] * xx [ 285 ] ; xx [ 255 ] = xx
[ 249 ] * state [ 19 ] ; xx [ 256 ] = xx [ 285 ] - xx [ 8 ] * ( xx [ 250 ] *
xx [ 185 ] + xx [ 254 ] * xx [ 179 ] ) + xx [ 255 ] * ( xx [ 65 ] + xx [ 181
] ) ; xx [ 181 ] = xx [ 286 ] - xx [ 8 ] * ( xx [ 250 ] * xx [ 179 ] - xx [
254 ] * xx [ 185 ] ) ; xx [ 250 ] = xx [ 287 ] - xx [ 255 ] * ( xx [ 183 ] +
xx [ 183 ] ) ; xx [ 285 ] = xx [ 256 ] ; xx [ 286 ] = xx [ 181 ] ; xx [ 287 ]
= xx [ 250 ] ; pm_math_Matrix3x3_xform_ra ( xx + 239 , xx + 285 , xx + 288 )
; xx [ 183 ] = xx [ 205 ] + xx [ 217 ] - xx [ 134 ] * xx [ 198 ] + xx [ 188 ]
* xx [ 200 ] - xx [ 201 ] * xx [ 218 ] + xx [ 290 ] ; xx [ 239 ] = xx [ 134 ]
* xx [ 274 ] ; xx [ 240 ] = xx [ 74 ] + xx [ 266 ] - xx [ 239 ] - xx [ 239 ]
+ xx [ 134 ] * xx [ 235 ] ; xx [ 239 ] = xx [ 240 ] - xx [ 249 ] * xx [ 236 ]
; xx [ 241 ] = state [ 18 ] ; if ( xx [ 2 ] < xx [ 241 ] ) xx [ 241 ] = xx [
2 ] ; xx [ 242 ] = - ( xx [ 241 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 242 ] )
xx [ 242 ] = xx [ 5 ] ; xx [ 243 ] = xx [ 9 ] * state [ 19 ] ; xx [ 244 ] =
xx [ 242 ] * xx [ 242 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 242 ] ) * ( ( - xx [
241 ] == xx [ 2 ] ? xx [ 2 ] : - xx [ 243 ] ) - xx [ 11 ] * xx [ 241 ] ) ; if
( xx [ 2 ] > xx [ 244 ] ) xx [ 244 ] = xx [ 2 ] ; xx [ 241 ] = 3.1416 ; xx [
242 ] = state [ 18 ] - xx [ 241 ] ; if ( xx [ 2 ] > xx [ 242 ] ) xx [ 242 ] =
xx [ 2 ] ; xx [ 245 ] = xx [ 242 ] / xx [ 4 ] ; if ( xx [ 5 ] < xx [ 245 ] )
xx [ 245 ] = xx [ 5 ] ; xx [ 246 ] = xx [ 245 ] * xx [ 245 ] * ( xx [ 7 ] -
xx [ 8 ] * xx [ 245 ] ) * ( xx [ 11 ] * xx [ 242 ] + ( xx [ 242 ] == xx [ 2 ]
? xx [ 2 ] : xx [ 243 ] ) ) ; if ( xx [ 2 ] > xx [ 246 ] ) xx [ 246 ] = xx [
2 ] ; xx [ 242 ] = xx [ 116 ] + xx [ 280 ] ; xx [ 291 ] = xx [ 116 ] + xx [
276 ] ; xx [ 292 ] = xx [ 277 ] ; xx [ 293 ] = xx [ 278 ] ; xx [ 294 ] = xx [
279 ] ; xx [ 295 ] = xx [ 242 ] ; xx [ 296 ] = xx [ 281 ] ; xx [ 297 ] = xx [
282 ] ; xx [ 298 ] = xx [ 283 ] ; xx [ 299 ] = xx [ 116 ] + xx [ 284 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 291 , xx + 285 , xx + 273 ) ; xx [ 243 ] =
xx [ 198 ] + xx [ 188 ] * xx [ 223 ] - xx [ 201 ] * xx [ 229 ] + xx [ 274 ] ;
xx [ 245 ] = xx [ 236 ] - xx [ 249 ] * xx [ 242 ] ; xx [ 247 ] = xx [ 239 ] -
xx [ 249 ] * xx [ 245 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 247 , 1 ,
xx + 254 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j21_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 254 ] = ( xx [ 244 ] - xx [ 102 ] * state [ 19 ] - xx
[ 246 ] - ( xx [ 183 ] - xx [ 249 ] * xx [ 243 ] ) ) / xx [ 247 ] ; xx [ 244
] = xx [ 233 ] - xx [ 249 ] * xx [ 277 ] ; xx [ 246 ] = xx [ 197 ] + xx [ 188
] * xx [ 221 ] - xx [ 201 ] * xx [ 228 ] + xx [ 273 ] + xx [ 244 ] * xx [ 254
] ; xx [ 255 ] = xx [ 246 ] * xx [ 179 ] ; xx [ 257 ] = xx [ 243 ] + xx [ 245
] * xx [ 254 ] ; xx [ 243 ] = xx [ 257 ] * xx [ 179 ] ; xx [ 280 ] = xx [ 246
] - xx [ 8 ] * ( xx [ 255 ] * xx [ 179 ] - xx [ 243 ] * xx [ 185 ] ) ; xx [
246 ] = xx [ 257 ] - xx [ 8 ] * ( xx [ 255 ] * xx [ 185 ] + xx [ 243 ] * xx [
179 ] ) ; xx [ 243 ] = xx [ 238 ] - xx [ 249 ] * xx [ 283 ] ; xx [ 255 ] = xx
[ 199 ] + xx [ 188 ] * xx [ 226 ] - xx [ 201 ] * xx [ 231 ] + xx [ 275 ] + xx
[ 243 ] * xx [ 254 ] ; xx [ 273 ] = xx [ 280 ] ; xx [ 274 ] = xx [ 246 ] ; xx
[ 275 ] = xx [ 255 ] ; pm_math_Vector3_cross_ra ( xx + 251 , xx + 273 , xx +
285 ) ; xx [ 257 ] = xx [ 6 ] * state [ 12 ] ; xx [ 273 ] = sin ( xx [ 257 ]
) ; xx [ 274 ] = cos ( xx [ 257 ] ) ; xx [ 257 ] = xx [ 82 ] * xx [ 273 ] -
xx [ 94 ] * xx [ 274 ] ; xx [ 275 ] = xx [ 257 ] * xx [ 67 ] ; xx [ 291 ] =
xx [ 82 ] * xx [ 274 ] + xx [ 94 ] * xx [ 273 ] ; xx [ 82 ] = xx [ 257 ] * xx
[ 75 ] ; xx [ 94 ] = xx [ 75 ] - xx [ 8 ] * ( xx [ 275 ] * xx [ 291 ] + xx [
82 ] * xx [ 257 ] ) ; xx [ 75 ] = xx [ 67 ] - xx [ 8 ] * ( xx [ 275 ] * xx [
257 ] - xx [ 82 ] * xx [ 291 ] ) ; xx [ 67 ] = xx [ 65 ] - state [ 13 ] ; xx
[ 273 ] = xx [ 94 ] ; xx [ 274 ] = xx [ 75 ] ; xx [ 275 ] = xx [ 67 ] ; xx [
292 ] = xx [ 74 ] * xx [ 94 ] ; xx [ 293 ] = xx [ 74 ] * xx [ 75 ] ; xx [ 294
] = xx [ 74 ] * xx [ 67 ] ; pm_math_Vector3_cross_ra ( xx + 273 , xx + 292 ,
xx + 295 ) ; xx [ 82 ] = xx [ 6 ] * state [ 14 ] ; xx [ 292 ] = cos ( xx [ 82
] ) ; xx [ 293 ] = xx [ 178 ] * xx [ 292 ] ; xx [ 294 ] = xx [ 182 ] * xx [
292 ] ; xx [ 292 ] = sin ( xx [ 82 ] ) ; xx [ 82 ] = xx [ 182 ] * xx [ 292 ]
; xx [ 182 ] = xx [ 178 ] * xx [ 292 ] ; xx [ 298 ] = - xx [ 293 ] ; xx [ 299
] = - xx [ 294 ] ; xx [ 300 ] = - xx [ 82 ] ; xx [ 301 ] = xx [ 182 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 298 , xx + 273 , xx + 302 ) ; xx [
178 ] = xx [ 304 ] - state [ 15 ] ; xx [ 304 ] = xx [ 302 ] ; xx [ 305 ] = xx
[ 303 ] ; xx [ 306 ] = xx [ 178 ] ; xx [ 307 ] = xx [ 74 ] * xx [ 302 ] ; xx
[ 308 ] = xx [ 74 ] * xx [ 303 ] ; xx [ 309 ] = xx [ 74 ] * xx [ 178 ] ;
pm_math_Vector3_cross_ra ( xx + 304 , xx + 307 , xx + 310 ) ; xx [ 292 ] = xx
[ 6 ] * state [ 16 ] ; xx [ 6 ] = sin ( xx [ 292 ] ) ; xx [ 307 ] = xx [ 6 ]
* xx [ 303 ] ; xx [ 308 ] = cos ( xx [ 292 ] ) ; xx [ 292 ] = xx [ 6 ] * xx [
302 ] ; xx [ 309 ] = xx [ 302 ] - xx [ 8 ] * ( xx [ 307 ] * xx [ 308 ] + xx [
292 ] * xx [ 6 ] ) ; xx [ 313 ] = xx [ 303 ] + xx [ 8 ] * ( xx [ 292 ] * xx [
308 ] - xx [ 307 ] * xx [ 6 ] ) ; xx [ 292 ] = xx [ 178 ] - state [ 17 ] ; xx
[ 314 ] = xx [ 309 ] ; xx [ 315 ] = xx [ 313 ] ; xx [ 316 ] = xx [ 292 ] ; xx
[ 317 ] = xx [ 74 ] * xx [ 309 ] ; xx [ 318 ] = xx [ 74 ] * xx [ 313 ] ; xx [
319 ] = xx [ 74 ] * xx [ 292 ] ; pm_math_Vector3_cross_ra ( xx + 314 , xx +
317 , xx + 320 ) ; xx [ 292 ] = xx [ 320 ] - xx [ 74 ] * state [ 17 ] * xx [
313 ] ; xx [ 307 ] = xx [ 321 ] + xx [ 74 ] * xx [ 309 ] * state [ 17 ] ; xx
[ 309 ] = xx [ 307 ] * xx [ 6 ] ; xx [ 313 ] = xx [ 292 ] * xx [ 6 ] ; xx [
314 ] = - ( xx [ 115 ] * xx [ 178 ] ) ; xx [ 315 ] = - ( xx [ 117 ] * xx [
178 ] ) ; xx [ 316 ] = xx [ 115 ] * xx [ 302 ] + xx [ 117 ] * xx [ 303 ] ;
pm_math_Vector3_cross_ra ( xx + 304 , xx + 314 , xx + 317 ) ; xx [ 178 ] = xx
[ 116 ] * xx [ 319 ] ; xx [ 304 ] = state [ 15 ] * xx [ 302 ] ; xx [ 302 ] =
xx [ 308 ] * xx [ 308 ] ; xx [ 305 ] = xx [ 8 ] * xx [ 302 ] - xx [ 5 ] ; xx
[ 306 ] = xx [ 74 ] * xx [ 305 ] ; xx [ 314 ] = xx [ 8 ] * xx [ 308 ] * xx [
6 ] ; xx [ 315 ] = xx [ 306 ] * xx [ 314 ] ; xx [ 316 ] = xx [ 74 ] * xx [
314 ] ; xx [ 323 ] = xx [ 316 ] * xx [ 305 ] ; xx [ 324 ] = xx [ 8 ] * ( xx [
302 ] + xx [ 6 ] * xx [ 6 ] ) - xx [ 5 ] ; xx [ 302 ] = xx [ 116 ] * xx [ 324
] * xx [ 324 ] ; xx [ 325 ] = xx [ 117 ] * xx [ 302 ] ; xx [ 326 ] = xx [ 315
] - xx [ 323 ] + xx [ 115 ] * xx [ 325 ] ; xx [ 327 ] = state [ 15 ] * xx [
303 ] ; xx [ 303 ] = xx [ 306 ] * xx [ 305 ] ; xx [ 306 ] = xx [ 316 ] * xx [
314 ] ; xx [ 316 ] = xx [ 115 ] * xx [ 302 ] ; xx [ 328 ] = xx [ 74 ] + xx [
303 ] + xx [ 306 ] + xx [ 115 ] * xx [ 316 ] ; xx [ 329 ] = xx [ 133 ] * xx [
75 ] ; xx [ 330 ] = - ( xx [ 134 ] * xx [ 67 ] + xx [ 133 ] * xx [ 94 ] ) ;
xx [ 331 ] = xx [ 134 ] * xx [ 75 ] ; pm_math_Vector3_cross_ra ( xx + 273 ,
xx + 329 , xx + 332 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 298 , xx +
332 , xx + 273 ) ; xx [ 329 ] = xx [ 74 ] + xx [ 306 ] + xx [ 303 ] + xx [
117 ] * xx [ 325 ] ; xx [ 303 ] = xx [ 323 ] - xx [ 315 ] + xx [ 117 ] * xx [
316 ] ; xx [ 306 ] = state [ 16 ] ; if ( xx [ 2 ] < xx [ 306 ] ) xx [ 306 ] =
xx [ 2 ] ; xx [ 315 ] = - ( xx [ 306 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [
315 ] ) xx [ 315 ] = xx [ 5 ] ; xx [ 320 ] = xx [ 9 ] * state [ 17 ] ; xx [
321 ] = xx [ 315 ] * xx [ 315 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 315 ] ) * ( (
- xx [ 306 ] == xx [ 2 ] ? xx [ 2 ] : - xx [ 320 ] ) - xx [ 11 ] * xx [ 306 ]
) ; if ( xx [ 2 ] > xx [ 321 ] ) xx [ 321 ] = xx [ 2 ] ; xx [ 306 ] = state [
16 ] - xx [ 105 ] ; if ( xx [ 2 ] > xx [ 306 ] ) xx [ 306 ] = xx [ 2 ] ; xx [
105 ] = xx [ 306 ] / xx [ 4 ] ; if ( xx [ 5 ] < xx [ 105 ] ) xx [ 105 ] = xx
[ 5 ] ; xx [ 315 ] = xx [ 105 ] * xx [ 105 ] * ( xx [ 7 ] - xx [ 8 ] * xx [
105 ] ) * ( xx [ 11 ] * xx [ 306 ] + ( xx [ 306 ] == xx [ 2 ] ? xx [ 2 ] : xx
[ 320 ] ) ) ; if ( xx [ 2 ] > xx [ 315 ] ) xx [ 315 ] = xx [ 2 ] ; if ( bb [
0 ] ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j13_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 105 ] = ( xx [ 321 ] - xx [ 102 ] * state [ 17 ] - xx
[ 315 ] + xx [ 322 ] ) / xx [ 119 ] ; xx [ 306 ] = xx [ 6 ] * xx [ 317 ] ; xx
[ 315 ] = xx [ 6 ] * xx [ 318 ] ; xx [ 319 ] = xx [ 116 ] * ( xx [ 318 ] + xx
[ 8 ] * ( xx [ 306 ] * xx [ 308 ] - xx [ 315 ] * xx [ 6 ] ) ) ; xx [ 318 ] =
xx [ 116 ] * ( xx [ 317 ] - xx [ 8 ] * ( xx [ 315 ] * xx [ 308 ] + xx [ 306 ]
* xx [ 6 ] ) ) ; xx [ 306 ] = xx [ 318 ] * xx [ 6 ] ; xx [ 315 ] = xx [ 319 ]
* xx [ 6 ] ; xx [ 317 ] = xx [ 319 ] - xx [ 8 ] * ( xx [ 306 ] * xx [ 308 ] +
xx [ 315 ] * xx [ 6 ] ) ; xx [ 319 ] = xx [ 318 ] + xx [ 8 ] * ( xx [ 315 ] *
xx [ 308 ] - xx [ 306 ] * xx [ 6 ] ) ; xx [ 306 ] = xx [ 116 ] * xx [ 305 ] ;
xx [ 315 ] = xx [ 306 ] * xx [ 305 ] ; xx [ 318 ] = xx [ 116 ] * xx [ 314 ] ;
xx [ 320 ] = xx [ 318 ] * xx [ 314 ] ; xx [ 321 ] = xx [ 315 ] + xx [ 320 ] ;
xx [ 323 ] = xx [ 306 ] * xx [ 314 ] ; xx [ 306 ] = xx [ 318 ] * xx [ 305 ] ;
xx [ 305 ] = xx [ 323 ] - xx [ 306 ] ; xx [ 314 ] = xx [ 115 ] * xx [ 321 ] +
xx [ 117 ] * xx [ 305 ] ; xx [ 318 ] = xx [ 306 ] - xx [ 323 ] ; xx [ 306 ] =
xx [ 320 ] + xx [ 315 ] ; xx [ 315 ] = xx [ 115 ] * xx [ 318 ] + xx [ 117 ] *
xx [ 306 ] ; xx [ 320 ] = xx [ 312 ] + xx [ 322 ] - xx [ 74 ] * xx [ 105 ] -
( xx [ 117 ] * xx [ 317 ] + xx [ 115 ] * xx [ 319 ] ) - ( xx [ 314 ] * xx [
273 ] + xx [ 315 ] * xx [ 274 ] ) ; xx [ 312 ] = xx [ 74 ] / xx [ 119 ] ; xx
[ 119 ] = xx [ 74 ] + ( xx [ 74 ] - xx [ 74 ] * xx [ 312 ] ) * xx [ 324 ] *
xx [ 324 ] + xx [ 117 ] * xx [ 315 ] + xx [ 115 ] * xx [ 314 ] ; xx [ 322 ] =
state [ 14 ] ; if ( xx [ 2 ] < xx [ 322 ] ) xx [ 322 ] = xx [ 2 ] ; xx [ 323
] = - ( xx [ 322 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 323 ] ) xx [ 323 ] =
xx [ 5 ] ; xx [ 324 ] = xx [ 9 ] * state [ 15 ] ; xx [ 330 ] = xx [ 323 ] *
xx [ 323 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 323 ] ) * ( ( - xx [ 322 ] == xx [
2 ] ? xx [ 2 ] : - xx [ 324 ] ) - xx [ 11 ] * xx [ 322 ] ) ; if ( xx [ 2 ] >
xx [ 330 ] ) xx [ 330 ] = xx [ 2 ] ; xx [ 322 ] = state [ 14 ] - xx [ 123 ] ;
if ( xx [ 2 ] > xx [ 322 ] ) xx [ 322 ] = xx [ 2 ] ; xx [ 123 ] = xx [ 322 ]
/ xx [ 4 ] ; if ( xx [ 5 ] < xx [ 123 ] ) xx [ 123 ] = xx [ 5 ] ; xx [ 323 ]
= xx [ 123 ] * xx [ 123 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 123 ] ) * ( xx [ 11
] * xx [ 322 ] + ( xx [ 322 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 324 ] ) ) ; if (
xx [ 2 ] > xx [ 323 ] ) xx [ 323 ] = xx [ 2 ] ; memcpy ( xx + 123 , xx + 119
, 1 * sizeof ( double ) ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 123 , 1 ,
xx + 322 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j12_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 322 ] = ( xx [ 330 ] - xx [ 102 ] * state [ 15 ] - xx
[ 323 ] + xx [ 320 ] ) / xx [ 123 ] ; xx [ 330 ] = xx [ 310 ] + xx [ 292 ] +
xx [ 8 ] * ( xx [ 309 ] * xx [ 308 ] - xx [ 313 ] * xx [ 6 ] ) + xx [ 115 ] *
xx [ 178 ] + xx [ 304 ] * xx [ 326 ] - xx [ 327 ] * xx [ 328 ] + xx [ 316 ] *
xx [ 275 ] ; xx [ 331 ] = xx [ 311 ] + xx [ 307 ] - xx [ 8 ] * ( xx [ 313 ] *
xx [ 308 ] + xx [ 309 ] * xx [ 6 ] ) + xx [ 117 ] * xx [ 178 ] + xx [ 304 ] *
xx [ 329 ] - xx [ 327 ] * xx [ 303 ] + xx [ 325 ] * xx [ 275 ] ; xx [ 332 ] =
xx [ 320 ] - xx [ 119 ] * xx [ 322 ] ; pm_math_Quaternion_xform_ra ( xx + 298
, xx + 330 , xx + 307 ) ; xx [ 6 ] = xx [ 116 ] + xx [ 321 ] ; xx [ 115 ] =
xx [ 116 ] + xx [ 306 ] ; xx [ 117 ] = xx [ 116 ] + xx [ 302 ] ; xx [ 330 ] =
xx [ 319 ] + xx [ 6 ] * xx [ 273 ] + xx [ 305 ] * xx [ 274 ] + xx [ 314 ] *
xx [ 322 ] ; xx [ 331 ] = xx [ 317 ] + xx [ 318 ] * xx [ 273 ] + xx [ 115 ] *
xx [ 274 ] + xx [ 315 ] * xx [ 322 ] ; xx [ 332 ] = xx [ 178 ] + xx [ 117 ] *
xx [ 275 ] - ( xx [ 316 ] * xx [ 327 ] - xx [ 325 ] * xx [ 304 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 298 , xx + 330 , xx + 273 ) ; xx [ 178 ] =
state [ 13 ] * xx [ 94 ] ; xx [ 292 ] = xx [ 293 ] * xx [ 293 ] ; xx [ 302 ]
= xx [ 8 ] * ( xx [ 292 ] + xx [ 294 ] * xx [ 294 ] ) - xx [ 5 ] ; xx [ 304 ]
= xx [ 294 ] * xx [ 82 ] ; xx [ 306 ] = xx [ 293 ] * xx [ 182 ] ; xx [ 310 ]
= xx [ 8 ] * ( xx [ 304 ] + xx [ 306 ] ) ; xx [ 311 ] = xx [ 293 ] * xx [ 82
] ; xx [ 313 ] = xx [ 182 ] * xx [ 294 ] ; xx [ 317 ] = xx [ 8 ] * ( xx [ 311
] - xx [ 313 ] ) ; xx [ 319 ] = xx [ 8 ] * ( xx [ 304 ] - xx [ 306 ] ) ; xx [
304 ] = xx [ 8 ] * ( xx [ 292 ] + xx [ 82 ] * xx [ 82 ] ) - xx [ 5 ] ; xx [
306 ] = xx [ 182 ] * xx [ 82 ] ; xx [ 82 ] = xx [ 293 ] * xx [ 294 ] ; xx [
293 ] = xx [ 8 ] * ( xx [ 306 ] + xx [ 82 ] ) ; xx [ 294 ] = xx [ 8 ] * ( xx
[ 313 ] + xx [ 311 ] ) ; xx [ 311 ] = xx [ 8 ] * ( xx [ 82 ] - xx [ 306 ] ) ;
xx [ 82 ] = xx [ 8 ] * ( xx [ 292 ] + xx [ 182 ] * xx [ 182 ] ) - xx [ 5 ] ;
xx [ 330 ] = xx [ 302 ] ; xx [ 331 ] = xx [ 310 ] ; xx [ 332 ] = xx [ 317 ] ;
xx [ 333 ] = xx [ 319 ] ; xx [ 334 ] = xx [ 304 ] ; xx [ 335 ] = - xx [ 293 ]
; xx [ 336 ] = - xx [ 294 ] ; xx [ 337 ] = xx [ 311 ] ; xx [ 338 ] = xx [ 82
] ; xx [ 182 ] = xx [ 119 ] / xx [ 123 ] ; xx [ 292 ] = xx [ 119 ] - xx [ 119
] * xx [ 182 ] ; xx [ 339 ] = xx [ 302 ] * xx [ 328 ] + xx [ 310 ] * xx [ 326
] ; xx [ 340 ] = xx [ 319 ] * xx [ 328 ] + xx [ 304 ] * xx [ 326 ] ; xx [ 341
] = xx [ 311 ] * xx [ 326 ] - xx [ 294 ] * xx [ 328 ] ; xx [ 342 ] = xx [ 302
] * xx [ 303 ] + xx [ 310 ] * xx [ 329 ] ; xx [ 343 ] = xx [ 319 ] * xx [ 303
] + xx [ 304 ] * xx [ 329 ] ; xx [ 344 ] = xx [ 311 ] * xx [ 329 ] - xx [ 294
] * xx [ 303 ] ; xx [ 345 ] = xx [ 317 ] * xx [ 292 ] ; xx [ 346 ] = - ( xx [
293 ] * xx [ 292 ] ) ; xx [ 347 ] = xx [ 82 ] * xx [ 292 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 330 , xx + 339 , xx + 348 ) ; xx [ 292 ]
= xx [ 314 ] / xx [ 123 ] ; xx [ 303 ] = xx [ 119 ] * xx [ 292 ] - xx [ 314 ]
; xx [ 306 ] = xx [ 315 ] / xx [ 123 ] ; xx [ 123 ] = xx [ 119 ] * xx [ 306 ]
- xx [ 315 ] ; xx [ 339 ] = xx [ 316 ] * xx [ 317 ] ; xx [ 340 ] = - ( xx [
316 ] * xx [ 293 ] ) ; xx [ 341 ] = xx [ 316 ] * xx [ 82 ] ; xx [ 342 ] = xx
[ 325 ] * xx [ 317 ] ; xx [ 343 ] = - ( xx [ 325 ] * xx [ 293 ] ) ; xx [ 344
] = xx [ 325 ] * xx [ 82 ] ; xx [ 345 ] = xx [ 302 ] * xx [ 303 ] + xx [ 310
] * xx [ 123 ] ; xx [ 346 ] = xx [ 319 ] * xx [ 303 ] + xx [ 304 ] * xx [ 123
] ; xx [ 347 ] = xx [ 311 ] * xx [ 123 ] - xx [ 294 ] * xx [ 303 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 330 , xx + 339 , xx + 357 ) ; xx [ 119 ]
= xx [ 134 ] * xx [ 365 ] + xx [ 133 ] * xx [ 363 ] ; xx [ 123 ] = xx [ 134 ]
* xx [ 361 ] ; xx [ 303 ] = xx [ 6 ] - xx [ 314 ] * xx [ 292 ] ; xx [ 6 ] =
xx [ 315 ] * xx [ 292 ] ; xx [ 313 ] = xx [ 305 ] - xx [ 6 ] ; xx [ 305 ] =
xx [ 318 ] - xx [ 6 ] ; xx [ 6 ] = xx [ 115 ] - xx [ 315 ] * xx [ 306 ] ; xx
[ 339 ] = xx [ 302 ] * xx [ 303 ] + xx [ 310 ] * xx [ 313 ] ; xx [ 340 ] = xx
[ 319 ] * xx [ 303 ] + xx [ 304 ] * xx [ 313 ] ; xx [ 341 ] = xx [ 311 ] * xx
[ 313 ] - xx [ 294 ] * xx [ 303 ] ; xx [ 342 ] = xx [ 302 ] * xx [ 305 ] + xx
[ 310 ] * xx [ 6 ] ; xx [ 343 ] = xx [ 319 ] * xx [ 305 ] + xx [ 304 ] * xx [
6 ] ; xx [ 344 ] = xx [ 311 ] * xx [ 6 ] - xx [ 294 ] * xx [ 305 ] ; xx [ 345
] = xx [ 317 ] * xx [ 117 ] ; xx [ 346 ] = - ( xx [ 293 ] * xx [ 117 ] ) ; xx
[ 347 ] = xx [ 82 ] * xx [ 117 ] ; pm_math_Matrix3x3_compose_ra ( xx + 330 ,
xx + 339 , xx + 313 ) ; xx [ 6 ] = xx [ 134 ] * xx [ 318 ] + xx [ 133 ] * xx
[ 316 ] ; xx [ 82 ] = xx [ 355 ] + xx [ 119 ] - xx [ 123 ] - xx [ 134 ] * xx
[ 6 ] ; xx [ 115 ] = xx [ 75 ] * state [ 13 ] ; xx [ 75 ] = xx [ 133 ] * xx [
364 ] ; xx [ 117 ] = xx [ 134 ] * xx [ 358 ] ; xx [ 293 ] = xx [ 133 ] * xx [
317 ] ; xx [ 294 ] = xx [ 354 ] - xx [ 75 ] - xx [ 117 ] + xx [ 134 ] * xx [
293 ] ; xx [ 302 ] = xx [ 133 ] * xx [ 314 ] ; xx [ 303 ] = xx [ 357 ] - xx [
302 ] ; xx [ 304 ] = xx [ 358 ] - xx [ 293 ] ; xx [ 305 ] = xx [ 133 ] * xx [
320 ] ; xx [ 310 ] = xx [ 359 ] - xx [ 305 ] ; xx [ 311 ] = xx [ 134 ] * xx [
315 ] + xx [ 133 ] * xx [ 313 ] ; xx [ 323 ] = xx [ 360 ] + xx [ 311 ] ; xx [
324 ] = xx [ 361 ] + xx [ 6 ] ; xx [ 325 ] = xx [ 134 ] * xx [ 321 ] + xx [
133 ] * xx [ 319 ] ; xx [ 326 ] = xx [ 362 ] + xx [ 325 ] ; xx [ 327 ] = xx [
134 ] * xx [ 314 ] ; xx [ 328 ] = xx [ 363 ] - xx [ 327 ] ; xx [ 329 ] = xx [
134 ] * xx [ 317 ] ; xx [ 330 ] = xx [ 364 ] - xx [ 329 ] ; xx [ 331 ] = xx [
134 ] * xx [ 320 ] ; xx [ 332 ] = xx [ 365 ] - xx [ 331 ] ; xx [ 333 ] = xx [
303 ] ; xx [ 334 ] = xx [ 304 ] ; xx [ 335 ] = xx [ 310 ] ; xx [ 336 ] = xx [
323 ] ; xx [ 337 ] = xx [ 324 ] ; xx [ 338 ] = xx [ 326 ] ; xx [ 339 ] = xx [
328 ] ; xx [ 340 ] = xx [ 330 ] ; xx [ 341 ] = xx [ 332 ] ; xx [ 342 ] = xx [
249 ] * xx [ 257 ] ; xx [ 343 ] = - ( xx [ 248 ] + xx [ 249 ] - xx [ 8 ] * xx
[ 342 ] * xx [ 257 ] ) ; xx [ 344 ] = xx [ 8 ] * xx [ 342 ] * xx [ 291 ] ; xx
[ 345 ] = xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx + 76 , xx + 343 , xx +
365 ) ; pm_math_Vector3_cross_ra ( xx + 76 , xx + 365 , xx + 368 ) ; xx [ 76
] = xx [ 257 ] * xx [ 369 ] ; xx [ 77 ] = xx [ 257 ] * xx [ 368 ] ; xx [ 78 ]
= xx [ 249 ] * state [ 13 ] ; xx [ 153 ] = xx [ 368 ] - xx [ 8 ] * ( xx [ 76
] * xx [ 291 ] + xx [ 77 ] * xx [ 257 ] ) - xx [ 78 ] * ( xx [ 65 ] + xx [ 67
] ) ; xx [ 65 ] = xx [ 369 ] - xx [ 8 ] * ( xx [ 76 ] * xx [ 257 ] - xx [ 77
] * xx [ 291 ] ) ; xx [ 67 ] = xx [ 78 ] * ( xx [ 94 ] + xx [ 94 ] ) + xx [
370 ] ; xx [ 76 ] = xx [ 153 ] ; xx [ 77 ] = xx [ 65 ] ; xx [ 78 ] = xx [ 67
] ; pm_math_Matrix3x3_xform_ra ( xx + 333 , xx + 76 , xx + 365 ) ; xx [ 94 ]
= xx [ 297 ] + xx [ 309 ] - xx [ 134 ] * xx [ 274 ] + xx [ 178 ] * xx [ 82 ]
- xx [ 115 ] * xx [ 294 ] + xx [ 367 ] ; xx [ 248 ] = xx [ 134 ] * xx [ 364 ]
; xx [ 333 ] = xx [ 74 ] + xx [ 356 ] - xx [ 248 ] - xx [ 248 ] + xx [ 134 ]
* xx [ 329 ] ; xx [ 248 ] = xx [ 249 ] * xx [ 330 ] - xx [ 333 ] ; xx [ 334 ]
= state [ 12 ] ; if ( xx [ 2 ] < xx [ 334 ] ) xx [ 334 ] = xx [ 2 ] ; xx [
335 ] = - ( xx [ 334 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 335 ] ) xx [ 335 ]
= xx [ 5 ] ; xx [ 336 ] = xx [ 9 ] * state [ 13 ] ; xx [ 337 ] = xx [ 335 ] *
xx [ 335 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 335 ] ) * ( ( - xx [ 334 ] == xx [
2 ] ? xx [ 2 ] : - xx [ 336 ] ) - xx [ 11 ] * xx [ 334 ] ) ; if ( xx [ 2 ] >
xx [ 337 ] ) xx [ 337 ] = xx [ 2 ] ; xx [ 334 ] = state [ 12 ] - xx [ 241 ] ;
if ( xx [ 2 ] > xx [ 334 ] ) xx [ 334 ] = xx [ 2 ] ; xx [ 241 ] = xx [ 334 ]
/ xx [ 4 ] ; if ( xx [ 5 ] < xx [ 241 ] ) xx [ 241 ] = xx [ 5 ] ; xx [ 335 ]
= xx [ 241 ] * xx [ 241 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 241 ] ) * ( xx [ 11
] * xx [ 334 ] + ( xx [ 334 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 336 ] ) ) ; if (
xx [ 2 ] > xx [ 335 ] ) xx [ 335 ] = xx [ 2 ] ; xx [ 241 ] = xx [ 116 ] + xx
[ 317 ] ; xx [ 368 ] = xx [ 116 ] + xx [ 313 ] ; xx [ 369 ] = xx [ 314 ] ; xx
[ 370 ] = xx [ 315 ] ; xx [ 371 ] = xx [ 316 ] ; xx [ 372 ] = xx [ 241 ] ; xx
[ 373 ] = xx [ 318 ] ; xx [ 374 ] = xx [ 319 ] ; xx [ 375 ] = xx [ 320 ] ; xx
[ 376 ] = xx [ 116 ] + xx [ 321 ] ; pm_math_Matrix3x3_xform_ra ( xx + 368 ,
xx + 76 , xx + 338 ) ; xx [ 76 ] = xx [ 274 ] + xx [ 178 ] * xx [ 324 ] - xx
[ 115 ] * xx [ 304 ] + xx [ 339 ] ; xx [ 77 ] = xx [ 249 ] * xx [ 241 ] - xx
[ 330 ] ; xx [ 78 ] = xx [ 249 ] * xx [ 77 ] - xx [ 248 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 78 , 1 , xx + 317 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/bh_j11_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 317 ] = ( xx [ 337 ] - xx [ 102 ] * state [ 13 ] - xx
[ 335 ] - ( xx [ 249 ] * xx [ 76 ] - xx [ 94 ] ) ) / xx [ 78 ] ; xx [ 102 ] =
xx [ 249 ] * xx [ 314 ] - xx [ 328 ] ; xx [ 334 ] = xx [ 273 ] + xx [ 178 ] *
xx [ 323 ] - xx [ 115 ] * xx [ 303 ] + xx [ 338 ] + xx [ 102 ] * xx [ 317 ] ;
xx [ 335 ] = xx [ 257 ] * xx [ 334 ] ; xx [ 336 ] = xx [ 76 ] + xx [ 77 ] *
xx [ 317 ] ; xx [ 76 ] = xx [ 257 ] * xx [ 336 ] ; xx [ 337 ] = xx [ 334 ] -
xx [ 8 ] * ( xx [ 335 ] * xx [ 257 ] - xx [ 76 ] * xx [ 291 ] ) ; xx [ 334 ]
= xx [ 336 ] - xx [ 8 ] * ( xx [ 335 ] * xx [ 291 ] + xx [ 76 ] * xx [ 257 ]
) ; xx [ 76 ] = xx [ 249 ] * xx [ 320 ] - xx [ 332 ] ; xx [ 335 ] = xx [ 275
] + xx [ 178 ] * xx [ 326 ] - xx [ 115 ] * xx [ 310 ] + xx [ 340 ] + xx [ 76
] * xx [ 317 ] ; xx [ 338 ] = xx [ 337 ] ; xx [ 339 ] = xx [ 334 ] ; xx [ 340
] = xx [ 335 ] ; pm_math_Vector3_cross_ra ( xx + 343 , xx + 338 , xx + 368 )
; xx [ 336 ] = xx [ 81 ] + xx [ 93 ] + xx [ 108 ] - xx [ 134 ] * xx [ 84 ] +
xx [ 196 ] + xx [ 193 ] + xx [ 183 ] + xx [ 239 ] * xx [ 254 ] + xx [ 287 ] +
xx [ 94 ] + xx [ 248 ] * xx [ 317 ] + xx [ 370 ] ; xx [ 94 ] = xx [ 91 ] + xx
[ 106 ] - xx [ 133 ] * xx [ 84 ] + xx [ 194 ] ; xx [ 84 ] = xx [ 70 ] * xx [
94 ] ; xx [ 91 ] = xx [ 92 ] + xx [ 107 ] + xx [ 133 ] * xx [ 83 ] + xx [ 134
] * xx [ 85 ] + xx [ 195 ] ; xx [ 83 ] = xx [ 70 ] * xx [ 91 ] ; xx [ 85 ] =
xx [ 133 ] * xx [ 268 ] ; xx [ 92 ] = xx [ 74 ] + xx [ 258 ] - xx [ 85 ] - xx
[ 85 ] + xx [ 133 ] * xx [ 184 ] ; xx [ 85 ] = xx [ 134 ] * xx [ 269 ] + xx [
133 ] * xx [ 267 ] ; xx [ 93 ] = xx [ 133 ] * xx [ 271 ] ; xx [ 106 ] = xx [
259 ] + xx [ 85 ] - xx [ 93 ] - xx [ 133 ] * xx [ 213 ] ; xx [ 107 ] = xx [
260 ] - xx [ 214 ] - xx [ 211 ] + xx [ 133 ] * xx [ 235 ] ; xx [ 108 ] = xx [
107 ] - xx [ 249 ] * xx [ 223 ] ; xx [ 183 ] = xx [ 203 ] + xx [ 215 ] - xx [
133 ] * xx [ 198 ] + xx [ 188 ] * xx [ 92 ] - xx [ 201 ] * xx [ 106 ] + xx [
288 ] + xx [ 108 ] * xx [ 254 ] ; xx [ 184 ] = xx [ 183 ] * xx [ 179 ] ; xx [
194 ] = xx [ 261 ] - xx [ 93 ] + xx [ 85 ] - ( xx [ 133 ] * xx [ 219 ] + xx [
134 ] * xx [ 224 ] ) ; xx [ 85 ] = xx [ 134 ] * xx [ 272 ] + xx [ 133 ] * xx
[ 270 ] ; xx [ 93 ] = xx [ 74 ] + xx [ 262 ] + xx [ 85 ] + xx [ 85 ] + xx [
133 ] * xx [ 227 ] + xx [ 134 ] * xx [ 230 ] ; xx [ 85 ] = xx [ 263 ] - xx [
212 ] + xx [ 210 ] - ( xx [ 134 ] * xx [ 237 ] + xx [ 133 ] * xx [ 232 ] ) ;
xx [ 195 ] = xx [ 85 ] - xx [ 249 ] * xx [ 229 ] ; xx [ 196 ] = xx [ 204 ] +
xx [ 216 ] + xx [ 133 ] * xx [ 197 ] + xx [ 134 ] * xx [ 199 ] + xx [ 188 ] *
xx [ 194 ] - xx [ 201 ] * xx [ 93 ] + xx [ 289 ] + xx [ 195 ] * xx [ 254 ] ;
xx [ 197 ] = xx [ 196 ] * xx [ 179 ] ; xx [ 198 ] = xx [ 134 ] * xx [ 359 ] +
xx [ 133 ] * xx [ 357 ] ; xx [ 199 ] = xx [ 133 ] * xx [ 361 ] ; xx [ 203 ] =
xx [ 349 ] + xx [ 198 ] - xx [ 199 ] - xx [ 133 ] * xx [ 6 ] ; xx [ 6 ] = xx
[ 133 ] * xx [ 358 ] ; xx [ 204 ] = xx [ 74 ] + xx [ 348 ] - xx [ 6 ] - xx [
6 ] + xx [ 133 ] * xx [ 293 ] ; xx [ 6 ] = xx [ 350 ] - xx [ 117 ] - xx [ 75
] + xx [ 133 ] * xx [ 329 ] ; xx [ 75 ] = xx [ 249 ] * xx [ 304 ] - xx [ 6 ]
; xx [ 117 ] = xx [ 295 ] + xx [ 307 ] - xx [ 133 ] * xx [ 274 ] + xx [ 178 ]
* xx [ 203 ] - xx [ 115 ] * xx [ 204 ] + xx [ 365 ] + xx [ 75 ] * xx [ 317 ]
; xx [ 205 ] = xx [ 257 ] * xx [ 117 ] ; xx [ 210 ] = xx [ 134 ] * xx [ 362 ]
+ xx [ 133 ] * xx [ 360 ] ; xx [ 211 ] = xx [ 74 ] + xx [ 352 ] + xx [ 210 ]
+ xx [ 210 ] + xx [ 133 ] * xx [ 311 ] + xx [ 134 ] * xx [ 325 ] ; xx [ 210 ]
= xx [ 351 ] - xx [ 199 ] + xx [ 198 ] - ( xx [ 133 ] * xx [ 302 ] + xx [ 134
] * xx [ 305 ] ) ; xx [ 198 ] = xx [ 353 ] - xx [ 123 ] + xx [ 119 ] - ( xx [
134 ] * xx [ 331 ] + xx [ 133 ] * xx [ 327 ] ) ; xx [ 119 ] = xx [ 249 ] * xx
[ 324 ] - xx [ 198 ] ; xx [ 123 ] = xx [ 296 ] + xx [ 308 ] + xx [ 133 ] * xx
[ 273 ] + xx [ 134 ] * xx [ 275 ] + xx [ 178 ] * xx [ 211 ] - xx [ 115 ] * xx
[ 210 ] + xx [ 366 ] + xx [ 119 ] * xx [ 317 ] ; xx [ 199 ] = xx [ 257 ] * xx
[ 123 ] ; xx [ 212 ] = xx [ 79 ] + xx [ 94 ] - xx [ 8 ] * ( xx [ 70 ] * xx [
84 ] - xx [ 66 ] * xx [ 83 ] ) + xx [ 191 ] + xx [ 183 ] - xx [ 8 ] * ( xx [
184 ] * xx [ 179 ] - xx [ 197 ] * xx [ 185 ] ) + xx [ 285 ] + xx [ 117 ] - xx
[ 8 ] * ( xx [ 205 ] * xx [ 257 ] - xx [ 199 ] * xx [ 291 ] ) + xx [ 368 ] ;
xx [ 94 ] = xx [ 69 ] * xx [ 212 ] ; xx [ 117 ] = xx [ 69 ] * xx [ 336 ] ; xx
[ 183 ] = 4.89652762780679e-12 ; xx [ 213 ] = 2.051036007699736e-10 ; xx [
214 ] = xx [ 126 ] - xx [ 213 ] * xx [ 124 ] ; xx [ 215 ] = xx [ 110 ] - xx [
213 ] * xx [ 104 ] ; xx [ 216 ] = xx [ 214 ] - xx [ 213 ] * xx [ 215 ] ; xx [
217 ] = xx [ 166 ] - xx [ 213 ] * xx [ 169 ] ; xx [ 219 ] = xx [ 167 ] - xx [
213 ] * xx [ 175 ] ; xx [ 224 ] = xx [ 217 ] - xx [ 213 ] * xx [ 219 ] ; xx [
227 ] = xx [ 213 ] * xx [ 167 ] + xx [ 175 ] ; xx [ 167 ] = xx [ 213 ] * xx [
166 ] + xx [ 169 ] ; xx [ 166 ] = xx [ 213 ] * xx [ 227 ] - xx [ 167 ] ; xx [
169 ] = xx [ 171 ] - xx [ 213 ] * xx [ 168 ] ; xx [ 175 ] = xx [ 213 ] * xx [
217 ] + xx [ 219 ] ; xx [ 217 ] = xx [ 213 ] * xx [ 167 ] + xx [ 227 ] ; xx [
167 ] = xx [ 213 ] * xx [ 171 ] + xx [ 168 ] ; xx [ 168 ] = xx [ 173 ] - xx [
213 ] * xx [ 172 ] ; xx [ 171 ] = xx [ 213 ] * xx [ 173 ] + xx [ 172 ] ; xx [
258 ] = xx [ 224 ] ; xx [ 259 ] = xx [ 166 ] ; xx [ 260 ] = xx [ 169 ] ; xx [
261 ] = - xx [ 175 ] ; xx [ 262 ] = xx [ 217 ] ; xx [ 263 ] = - xx [ 167 ] ;
xx [ 264 ] = xx [ 168 ] ; xx [ 265 ] = - xx [ 171 ] ; xx [ 266 ] = xx [ 170 ]
; pm_math_Matrix3x3_postCross_ra ( xx + 258 , xx + 154 , xx + 267 ) ; xx [
170 ] = xx [ 185 ] * xx [ 185 ] ; xx [ 172 ] = xx [ 8 ] * xx [ 170 ] - xx [ 5
] ; xx [ 173 ] = xx [ 244 ] / xx [ 247 ] ; xx [ 219 ] = xx [ 221 ] - xx [ 108
] * xx [ 173 ] ; xx [ 221 ] = xx [ 8 ] * xx [ 185 ] * xx [ 179 ] ; xx [ 227 ]
= xx [ 245 ] / xx [ 247 ] ; xx [ 230 ] = xx [ 223 ] - xx [ 108 ] * xx [ 227 ]
; xx [ 223 ] = xx [ 172 ] * xx [ 219 ] + xx [ 221 ] * xx [ 230 ] ; xx [ 232 ]
= xx [ 228 ] - xx [ 195 ] * xx [ 173 ] ; xx [ 228 ] = xx [ 229 ] - xx [ 195 ]
* xx [ 227 ] ; xx [ 229 ] = xx [ 172 ] * xx [ 232 ] + xx [ 221 ] * xx [ 228 ]
; xx [ 235 ] = xx [ 172 ] * xx [ 223 ] + xx [ 221 ] * xx [ 229 ] ; xx [ 237 ]
= xx [ 276 ] - xx [ 244 ] * xx [ 173 ] + xx [ 116 ] ; xx [ 244 ] = xx [ 245 ]
* xx [ 173 ] ; xx [ 258 ] = xx [ 277 ] - xx [ 244 ] ; xx [ 259 ] = xx [ 172 ]
* xx [ 237 ] + xx [ 221 ] * xx [ 258 ] ; xx [ 260 ] = xx [ 172 ] * xx [ 259 ]
; xx [ 261 ] = xx [ 279 ] - xx [ 244 ] ; xx [ 244 ] = xx [ 242 ] - xx [ 245 ]
* xx [ 227 ] ; xx [ 242 ] = xx [ 172 ] * xx [ 261 ] + xx [ 221 ] * xx [ 244 ]
; xx [ 245 ] = xx [ 221 ] * xx [ 242 ] ; xx [ 262 ] = xx [ 172 ] * xx [ 258 ]
- xx [ 221 ] * xx [ 237 ] ; xx [ 237 ] = xx [ 172 ] * xx [ 244 ] - xx [ 221 ]
* xx [ 261 ] ; xx [ 244 ] = xx [ 172 ] * xx [ 262 ] + xx [ 221 ] * xx [ 237 ]
; xx [ 258 ] = xx [ 8 ] * ( xx [ 170 ] + xx [ 179 ] * xx [ 179 ] ) - xx [ 5 ]
; xx [ 170 ] = xx [ 243 ] * xx [ 173 ] ; xx [ 261 ] = xx [ 258 ] * ( xx [ 278
] - xx [ 170 ] ) ; xx [ 263 ] = xx [ 243 ] * xx [ 227 ] ; xx [ 264 ] = xx [
258 ] * ( xx [ 281 ] - xx [ 263 ] ) ; xx [ 265 ] = xx [ 261 ] * xx [ 172 ] +
xx [ 221 ] * xx [ 264 ] ; xx [ 266 ] = xx [ 172 ] * xx [ 242 ] - xx [ 221 ] *
xx [ 259 ] ; xx [ 242 ] = xx [ 172 ] * xx [ 237 ] ; xx [ 237 ] = xx [ 221 ] *
xx [ 262 ] ; xx [ 259 ] = xx [ 264 ] * xx [ 172 ] - xx [ 221 ] * xx [ 261 ] ;
xx [ 261 ] = xx [ 282 ] - xx [ 170 ] ; xx [ 170 ] = xx [ 283 ] - xx [ 263 ] ;
xx [ 262 ] = xx [ 258 ] * ( xx [ 172 ] * xx [ 261 ] + xx [ 221 ] * xx [ 170 ]
) ; xx [ 263 ] = xx [ 258 ] * ( xx [ 172 ] * xx [ 170 ] - xx [ 221 ] * xx [
261 ] ) ; xx [ 170 ] = xx [ 243 ] / xx [ 247 ] ; xx [ 261 ] = xx [ 258 ] * (
xx [ 284 ] - xx [ 243 ] * xx [ 170 ] + xx [ 116 ] ) * xx [ 258 ] ; xx [ 346 ]
= xx [ 260 ] + xx [ 245 ] ; xx [ 347 ] = xx [ 244 ] ; xx [ 348 ] = xx [ 265 ]
; xx [ 349 ] = xx [ 266 ] ; xx [ 350 ] = xx [ 242 ] - xx [ 237 ] ; xx [ 351 ]
= xx [ 259 ] ; xx [ 352 ] = xx [ 262 ] ; xx [ 353 ] = xx [ 263 ] ; xx [ 354 ]
= xx [ 261 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 346 , xx + 251 , xx +
355 ) ; xx [ 243 ] = xx [ 291 ] * xx [ 291 ] ; xx [ 264 ] = xx [ 8 ] * xx [
243 ] - xx [ 5 ] ; xx [ 276 ] = xx [ 102 ] / xx [ 78 ] ; xx [ 277 ] = xx [
303 ] - xx [ 75 ] * xx [ 276 ] ; xx [ 278 ] = xx [ 8 ] * xx [ 257 ] * xx [
291 ] ; xx [ 279 ] = xx [ 77 ] / xx [ 78 ] ; xx [ 281 ] = xx [ 304 ] - xx [
75 ] * xx [ 279 ] ; xx [ 282 ] = xx [ 264 ] * xx [ 277 ] + xx [ 278 ] * xx [
281 ] ; xx [ 283 ] = xx [ 323 ] - xx [ 119 ] * xx [ 276 ] ; xx [ 284 ] = xx [
324 ] - xx [ 119 ] * xx [ 279 ] ; xx [ 288 ] = xx [ 264 ] * xx [ 283 ] + xx [
278 ] * xx [ 284 ] ; xx [ 289 ] = xx [ 264 ] * xx [ 282 ] + xx [ 278 ] * xx [
288 ] ; xx [ 290 ] = xx [ 313 ] - xx [ 102 ] * xx [ 276 ] + xx [ 116 ] ; xx [
102 ] = xx [ 77 ] * xx [ 276 ] ; xx [ 293 ] = xx [ 314 ] - xx [ 102 ] ; xx [
295 ] = xx [ 264 ] * xx [ 290 ] + xx [ 278 ] * xx [ 293 ] ; xx [ 296 ] = xx [
264 ] * xx [ 295 ] ; xx [ 297 ] = xx [ 316 ] - xx [ 102 ] ; xx [ 102 ] = xx [
241 ] - xx [ 77 ] * xx [ 279 ] ; xx [ 77 ] = xx [ 264 ] * xx [ 297 ] + xx [
278 ] * xx [ 102 ] ; xx [ 241 ] = xx [ 278 ] * xx [ 77 ] ; xx [ 302 ] = xx [
264 ] * xx [ 293 ] - xx [ 278 ] * xx [ 290 ] ; xx [ 290 ] = xx [ 264 ] * xx [
102 ] - xx [ 278 ] * xx [ 297 ] ; xx [ 102 ] = xx [ 264 ] * xx [ 302 ] + xx [
278 ] * xx [ 290 ] ; xx [ 293 ] = xx [ 8 ] * ( xx [ 243 ] + xx [ 257 ] * xx [
257 ] ) - xx [ 5 ] ; xx [ 243 ] = xx [ 76 ] * xx [ 276 ] ; xx [ 297 ] = xx [
293 ] * ( xx [ 315 ] - xx [ 243 ] ) ; xx [ 303 ] = xx [ 76 ] * xx [ 279 ] ;
xx [ 304 ] = xx [ 293 ] * ( xx [ 318 ] - xx [ 303 ] ) ; xx [ 305 ] = xx [ 297
] * xx [ 264 ] + xx [ 278 ] * xx [ 304 ] ; xx [ 307 ] = xx [ 264 ] * xx [ 77
] - xx [ 278 ] * xx [ 295 ] ; xx [ 77 ] = xx [ 264 ] * xx [ 290 ] - xx [ 278
] * xx [ 302 ] ; xx [ 290 ] = xx [ 304 ] * xx [ 264 ] - xx [ 278 ] * xx [ 297
] ; xx [ 295 ] = xx [ 319 ] - xx [ 243 ] ; xx [ 243 ] = xx [ 320 ] - xx [ 303
] ; xx [ 297 ] = xx [ 293 ] * ( xx [ 264 ] * xx [ 295 ] + xx [ 278 ] * xx [
243 ] ) ; xx [ 302 ] = xx [ 293 ] * ( xx [ 264 ] * xx [ 243 ] - xx [ 278 ] *
xx [ 295 ] ) ; xx [ 243 ] = xx [ 76 ] / xx [ 78 ] ; xx [ 295 ] = xx [ 293 ] *
( xx [ 321 ] - xx [ 76 ] * xx [ 243 ] + xx [ 116 ] ) * xx [ 293 ] ; xx [ 346
] = xx [ 296 ] + xx [ 241 ] ; xx [ 347 ] = xx [ 102 ] ; xx [ 348 ] = xx [ 305
] ; xx [ 349 ] = xx [ 307 ] ; xx [ 350 ] = xx [ 77 ] ; xx [ 351 ] = xx [ 290
] ; xx [ 352 ] = xx [ 297 ] ; xx [ 353 ] = xx [ 302 ] ; xx [ 354 ] = xx [ 295
] ; pm_math_Matrix3x3_postCross_ra ( xx + 346 , xx + 343 , xx + 371 ) ; xx [
76 ] = xx [ 216 ] - xx [ 267 ] + xx [ 235 ] - xx [ 355 ] + xx [ 289 ] - xx [
371 ] ; xx [ 116 ] = xx [ 136 ] - xx [ 213 ] * xx [ 120 ] ; xx [ 303 ] = xx [
258 ] * ( xx [ 226 ] - xx [ 108 ] * xx [ 170 ] ) ; xx [ 226 ] = xx [ 258 ] *
( xx [ 231 ] - xx [ 195 ] * xx [ 170 ] ) ; xx [ 231 ] = xx [ 303 ] * xx [ 172
] + xx [ 221 ] * xx [ 226 ] ; xx [ 304 ] = xx [ 293 ] * ( xx [ 310 ] - xx [
75 ] * xx [ 243 ] ) ; xx [ 308 ] = xx [ 293 ] * ( xx [ 326 ] - xx [ 119 ] *
xx [ 243 ] ) ; xx [ 309 ] = xx [ 304 ] * xx [ 264 ] + xx [ 278 ] * xx [ 308 ]
; xx [ 310 ] = xx [ 116 ] - xx [ 273 ] + xx [ 231 ] - xx [ 361 ] + xx [ 309 ]
- xx [ 377 ] ; xx [ 311 ] = xx [ 183 ] * xx [ 76 ] + xx [ 310 ] ; xx [ 313 ]
= xx [ 150 ] - xx [ 213 ] * xx [ 148 ] ; xx [ 314 ] = xx [ 233 ] - xx [ 239 ]
* xx [ 173 ] ; xx [ 233 ] = xx [ 236 ] - xx [ 239 ] * xx [ 227 ] ; xx [ 236 ]
= xx [ 258 ] * ( xx [ 172 ] * xx [ 314 ] + xx [ 221 ] * xx [ 233 ] ) ; xx [
315 ] = xx [ 328 ] - xx [ 248 ] * xx [ 276 ] ; xx [ 316 ] = xx [ 330 ] - xx [
248 ] * xx [ 279 ] ; xx [ 318 ] = xx [ 293 ] * ( xx [ 264 ] * xx [ 315 ] + xx
[ 278 ] * xx [ 316 ] ) ; xx [ 319 ] = xx [ 313 ] - xx [ 269 ] + xx [ 236 ] -
xx [ 357 ] + xx [ 318 ] - xx [ 373 ] ; xx [ 320 ] = xx [ 258 ] * ( xx [ 238 ]
- xx [ 239 ] * xx [ 170 ] ) * xx [ 258 ] ; xx [ 238 ] = xx [ 293 ] * ( xx [
332 ] - xx [ 248 ] * xx [ 243 ] ) * xx [ 293 ] ; xx [ 321 ] = xx [ 152 ] - xx
[ 275 ] + xx [ 320 ] - xx [ 363 ] + xx [ 238 ] - xx [ 379 ] ; xx [ 323 ] = xx
[ 183 ] * xx [ 319 ] + xx [ 321 ] ; xx [ 324 ] = xx [ 183 ] * xx [ 311 ] + xx
[ 323 ] ; xx [ 325 ] = xx [ 213 ] * xx [ 110 ] + xx [ 104 ] ; xx [ 104 ] = xx
[ 213 ] * xx [ 126 ] + xx [ 124 ] ; xx [ 110 ] = xx [ 213 ] * xx [ 325 ] - xx
[ 104 ] ; xx [ 124 ] = xx [ 172 ] * xx [ 230 ] - xx [ 221 ] * xx [ 219 ] ; xx
[ 126 ] = xx [ 172 ] * xx [ 228 ] - xx [ 221 ] * xx [ 232 ] ; xx [ 219 ] = xx
[ 172 ] * xx [ 124 ] + xx [ 221 ] * xx [ 126 ] ; xx [ 228 ] = xx [ 264 ] * xx
[ 281 ] - xx [ 278 ] * xx [ 277 ] ; xx [ 230 ] = xx [ 264 ] * xx [ 284 ] - xx
[ 278 ] * xx [ 283 ] ; xx [ 232 ] = xx [ 264 ] * xx [ 228 ] + xx [ 278 ] * xx
[ 230 ] ; xx [ 277 ] = xx [ 110 ] - xx [ 270 ] + xx [ 219 ] - xx [ 358 ] + xx
[ 232 ] - xx [ 374 ] ; xx [ 281 ] = xx [ 258 ] * ( xx [ 172 ] * xx [ 233 ] -
xx [ 221 ] * xx [ 314 ] ) ; xx [ 233 ] = xx [ 213 ] * xx [ 150 ] + xx [ 148 ]
; xx [ 148 ] = xx [ 293 ] * ( xx [ 264 ] * xx [ 316 ] - xx [ 278 ] * xx [ 315
] ) ; xx [ 150 ] = xx [ 281 ] - xx [ 360 ] - ( xx [ 233 ] + xx [ 272 ] ) + xx
[ 148 ] - xx [ 376 ] ; xx [ 283 ] = xx [ 183 ] * xx [ 277 ] + xx [ 150 ] ; xx
[ 284 ] = xx [ 183 ] * xx [ 310 ] - xx [ 76 ] ; xx [ 76 ] = xx [ 183 ] * xx [
321 ] - xx [ 319 ] ; xx [ 310 ] = xx [ 183 ] * xx [ 284 ] + xx [ 76 ] ; xx [
314 ] = xx [ 172 ] * xx [ 229 ] - xx [ 221 ] * xx [ 223 ] ; xx [ 223 ] = xx [
213 ] * xx [ 214 ] + xx [ 215 ] ; xx [ 214 ] = xx [ 264 ] * xx [ 288 ] - xx [
278 ] * xx [ 282 ] ; xx [ 215 ] = xx [ 314 ] - xx [ 356 ] - ( xx [ 223 ] + xx
[ 268 ] ) + xx [ 214 ] - xx [ 372 ] ; xx [ 229 ] = xx [ 226 ] * xx [ 172 ] -
xx [ 221 ] * xx [ 303 ] ; xx [ 226 ] = xx [ 213 ] * xx [ 136 ] + xx [ 120 ] ;
xx [ 120 ] = xx [ 308 ] * xx [ 264 ] - xx [ 278 ] * xx [ 304 ] ; xx [ 136 ] =
xx [ 229 ] - xx [ 362 ] - ( xx [ 226 ] + xx [ 274 ] ) + xx [ 120 ] - xx [ 378
] ; xx [ 282 ] = xx [ 183 ] * xx [ 215 ] + xx [ 136 ] ; xx [ 288 ] = xx [ 213
] * xx [ 104 ] + xx [ 325 ] ; xx [ 104 ] = xx [ 172 ] * xx [ 126 ] - xx [ 221
] * xx [ 124 ] ; xx [ 124 ] = xx [ 264 ] * xx [ 230 ] - xx [ 278 ] * xx [ 228
] ; xx [ 126 ] = xx [ 288 ] - xx [ 271 ] + xx [ 104 ] - xx [ 359 ] + xx [ 124
] - xx [ 375 ] ; xx [ 228 ] = xx [ 183 ] * xx [ 136 ] - xx [ 215 ] ; xx [ 136
] = xx [ 183 ] * xx [ 323 ] - xx [ 311 ] ; xx [ 215 ] = xx [ 183 ] * xx [ 150
] - xx [ 277 ] ; xx [ 150 ] = xx [ 183 ] * xx [ 76 ] - xx [ 284 ] ; xx [ 346
] = xx [ 324 ] ; xx [ 347 ] = xx [ 283 ] ; xx [ 348 ] = xx [ 310 ] ; xx [ 349
] = xx [ 282 ] ; xx [ 350 ] = xx [ 126 ] ; xx [ 351 ] = xx [ 228 ] ; xx [ 352
] = xx [ 136 ] ; xx [ 353 ] = xx [ 215 ] ; xx [ 354 ] = xx [ 150 ] ; xx [ 76
] = 0.01725 ; xx [ 230 ] = xx [ 76 ] * xx [ 59 ] ; xx [ 277 ] = xx [ 230 ] *
xx [ 60 ] ; xx [ 284 ] = xx [ 76 ] * xx [ 64 ] ; xx [ 303 ] = xx [ 284 ] * xx
[ 64 ] + xx [ 230 ] * xx [ 59 ] ; xx [ 230 ] = xx [ 3 ] * xx [ 3 ] * xx [ 303
] ; xx [ 304 ] = xx [ 3 ] * xx [ 3 ] * xx [ 277 ] ; xx [ 308 ] = xx [ 277 ] -
xx [ 8 ] * ( xx [ 230 ] + xx [ 304 ] ) ; xx [ 277 ] = xx [ 8 ] * ( xx [ 230 ]
- xx [ 304 ] ) - xx [ 303 ] ; xx [ 230 ] = xx [ 284 ] * xx [ 60 ] ; xx [ 325
] = xx [ 308 ] ; xx [ 326 ] = xx [ 277 ] ; xx [ 327 ] = xx [ 230 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 346 , xx + 325 , xx + 328 ) ; xx [ 284 ] =
xx [ 180 ] + xx [ 280 ] + xx [ 337 ] ; xx [ 180 ] = xx [ 177 ] + xx [ 255 ] +
xx [ 335 ] ; xx [ 177 ] = xx [ 69 ] * xx [ 180 ] ; xx [ 255 ] = xx [ 69 ] *
xx [ 284 ] ; xx [ 280 ] = xx [ 224 ] + xx [ 260 ] + xx [ 245 ] + xx [ 296 ] +
xx [ 241 ] + xx [ 5 ] ; xx [ 224 ] = xx [ 169 ] + xx [ 265 ] + xx [ 305 ] ;
xx [ 169 ] = xx [ 183 ] * xx [ 280 ] + xx [ 224 ] ; xx [ 241 ] = xx [ 168 ] +
xx [ 262 ] + xx [ 297 ] ; xx [ 168 ] = xx [ 174 ] + xx [ 261 ] + xx [ 295 ] +
1.1 ; xx [ 174 ] = xx [ 183 ] * xx [ 241 ] + xx [ 168 ] ; xx [ 245 ] = xx [
183 ] * xx [ 169 ] + xx [ 174 ] ; xx [ 260 ] = xx [ 166 ] + xx [ 244 ] + xx [
102 ] ; xx [ 102 ] = xx [ 263 ] - xx [ 171 ] + xx [ 302 ] ; xx [ 166 ] = xx [
183 ] * xx [ 260 ] + xx [ 102 ] ; xx [ 171 ] = xx [ 183 ] * xx [ 224 ] - xx [
280 ] ; xx [ 224 ] = xx [ 183 ] * xx [ 168 ] - xx [ 241 ] ; xx [ 168 ] = xx [
183 ] * xx [ 171 ] + xx [ 224 ] ; xx [ 241 ] = xx [ 266 ] - xx [ 175 ] + xx [
307 ] ; xx [ 175 ] = xx [ 259 ] - xx [ 167 ] + xx [ 290 ] ; xx [ 167 ] = xx [
183 ] * xx [ 241 ] + xx [ 175 ] ; xx [ 244 ] = xx [ 217 ] - xx [ 237 ] + xx [
242 ] + xx [ 5 ] + xx [ 77 ] ; xx [ 77 ] = xx [ 183 ] * xx [ 175 ] - xx [ 241
] ; xx [ 175 ] = xx [ 183 ] * xx [ 174 ] - xx [ 169 ] ; xx [ 169 ] = xx [ 183
] * xx [ 102 ] - xx [ 260 ] ; xx [ 102 ] = xx [ 183 ] * xx [ 224 ] - xx [ 171
] ; xx [ 346 ] = xx [ 245 ] ; xx [ 347 ] = xx [ 166 ] ; xx [ 348 ] = xx [ 168
] ; xx [ 349 ] = xx [ 167 ] ; xx [ 350 ] = xx [ 244 ] ; xx [ 351 ] = xx [ 77
] ; xx [ 352 ] = xx [ 175 ] ; xx [ 353 ] = xx [ 169 ] ; xx [ 354 ] = xx [ 102
] ; pm_math_Matrix3x3_xform_ra ( xx + 346 , xx + 325 , xx + 259 ) ; xx [ 171
] = xx [ 284 ] + xx [ 8 ] * ( xx [ 68 ] * xx [ 177 ] - xx [ 69 ] * xx [ 255 ]
) + xx [ 259 ] ; xx [ 174 ] = xx [ 176 ] + xx [ 246 ] + xx [ 334 ] + xx [ 260
] ; xx [ 176 ] = xx [ 3 ] * xx [ 3 ] * xx [ 174 ] ; xx [ 217 ] = xx [ 3 ] *
xx [ 3 ] * xx [ 171 ] ; xx [ 224 ] = xx [ 171 ] - xx [ 8 ] * ( xx [ 176 ] +
xx [ 217 ] ) ; xx [ 171 ] = xx [ 59 ] * state [ 11 ] ; xx [ 59 ] =
1.000000000000001 ; xx [ 237 ] = xx [ 122 ] / xx [ 128 ] ; xx [ 128 ] = xx [
122 ] - xx [ 122 ] * xx [ 237 ] ; xx [ 346 ] = xx [ 101 ] * xx [ 132 ] + xx [
114 ] * xx [ 130 ] ; xx [ 347 ] = xx [ 135 ] * xx [ 132 ] + xx [ 103 ] * xx [
130 ] ; xx [ 348 ] = xx [ 118 ] * xx [ 130 ] - xx [ 95 ] * xx [ 132 ] ; xx [
349 ] = xx [ 101 ] * xx [ 87 ] + xx [ 114 ] * xx [ 86 ] ; xx [ 350 ] = xx [
135 ] * xx [ 87 ] + xx [ 103 ] * xx [ 86 ] ; xx [ 351 ] = xx [ 118 ] * xx [
86 ] - xx [ 95 ] * xx [ 87 ] ; xx [ 352 ] = xx [ 131 ] * xx [ 128 ] ; xx [
353 ] = - ( xx [ 90 ] * xx [ 128 ] ) ; xx [ 354 ] = xx [ 88 ] * xx [ 128 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 139 , xx + 346 , xx + 380 ) ; xx [ 86 ] =
xx [ 134 ] * xx [ 164 ] ; xx [ 139 ] = xx [ 216 ] ; xx [ 140 ] = xx [ 110 ] ;
xx [ 141 ] = xx [ 116 ] ; xx [ 142 ] = - xx [ 223 ] ; xx [ 143 ] = xx [ 288 ]
; xx [ 144 ] = - xx [ 226 ] ; xx [ 145 ] = xx [ 313 ] ; xx [ 146 ] = - xx [
233 ] ; xx [ 147 ] = xx [ 152 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 139 ,
xx + 154 , xx + 346 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 267 , xx + 154 ,
xx + 139 ) ; xx [ 87 ] = xx [ 239 ] / xx [ 247 ] ; xx [ 265 ] = xx [ 235 ] ;
xx [ 266 ] = xx [ 219 ] ; xx [ 267 ] = xx [ 231 ] ; xx [ 268 ] = xx [ 314 ] ;
xx [ 269 ] = xx [ 104 ] ; xx [ 270 ] = xx [ 229 ] ; xx [ 271 ] = xx [ 236 ] ;
xx [ 272 ] = xx [ 281 ] ; xx [ 273 ] = xx [ 320 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 265 , xx + 251 , xx + 389 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 355 , xx + 251 , xx + 265 ) ; xx [ 88 ]
= xx [ 248 ] / xx [ 78 ] ; xx [ 355 ] = xx [ 289 ] ; xx [ 356 ] = xx [ 232 ]
; xx [ 357 ] = xx [ 309 ] ; xx [ 358 ] = xx [ 214 ] ; xx [ 359 ] = xx [ 124 ]
; xx [ 360 ] = xx [ 120 ] ; xx [ 361 ] = xx [ 318 ] ; xx [ 362 ] = xx [ 148 ]
; xx [ 363 ] = xx [ 238 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 355 , xx +
343 , xx + 398 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 371 , xx + 343 , xx +
355 ) ; xx [ 90 ] = xx [ 388 ] - xx [ 86 ] - xx [ 86 ] + xx [ 134 ] * xx [
149 ] - xx [ 354 ] - xx [ 354 ] - xx [ 147 ] + xx [ 258 ] * ( xx [ 240 ] - xx
[ 239 ] * xx [ 87 ] ) * xx [ 258 ] - xx [ 397 ] - xx [ 397 ] - xx [ 273 ] +
xx [ 293 ] * ( xx [ 333 ] - xx [ 248 ] * xx [ 88 ] ) * xx [ 293 ] - xx [ 406
] - xx [ 406 ] - xx [ 363 ] + 1.01 ; xx [ 86 ] = xx [ 134 ] * xx [ 165 ] + xx
[ 133 ] * xx [ 163 ] ; xx [ 95 ] = xx [ 134 ] * xx [ 161 ] ; xx [ 101 ] = xx
[ 387 ] + xx [ 86 ] - xx [ 95 ] - xx [ 134 ] * xx [ 125 ] ; xx [ 103 ] = xx [
133 ] * xx [ 164 ] ; xx [ 104 ] = xx [ 134 ] * xx [ 158 ] ; xx [ 110 ] = xx [
386 ] - xx [ 103 ] - xx [ 104 ] + xx [ 134 ] * xx [ 109 ] ; xx [ 114 ] = xx [
108 ] / xx [ 247 ] ; xx [ 116 ] = xx [ 239 ] * xx [ 114 ] ; xx [ 118 ] = xx [
200 ] - xx [ 116 ] ; xx [ 120 ] = xx [ 195 ] / xx [ 247 ] ; xx [ 122 ] = xx [
239 ] * xx [ 120 ] ; xx [ 124 ] = xx [ 218 ] - xx [ 122 ] ; xx [ 128 ] = xx [
75 ] / xx [ 78 ] ; xx [ 130 ] = xx [ 248 ] * xx [ 128 ] ; xx [ 131 ] = xx [
294 ] - xx [ 130 ] ; xx [ 132 ] = xx [ 119 ] / xx [ 78 ] ; xx [ 78 ] = xx [
248 ] * xx [ 132 ] ; xx [ 135 ] = xx [ 82 ] - xx [ 78 ] ; xx [ 82 ] = xx [
101 ] - xx [ 213 ] * xx [ 110 ] - xx [ 352 ] - xx [ 348 ] - xx [ 145 ] + xx [
258 ] * ( xx [ 172 ] * xx [ 118 ] + xx [ 221 ] * xx [ 124 ] ) - xx [ 395 ] -
xx [ 391 ] - xx [ 271 ] + xx [ 293 ] * ( xx [ 264 ] * xx [ 131 ] + xx [ 278 ]
* xx [ 135 ] ) - xx [ 404 ] - xx [ 400 ] - xx [ 361 ] ; xx [ 148 ] = xx [ 183
] * xx [ 90 ] - xx [ 82 ] ; xx [ 152 ] = xx [ 385 ] - xx [ 95 ] + xx [ 86 ] -
( xx [ 134 ] * xx [ 151 ] + xx [ 133 ] * xx [ 137 ] ) ; xx [ 86 ] = xx [ 382
] - xx [ 104 ] - xx [ 103 ] + xx [ 133 ] * xx [ 149 ] ; xx [ 95 ] = xx [ 258
] * ( xx [ 107 ] - xx [ 116 ] ) ; xx [ 103 ] = xx [ 258 ] * ( xx [ 85 ] - xx
[ 122 ] ) ; xx [ 85 ] = xx [ 293 ] * ( xx [ 6 ] - xx [ 130 ] ) ; xx [ 6 ] =
xx [ 293 ] * ( xx [ 198 ] - xx [ 78 ] ) ; xx [ 78 ] = xx [ 152 ] - xx [ 213 ]
* xx [ 86 ] - xx [ 348 ] - xx [ 352 ] - xx [ 141 ] + xx [ 95 ] * xx [ 172 ] +
xx [ 221 ] * xx [ 103 ] - xx [ 391 ] - xx [ 395 ] - xx [ 267 ] + xx [ 85 ] *
xx [ 264 ] + xx [ 278 ] * xx [ 6 ] - xx [ 400 ] - xx [ 404 ] - xx [ 357 ] ;
xx [ 104 ] = xx [ 134 ] * xx [ 162 ] + xx [ 133 ] * xx [ 160 ] ; xx [ 107 ] =
xx [ 74 ] + xx [ 384 ] + xx [ 104 ] + xx [ 104 ] + xx [ 133 ] * xx [ 121 ] +
xx [ 134 ] * xx [ 129 ] ; xx [ 104 ] = xx [ 133 ] * xx [ 161 ] ; xx [ 116 ] =
xx [ 134 ] * xx [ 159 ] + xx [ 133 ] * xx [ 157 ] ; xx [ 121 ] = xx [ 383 ] -
xx [ 104 ] + xx [ 116 ] - ( xx [ 133 ] * xx [ 96 ] + xx [ 134 ] * xx [ 112 ]
) ; xx [ 96 ] = xx [ 107 ] - xx [ 213 ] * xx [ 121 ] ; xx [ 112 ] = xx [ 381
] + xx [ 116 ] - xx [ 104 ] - xx [ 133 ] * xx [ 125 ] ; xx [ 104 ] = xx [ 133
] * xx [ 158 ] ; xx [ 116 ] = xx [ 74 ] + xx [ 380 ] - xx [ 104 ] - xx [ 104
] + xx [ 133 ] * xx [ 109 ] ; xx [ 74 ] = xx [ 112 ] - xx [ 213 ] * xx [ 116
] ; xx [ 104 ] = xx [ 92 ] - xx [ 108 ] * xx [ 114 ] ; xx [ 92 ] = xx [ 195 ]
* xx [ 114 ] ; xx [ 108 ] = xx [ 106 ] - xx [ 92 ] ; xx [ 106 ] = xx [ 172 ]
* xx [ 104 ] + xx [ 221 ] * xx [ 108 ] ; xx [ 109 ] = xx [ 194 ] - xx [ 92 ]
; xx [ 92 ] = xx [ 93 ] - xx [ 195 ] * xx [ 120 ] ; xx [ 93 ] = xx [ 172 ] *
xx [ 109 ] + xx [ 221 ] * xx [ 92 ] ; xx [ 122 ] = xx [ 204 ] - xx [ 75 ] *
xx [ 128 ] ; xx [ 75 ] = xx [ 119 ] * xx [ 128 ] ; xx [ 125 ] = xx [ 203 ] -
xx [ 75 ] ; xx [ 129 ] = xx [ 264 ] * xx [ 122 ] + xx [ 278 ] * xx [ 125 ] ;
xx [ 130 ] = xx [ 210 ] - xx [ 75 ] ; xx [ 75 ] = xx [ 211 ] - xx [ 119 ] *
xx [ 132 ] ; xx [ 119 ] = xx [ 264 ] * xx [ 130 ] + xx [ 278 ] * xx [ 75 ] ;
xx [ 137 ] = xx [ 96 ] - xx [ 213 ] * xx [ 74 ] - xx [ 346 ] - xx [ 346 ] -
xx [ 139 ] + xx [ 172 ] * xx [ 106 ] + xx [ 221 ] * xx [ 93 ] - xx [ 389 ] -
xx [ 389 ] - xx [ 265 ] + xx [ 264 ] * xx [ 129 ] + xx [ 278 ] * xx [ 119 ] -
xx [ 398 ] - xx [ 398 ] - xx [ 355 ] + xx [ 5 ] ; xx [ 149 ] = xx [ 183 ] *
xx [ 78 ] - xx [ 137 ] ; xx [ 151 ] = 1.0 ; xx [ 157 ] =
2.220446049250313e-16 ; xx [ 158 ] = 1.0 ; xx [ 159 ] = xx [ 151 ] * ( xx [
157 ] * xx [ 136 ] - xx [ 158 ] * xx [ 215 ] ) ; xx [ 160 ] = xx [ 76 ] * xx
[ 159 ] ; xx [ 161 ] = xx [ 157 ] * xx [ 245 ] - xx [ 158 ] * xx [ 166 ] ; xx
[ 162 ] = xx [ 157 ] * xx [ 167 ] - xx [ 158 ] * xx [ 244 ] ; xx [ 163 ] = xx
[ 157 ] * xx [ 161 ] - xx [ 158 ] * xx [ 162 ] ; xx [ 164 ] = xx [ 76 ] * xx
[ 163 ] ; xx [ 165 ] = xx [ 55 ] + xx [ 59 ] * ( xx [ 183 ] * xx [ 148 ] - xx
[ 149 ] ) - xx [ 160 ] - xx [ 160 ] + xx [ 76 ] * xx [ 164 ] ; xx [ 160 ] =
state [ 11 ] * xx [ 64 ] ; xx [ 194 ] = xx [ 183 ] * xx [ 82 ] + xx [ 90 ] ;
xx [ 82 ] = xx [ 183 ] * xx [ 137 ] + xx [ 78 ] ; xx [ 78 ] = xx [ 183 ] * xx
[ 194 ] - xx [ 82 ] ; xx [ 90 ] = xx [ 258 ] * ( xx [ 172 ] * xx [ 124 ] - xx
[ 221 ] * xx [ 118 ] ) - xx [ 396 ] - xx [ 394 ] - xx [ 272 ] - ( xx [ 213 ]
* xx [ 101 ] + xx [ 110 ] + xx [ 353 ] + xx [ 351 ] + xx [ 146 ] ) + xx [ 293
] * ( xx [ 264 ] * xx [ 135 ] - xx [ 278 ] * xx [ 131 ] ) - xx [ 405 ] - xx [
403 ] - xx [ 362 ] ; xx [ 101 ] = xx [ 213 ] * xx [ 112 ] + xx [ 116 ] ; xx [
110 ] = xx [ 213 ] * xx [ 107 ] + xx [ 121 ] ; xx [ 107 ] = xx [ 172 ] * xx [
108 ] - xx [ 221 ] * xx [ 104 ] ; xx [ 104 ] = xx [ 172 ] * xx [ 92 ] - xx [
221 ] * xx [ 109 ] ; xx [ 92 ] = xx [ 264 ] * xx [ 125 ] - xx [ 278 ] * xx [
122 ] ; xx [ 108 ] = xx [ 264 ] * xx [ 75 ] - xx [ 278 ] * xx [ 130 ] ; xx [
75 ] = xx [ 213 ] * xx [ 101 ] - xx [ 110 ] - xx [ 347 ] - xx [ 349 ] - xx [
140 ] + xx [ 172 ] * xx [ 107 ] + xx [ 221 ] * xx [ 104 ] - xx [ 390 ] - xx [
392 ] - xx [ 266 ] + xx [ 264 ] * xx [ 92 ] + xx [ 278 ] * xx [ 108 ] - xx [
399 ] - xx [ 401 ] - xx [ 356 ] ; xx [ 109 ] = xx [ 183 ] * xx [ 90 ] - xx [
75 ] ; xx [ 112 ] = xx [ 59 ] * xx [ 150 ] ; xx [ 116 ] = xx [ 76 ] * xx [
112 ] ; xx [ 118 ] = xx [ 157 ] * xx [ 324 ] - xx [ 158 ] * xx [ 283 ] ; xx [
121 ] = xx [ 157 ] * xx [ 282 ] - xx [ 158 ] * xx [ 126 ] ; xx [ 122 ] = xx [
157 ] * xx [ 118 ] - xx [ 158 ] * xx [ 121 ] ; xx [ 124 ] = xx [ 76 ] * xx [
122 ] ; xx [ 125 ] = xx [ 151 ] * xx [ 168 ] ; xx [ 130 ] = xx [ 151 ] * xx [
77 ] ; xx [ 77 ] = xx [ 157 ] * xx [ 125 ] - xx [ 158 ] * xx [ 130 ] ; xx [
131 ] = xx [ 76 ] * xx [ 77 ] ; xx [ 135 ] = xx [ 151 ] * ( xx [ 157 ] * xx [
78 ] - xx [ 158 ] * xx [ 109 ] ) + xx [ 116 ] - xx [ 124 ] - xx [ 76 ] * xx [
131 ] ; xx [ 137 ] = xx [ 122 ] + xx [ 131 ] ; xx [ 122 ] = xx [ 158 ] * xx [
324 ] + xx [ 157 ] * xx [ 283 ] ; xx [ 131 ] = xx [ 158 ] * xx [ 282 ] + xx [
157 ] * xx [ 126 ] ; xx [ 126 ] = xx [ 158 ] * xx [ 125 ] + xx [ 157 ] * xx [
130 ] ; xx [ 125 ] = xx [ 157 ] * xx [ 122 ] - xx [ 158 ] * xx [ 131 ] + xx [
76 ] * xx [ 126 ] ; xx [ 130 ] = xx [ 151 ] * xx [ 310 ] ; xx [ 150 ] = xx [
151 ] * xx [ 228 ] ; xx [ 168 ] = xx [ 157 ] * xx [ 130 ] - xx [ 158 ] * xx [
150 ] ; xx [ 195 ] = xx [ 59 ] * xx [ 102 ] ; xx [ 59 ] = xx [ 76 ] * xx [
195 ] ; xx [ 102 ] = xx [ 168 ] + xx [ 59 ] ; xx [ 198 ] = xx [ 158 ] * xx [
118 ] + xx [ 157 ] * xx [ 121 ] ; xx [ 118 ] = xx [ 158 ] * xx [ 122 ] + xx [
157 ] * xx [ 131 ] ; xx [ 121 ] = xx [ 158 ] * xx [ 130 ] + xx [ 157 ] * xx [
150 ] ; xx [ 122 ] = xx [ 159 ] - xx [ 164 ] ; xx [ 130 ] = xx [ 158 ] * xx [
161 ] + xx [ 157 ] * xx [ 162 ] ; xx [ 131 ] = xx [ 151 ] * ( xx [ 158 ] * xx
[ 136 ] + xx [ 157 ] * xx [ 215 ] ) - xx [ 76 ] * xx [ 130 ] ; xx [ 136 ] =
xx [ 151 ] * ( xx [ 157 ] * xx [ 175 ] - xx [ 158 ] * xx [ 169 ] ) ; xx [ 150
] = xx [ 76 ] * xx [ 136 ] ; xx [ 159 ] = xx [ 112 ] - xx [ 150 ] ; xx [ 371
] = xx [ 137 ] ; xx [ 372 ] = xx [ 125 ] ; xx [ 373 ] = xx [ 102 ] ; xx [ 374
] = xx [ 198 ] ; xx [ 375 ] = xx [ 118 ] ; xx [ 376 ] = xx [ 121 ] ; xx [ 377
] = xx [ 122 ] ; xx [ 378 ] = xx [ 131 ] ; xx [ 379 ] = xx [ 159 ] ; xx [ 112
] = 0.06505 ; xx [ 161 ] = xx [ 112 ] * xx [ 50 ] ; xx [ 162 ] = xx [ 161 ] *
xx [ 51 ] ; xx [ 164 ] = xx [ 112 ] * xx [ 45 ] ; xx [ 200 ] = xx [ 164 ] *
xx [ 51 ] ; xx [ 203 ] = xx [ 200 ] * xx [ 56 ] ; xx [ 204 ] = xx [ 162 ] *
xx [ 56 ] ; xx [ 210 ] = xx [ 162 ] - xx [ 8 ] * ( xx [ 203 ] * xx [ 58 ] +
xx [ 204 ] * xx [ 56 ] ) ; xx [ 162 ] = 1.444400155037329e-17 ; xx [ 211 ] =
xx [ 162 ] * state [ 11 ] ; xx [ 214 ] = xx [ 211 ] * ( xx [ 64 ] + xx [ 64 ]
) - ( xx [ 164 ] * xx [ 45 ] + xx [ 161 ] * xx [ 50 ] ) ; xx [ 45 ] = xx [
200 ] + xx [ 8 ] * ( xx [ 204 ] * xx [ 58 ] - xx [ 203 ] * xx [ 56 ] ) - xx [
211 ] * ( xx [ 51 ] + xx [ 60 ] ) ; xx [ 231 ] = xx [ 210 ] ; xx [ 232 ] = xx
[ 214 ] ; xx [ 233 ] = xx [ 45 ] ; pm_math_Matrix3x3_xform_ra ( xx + 371 , xx
+ 231 , xx + 238 ) ; xx [ 60 ] = xx [ 76 ] * xx [ 198 ] ; xx [ 64 ] = xx [
151 ] * ( xx [ 158 ] * xx [ 78 ] + xx [ 157 ] * xx [ 109 ] ) - xx [ 60 ] ; xx
[ 78 ] = xx [ 64 ] + xx [ 162 ] * xx [ 122 ] ; xx [ 109 ] = state [ 10 ] + xx
[ 1 ] ; if ( xx [ 2 ] < xx [ 109 ] ) xx [ 109 ] = xx [ 2 ] ; xx [ 161 ] = - (
xx [ 109 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 161 ] ) xx [ 161 ] = xx [ 5 ]
; xx [ 164 ] = xx [ 9 ] * state [ 11 ] ; xx [ 200 ] = xx [ 161 ] * xx [ 161 ]
* ( xx [ 7 ] - xx [ 8 ] * xx [ 161 ] ) * ( ( - xx [ 109 ] == xx [ 2 ] ? xx [
2 ] : - xx [ 164 ] ) - xx [ 11 ] * xx [ 109 ] ) ; if ( xx [ 2 ] > xx [ 200 ]
) xx [ 200 ] = xx [ 2 ] ; xx [ 109 ] = state [ 10 ] - xx [ 1 ] ; if ( xx [ 2
] > xx [ 109 ] ) xx [ 109 ] = xx [ 2 ] ; xx [ 161 ] = xx [ 109 ] / xx [ 4 ] ;
if ( xx [ 5 ] < xx [ 161 ] ) xx [ 161 ] = xx [ 5 ] ; xx [ 203 ] = xx [ 161 ]
* xx [ 161 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 161 ] ) * ( xx [ 11 ] * xx [ 109
] + ( xx [ 109 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 164 ] ) ) ; if ( xx [ 2 ] > xx
[ 203 ] ) xx [ 203 ] = xx [ 2 ] ; xx [ 79 ] = xx [ 80 ] + xx [ 91 ] - xx [ 8
] * ( xx [ 66 ] * xx [ 84 ] + xx [ 70 ] * xx [ 83 ] ) + xx [ 192 ] + xx [ 196
] - xx [ 8 ] * ( xx [ 184 ] * xx [ 185 ] + xx [ 197 ] * xx [ 179 ] ) + xx [
286 ] + xx [ 123 ] - xx [ 8 ] * ( xx [ 205 ] * xx [ 291 ] + xx [ 199 ] * xx [
257 ] ) + xx [ 369 ] + xx [ 329 ] ; xx [ 80 ] = xx [ 212 ] + xx [ 8 ] * ( xx
[ 68 ] * xx [ 117 ] - xx [ 69 ] * xx [ 94 ] ) + xx [ 328 ] ; xx [ 81 ] = xx [
3 ] * xx [ 3 ] * xx [ 80 ] ; xx [ 83 ] = xx [ 3 ] * xx [ 3 ] * xx [ 79 ] ; xx
[ 84 ] = xx [ 151 ] * ( xx [ 183 ] * xx [ 149 ] + xx [ 148 ] ) ; xx [ 91 ] =
xx [ 103 ] * xx [ 172 ] - xx [ 221 ] * xx [ 95 ] - xx [ 394 ] - xx [ 396 ] -
xx [ 270 ] - ( xx [ 213 ] * xx [ 152 ] + xx [ 86 ] + xx [ 351 ] + xx [ 353 ]
+ xx [ 144 ] ) + xx [ 6 ] * xx [ 264 ] - xx [ 278 ] * xx [ 85 ] - xx [ 403 ]
- xx [ 405 ] - xx [ 360 ] ; xx [ 6 ] = xx [ 172 ] * xx [ 93 ] - xx [ 221 ] *
xx [ 106 ] - xx [ 392 ] - xx [ 390 ] - xx [ 268 ] - ( xx [ 213 ] * xx [ 96 ]
+ xx [ 74 ] + xx [ 349 ] + xx [ 347 ] + xx [ 142 ] ) + xx [ 264 ] * xx [ 119
] - xx [ 278 ] * xx [ 129 ] - xx [ 401 ] - xx [ 399 ] - xx [ 358 ] ; xx [ 74
] = xx [ 151 ] * ( xx [ 183 ] * xx [ 91 ] - xx [ 6 ] ) ; xx [ 85 ] = xx [ 158
] * xx [ 84 ] + xx [ 157 ] * xx [ 74 ] - xx [ 60 ] ; xx [ 60 ] = xx [ 183 ] *
xx [ 82 ] + xx [ 194 ] ; xx [ 82 ] = xx [ 183 ] * xx [ 75 ] + xx [ 90 ] ; xx
[ 75 ] = xx [ 157 ] * xx [ 60 ] - xx [ 158 ] * xx [ 82 ] ; xx [ 86 ] = xx [
183 ] * xx [ 6 ] + xx [ 91 ] ; xx [ 6 ] = xx [ 213 ] * xx [ 110 ] + xx [ 101
] - xx [ 350 ] - xx [ 350 ] - xx [ 143 ] + xx [ 172 ] * xx [ 104 ] - xx [ 221
] * xx [ 107 ] - xx [ 393 ] - xx [ 393 ] - xx [ 269 ] + xx [ 264 ] * xx [ 108
] - xx [ 278 ] * xx [ 92 ] - xx [ 402 ] - xx [ 402 ] - xx [ 359 ] + xx [ 5 ]
; xx [ 90 ] = xx [ 157 ] * xx [ 86 ] - xx [ 158 ] * xx [ 6 ] ; xx [ 91 ] = xx
[ 76 ] * xx [ 121 ] ; xx [ 92 ] = xx [ 158 ] * xx [ 75 ] + xx [ 157 ] * xx [
90 ] + xx [ 91 ] ; xx [ 93 ] = xx [ 72 ] + xx [ 79 ] + xx [ 8 ] * ( xx [ 81 ]
- xx [ 83 ] ) + xx [ 171 ] * xx [ 85 ] - xx [ 160 ] * xx [ 92 ] + xx [ 239 ]
; xx [ 79 ] = 0.1879 ; xx [ 95 ] = xx [ 79 ] + xx [ 163 ] ; xx [ 96 ] = xx [
158 ] * xx [ 245 ] + xx [ 157 ] * xx [ 166 ] ; xx [ 101 ] = xx [ 158 ] * xx [
167 ] + xx [ 157 ] * xx [ 244 ] ; xx [ 103 ] = xx [ 157 ] * xx [ 96 ] - xx [
158 ] * xx [ 101 ] ; xx [ 104 ] = xx [ 158 ] * xx [ 96 ] + xx [ 157 ] * xx [
101 ] ; xx [ 96 ] = xx [ 151 ] * ( xx [ 158 ] * xx [ 175 ] + xx [ 157 ] * xx
[ 169 ] ) ; xx [ 139 ] = xx [ 95 ] ; xx [ 140 ] = xx [ 103 ] ; xx [ 141 ] =
xx [ 77 ] ; xx [ 142 ] = xx [ 130 ] ; xx [ 143 ] = xx [ 79 ] + xx [ 104 ] ;
xx [ 144 ] = xx [ 126 ] ; xx [ 145 ] = xx [ 136 ] ; xx [ 146 ] = xx [ 96 ] ;
xx [ 147 ] = xx [ 79 ] + xx [ 195 ] ; pm_math_Matrix3x3_xform_ra ( xx + 139 ,
xx + 231 , xx + 106 ) ; xx [ 101 ] = xx [ 224 ] + xx [ 171 ] * xx [ 122 ] -
xx [ 160 ] * xx [ 137 ] + xx [ 106 ] ; xx [ 109 ] = xx [ 158 ] * xx [ 60 ] +
xx [ 157 ] * xx [ 82 ] ; xx [ 60 ] = xx [ 158 ] * xx [ 86 ] + xx [ 157 ] * xx
[ 6 ] ; xx [ 6 ] = xx [ 57 ] + xx [ 158 ] * xx [ 109 ] + xx [ 157 ] * xx [ 60
] ; xx [ 57 ] = xx [ 6 ] + xx [ 162 ] * xx [ 198 ] ; xx [ 82 ] = xx [ 198 ] +
xx [ 162 ] * xx [ 95 ] ; xx [ 86 ] = xx [ 57 ] + xx [ 162 ] * xx [ 82 ] ; ii
[ 0 ] = factorSymmetricPosDef ( xx + 86 , 1 , xx + 110 ) ; if ( ii [ 0 ] != 0
) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/wrist_3_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 110 ] = ( input [ 5 ] + xx [ 200 ] - xx [ 203 ] - ( xx
[ 93 ] + xx [ 162 ] * xx [ 101 ] ) ) / xx [ 86 ] ; xx [ 119 ] = xx [ 73 ] +
xx [ 336 ] - xx [ 8 ] * ( xx [ 68 ] * xx [ 94 ] + xx [ 69 ] * xx [ 117 ] ) +
xx [ 330 ] - xx [ 76 ] * xx [ 224 ] + xx [ 171 ] * xx [ 165 ] - xx [ 160 ] *
xx [ 135 ] + xx [ 240 ] + xx [ 78 ] * xx [ 110 ] ; xx [ 72 ] = xx [ 180 ] -
xx [ 8 ] * ( xx [ 68 ] * xx [ 255 ] + xx [ 69 ] * xx [ 177 ] ) + xx [ 261 ] ;
xx [ 73 ] = xx [ 157 ] * xx [ 84 ] - xx [ 158 ] * xx [ 74 ] - xx [ 124 ] + xx
[ 116 ] - xx [ 76 ] * xx [ 150 ] ; xx [ 74 ] = xx [ 76 ] * xx [ 168 ] ; xx [
84 ] = xx [ 55 ] + xx [ 157 ] * xx [ 75 ] - xx [ 158 ] * xx [ 90 ] + xx [ 74
] + xx [ 74 ] + xx [ 76 ] * xx [ 59 ] ; xx [ 55 ] = xx [ 157 ] * xx [ 109 ] -
xx [ 158 ] * xx [ 60 ] + xx [ 91 ] ; xx [ 59 ] = xx [ 55 ] + xx [ 162 ] * xx
[ 137 ] ; xx [ 60 ] = xx [ 71 ] + xx [ 80 ] - xx [ 8 ] * ( xx [ 83 ] + xx [
81 ] ) + xx [ 76 ] * xx [ 72 ] + xx [ 171 ] * xx [ 73 ] - xx [ 160 ] * xx [
84 ] + xx [ 238 ] + xx [ 59 ] * xx [ 110 ] ; xx [ 71 ] = xx [ 60 ] * xx [ 56
] ; xx [ 74 ] = xx [ 119 ] * xx [ 56 ] ; xx [ 75 ] = xx [ 101 ] + xx [ 82 ] *
xx [ 110 ] ; xx [ 80 ] = xx [ 121 ] + xx [ 162 ] * xx [ 136 ] ; xx [ 81 ] =
xx [ 72 ] + xx [ 171 ] * xx [ 159 ] - xx [ 160 ] * xx [ 102 ] + xx [ 108 ] +
xx [ 80 ] * xx [ 110 ] ; xx [ 72 ] = xx [ 81 ] * xx [ 56 ] ; xx [ 83 ] = xx [
75 ] * xx [ 56 ] ; xx [ 90 ] = xx [ 75 ] + xx [ 8 ] * ( xx [ 72 ] * xx [ 58 ]
- xx [ 83 ] * xx [ 56 ] ) ; xx [ 75 ] = xx [ 51 ] * state [ 9 ] ; xx [ 51 ] =
xx [ 58 ] * xx [ 58 ] ; xx [ 91 ] = xx [ 8 ] * xx [ 51 ] - xx [ 5 ] ; xx [ 94
] = xx [ 59 ] / xx [ 86 ] ; xx [ 101 ] = xx [ 78 ] * xx [ 94 ] ; xx [ 109 ] =
xx [ 135 ] - xx [ 101 ] ; xx [ 116 ] = xx [ 8 ] * xx [ 58 ] * xx [ 56 ] ; xx
[ 117 ] = xx [ 78 ] / xx [ 86 ] ; xx [ 123 ] = xx [ 165 ] - xx [ 78 ] * xx [
117 ] ; xx [ 124 ] = xx [ 91 ] * xx [ 109 ] + xx [ 116 ] * xx [ 123 ] ; xx [
129 ] = xx [ 84 ] - xx [ 59 ] * xx [ 94 ] ; xx [ 84 ] = xx [ 73 ] - xx [ 101
] ; xx [ 73 ] = xx [ 91 ] * xx [ 129 ] + xx [ 116 ] * xx [ 84 ] ; xx [ 101 ]
= xx [ 80 ] / xx [ 86 ] ; xx [ 135 ] = xx [ 159 ] - xx [ 78 ] * xx [ 101 ] ;
xx [ 139 ] = xx [ 82 ] / xx [ 86 ] ; xx [ 140 ] = xx [ 122 ] - xx [ 78 ] * xx
[ 139 ] ; xx [ 122 ] = xx [ 91 ] * xx [ 135 ] - xx [ 116 ] * xx [ 140 ] ; xx
[ 141 ] = xx [ 102 ] - xx [ 59 ] * xx [ 101 ] ; xx [ 102 ] = xx [ 137 ] - xx
[ 59 ] * xx [ 139 ] ; xx [ 137 ] = xx [ 91 ] * xx [ 141 ] - xx [ 116 ] * xx [
102 ] ; xx [ 142 ] = xx [ 91 ] * xx [ 122 ] - xx [ 116 ] * xx [ 137 ] ; xx [
143 ] = xx [ 112 ] * xx [ 142 ] ; xx [ 144 ] = xx [ 91 ] * xx [ 102 ] + xx [
116 ] * xx [ 141 ] ; xx [ 102 ] = xx [ 91 ] * xx [ 140 ] + xx [ 116 ] * xx [
135 ] ; xx [ 135 ] = xx [ 91 ] * xx [ 144 ] + xx [ 116 ] * xx [ 102 ] ; xx [
140 ] = xx [ 112 ] * xx [ 135 ] ; xx [ 141 ] = xx [ 80 ] * xx [ 139 ] ; xx [
145 ] = xx [ 77 ] - xx [ 141 ] ; xx [ 77 ] = xx [ 95 ] - xx [ 82 ] * xx [ 139
] ; xx [ 82 ] = xx [ 91 ] * xx [ 145 ] - xx [ 116 ] * xx [ 77 ] ; xx [ 95 ] =
xx [ 195 ] - xx [ 80 ] * xx [ 101 ] + xx [ 79 ] ; xx [ 146 ] = xx [ 136 ] -
xx [ 141 ] ; xx [ 136 ] = xx [ 91 ] * xx [ 95 ] - xx [ 116 ] * xx [ 146 ] ;
xx [ 141 ] = xx [ 91 ] * xx [ 82 ] + xx [ 116 ] * xx [ 136 ] ; xx [ 147 ] =
xx [ 112 ] * xx [ 141 ] ; xx [ 148 ] = xx [ 91 ] * xx [ 124 ] - xx [ 116 ] *
xx [ 73 ] + xx [ 143 ] - xx [ 140 ] - xx [ 112 ] * xx [ 147 ] ; xx [ 149 ] =
state [ 9 ] * xx [ 50 ] ; xx [ 50 ] = xx [ 8 ] * ( xx [ 51 ] + xx [ 56 ] * xx
[ 56 ] ) - xx [ 5 ] ; xx [ 51 ] = xx [ 57 ] / xx [ 86 ] ; xx [ 150 ] = xx [
78 ] * xx [ 51 ] ; xx [ 151 ] = xx [ 50 ] * ( xx [ 64 ] - xx [ 150 ] ) ; xx [
64 ] = xx [ 57 ] * xx [ 94 ] ; xx [ 152 ] = xx [ 50 ] * ( xx [ 55 ] - xx [ 64
] ) ; xx [ 55 ] = xx [ 198 ] - xx [ 57 ] * xx [ 139 ] ; xx [ 157 ] = xx [ 121
] - xx [ 57 ] * xx [ 101 ] ; xx [ 121 ] = xx [ 50 ] * ( xx [ 91 ] * xx [ 55 ]
+ xx [ 116 ] * xx [ 157 ] ) ; xx [ 158 ] = xx [ 112 ] * xx [ 121 ] ; xx [ 159
] = xx [ 151 ] * xx [ 91 ] - xx [ 116 ] * xx [ 152 ] - xx [ 158 ] ; xx [ 161
] = xx [ 135 ] + xx [ 147 ] ; xx [ 135 ] = xx [ 118 ] + xx [ 162 ] * xx [ 130
] ; xx [ 147 ] = xx [ 135 ] / xx [ 86 ] ; xx [ 86 ] = xx [ 50 ] * ( xx [ 125
] - xx [ 59 ] * xx [ 147 ] ) ; xx [ 59 ] = xx [ 50 ] * ( xx [ 131 ] - xx [ 78
] * xx [ 147 ] ) ; xx [ 78 ] = xx [ 80 ] * xx [ 147 ] ; xx [ 80 ] = xx [ 126
] - xx [ 78 ] ; xx [ 126 ] = xx [ 135 ] * xx [ 139 ] ; xx [ 163 ] = xx [ 130
] - xx [ 126 ] ; xx [ 130 ] = xx [ 50 ] * ( xx [ 91 ] * xx [ 80 ] - xx [ 116
] * xx [ 163 ] ) ; xx [ 164 ] = xx [ 86 ] * xx [ 91 ] + xx [ 116 ] * xx [ 59
] + xx [ 112 ] * xx [ 130 ] ; xx [ 165 ] = xx [ 91 ] * xx [ 137 ] + xx [ 116
] * xx [ 122 ] ; xx [ 122 ] = xx [ 91 ] * xx [ 136 ] - xx [ 116 ] * xx [ 82 ]
; xx [ 82 ] = xx [ 112 ] * xx [ 122 ] ; xx [ 136 ] = xx [ 165 ] + xx [ 82 ] ;
xx [ 137 ] = xx [ 50 ] * ( xx [ 118 ] - xx [ 57 ] * xx [ 147 ] ) * xx [ 50 ]
; xx [ 118 ] = xx [ 50 ] * ( xx [ 91 ] * xx [ 157 ] - xx [ 116 ] * xx [ 55 ]
) ; xx [ 55 ] = xx [ 91 ] * xx [ 102 ] - xx [ 116 ] * xx [ 144 ] ; xx [ 102 ]
= xx [ 91 ] * xx [ 77 ] + xx [ 116 ] * xx [ 145 ] ; xx [ 77 ] = xx [ 146 ] *
xx [ 91 ] + xx [ 116 ] * xx [ 95 ] ; xx [ 95 ] = xx [ 91 ] * xx [ 102 ] + xx
[ 116 ] * xx [ 77 ] ; xx [ 144 ] = xx [ 112 ] * xx [ 95 ] ; xx [ 145 ] = xx [
55 ] - xx [ 144 ] ; xx [ 146 ] = xx [ 50 ] * ( xx [ 91 ] * xx [ 163 ] + xx [
116 ] * xx [ 80 ] ) ; xx [ 80 ] = xx [ 59 ] * xx [ 91 ] - xx [ 116 ] * xx [
86 ] - xx [ 112 ] * xx [ 146 ] ; xx [ 59 ] = xx [ 91 ] * xx [ 77 ] - xx [ 116
] * xx [ 102 ] ; xx [ 77 ] = xx [ 112 ] * xx [ 59 ] ; xx [ 86 ] = xx [ 142 ]
- xx [ 77 ] ; xx [ 191 ] = xx [ 161 ] ; xx [ 192 ] = xx [ 164 ] ; xx [ 193 ]
= xx [ 136 ] ; xx [ 194 ] = xx [ 121 ] ; xx [ 195 ] = xx [ 137 ] ; xx [ 196 ]
= xx [ 118 ] ; xx [ 197 ] = xx [ 145 ] ; xx [ 198 ] = xx [ 80 ] ; xx [ 199 ]
= xx [ 86 ] ; xx [ 102 ] = 0.09465 ; xx [ 142 ] = xx [ 102 ] * xx [ 36 ] ; xx
[ 157 ] = xx [ 142 ] * xx [ 44 ] ; xx [ 163 ] = xx [ 102 ] * xx [ 37 ] ; xx [
166 ] = xx [ 163 ] * xx [ 44 ] ; xx [ 167 ] = xx [ 166 ] * xx [ 46 ] ; xx [
168 ] = xx [ 157 ] * xx [ 46 ] ; xx [ 169 ] = xx [ 157 ] + xx [ 8 ] * ( xx [
167 ] * xx [ 49 ] - xx [ 168 ] * xx [ 46 ] ) ; xx [ 157 ] = xx [ 166 ] - xx [
8 ] * ( xx [ 168 ] * xx [ 49 ] + xx [ 167 ] * xx [ 46 ] ) ; xx [ 166 ] = xx [
142 ] * xx [ 36 ] + xx [ 163 ] * xx [ 37 ] ; xx [ 203 ] = xx [ 169 ] ; xx [
204 ] = xx [ 157 ] ; xx [ 205 ] = - xx [ 166 ] ; pm_math_Matrix3x3_xform_ra (
xx + 191 , xx + 203 , xx + 211 ) ; xx [ 142 ] = xx [ 63 ] + xx [ 119 ] - xx [
8 ] * ( xx [ 71 ] * xx [ 58 ] + xx [ 74 ] * xx [ 56 ] ) - xx [ 112 ] * xx [
90 ] + xx [ 75 ] * xx [ 148 ] - xx [ 149 ] * xx [ 159 ] + xx [ 213 ] ; xx [
119 ] = xx [ 91 ] * xx [ 123 ] - xx [ 116 ] * xx [ 109 ] ; xx [ 109 ] = xx [
91 ] * xx [ 84 ] - xx [ 116 ] * xx [ 129 ] ; xx [ 84 ] = xx [ 112 ] * xx [ 55
] ; xx [ 55 ] = xx [ 47 ] + xx [ 91 ] * xx [ 119 ] - xx [ 116 ] * xx [ 109 ]
- xx [ 84 ] - xx [ 84 ] + xx [ 112 ] * xx [ 144 ] ; xx [ 47 ] = state [ 8 ] +
xx [ 1 ] ; if ( xx [ 2 ] < xx [ 47 ] ) xx [ 47 ] = xx [ 2 ] ; xx [ 84 ] = - (
xx [ 47 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 84 ] ) xx [ 84 ] = xx [ 5 ] ;
xx [ 123 ] = xx [ 9 ] * state [ 9 ] ; xx [ 129 ] = xx [ 84 ] * xx [ 84 ] * (
xx [ 7 ] - xx [ 8 ] * xx [ 84 ] ) * ( ( - xx [ 47 ] == xx [ 2 ] ? xx [ 2 ] :
- xx [ 123 ] ) - xx [ 11 ] * xx [ 47 ] ) ; if ( xx [ 2 ] > xx [ 129 ] ) xx [
129 ] = xx [ 2 ] ; xx [ 47 ] = state [ 8 ] - xx [ 1 ] ; if ( xx [ 2 ] > xx [
47 ] ) xx [ 47 ] = xx [ 2 ] ; xx [ 84 ] = xx [ 47 ] / xx [ 4 ] ; if ( xx [ 5
] < xx [ 84 ] ) xx [ 84 ] = xx [ 5 ] ; xx [ 144 ] = xx [ 84 ] * xx [ 84 ] * (
xx [ 7 ] - xx [ 8 ] * xx [ 84 ] ) * ( xx [ 11 ] * xx [ 47 ] + ( xx [ 47 ] ==
xx [ 2 ] ? xx [ 2 ] : xx [ 123 ] ) ) ; if ( xx [ 2 ] > xx [ 144 ] ) xx [ 144
] = xx [ 2 ] ; memcpy ( xx + 47 , xx + 55 , 1 * sizeof ( double ) ) ; ii [ 0
] = factorSymmetricPosDef ( xx + 47 , 1 , xx + 84 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/wrist_2_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 84 ] = ( input [ 4 ] + xx [ 129 ] - xx [ 144 ] - xx [
142 ] ) / xx [ 47 ] ; xx [ 123 ] = xx [ 36 ] * state [ 7 ] ; xx [ 36 ] = xx [
49 ] * xx [ 49 ] ; xx [ 129 ] = xx [ 8 ] * ( xx [ 36 ] + xx [ 46 ] * xx [ 46
] ) - xx [ 5 ] ; xx [ 144 ] = xx [ 55 ] / xx [ 47 ] ; xx [ 163 ] = xx [ 48 ]
+ xx [ 129 ] * ( xx [ 55 ] - xx [ 55 ] * xx [ 144 ] ) * xx [ 129 ] ; xx [ 48
] = state [ 7 ] * xx [ 44 ] ; xx [ 167 ] = xx [ 8 ] * xx [ 36 ] - xx [ 5 ] ;
xx [ 36 ] = xx [ 91 ] * xx [ 109 ] + xx [ 116 ] * xx [ 119 ] - xx [ 140 ] +
xx [ 143 ] - xx [ 112 ] * xx [ 77 ] ; xx [ 77 ] = xx [ 36 ] / xx [ 47 ] ; xx
[ 109 ] = xx [ 55 ] * xx [ 77 ] ; xx [ 119 ] = xx [ 148 ] - xx [ 109 ] ; xx [
140 ] = xx [ 8 ] * xx [ 49 ] * xx [ 46 ] ; xx [ 143 ] = xx [ 85 ] - xx [ 150
] ; xx [ 85 ] = xx [ 92 ] - xx [ 64 ] ; xx [ 64 ] = xx [ 50 ] * ( xx [ 91 ] *
xx [ 143 ] - xx [ 116 ] * xx [ 85 ] ) - xx [ 158 ] ; xx [ 92 ] = xx [ 64 ] /
xx [ 47 ] ; xx [ 148 ] = xx [ 55 ] * xx [ 92 ] ; xx [ 150 ] = xx [ 159 ] - xx
[ 148 ] ; xx [ 158 ] = xx [ 145 ] / xx [ 47 ] ; xx [ 159 ] = xx [ 145 ] - xx
[ 55 ] * xx [ 158 ] ; xx [ 168 ] = xx [ 80 ] / xx [ 47 ] ; xx [ 172 ] = xx [
80 ] - xx [ 55 ] * xx [ 168 ] ; xx [ 175 ] = xx [ 129 ] * ( xx [ 140 ] * xx [
159 ] + xx [ 167 ] * xx [ 172 ] ) ; xx [ 177 ] = xx [ 102 ] * xx [ 175 ] ; xx
[ 180 ] = xx [ 129 ] * ( xx [ 167 ] * xx [ 119 ] - xx [ 140 ] * xx [ 150 ] )
- xx [ 177 ] ; xx [ 183 ] = xx [ 161 ] - xx [ 36 ] * xx [ 158 ] ; xx [ 184 ]
= xx [ 164 ] - xx [ 36 ] * xx [ 168 ] ; xx [ 191 ] = xx [ 167 ] * xx [ 183 ]
- xx [ 140 ] * xx [ 184 ] ; xx [ 192 ] = xx [ 121 ] - xx [ 64 ] * xx [ 158 ]
; xx [ 193 ] = xx [ 137 ] - xx [ 64 ] * xx [ 168 ] ; xx [ 194 ] = xx [ 167 ]
* xx [ 192 ] - xx [ 140 ] * xx [ 193 ] ; xx [ 195 ] = xx [ 167 ] * xx [ 191 ]
- xx [ 140 ] * xx [ 194 ] ; xx [ 196 ] = 1.219 ; xx [ 197 ] = xx [ 95 ] - xx
[ 145 ] * xx [ 158 ] + xx [ 196 ] ; xx [ 198 ] = xx [ 50 ] * ( xx [ 103 ] -
xx [ 126 ] ) ; xx [ 103 ] = ( xx [ 96 ] - xx [ 78 ] ) * xx [ 50 ] ; xx [ 78 ]
= xx [ 198 ] * xx [ 91 ] + xx [ 116 ] * xx [ 103 ] ; xx [ 96 ] = xx [ 80 ] *
xx [ 158 ] ; xx [ 126 ] = xx [ 78 ] - xx [ 96 ] ; xx [ 199 ] = xx [ 140 ] *
xx [ 197 ] + xx [ 167 ] * xx [ 126 ] ; xx [ 200 ] = xx [ 146 ] - xx [ 96 ] ;
xx [ 96 ] = xx [ 50 ] * ( xx [ 104 ] - xx [ 135 ] * xx [ 147 ] + xx [ 79 ] )
* xx [ 50 ] ; xx [ 79 ] = xx [ 96 ] - xx [ 80 ] * xx [ 168 ] + xx [ 196 ] ;
xx [ 104 ] = xx [ 140 ] * xx [ 200 ] + xx [ 167 ] * xx [ 79 ] ; xx [ 215 ] =
xx [ 167 ] * xx [ 199 ] - xx [ 140 ] * xx [ 104 ] ; xx [ 216 ] = xx [ 102 ] *
xx [ 215 ] ; xx [ 218 ] = xx [ 195 ] - xx [ 216 ] ; xx [ 219 ] = xx [ 140 ] *
xx [ 183 ] + xx [ 167 ] * xx [ 184 ] ; xx [ 183 ] = xx [ 140 ] * xx [ 192 ] +
xx [ 167 ] * xx [ 193 ] ; xx [ 184 ] = xx [ 167 ] * xx [ 219 ] - xx [ 140 ] *
xx [ 183 ] ; xx [ 192 ] = xx [ 140 ] * xx [ 199 ] + xx [ 167 ] * xx [ 104 ] ;
xx [ 104 ] = xx [ 102 ] * xx [ 192 ] ; xx [ 193 ] = xx [ 184 ] - xx [ 104 ] ;
xx [ 199 ] = xx [ 86 ] / xx [ 47 ] ; xx [ 47 ] = xx [ 129 ] * ( xx [ 136 ] -
xx [ 36 ] * xx [ 199 ] ) ; xx [ 221 ] = xx [ 129 ] * ( xx [ 118 ] - xx [ 64 ]
* xx [ 199 ] ) ; xx [ 223 ] = xx [ 86 ] * xx [ 158 ] ; xx [ 224 ] = xx [ 59 ]
- xx [ 223 ] ; xx [ 226 ] = xx [ 103 ] * xx [ 91 ] - xx [ 116 ] * xx [ 198 ]
; xx [ 103 ] = xx [ 86 ] * xx [ 168 ] ; xx [ 198 ] = xx [ 226 ] - xx [ 103 ]
; xx [ 228 ] = xx [ 129 ] * ( xx [ 140 ] * xx [ 224 ] + xx [ 167 ] * xx [ 198
] ) ; xx [ 229 ] = xx [ 47 ] * xx [ 167 ] - xx [ 140 ] * xx [ 221 ] - xx [
102 ] * xx [ 228 ] ; xx [ 231 ] = xx [ 140 ] * xx [ 191 ] + xx [ 167 ] * xx [
194 ] ; xx [ 191 ] = xx [ 167 ] * xx [ 197 ] - xx [ 140 ] * xx [ 126 ] ; xx [
126 ] = xx [ 167 ] * xx [ 200 ] - xx [ 140 ] * xx [ 79 ] ; xx [ 79 ] = xx [
167 ] * xx [ 191 ] - xx [ 140 ] * xx [ 126 ] ; xx [ 194 ] = xx [ 102 ] * xx [
79 ] ; xx [ 197 ] = xx [ 231 ] + xx [ 194 ] ; xx [ 200 ] = xx [ 140 ] * xx [
219 ] + xx [ 167 ] * xx [ 183 ] ; xx [ 183 ] = xx [ 140 ] * xx [ 191 ] + xx [
167 ] * xx [ 126 ] ; xx [ 126 ] = xx [ 102 ] * xx [ 183 ] ; xx [ 191 ] = xx [
200 ] + xx [ 126 ] ; xx [ 219 ] = xx [ 129 ] * ( xx [ 167 ] * xx [ 224 ] - xx
[ 140 ] * xx [ 198 ] ) ; xx [ 198 ] = xx [ 140 ] * xx [ 47 ] + xx [ 221 ] *
xx [ 167 ] + xx [ 102 ] * xx [ 219 ] ; xx [ 47 ] = xx [ 129 ] * ( xx [ 167 ]
* xx [ 159 ] - xx [ 140 ] * xx [ 172 ] ) ; xx [ 159 ] = xx [ 129 ] * ( xx [
86 ] - xx [ 55 ] * xx [ 199 ] ) * xx [ 129 ] ; xx [ 258 ] = xx [ 218 ] ; xx [
259 ] = xx [ 193 ] ; xx [ 260 ] = xx [ 229 ] ; xx [ 261 ] = xx [ 197 ] ; xx [
262 ] = xx [ 191 ] ; xx [ 263 ] = xx [ 198 ] ; xx [ 264 ] = xx [ 47 ] ; xx [
265 ] = xx [ 175 ] ; xx [ 266 ] = xx [ 159 ] ; xx [ 172 ] = 0.196125 ; xx [
221 ] = 0.093 ; xx [ 238 ] = xx [ 172 ] * xx [ 30 ] - xx [ 221 ] * xx [ 31 ]
; xx [ 239 ] = - ( xx [ 172 ] * xx [ 22 ] ) ; xx [ 240 ] = xx [ 221 ] * xx [
22 ] ; pm_math_Vector3_cross_ra ( xx + 32 , xx + 238 , xx + 244 ) ; xx [ 32 ]
= xx [ 35 ] * xx [ 244 ] ; xx [ 33 ] = xx [ 35 ] * xx [ 246 ] ; xx [ 34 ] =
xx [ 244 ] - xx [ 8 ] * ( xx [ 32 ] * xx [ 35 ] - xx [ 33 ] * xx [ 43 ] ) ;
xx [ 224 ] = 2.065014825802791e-17 ; xx [ 232 ] = xx [ 224 ] * state [ 7 ] ;
xx [ 233 ] = xx [ 232 ] * ( xx [ 44 ] + xx [ 44 ] ) + xx [ 245 ] ; xx [ 44 ]
= xx [ 246 ] - xx [ 8 ] * ( xx [ 32 ] * xx [ 43 ] + xx [ 33 ] * xx [ 35 ] ) -
xx [ 232 ] * ( xx [ 30 ] + xx [ 37 ] ) ; xx [ 238 ] = xx [ 34 ] ; xx [ 239 ]
= xx [ 233 ] ; xx [ 240 ] = xx [ 44 ] ; pm_math_Matrix3x3_xform_ra ( xx + 258
, xx + 238 , xx + 244 ) ; xx [ 32 ] = xx [ 102 ] * xx [ 47 ] ; xx [ 33 ] = xx
[ 129 ] * ( xx [ 140 ] * xx [ 119 ] + xx [ 167 ] * xx [ 150 ] ) + xx [ 32 ] ;
xx [ 37 ] = xx [ 33 ] + xx [ 224 ] * xx [ 47 ] ; xx [ 119 ] = state [ 6 ] +
xx [ 1 ] ; if ( xx [ 2 ] < xx [ 119 ] ) xx [ 119 ] = xx [ 2 ] ; xx [ 150 ] =
- ( xx [ 119 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 150 ] ) xx [ 150 ] = xx [
5 ] ; xx [ 232 ] = xx [ 9 ] * state [ 7 ] ; xx [ 235 ] = xx [ 150 ] * xx [
150 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 150 ] ) * ( ( - xx [ 119 ] == xx [ 2 ] ?
xx [ 2 ] : - xx [ 232 ] ) - xx [ 11 ] * xx [ 119 ] ) ; if ( xx [ 2 ] > xx [
235 ] ) xx [ 235 ] = xx [ 2 ] ; xx [ 119 ] = state [ 6 ] - xx [ 1 ] ; if ( xx
[ 2 ] > xx [ 119 ] ) xx [ 119 ] = xx [ 2 ] ; xx [ 150 ] = xx [ 119 ] / xx [ 4
] ; if ( xx [ 5 ] < xx [ 150 ] ) xx [ 150 ] = xx [ 5 ] ; xx [ 236 ] = xx [
150 ] * xx [ 150 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 150 ] ) * ( xx [ 11 ] * xx
[ 119 ] + ( xx [ 119 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 232 ] ) ) ; if ( xx [ 2
] > xx [ 236 ] ) xx [ 236 ] = xx [ 2 ] ; xx [ 119 ] = xx [ 112 ] * xx [ 118 ]
; xx [ 150 ] = xx [ 50 ] * ( xx [ 91 ] * xx [ 85 ] + xx [ 116 ] * xx [ 143 ]
) + xx [ 119 ] ; xx [ 85 ] = xx [ 41 ] + xx [ 50 ] * ( xx [ 6 ] - xx [ 57 ] *
xx [ 51 ] ) * xx [ 50 ] ; xx [ 6 ] = xx [ 62 ] + xx [ 93 ] + xx [ 57 ] * xx [
110 ] + xx [ 75 ] * xx [ 150 ] - xx [ 149 ] * xx [ 85 ] + xx [ 212 ] + xx [
64 ] * xx [ 84 ] ; xx [ 50 ] = xx [ 81 ] - xx [ 8 ] * ( xx [ 83 ] * xx [ 58 ]
+ xx [ 72 ] * xx [ 56 ] ) ; xx [ 57 ] = xx [ 112 ] * xx [ 165 ] ; xx [ 62 ] =
xx [ 41 ] + xx [ 91 ] * xx [ 73 ] + xx [ 116 ] * xx [ 124 ] + xx [ 57 ] + xx
[ 57 ] + xx [ 112 ] * xx [ 82 ] ; xx [ 57 ] = xx [ 152 ] * xx [ 91 ] + xx [
116 ] * xx [ 151 ] + xx [ 119 ] ; xx [ 63 ] = xx [ 61 ] + xx [ 60 ] + xx [ 8
] * ( xx [ 74 ] * xx [ 58 ] - xx [ 71 ] * xx [ 56 ] ) + xx [ 112 ] * xx [ 50
] + xx [ 75 ] * xx [ 62 ] - xx [ 149 ] * xx [ 57 ] + xx [ 211 ] + xx [ 36 ] *
xx [ 84 ] ; xx [ 60 ] = xx [ 63 ] * xx [ 46 ] ; xx [ 61 ] = xx [ 6 ] * xx [
46 ] ; xx [ 258 ] = xx [ 196 ] + xx [ 95 ] ; xx [ 259 ] = xx [ 78 ] ; xx [
260 ] = xx [ 141 ] ; xx [ 261 ] = xx [ 146 ] ; xx [ 262 ] = xx [ 196 ] + xx [
96 ] ; xx [ 263 ] = xx [ 130 ] ; xx [ 264 ] = xx [ 59 ] ; xx [ 265 ] = xx [
226 ] ; xx [ 266 ] = xx [ 196 ] + xx [ 122 ] ; pm_math_Matrix3x3_xform_ra (
xx + 258 , xx + 203 , xx + 71 ) ; xx [ 59 ] = xx [ 90 ] + xx [ 75 ] * xx [
161 ] - xx [ 121 ] * xx [ 149 ] + xx [ 71 ] + xx [ 145 ] * xx [ 84 ] ; xx [
74 ] = xx [ 174 ] + xx [ 8 ] * ( xx [ 217 ] - xx [ 176 ] ) + xx [ 171 ] * xx
[ 131 ] - xx [ 160 ] * xx [ 125 ] + xx [ 107 ] + xx [ 135 ] * xx [ 110 ] + xx
[ 75 ] * xx [ 164 ] - xx [ 137 ] * xx [ 149 ] + xx [ 72 ] + xx [ 80 ] * xx [
84 ] ; xx [ 78 ] = xx [ 74 ] * xx [ 46 ] ; xx [ 80 ] = xx [ 59 ] * xx [ 46 ]
; xx [ 81 ] = xx [ 59 ] - xx [ 8 ] * ( xx [ 78 ] * xx [ 49 ] + xx [ 80 ] * xx
[ 46 ] ) ; xx [ 59 ] = xx [ 129 ] * ( xx [ 36 ] - xx [ 109 ] ) ; xx [ 82 ] =
xx [ 129 ] * ( xx [ 64 ] - xx [ 148 ] ) ; xx [ 83 ] = xx [ 140 ] * xx [ 59 ]
+ xx [ 82 ] * xx [ 167 ] + xx [ 32 ] ; xx [ 32 ] = xx [ 62 ] - xx [ 36 ] * xx
[ 77 ] ; xx [ 36 ] = xx [ 64 ] * xx [ 77 ] ; xx [ 62 ] = xx [ 57 ] - xx [ 36
] ; xx [ 57 ] = xx [ 167 ] * xx [ 32 ] - xx [ 140 ] * xx [ 62 ] ; xx [ 90 ] =
xx [ 150 ] - xx [ 36 ] ; xx [ 36 ] = xx [ 85 ] - xx [ 64 ] * xx [ 92 ] ; xx [
64 ] = xx [ 167 ] * xx [ 90 ] - xx [ 140 ] * xx [ 36 ] ; xx [ 85 ] = xx [ 102
] * xx [ 200 ] ; xx [ 91 ] = xx [ 102 ] * xx [ 195 ] ; xx [ 93 ] = xx [ 140 ]
* xx [ 57 ] + xx [ 167 ] * xx [ 64 ] - xx [ 85 ] + xx [ 91 ] - xx [ 102 ] *
xx [ 216 ] ; xx [ 95 ] = xx [ 53 ] + xx [ 6 ] + xx [ 8 ] * ( xx [ 60 ] * xx [
49 ] - xx [ 61 ] * xx [ 46 ] ) + xx [ 102 ] * xx [ 81 ] + xx [ 123 ] * xx [
83 ] - xx [ 48 ] * xx [ 93 ] + xx [ 245 ] ; xx [ 6 ] = xx [ 196 ] + xx [ 79 ]
; xx [ 79 ] = xx [ 129 ] * ( xx [ 141 ] - xx [ 223 ] ) ; xx [ 96 ] = xx [ 129
] * ( xx [ 130 ] - xx [ 103 ] ) ; xx [ 103 ] = xx [ 79 ] * xx [ 167 ] - xx [
140 ] * xx [ 96 ] ; xx [ 106 ] = xx [ 140 ] * xx [ 79 ] + xx [ 96 ] * xx [
167 ] ; xx [ 79 ] = xx [ 129 ] * ( xx [ 122 ] - xx [ 86 ] * xx [ 199 ] + xx [
196 ] ) * xx [ 129 ] ; xx [ 258 ] = xx [ 6 ] ; xx [ 259 ] = xx [ 215 ] ; xx [
260 ] = xx [ 103 ] ; xx [ 261 ] = xx [ 183 ] ; xx [ 262 ] = xx [ 196 ] + xx [
192 ] ; xx [ 263 ] = xx [ 106 ] ; xx [ 264 ] = xx [ 219 ] ; xx [ 265 ] = xx [
228 ] ; xx [ 266 ] = xx [ 196 ] + xx [ 79 ] ; pm_math_Matrix3x3_xform_ra ( xx
+ 258 , xx + 238 , xx + 107 ) ; xx [ 96 ] = xx [ 81 ] + xx [ 47 ] * xx [ 123
] - xx [ 48 ] * xx [ 218 ] + xx [ 107 ] ; xx [ 81 ] = xx [ 140 ] * xx [ 32 ]
+ xx [ 167 ] * xx [ 62 ] ; xx [ 32 ] = xx [ 140 ] * xx [ 90 ] + xx [ 167 ] *
xx [ 36 ] ; xx [ 36 ] = xx [ 102 ] * xx [ 231 ] ; xx [ 62 ] = xx [ 42 ] + xx
[ 140 ] * xx [ 81 ] + xx [ 167 ] * xx [ 32 ] + xx [ 36 ] + xx [ 36 ] + xx [
102 ] * xx [ 194 ] ; xx [ 36 ] = xx [ 62 ] + xx [ 224 ] * xx [ 197 ] ; xx [
42 ] = xx [ 197 ] + xx [ 224 ] * xx [ 6 ] ; xx [ 90 ] = xx [ 36 ] + xx [ 224
] * xx [ 42 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 90 , 1 , xx + 116 ) ;
if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/wrist_1_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 116 ] = ( input [ 3 ] + xx [ 235 ] - xx [ 236 ] - ( xx
[ 95 ] + xx [ 224 ] * xx [ 96 ] ) ) / xx [ 90 ] ; xx [ 119 ] = xx [ 54 ] + xx
[ 142 ] + xx [ 55 ] * xx [ 84 ] + xx [ 123 ] * xx [ 163 ] - xx [ 48 ] * xx [
180 ] + xx [ 246 ] + xx [ 37 ] * xx [ 116 ] ; xx [ 55 ] = xx [ 119 ] * xx [
35 ] ; xx [ 53 ] = xx [ 74 ] + xx [ 8 ] * ( xx [ 80 ] * xx [ 49 ] - xx [ 78 ]
* xx [ 46 ] ) ; xx [ 54 ] = xx [ 59 ] * xx [ 167 ] - xx [ 140 ] * xx [ 82 ] -
xx [ 177 ] ; xx [ 59 ] = xx [ 102 ] * xx [ 184 ] ; xx [ 74 ] = xx [ 41 ] + xx
[ 167 ] * xx [ 57 ] - xx [ 140 ] * xx [ 64 ] - xx [ 59 ] - xx [ 59 ] + xx [
102 ] * xx [ 104 ] ; xx [ 41 ] = xx [ 167 ] * xx [ 81 ] - xx [ 140 ] * xx [
32 ] + xx [ 91 ] - xx [ 85 ] - xx [ 102 ] * xx [ 126 ] ; xx [ 32 ] = xx [ 41
] + xx [ 224 ] * xx [ 218 ] ; xx [ 57 ] = xx [ 52 ] + xx [ 63 ] - xx [ 8 ] *
( xx [ 61 ] * xx [ 49 ] + xx [ 60 ] * xx [ 46 ] ) - xx [ 102 ] * xx [ 53 ] +
xx [ 123 ] * xx [ 54 ] - xx [ 48 ] * xx [ 74 ] + xx [ 244 ] + xx [ 32 ] * xx
[ 116 ] ; xx [ 52 ] = xx [ 57 ] * xx [ 35 ] ; xx [ 59 ] = xx [ 96 ] + xx [ 42
] * xx [ 116 ] ; xx [ 60 ] = xx [ 198 ] + xx [ 224 ] * xx [ 219 ] ; xx [ 61 ]
= xx [ 50 ] + xx [ 75 ] * xx [ 136 ] - xx [ 118 ] * xx [ 149 ] + xx [ 73 ] +
xx [ 86 ] * xx [ 84 ] + xx [ 159 ] * xx [ 123 ] - xx [ 48 ] * xx [ 229 ] + xx
[ 109 ] + xx [ 60 ] * xx [ 116 ] ; xx [ 50 ] = xx [ 61 ] * xx [ 35 ] ; xx [
63 ] = xx [ 59 ] * xx [ 35 ] ; xx [ 64 ] = xx [ 59 ] - xx [ 8 ] * ( xx [ 50 ]
* xx [ 43 ] + xx [ 63 ] * xx [ 35 ] ) ; xx [ 59 ] = xx [ 22 ] * state [ 5 ] ;
xx [ 22 ] = xx [ 43 ] * xx [ 43 ] ; xx [ 71 ] = xx [ 8 ] * xx [ 22 ] - xx [ 5
] ; xx [ 72 ] = xx [ 37 ] / xx [ 90 ] ; xx [ 73 ] = xx [ 163 ] - xx [ 37 ] *
xx [ 72 ] ; xx [ 78 ] = xx [ 8 ] * xx [ 43 ] * xx [ 35 ] ; xx [ 80 ] = xx [
32 ] / xx [ 90 ] ; xx [ 81 ] = xx [ 37 ] * xx [ 80 ] ; xx [ 82 ] = xx [ 180 ]
- xx [ 81 ] ; xx [ 85 ] = xx [ 71 ] * xx [ 73 ] + xx [ 78 ] * xx [ 82 ] ; xx
[ 86 ] = xx [ 54 ] - xx [ 81 ] ; xx [ 54 ] = xx [ 74 ] - xx [ 32 ] * xx [ 80
] ; xx [ 74 ] = xx [ 71 ] * xx [ 86 ] + xx [ 78 ] * xx [ 54 ] ; xx [ 81 ] =
xx [ 42 ] / xx [ 90 ] ; xx [ 91 ] = xx [ 47 ] - xx [ 37 ] * xx [ 81 ] ; xx [
47 ] = xx [ 60 ] / xx [ 90 ] ; xx [ 96 ] = xx [ 159 ] - xx [ 37 ] * xx [ 47 ]
; xx [ 104 ] = xx [ 71 ] * xx [ 91 ] - xx [ 78 ] * xx [ 96 ] ; xx [ 118 ] =
xx [ 218 ] - xx [ 32 ] * xx [ 81 ] ; xx [ 121 ] = xx [ 229 ] - xx [ 32 ] * xx
[ 47 ] ; xx [ 122 ] = xx [ 71 ] * xx [ 118 ] - xx [ 78 ] * xx [ 121 ] ; xx [
124 ] = xx [ 71 ] * xx [ 104 ] + xx [ 78 ] * xx [ 122 ] ; xx [ 125 ] = xx [
221 ] * xx [ 124 ] ; xx [ 126 ] = xx [ 6 ] - xx [ 42 ] * xx [ 81 ] ; xx [ 6 ]
= xx [ 60 ] * xx [ 81 ] ; xx [ 42 ] = xx [ 103 ] - xx [ 6 ] ; xx [ 103 ] = xx
[ 71 ] * xx [ 126 ] - xx [ 78 ] * xx [ 42 ] ; xx [ 129 ] = xx [ 219 ] - xx [
6 ] ; xx [ 6 ] = xx [ 79 ] - xx [ 60 ] * xx [ 47 ] + xx [ 196 ] ; xx [ 79 ] =
xx [ 71 ] * xx [ 129 ] - xx [ 78 ] * xx [ 6 ] ; xx [ 130 ] = xx [ 71 ] * xx [
103 ] - xx [ 78 ] * xx [ 79 ] ; xx [ 131 ] = xx [ 221 ] * xx [ 130 ] ; xx [
135 ] = xx [ 28 ] + xx [ 71 ] * xx [ 85 ] + xx [ 78 ] * xx [ 74 ] - xx [ 125
] - xx [ 125 ] + xx [ 221 ] * xx [ 131 ] ; xx [ 28 ] = xx [ 31 ] * state [ 5
] ; xx [ 125 ] = xx [ 71 ] * xx [ 82 ] - xx [ 78 ] * xx [ 73 ] ; xx [ 73 ] =
xx [ 71 ] * xx [ 54 ] - xx [ 78 ] * xx [ 86 ] ; xx [ 54 ] = xx [ 8 ] * ( xx [
22 ] + xx [ 35 ] * xx [ 35 ] ) - xx [ 5 ] ; xx [ 22 ] = xx [ 191 ] + xx [ 224
] * xx [ 183 ] ; xx [ 82 ] = xx [ 22 ] / xx [ 90 ] ; xx [ 86 ] = xx [ 54 ] *
( xx [ 175 ] - xx [ 37 ] * xx [ 82 ] ) ; xx [ 136 ] = xx [ 54 ] * ( xx [ 193
] - xx [ 32 ] * xx [ 82 ] ) ; xx [ 32 ] = xx [ 86 ] * xx [ 71 ] + xx [ 78 ] *
xx [ 136 ] ; xx [ 137 ] = xx [ 71 ] * xx [ 96 ] + xx [ 78 ] * xx [ 91 ] ; xx
[ 91 ] = xx [ 71 ] * xx [ 121 ] + xx [ 78 ] * xx [ 118 ] ; xx [ 96 ] = xx [
71 ] * xx [ 137 ] + xx [ 78 ] * xx [ 91 ] ; xx [ 118 ] = xx [ 172 ] * xx [ 32
] - xx [ 221 ] * xx [ 96 ] ; xx [ 121 ] = xx [ 71 ] * xx [ 122 ] - xx [ 78 ]
* xx [ 104 ] ; xx [ 104 ] = xx [ 221 ] * xx [ 121 ] ; xx [ 122 ] = xx [ 22 ]
* xx [ 81 ] ; xx [ 140 ] = xx [ 54 ] * ( xx [ 215 ] - xx [ 122 ] ) ; xx [ 141
] = xx [ 60 ] * xx [ 82 ] ; xx [ 60 ] = xx [ 54 ] * ( xx [ 228 ] - xx [ 141 ]
) ; xx [ 142 ] = xx [ 140 ] * xx [ 71 ] - xx [ 78 ] * xx [ 60 ] ; xx [ 143 ]
= xx [ 71 ] * xx [ 42 ] + xx [ 78 ] * xx [ 126 ] ; xx [ 42 ] = xx [ 71 ] * xx
[ 6 ] + xx [ 78 ] * xx [ 129 ] ; xx [ 6 ] = xx [ 71 ] * xx [ 143 ] - xx [ 78
] * xx [ 42 ] ; xx [ 126 ] = xx [ 172 ] * xx [ 142 ] - xx [ 221 ] * xx [ 6 ]
; xx [ 129 ] = xx [ 71 ] * xx [ 125 ] + xx [ 78 ] * xx [ 73 ] - xx [ 118 ] -
xx [ 104 ] + xx [ 221 ] * xx [ 126 ] ; xx [ 145 ] = xx [ 121 ] - xx [ 126 ] ;
xx [ 146 ] = xx [ 136 ] * xx [ 71 ] - xx [ 78 ] * xx [ 86 ] ; xx [ 86 ] = xx
[ 54 ] * ( xx [ 192 ] - xx [ 22 ] * xx [ 82 ] + xx [ 196 ] ) * xx [ 54 ] ; xx
[ 136 ] = xx [ 106 ] - xx [ 141 ] ; xx [ 106 ] = xx [ 183 ] - xx [ 122 ] ; xx
[ 122 ] = xx [ 54 ] * ( xx [ 71 ] * xx [ 136 ] + xx [ 78 ] * xx [ 106 ] ) ;
xx [ 141 ] = xx [ 172 ] * xx [ 86 ] - xx [ 221 ] * xx [ 122 ] ; xx [ 148 ] =
xx [ 146 ] - xx [ 141 ] ; xx [ 150 ] = xx [ 71 ] * xx [ 91 ] - xx [ 78 ] * xx
[ 137 ] ; xx [ 91 ] = xx [ 60 ] * xx [ 71 ] + xx [ 78 ] * xx [ 140 ] ; xx [
60 ] = xx [ 71 ] * xx [ 42 ] + xx [ 78 ] * xx [ 143 ] ; xx [ 42 ] = xx [ 172
] * xx [ 91 ] - xx [ 221 ] * xx [ 60 ] ; xx [ 137 ] = xx [ 150 ] - xx [ 42 ]
; xx [ 140 ] = xx [ 197 ] - xx [ 36 ] * xx [ 81 ] ; xx [ 143 ] = xx [ 198 ] -
xx [ 36 ] * xx [ 47 ] ; xx [ 151 ] = xx [ 54 ] * ( xx [ 71 ] * xx [ 140 ] -
xx [ 78 ] * xx [ 143 ] ) ; xx [ 152 ] = xx [ 172 ] * xx [ 130 ] ; xx [ 159 ]
= xx [ 151 ] + xx [ 152 ] ; xx [ 161 ] = xx [ 54 ] * ( xx [ 191 ] - xx [ 36 ]
* xx [ 82 ] ) * xx [ 54 ] ; xx [ 163 ] = xx [ 54 ] * ( xx [ 71 ] * xx [ 106 ]
- xx [ 78 ] * xx [ 136 ] ) ; xx [ 106 ] = xx [ 172 ] * xx [ 163 ] ; xx [ 136
] = xx [ 161 ] + xx [ 106 ] ; xx [ 164 ] = xx [ 54 ] * ( xx [ 71 ] * xx [ 143
] + xx [ 78 ] * xx [ 140 ] ) ; xx [ 140 ] = xx [ 71 ] * xx [ 79 ] + xx [ 78 ]
* xx [ 103 ] ; xx [ 79 ] = xx [ 172 ] * xx [ 140 ] ; xx [ 103 ] = xx [ 164 ]
+ xx [ 79 ] ; xx [ 143 ] = xx [ 124 ] - xx [ 131 ] ; xx [ 165 ] = xx [ 221 ]
* xx [ 163 ] ; xx [ 167 ] = xx [ 32 ] - xx [ 165 ] ; xx [ 32 ] = xx [ 221 ] *
xx [ 140 ] ; xx [ 174 ] = xx [ 96 ] - xx [ 32 ] ; xx [ 258 ] = xx [ 145 ] ;
xx [ 259 ] = xx [ 148 ] ; xx [ 260 ] = xx [ 137 ] ; xx [ 261 ] = xx [ 159 ] ;
xx [ 262 ] = xx [ 136 ] ; xx [ 263 ] = xx [ 103 ] ; xx [ 264 ] = xx [ 143 ] ;
xx [ 265 ] = xx [ 167 ] ; xx [ 266 ] = xx [ 174 ] ; xx [ 96 ] = xx [ 172 ] *
xx [ 23 ] ; xx [ 194 ] = xx [ 8 ] * xx [ 96 ] * xx [ 29 ] ; xx [ 195 ] = -
0.1197 ; xx [ 196 ] = 0.145 - ( xx [ 8 ] * xx [ 96 ] * xx [ 23 ] - xx [ 172 ]
) ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 194 , xx + 203 ) ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 203 , xx + 211 ) ; xx [ 18 ] = xx [
23 ] * xx [ 213 ] ; xx [ 19 ] = xx [ 23 ] * xx [ 211 ] ; xx [ 20 ] = xx [ 211
] - xx [ 8 ] * ( xx [ 18 ] * xx [ 29 ] + xx [ 19 ] * xx [ 23 ] ) ; xx [ 96 ]
= 0.196125 ; xx [ 176 ] = xx [ 96 ] * state [ 5 ] ; xx [ 177 ] = xx [ 176 ] *
( xx [ 31 ] + xx [ 31 ] ) + xx [ 212 ] ; xx [ 31 ] = xx [ 213 ] + xx [ 8 ] *
( xx [ 19 ] * xx [ 29 ] - xx [ 18 ] * xx [ 23 ] ) - xx [ 176 ] * ( state [ 3
] + xx [ 30 ] ) ; xx [ 203 ] = xx [ 20 ] ; xx [ 204 ] = xx [ 177 ] ; xx [ 205
] = xx [ 31 ] ; pm_math_Matrix3x3_xform_ra ( xx + 258 , xx + 203 , xx + 211 )
; xx [ 18 ] = xx [ 36 ] / xx [ 90 ] ; xx [ 19 ] = xx [ 37 ] * xx [ 18 ] ; xx
[ 30 ] = xx [ 54 ] * ( xx [ 33 ] - xx [ 19 ] ) ; xx [ 33 ] = xx [ 36 ] * xx [
80 ] ; xx [ 37 ] = xx [ 54 ] * ( xx [ 41 ] - xx [ 33 ] ) ; xx [ 41 ] = xx [
172 ] * xx [ 124 ] ; xx [ 90 ] = xx [ 221 ] * xx [ 151 ] ; xx [ 124 ] = xx [
30 ] * xx [ 71 ] + xx [ 78 ] * xx [ 37 ] + xx [ 41 ] - xx [ 90 ] - xx [ 221 ]
* xx [ 152 ] ; xx [ 176 ] = xx [ 124 ] + xx [ 96 ] * xx [ 143 ] ; xx [ 180 ]
= state [ 4 ] + xx [ 1 ] ; if ( xx [ 2 ] < xx [ 180 ] ) xx [ 180 ] = xx [ 2 ]
; xx [ 183 ] = - ( xx [ 180 ] / xx [ 4 ] ) ; if ( xx [ 5 ] < xx [ 183 ] ) xx
[ 183 ] = xx [ 5 ] ; xx [ 184 ] = xx [ 9 ] * state [ 5 ] ; xx [ 191 ] = xx [
183 ] * xx [ 183 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 183 ] ) * ( ( - xx [ 180 ]
== xx [ 2 ] ? xx [ 2 ] : - xx [ 184 ] ) - xx [ 11 ] * xx [ 180 ] ) ; if ( xx
[ 2 ] > xx [ 191 ] ) xx [ 191 ] = xx [ 2 ] ; xx [ 180 ] = state [ 4 ] - xx [
1 ] ; if ( xx [ 2 ] > xx [ 180 ] ) xx [ 180 ] = xx [ 2 ] ; xx [ 183 ] = xx [
180 ] / xx [ 4 ] ; if ( xx [ 5 ] < xx [ 183 ] ) xx [ 183 ] = xx [ 5 ] ; xx [
192 ] = xx [ 183 ] * xx [ 183 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 183 ] ) * ( xx
[ 11 ] * xx [ 180 ] + ( xx [ 180 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 184 ] ) ) ;
if ( xx [ 2 ] > xx [ 192 ] ) xx [ 192 ] = xx [ 2 ] ; xx [ 180 ] = xx [ 83 ] -
xx [ 19 ] ; xx [ 19 ] = xx [ 93 ] - xx [ 33 ] ; xx [ 33 ] = xx [ 54 ] * ( xx
[ 71 ] * xx [ 180 ] + xx [ 78 ] * xx [ 19 ] ) - xx [ 90 ] + xx [ 41 ] - xx [
172 ] * xx [ 131 ] ; xx [ 41 ] = xx [ 172 ] * xx [ 161 ] - xx [ 221 ] * xx [
164 ] ; xx [ 83 ] = xx [ 172 ] * xx [ 121 ] ; xx [ 90 ] = xx [ 54 ] * ( xx [
71 ] * xx [ 19 ] - xx [ 78 ] * xx [ 180 ] ) - xx [ 41 ] + xx [ 83 ] - xx [
172 ] * xx [ 126 ] ; xx [ 19 ] = xx [ 39 ] + xx [ 95 ] + xx [ 36 ] * xx [ 116
] + xx [ 172 ] * xx [ 64 ] + xx [ 59 ] * xx [ 33 ] - xx [ 28 ] * xx [ 90 ] +
xx [ 212 ] ; xx [ 93 ] = 2.275 ; xx [ 95 ] = xx [ 93 ] + xx [ 130 ] ; xx [
258 ] = xx [ 95 ] ; xx [ 259 ] = xx [ 142 ] ; xx [ 260 ] = xx [ 6 ] ; xx [
261 ] = xx [ 163 ] ; xx [ 262 ] = xx [ 93 ] + xx [ 86 ] ; xx [ 263 ] = xx [
122 ] ; xx [ 264 ] = xx [ 140 ] ; xx [ 265 ] = xx [ 91 ] ; xx [ 266 ] = xx [
93 ] + xx [ 60 ] ; pm_math_Matrix3x3_xform_ra ( xx + 258 , xx + 203 , xx +
215 ) ; xx [ 121 ] = xx [ 64 ] + xx [ 59 ] * xx [ 143 ] - xx [ 28 ] * xx [
145 ] + xx [ 215 ] ; xx [ 126 ] = xx [ 172 ] * xx [ 151 ] ; xx [ 130 ] = xx [
24 ] + xx [ 54 ] * ( xx [ 62 ] - xx [ 36 ] * xx [ 18 ] ) * xx [ 54 ] + xx [
126 ] + xx [ 126 ] + xx [ 172 ] * xx [ 152 ] ; xx [ 36 ] = xx [ 130 ] + xx [
96 ] * xx [ 159 ] ; xx [ 54 ] = xx [ 159 ] + xx [ 96 ] * xx [ 95 ] ; xx [ 62
] = xx [ 36 ] + xx [ 96 ] * xx [ 54 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx
+ 62 , 1 , xx + 126 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/elbow_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 126 ] = ( input [ 0 ] + xx [ 191 ] - xx [ 192 ] - ( xx
[ 19 ] + xx [ 96 ] * xx [ 121 ] ) ) / xx [ 62 ] ; xx [ 131 ] = xx [ 40 ] + xx
[ 119 ] - xx [ 8 ] * ( xx [ 55 ] * xx [ 35 ] - xx [ 52 ] * xx [ 43 ] ) - xx [
221 ] * xx [ 64 ] + xx [ 59 ] * xx [ 135 ] - xx [ 28 ] * xx [ 129 ] + xx [
213 ] + xx [ 176 ] * xx [ 126 ] ; xx [ 39 ] = xx [ 61 ] - xx [ 8 ] * ( xx [
50 ] * xx [ 35 ] - xx [ 63 ] * xx [ 43 ] ) ; xx [ 40 ] = xx [ 53 ] + xx [ 175
] * xx [ 123 ] - xx [ 48 ] * xx [ 193 ] + xx [ 108 ] + xx [ 22 ] * xx [ 116 ]
; xx [ 22 ] = xx [ 71 ] * xx [ 74 ] - xx [ 78 ] * xx [ 85 ] - xx [ 104 ] - xx
[ 118 ] - ( xx [ 221 ] * xx [ 32 ] - xx [ 172 ] * xx [ 165 ] ) ; xx [ 32 ] =
xx [ 172 ] * xx [ 146 ] - xx [ 221 ] * xx [ 150 ] ; xx [ 50 ] = xx [ 24 ] +
xx [ 71 ] * xx [ 73 ] - xx [ 78 ] * xx [ 125 ] - xx [ 32 ] - xx [ 32 ] - ( xx
[ 221 ] * xx [ 42 ] - xx [ 172 ] * xx [ 141 ] ) ; xx [ 24 ] = xx [ 37 ] * xx
[ 71 ] - xx [ 78 ] * xx [ 30 ] + xx [ 83 ] - xx [ 41 ] - ( xx [ 172 ] * xx [
106 ] - xx [ 221 ] * xx [ 79 ] ) ; xx [ 30 ] = xx [ 24 ] + xx [ 96 ] * xx [
145 ] ; xx [ 32 ] = xx [ 38 ] + xx [ 57 ] - xx [ 8 ] * ( xx [ 55 ] * xx [ 43
] + xx [ 52 ] * xx [ 35 ] ) + xx [ 221 ] * xx [ 39 ] - xx [ 172 ] * xx [ 40 ]
+ xx [ 59 ] * xx [ 22 ] - xx [ 28 ] * xx [ 50 ] + xx [ 211 ] + xx [ 30 ] * xx
[ 126 ] ; xx [ 37 ] = xx [ 32 ] * xx [ 23 ] ; xx [ 38 ] = xx [ 131 ] * xx [
23 ] ; xx [ 41 ] = xx [ 121 ] + xx [ 54 ] * xx [ 126 ] ; xx [ 42 ] = xx [ 103
] + xx [ 96 ] * xx [ 140 ] ; xx [ 52 ] = xx [ 39 ] + xx [ 59 ] * xx [ 174 ] -
xx [ 28 ] * xx [ 137 ] + xx [ 217 ] + xx [ 42 ] * xx [ 126 ] ; xx [ 39 ] = xx
[ 52 ] * xx [ 23 ] ; xx [ 53 ] = xx [ 41 ] * xx [ 23 ] ; xx [ 55 ] = xx [ 41
] + xx [ 8 ] * ( xx [ 39 ] * xx [ 29 ] - xx [ 53 ] * xx [ 23 ] ) ; xx [ 41 ]
= xx [ 136 ] + xx [ 96 ] * xx [ 163 ] ; xx [ 57 ] = xx [ 40 ] + xx [ 59 ] *
xx [ 167 ] - xx [ 28 ] * xx [ 148 ] + xx [ 216 ] + xx [ 41 ] * xx [ 126 ] ;
xx [ 40 ] = xx [ 52 ] - xx [ 8 ] * ( xx [ 53 ] * xx [ 29 ] + xx [ 39 ] * xx [
23 ] ) ; xx [ 106 ] = xx [ 55 ] ; xx [ 107 ] = xx [ 57 ] ; xx [ 108 ] = xx [
40 ] ; pm_math_Vector3_cross_ra ( xx + 194 , xx + 106 , xx + 150 ) ; xx [ 39
] = xx [ 29 ] * xx [ 29 ] ; xx [ 52 ] = xx [ 8 ] * xx [ 39 ] - xx [ 5 ] ; xx
[ 53 ] = xx [ 54 ] / xx [ 62 ] ; xx [ 61 ] = xx [ 145 ] - xx [ 30 ] * xx [ 53
] ; xx [ 63 ] = xx [ 8 ] * xx [ 29 ] * xx [ 23 ] ; xx [ 64 ] = xx [ 42 ] / xx
[ 62 ] ; xx [ 71 ] = xx [ 137 ] - xx [ 30 ] * xx [ 64 ] ; xx [ 73 ] = xx [ 52
] * xx [ 61 ] + xx [ 63 ] * xx [ 71 ] ; xx [ 74 ] = xx [ 143 ] - xx [ 176 ] *
xx [ 53 ] ; xx [ 78 ] = xx [ 174 ] - xx [ 176 ] * xx [ 64 ] ; xx [ 79 ] = xx
[ 52 ] * xx [ 74 ] + xx [ 63 ] * xx [ 78 ] ; xx [ 83 ] = xx [ 52 ] * xx [ 73
] + xx [ 63 ] * xx [ 79 ] ; xx [ 85 ] = xx [ 95 ] - xx [ 54 ] * xx [ 53 ] ;
xx [ 54 ] = xx [ 42 ] * xx [ 53 ] ; xx [ 95 ] = xx [ 6 ] - xx [ 54 ] ; xx [ 6
] = xx [ 52 ] * xx [ 85 ] + xx [ 63 ] * xx [ 95 ] ; xx [ 104 ] = xx [ 140 ] -
xx [ 54 ] ; xx [ 54 ] = xx [ 60 ] - xx [ 42 ] * xx [ 64 ] + xx [ 93 ] ; xx [
60 ] = xx [ 52 ] * xx [ 104 ] + xx [ 63 ] * xx [ 54 ] ; xx [ 106 ] = xx [ 52
] * xx [ 6 ] + xx [ 63 ] * xx [ 60 ] ; xx [ 107 ] = xx [ 8 ] * ( xx [ 39 ] +
xx [ 23 ] * xx [ 23 ] ) - xx [ 5 ] ; xx [ 39 ] = xx [ 41 ] * xx [ 53 ] ; xx [
108 ] = xx [ 107 ] * ( xx [ 142 ] - xx [ 39 ] ) ; xx [ 109 ] = xx [ 41 ] / xx
[ 62 ] ; xx [ 118 ] = xx [ 42 ] * xx [ 109 ] ; xx [ 42 ] = xx [ 107 ] * ( xx
[ 91 ] - xx [ 118 ] ) ; xx [ 91 ] = xx [ 108 ] * xx [ 52 ] + xx [ 63 ] * xx [
42 ] ; xx [ 119 ] = xx [ 52 ] * xx [ 95 ] - xx [ 63 ] * xx [ 85 ] ; xx [ 85 ]
= xx [ 52 ] * xx [ 54 ] - xx [ 63 ] * xx [ 104 ] ; xx [ 54 ] = xx [ 52 ] * xx
[ 119 ] + xx [ 63 ] * xx [ 85 ] ; xx [ 95 ] = xx [ 163 ] - xx [ 39 ] ; xx [
39 ] = xx [ 122 ] - xx [ 118 ] ; xx [ 104 ] = xx [ 107 ] * ( xx [ 52 ] * xx [
95 ] + xx [ 63 ] * xx [ 39 ] ) ; xx [ 118 ] = xx [ 107 ] * ( xx [ 86 ] - xx [
41 ] * xx [ 109 ] + xx [ 93 ] ) * xx [ 107 ] ; xx [ 41 ] = xx [ 107 ] * ( xx
[ 52 ] * xx [ 39 ] - xx [ 63 ] * xx [ 95 ] ) ; xx [ 39 ] = xx [ 52 ] * xx [
60 ] - xx [ 63 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 42 ] * xx [ 52 ] - xx [ 63 ] *
xx [ 108 ] ; xx [ 42 ] = xx [ 52 ] * xx [ 85 ] - xx [ 63 ] * xx [ 119 ] ; xx
[ 258 ] = xx [ 106 ] ; xx [ 259 ] = xx [ 91 ] ; xx [ 260 ] = xx [ 54 ] ; xx [
261 ] = xx [ 104 ] ; xx [ 262 ] = xx [ 118 ] ; xx [ 263 ] = xx [ 41 ] ; xx [
264 ] = xx [ 39 ] ; xx [ 265 ] = xx [ 6 ] ; xx [ 266 ] = xx [ 42 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 258 , xx + 194 , xx + 267 ) ; xx [ 60 ]
= xx [ 83 ] - xx [ 267 ] ; xx [ 85 ] = xx [ 107 ] * ( xx [ 148 ] - xx [ 30 ]
* xx [ 109 ] ) ; xx [ 86 ] = xx [ 107 ] * ( xx [ 167 ] - xx [ 176 ] * xx [
109 ] ) ; xx [ 93 ] = xx [ 85 ] * xx [ 52 ] + xx [ 63 ] * xx [ 86 ] ; xx [ 95
] = xx [ 93 ] - xx [ 270 ] ; xx [ 108 ] = xx [ 52 ] * xx [ 71 ] - xx [ 63 ] *
xx [ 61 ] ; xx [ 61 ] = xx [ 52 ] * xx [ 78 ] - xx [ 63 ] * xx [ 74 ] ; xx [
71 ] = xx [ 52 ] * xx [ 108 ] + xx [ 63 ] * xx [ 61 ] ; xx [ 74 ] = xx [ 71 ]
- xx [ 273 ] ; xx [ 78 ] = xx [ 159 ] - xx [ 36 ] * xx [ 53 ] ; xx [ 119 ] =
xx [ 103 ] - xx [ 36 ] * xx [ 64 ] ; xx [ 103 ] = xx [ 107 ] * ( xx [ 52 ] *
xx [ 78 ] + xx [ 63 ] * xx [ 119 ] ) ; xx [ 121 ] = xx [ 103 ] - xx [ 268 ] ;
xx [ 122 ] = xx [ 107 ] * ( xx [ 136 ] - xx [ 36 ] * xx [ 109 ] ) * xx [ 107
] ; xx [ 125 ] = xx [ 122 ] - xx [ 271 ] ; xx [ 136 ] = xx [ 107 ] * ( xx [
52 ] * xx [ 119 ] - xx [ 63 ] * xx [ 78 ] ) ; xx [ 78 ] = xx [ 136 ] - xx [
274 ] ; xx [ 119 ] = xx [ 52 ] * xx [ 79 ] - xx [ 63 ] * xx [ 73 ] ; xx [ 73
] = xx [ 119 ] - xx [ 269 ] ; xx [ 79 ] = xx [ 86 ] * xx [ 52 ] - xx [ 63 ] *
xx [ 85 ] ; xx [ 85 ] = xx [ 79 ] - xx [ 272 ] ; xx [ 86 ] = xx [ 52 ] * xx [
61 ] - xx [ 63 ] * xx [ 108 ] ; xx [ 61 ] = xx [ 86 ] - xx [ 275 ] ; xx [ 258
] = xx [ 60 ] ; xx [ 259 ] = xx [ 95 ] ; xx [ 260 ] = xx [ 74 ] ; xx [ 261 ]
= xx [ 121 ] ; xx [ 262 ] = xx [ 125 ] ; xx [ 263 ] = xx [ 78 ] ; xx [ 264 ]
= xx [ 73 ] ; xx [ 265 ] = xx [ 85 ] ; xx [ 266 ] = xx [ 61 ] ; xx [ 108 ] =
0.28 ; xx [ 137 ] = xx [ 108 ] * xx [ 10 ] ; xx [ 140 ] = xx [ 8 ] * xx [ 137
] * xx [ 17 ] ; xx [ 141 ] = xx [ 140 ] * state [ 1 ] * state [ 1 ] ; xx [
142 ] = xx [ 141 ] * xx [ 10 ] ; xx [ 143 ] = xx [ 141 ] - xx [ 8 ] * xx [
142 ] * xx [ 10 ] ; xx [ 141 ] = 0.2800000000000001 ; xx [ 145 ] = xx [ 141 ]
* state [ 3 ] ; xx [ 146 ] = 0.13585 ; xx [ 148 ] = xx [ 145 ] * ( xx [ 15 ]
+ xx [ 15 ] ) - xx [ 146 ] * state [ 1 ] * state [ 1 ] ; xx [ 159 ] = xx [ 8
] * xx [ 142 ] * xx [ 17 ] ; xx [ 142 ] = xx [ 145 ] * state [ 3 ] ; xx [ 163
] = xx [ 143 ] ; xx [ 164 ] = xx [ 148 ] ; xx [ 165 ] = - ( xx [ 159 ] + xx [
142 ] ) ; pm_math_Matrix3x3_xform_ra ( xx + 258 , xx + 163 , xx + 191 ) ; xx
[ 145 ] = xx [ 15 ] * state [ 3 ] ; xx [ 15 ] = xx [ 30 ] / xx [ 62 ] ; xx [
161 ] = xx [ 176 ] * xx [ 15 ] ; xx [ 167 ] = xx [ 129 ] - xx [ 161 ] ; xx [
129 ] = xx [ 176 ] / xx [ 62 ] ; xx [ 174 ] = xx [ 135 ] - xx [ 176 ] * xx [
129 ] ; xx [ 135 ] = xx [ 52 ] * xx [ 167 ] + xx [ 63 ] * xx [ 174 ] ; xx [
175 ] = xx [ 50 ] - xx [ 30 ] * xx [ 15 ] ; xx [ 30 ] = xx [ 22 ] - xx [ 161
] ; xx [ 22 ] = xx [ 52 ] * xx [ 175 ] + xx [ 63 ] * xx [ 30 ] ; xx [ 258 ] =
xx [ 83 ] ; xx [ 259 ] = xx [ 93 ] ; xx [ 260 ] = xx [ 71 ] ; xx [ 261 ] = xx
[ 103 ] ; xx [ 262 ] = xx [ 122 ] ; xx [ 263 ] = xx [ 136 ] ; xx [ 264 ] = xx
[ 119 ] ; xx [ 265 ] = xx [ 79 ] ; xx [ 266 ] = xx [ 86 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 258 , xx + 194 , xx + 280 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 267 , xx + 194 , xx + 258 ) ; xx [ 50 ]
= xx [ 52 ] * xx [ 135 ] - xx [ 63 ] * xx [ 22 ] - xx [ 286 ] - xx [ 282 ] -
xx [ 264 ] ; xx [ 71 ] = xx [ 14 ] * state [ 3 ] ; xx [ 14 ] = xx [ 52 ] * xx
[ 174 ] - xx [ 63 ] * xx [ 167 ] ; xx [ 79 ] = xx [ 52 ] * xx [ 30 ] - xx [
63 ] * xx [ 175 ] ; xx [ 30 ] = xx [ 21 ] + xx [ 52 ] * xx [ 14 ] - xx [ 63 ]
* xx [ 79 ] - xx [ 288 ] - xx [ 288 ] - xx [ 266 ] ; xx [ 21 ] = xx [ 36 ] /
xx [ 62 ] ; xx [ 62 ] = xx [ 176 ] * xx [ 21 ] ; xx [ 83 ] = xx [ 107 ] * (
xx [ 124 ] - xx [ 62 ] ) ; xx [ 86 ] = xx [ 36 ] * xx [ 15 ] ; xx [ 93 ] = xx
[ 107 ] * ( xx [ 24 ] - xx [ 86 ] ) ; xx [ 24 ] = xx [ 83 ] * xx [ 52 ] - xx
[ 63 ] * xx [ 93 ] - xx [ 287 ] - xx [ 285 ] - xx [ 265 ] + xx [ 141 ] * xx [
73 ] ; xx [ 103 ] = state [ 2 ] + xx [ 1 ] ; if ( xx [ 2 ] < xx [ 103 ] ) xx
[ 103 ] = xx [ 2 ] ; xx [ 119 ] = - ( xx [ 103 ] / xx [ 4 ] ) ; if ( xx [ 5 ]
< xx [ 119 ] ) xx [ 119 ] = xx [ 5 ] ; xx [ 122 ] = xx [ 9 ] * state [ 3 ] ;
xx [ 9 ] = xx [ 119 ] * xx [ 119 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 119 ] ) * (
( - xx [ 103 ] == xx [ 2 ] ? xx [ 2 ] : - xx [ 122 ] ) - xx [ 11 ] * xx [ 103
] ) ; if ( xx [ 2 ] > xx [ 9 ] ) xx [ 9 ] = xx [ 2 ] ; xx [ 103 ] = state [ 2
] - xx [ 1 ] ; if ( xx [ 2 ] > xx [ 103 ] ) xx [ 103 ] = xx [ 2 ] ; xx [ 1 ]
= xx [ 103 ] / xx [ 4 ] ; if ( xx [ 5 ] < xx [ 1 ] ) xx [ 1 ] = xx [ 5 ] ; xx
[ 4 ] = xx [ 1 ] * xx [ 1 ] * ( xx [ 7 ] - xx [ 8 ] * xx [ 1 ] ) * ( xx [ 11
] * xx [ 103 ] + ( xx [ 103 ] == xx [ 2 ] ? xx [ 2 ] : xx [ 122 ] ) ) ; if (
xx [ 2 ] > xx [ 4 ] ) xx [ 4 ] = xx [ 2 ] ; xx [ 1 ] = xx [ 90 ] - xx [ 86 ]
; xx [ 7 ] = xx [ 33 ] - xx [ 62 ] ; xx [ 11 ] = 8.393000000000001 ; xx [ 33
] = xx [ 11 ] + xx [ 106 ] ; xx [ 267 ] = xx [ 33 ] ; xx [ 268 ] = xx [ 91 ]
; xx [ 269 ] = xx [ 54 ] ; xx [ 270 ] = xx [ 104 ] ; xx [ 271 ] = xx [ 11 ] +
xx [ 118 ] ; xx [ 272 ] = xx [ 41 ] ; xx [ 273 ] = xx [ 39 ] ; xx [ 274 ] =
xx [ 6 ] ; xx [ 275 ] = xx [ 11 ] + xx [ 42 ] ; pm_math_Matrix3x3_xform_ra (
xx + 267 , xx + 163 , xx + 174 ) ; xx [ 62 ] = xx [ 55 ] + xx [ 174 ] - ( xx
[ 145 ] * xx [ 60 ] - xx [ 71 ] * xx [ 73 ] ) ; xx [ 55 ] = xx [ 107 ] * ( xx
[ 130 ] - xx [ 36 ] * xx [ 21 ] ) * xx [ 107 ] - xx [ 284 ] - xx [ 284 ] - xx
[ 262 ] + xx [ 141 ] * xx [ 121 ] + xx [ 16 ] ; xx [ 86 ] = xx [ 121 ] + xx [
141 ] * xx [ 33 ] ; xx [ 90 ] = xx [ 55 ] + xx [ 141 ] * xx [ 86 ] ; ii [ 0 ]
= factorSymmetricPosDef ( xx + 90 , 1 , xx + 103 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/shoulder_lift_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 103 ] = ( input [ 1 ] + xx [ 9 ] - xx [ 4 ] - ( xx [
26 ] + xx [ 19 ] + xx [ 36 ] * xx [ 126 ] + xx [ 151 ] + xx [ 192 ] - ( xx [
145 ] * ( xx [ 107 ] * ( xx [ 52 ] * xx [ 1 ] + xx [ 63 ] * xx [ 7 ] ) - xx [
283 ] - xx [ 281 ] - xx [ 261 ] ) - xx [ 71 ] * ( xx [ 107 ] * ( xx [ 52 ] *
xx [ 7 ] - xx [ 63 ] * xx [ 1 ] ) - xx [ 285 ] - xx [ 287 ] - xx [ 263 ] ) )
+ xx [ 141 ] * xx [ 62 ] ) ) / xx [ 90 ] ; xx [ 1 ] = xx [ 27 ] + xx [ 131 ]
- xx [ 8 ] * ( xx [ 37 ] * xx [ 29 ] + xx [ 38 ] * xx [ 23 ] ) + xx [ 152 ] +
xx [ 193 ] - ( xx [ 145 ] * xx [ 50 ] - xx [ 71 ] * xx [ 30 ] ) + xx [ 24 ] *
xx [ 103 ] ; xx [ 4 ] = xx [ 16 ] + xx [ 52 ] * xx [ 22 ] + xx [ 63 ] * xx [
135 ] - xx [ 280 ] - xx [ 280 ] - xx [ 258 ] ; xx [ 7 ] = xx [ 52 ] * xx [ 79
] + xx [ 63 ] * xx [ 14 ] - xx [ 282 ] - xx [ 286 ] - xx [ 260 ] ; xx [ 9 ] =
xx [ 93 ] * xx [ 52 ] + xx [ 63 ] * xx [ 83 ] - xx [ 281 ] - xx [ 283 ] - xx
[ 259 ] + xx [ 141 ] * xx [ 60 ] ; xx [ 163 ] = - xx [ 140 ] ; xx [ 164 ] =
xx [ 146 ] ; xx [ 165 ] = - ( xx [ 8 ] * xx [ 137 ] * xx [ 10 ] - xx [ 108 ]
) ; xx [ 14 ] = xx [ 62 ] + xx [ 86 ] * xx [ 103 ] ; xx [ 16 ] = xx [ 78 ] +
xx [ 141 ] * xx [ 39 ] ; xx [ 19 ] = xx [ 40 ] + xx [ 176 ] - ( xx [ 145 ] *
xx [ 74 ] - xx [ 71 ] * xx [ 61 ] ) + xx [ 16 ] * xx [ 103 ] ; xx [ 22 ] = xx
[ 19 ] * xx [ 10 ] ; xx [ 26 ] = xx [ 14 ] * xx [ 10 ] ; xx [ 27 ] = xx [ 125
] + xx [ 141 ] * xx [ 104 ] ; xx [ 106 ] = xx [ 14 ] - xx [ 8 ] * ( xx [ 22 ]
* xx [ 17 ] + xx [ 26 ] * xx [ 10 ] ) ; xx [ 107 ] = xx [ 57 ] + xx [ 175 ] -
( xx [ 145 ] * xx [ 95 ] - xx [ 71 ] * xx [ 85 ] ) + xx [ 27 ] * xx [ 103 ] ;
xx [ 108 ] = xx [ 19 ] - xx [ 8 ] * ( xx [ 22 ] * xx [ 10 ] - xx [ 26 ] * xx
[ 17 ] ) ; pm_math_Vector3_cross_ra ( xx + 163 , xx + 106 , xx + 135 ) ; xx [
14 ] = xx [ 17 ] * xx [ 17 ] ; xx [ 19 ] = xx [ 8 ] * xx [ 14 ] - xx [ 5 ] ;
xx [ 22 ] = xx [ 24 ] / xx [ 90 ] ; xx [ 26 ] = xx [ 8 ] * xx [ 17 ] * xx [
10 ] ; xx [ 36 ] = xx [ 9 ] / xx [ 90 ] ; xx [ 40 ] = xx [ 24 ] * xx [ 36 ] ;
xx [ 52 ] = xx [ 86 ] / xx [ 90 ] ; xx [ 57 ] = xx [ 60 ] - xx [ 9 ] * xx [
52 ] ; xx [ 60 ] = xx [ 16 ] / xx [ 90 ] ; xx [ 62 ] = xx [ 74 ] - xx [ 9 ] *
xx [ 60 ] ; xx [ 63 ] = xx [ 19 ] * xx [ 57 ] - xx [ 26 ] * xx [ 62 ] ; xx [
74 ] = xx [ 73 ] - xx [ 24 ] * xx [ 52 ] ; xx [ 73 ] = xx [ 61 ] - xx [ 24 ]
* xx [ 60 ] ; xx [ 61 ] = xx [ 19 ] * xx [ 74 ] - xx [ 26 ] * xx [ 73 ] ; xx
[ 79 ] = xx [ 8 ] * ( xx [ 14 ] + xx [ 10 ] * xx [ 10 ] ) - xx [ 5 ] ; xx [ 5
] = xx [ 27 ] / xx [ 90 ] ; xx [ 14 ] = xx [ 79 ] * ( xx [ 95 ] - xx [ 9 ] *
xx [ 5 ] ) ; xx [ 83 ] = xx [ 79 ] * ( xx [ 85 ] - xx [ 24 ] * xx [ 5 ] ) ;
xx [ 85 ] = xx [ 19 ] * xx [ 62 ] + xx [ 26 ] * xx [ 57 ] ; xx [ 57 ] = xx [
19 ] * xx [ 73 ] + xx [ 26 ] * xx [ 74 ] ; xx [ 62 ] = xx [ 121 ] - xx [ 55 ]
* xx [ 52 ] ; xx [ 73 ] = xx [ 78 ] - xx [ 55 ] * xx [ 60 ] ; xx [ 74 ] = xx
[ 19 ] * xx [ 57 ] + xx [ 26 ] * xx [ 85 ] ; xx [ 258 ] = xx [ 19 ] * xx [ 63
] - xx [ 26 ] * xx [ 61 ] ; xx [ 259 ] = xx [ 14 ] * xx [ 19 ] - xx [ 26 ] *
xx [ 83 ] ; xx [ 260 ] = xx [ 19 ] * xx [ 85 ] - xx [ 26 ] * xx [ 57 ] ; xx [
261 ] = xx [ 79 ] * ( xx [ 19 ] * xx [ 62 ] - xx [ 26 ] * xx [ 73 ] ) ; xx [
262 ] = xx [ 79 ] * ( xx [ 125 ] - xx [ 55 ] * xx [ 5 ] ) * xx [ 79 ] ; xx [
263 ] = xx [ 79 ] * ( xx [ 19 ] * xx [ 73 ] + xx [ 26 ] * xx [ 62 ] ) ; xx [
264 ] = xx [ 19 ] * xx [ 61 ] + xx [ 26 ] * xx [ 63 ] ; xx [ 265 ] = xx [ 83
] * xx [ 19 ] + xx [ 26 ] * xx [ 14 ] ; xx [ 266 ] = xx [ 74 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 258 , xx + 163 , xx + 267 ) ; xx [ 14 ]
= xx [ 33 ] - xx [ 86 ] * xx [ 52 ] ; xx [ 33 ] = xx [ 16 ] * xx [ 52 ] ; xx
[ 55 ] = xx [ 54 ] - xx [ 33 ] ; xx [ 54 ] = xx [ 19 ] * xx [ 14 ] - xx [ 26
] * xx [ 55 ] ; xx [ 57 ] = xx [ 39 ] - xx [ 33 ] ; xx [ 33 ] = xx [ 42 ] -
xx [ 16 ] * xx [ 60 ] + xx [ 11 ] ; xx [ 39 ] = xx [ 19 ] * xx [ 57 ] - xx [
26 ] * xx [ 33 ] ; xx [ 42 ] = xx [ 27 ] * xx [ 52 ] ; xx [ 61 ] = xx [ 79 ]
* ( xx [ 91 ] - xx [ 42 ] ) ; xx [ 62 ] = xx [ 16 ] * xx [ 5 ] ; xx [ 16 ] =
xx [ 79 ] * ( xx [ 6 ] - xx [ 62 ] ) ; xx [ 6 ] = xx [ 19 ] * xx [ 55 ] + xx
[ 26 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 19 ] * xx [ 33 ] + xx [ 26 ] * xx [ 57
] ; xx [ 33 ] = xx [ 104 ] - xx [ 42 ] ; xx [ 42 ] = xx [ 41 ] - xx [ 62 ] ;
xx [ 258 ] = xx [ 19 ] * xx [ 54 ] - xx [ 26 ] * xx [ 39 ] ; xx [ 259 ] = xx
[ 61 ] * xx [ 19 ] - xx [ 26 ] * xx [ 16 ] ; xx [ 260 ] = xx [ 19 ] * xx [ 6
] - xx [ 26 ] * xx [ 14 ] ; xx [ 261 ] = xx [ 79 ] * ( xx [ 19 ] * xx [ 33 ]
- xx [ 26 ] * xx [ 42 ] ) ; xx [ 262 ] = xx [ 79 ] * ( xx [ 118 ] - xx [ 27 ]
* xx [ 5 ] + xx [ 11 ] ) * xx [ 79 ] ; xx [ 263 ] = xx [ 79 ] * ( xx [ 19 ] *
xx [ 42 ] + xx [ 26 ] * xx [ 33 ] ) ; xx [ 264 ] = xx [ 19 ] * xx [ 39 ] + xx
[ 26 ] * xx [ 54 ] ; xx [ 265 ] = xx [ 16 ] * xx [ 19 ] + xx [ 26 ] * xx [ 61
] ; xx [ 266 ] = xx [ 19 ] * xx [ 14 ] + xx [ 26 ] * xx [ 6 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 258 , xx + 163 , xx + 280 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 280 , xx + 163 , xx + 258 ) ; xx [ 6 ] =
6.660000000000001e-3 + xx [ 19 ] * ( xx [ 19 ] * ( xx [ 30 ] - xx [ 24 ] * xx
[ 22 ] ) + xx [ 26 ] * ( xx [ 50 ] - xx [ 40 ] ) ) + xx [ 26 ] * ( xx [ 19 ]
* ( xx [ 7 ] - xx [ 40 ] ) + xx [ 26 ] * ( xx [ 4 ] - xx [ 9 ] * xx [ 36 ] )
) - xx [ 275 ] - xx [ 275 ] - xx [ 266 ] ; ii [ 0 ] = factorSymmetricPosDef (
xx + 6 , 1 , xx + 11 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ur5bh/Dynamic/shoulder_pan_joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 11 ] = 9.806649999999999 ; xx [ 14 ] = ( input [ 2 ] +
xx [ 12 ] - xx [ 13 ] - ( xx [ 1 ] - xx [ 8 ] * ( xx [ 1 ] * xx [ 10 ] * xx [
10 ] - ( xx [ 25 ] + xx [ 32 ] + xx [ 8 ] * ( xx [ 38 ] * xx [ 29 ] - xx [ 37
] * xx [ 23 ] ) + xx [ 150 ] + xx [ 191 ] - ( xx [ 145 ] * xx [ 4 ] - xx [ 71
] * xx [ 7 ] ) + xx [ 9 ] * xx [ 103 ] ) * xx [ 10 ] * xx [ 17 ] ) + xx [ 137
] ) ) / xx [ 6 ] - xx [ 11 ] * ( xx [ 74 ] - xx [ 288 ] ) / xx [ 6 ] ; xx [ 1
] = xx [ 14 ] * xx [ 10 ] ; xx [ 4 ] = xx [ 14 ] - xx [ 8 ] * xx [ 1 ] * xx [
10 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 1 ] * xx [ 17 ] ; xx [ 24 ] = xx [ 52 ] ;
xx [ 25 ] = xx [ 5 ] ; xx [ 26 ] = xx [ 60 ] ; xx [ 1 ] = xx [ 146 ] * xx [
14 ] ; xx [ 5 ] = xx [ 1 ] * xx [ 10 ] ; xx [ 7 ] = xx [ 11 ] * xx [ 10 ] ;
xx [ 9 ] = xx [ 8 ] * ( xx [ 5 ] * xx [ 10 ] + xx [ 7 ] * xx [ 17 ] ) - xx [
1 ] ; xx [ 1 ] = xx [ 140 ] * xx [ 14 ] ; xx [ 12 ] = xx [ 8 ] * ( xx [ 7 ] *
xx [ 10 ] - xx [ 5 ] * xx [ 17 ] ) ; xx [ 37 ] = xx [ 9 ] ; xx [ 38 ] = - xx
[ 1 ] ; xx [ 39 ] = xx [ 11 ] - xx [ 12 ] ; xx [ 5 ] = xx [ 103 ] - ( xx [ 4
] * xx [ 22 ] + xx [ 6 ] * xx [ 36 ] + pm_math_Vector3_dot_ra ( xx + 24 , xx
+ 37 ) ) ; xx [ 24 ] = xx [ 15 ] ; xx [ 25 ] = xx [ 21 ] ; xx [ 26 ] = xx [
129 ] ; xx [ 7 ] = xx [ 145 ] - xx [ 6 ] ; xx [ 6 ] = xx [ 7 ] * xx [ 23 ] ;
xx [ 10 ] = xx [ 4 ] + xx [ 71 ] ; xx [ 4 ] = xx [ 10 ] * xx [ 23 ] ; xx [ 13
] = xx [ 8 ] * ( xx [ 6 ] * xx [ 23 ] - xx [ 4 ] * xx [ 29 ] ) - xx [ 7 ] ;
xx [ 15 ] = xx [ 10 ] - xx [ 8 ] * ( xx [ 6 ] * xx [ 29 ] + xx [ 4 ] * xx [
23 ] ) ; xx [ 36 ] = xx [ 13 ] ; xx [ 37 ] = xx [ 5 ] ; xx [ 38 ] = xx [ 15 ]
; xx [ 39 ] = xx [ 53 ] ; xx [ 40 ] = xx [ 109 ] ; xx [ 41 ] = xx [ 64 ] ; xx
[ 52 ] = - xx [ 7 ] ; xx [ 53 ] = xx [ 5 ] ; xx [ 54 ] = xx [ 10 ] ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 194 , xx + 60 ) ; xx [ 4 ] = xx [ 9
] + xx [ 141 ] * xx [ 5 ] + xx [ 143 ] + xx [ 60 ] ; xx [ 6 ] = xx [ 62 ] - (
xx [ 159 ] + xx [ 12 ] + xx [ 142 ] ) + xx [ 11 ] ; xx [ 7 ] = xx [ 6 ] * xx
[ 23 ] ; xx [ 9 ] = xx [ 4 ] * xx [ 23 ] ; xx [ 10 ] = xx [ 4 ] - xx [ 8 ] *
( xx [ 7 ] * xx [ 29 ] + xx [ 9 ] * xx [ 23 ] ) ; xx [ 4 ] = xx [ 148 ] - xx
[ 1 ] + xx [ 61 ] ; xx [ 1 ] = xx [ 6 ] + xx [ 8 ] * ( xx [ 9 ] * xx [ 29 ] -
xx [ 7 ] * xx [ 23 ] ) ; xx [ 21 ] = xx [ 10 ] ; xx [ 22 ] = xx [ 4 ] ; xx [
23 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 126 ] - ( pm_math_Vector3_dot_ra ( xx + 24
, xx + 36 ) + pm_math_Vector3_dot_ra ( xx + 39 , xx + 21 ) ) ; xx [ 21 ] = xx
[ 80 ] ; xx [ 22 ] = xx [ 18 ] ; xx [ 23 ] = xx [ 72 ] ; xx [ 7 ] = xx [ 13 ]
- xx [ 28 ] ; xx [ 9 ] = xx [ 7 ] * xx [ 35 ] ; xx [ 11 ] = xx [ 15 ] + xx [
59 ] ; xx [ 12 ] = xx [ 11 ] * xx [ 35 ] ; xx [ 13 ] = xx [ 7 ] - xx [ 8 ] *
( xx [ 9 ] * xx [ 35 ] - xx [ 12 ] * xx [ 43 ] ) ; xx [ 15 ] = xx [ 5 ] + xx
[ 6 ] ; xx [ 16 ] = xx [ 11 ] - xx [ 8 ] * ( xx [ 9 ] * xx [ 43 ] + xx [ 12 ]
* xx [ 35 ] ) ; xx [ 17 ] = xx [ 13 ] ; xx [ 18 ] = xx [ 15 ] ; xx [ 19 ] =
xx [ 16 ] ; xx [ 24 ] = xx [ 81 ] ; xx [ 25 ] = xx [ 82 ] ; xx [ 26 ] = xx [
47 ] ; xx [ 9 ] = xx [ 10 ] + xx [ 96 ] * xx [ 6 ] + xx [ 20 ] + xx [ 172 ] *
xx [ 15 ] - xx [ 221 ] * xx [ 11 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 35 ] ; xx [
11 ] = xx [ 1 ] + xx [ 31 ] + xx [ 221 ] * xx [ 7 ] ; xx [ 1 ] = xx [ 11 ] *
xx [ 35 ] ; xx [ 12 ] = xx [ 9 ] - xx [ 8 ] * ( xx [ 10 ] * xx [ 35 ] - xx [
1 ] * xx [ 43 ] ) ; xx [ 9 ] = xx [ 4 ] + xx [ 177 ] - xx [ 172 ] * xx [ 7 ]
; xx [ 4 ] = xx [ 11 ] - xx [ 8 ] * ( xx [ 10 ] * xx [ 43 ] + xx [ 1 ] * xx [
35 ] ) ; xx [ 27 ] = xx [ 12 ] ; xx [ 28 ] = xx [ 9 ] ; xx [ 29 ] = xx [ 4 ]
; xx [ 1 ] = xx [ 116 ] - ( pm_math_Vector3_dot_ra ( xx + 21 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 24 , xx + 27 ) ) ; xx [ 17 ] = xx [ 77 ] ; xx [
18 ] = xx [ 92 ] ; xx [ 19 ] = xx [ 144 ] ; xx [ 7 ] = xx [ 13 ] - xx [ 48 ]
; xx [ 10 ] = xx [ 15 ] + xx [ 1 ] ; xx [ 11 ] = xx [ 10 ] * xx [ 46 ] ; xx [
13 ] = xx [ 7 ] * xx [ 46 ] ; xx [ 15 ] = xx [ 7 ] + xx [ 8 ] * ( xx [ 11 ] *
xx [ 49 ] - xx [ 13 ] * xx [ 46 ] ) ; xx [ 20 ] = xx [ 10 ] - xx [ 8 ] * ( xx
[ 13 ] * xx [ 49 ] + xx [ 11 ] * xx [ 46 ] ) ; xx [ 11 ] = xx [ 16 ] + xx [
123 ] ; xx [ 21 ] = xx [ 15 ] ; xx [ 22 ] = xx [ 20 ] ; xx [ 23 ] = xx [ 11 ]
; xx [ 24 ] = xx [ 158 ] ; xx [ 25 ] = xx [ 168 ] ; xx [ 26 ] = xx [ 199 ] ;
xx [ 13 ] = xx [ 12 ] + xx [ 224 ] * xx [ 1 ] + xx [ 34 ] + xx [ 102 ] * xx [
10 ] ; xx [ 10 ] = xx [ 9 ] + xx [ 233 ] - xx [ 102 ] * xx [ 7 ] ; xx [ 7 ] =
xx [ 10 ] * xx [ 46 ] ; xx [ 9 ] = xx [ 13 ] * xx [ 46 ] ; xx [ 12 ] = xx [
13 ] + xx [ 8 ] * ( xx [ 7 ] * xx [ 49 ] - xx [ 9 ] * xx [ 46 ] ) ; xx [ 13 ]
= xx [ 10 ] - xx [ 8 ] * ( xx [ 9 ] * xx [ 49 ] + xx [ 7 ] * xx [ 46 ] ) ; xx
[ 7 ] = xx [ 4 ] + xx [ 44 ] ; xx [ 27 ] = xx [ 12 ] ; xx [ 28 ] = xx [ 13 ]
; xx [ 29 ] = xx [ 7 ] ; xx [ 4 ] = xx [ 84 ] - ( pm_math_Vector3_dot_ra ( xx
+ 17 , xx + 21 ) + pm_math_Vector3_dot_ra ( xx + 24 , xx + 27 ) ) ; xx [ 16 ]
= xx [ 94 ] ; xx [ 17 ] = xx [ 51 ] ; xx [ 18 ] = xx [ 117 ] ; xx [ 9 ] = xx
[ 15 ] + xx [ 75 ] ; xx [ 10 ] = xx [ 11 ] + xx [ 4 ] ; xx [ 11 ] = xx [ 10 ]
* xx [ 56 ] ; xx [ 15 ] = xx [ 9 ] * xx [ 56 ] ; xx [ 19 ] = xx [ 9 ] - xx [
8 ] * ( xx [ 11 ] * xx [ 58 ] + xx [ 15 ] * xx [ 56 ] ) ; xx [ 21 ] = xx [ 20
] - xx [ 149 ] ; xx [ 20 ] = xx [ 10 ] + xx [ 8 ] * ( xx [ 15 ] * xx [ 58 ] -
xx [ 11 ] * xx [ 56 ] ) ; xx [ 22 ] = xx [ 19 ] ; xx [ 23 ] = xx [ 21 ] ; xx
[ 24 ] = xx [ 20 ] ; xx [ 25 ] = xx [ 139 ] ; xx [ 26 ] = xx [ 147 ] ; xx [
27 ] = xx [ 101 ] ; xx [ 11 ] = xx [ 12 ] + xx [ 169 ] - xx [ 112 ] * xx [ 10
] ; xx [ 10 ] = xx [ 7 ] - xx [ 166 ] + xx [ 112 ] * xx [ 9 ] ; xx [ 7 ] = xx
[ 10 ] * xx [ 56 ] ; xx [ 9 ] = xx [ 11 ] * xx [ 56 ] ; xx [ 12 ] = xx [ 11 ]
- xx [ 8 ] * ( xx [ 7 ] * xx [ 58 ] + xx [ 9 ] * xx [ 56 ] ) ; xx [ 11 ] = xx
[ 13 ] + xx [ 157 ] ; xx [ 13 ] = xx [ 10 ] + xx [ 8 ] * ( xx [ 9 ] * xx [ 58
] - xx [ 7 ] * xx [ 56 ] ) ; xx [ 28 ] = xx [ 12 ] ; xx [ 29 ] = xx [ 11 ] ;
xx [ 30 ] = xx [ 13 ] ; xx [ 7 ] = xx [ 110 ] - ( pm_math_Vector3_dot_ra ( xx
+ 16 , xx + 22 ) + pm_math_Vector3_dot_ra ( xx + 25 , xx + 28 ) ) ; xx [ 15 ]
= xx [ 128 ] ; xx [ 16 ] = xx [ 132 ] ; xx [ 17 ] = xx [ 88 ] ; xx [ 9 ] = xx
[ 19 ] - xx [ 160 ] ; xx [ 10 ] = xx [ 3 ] * xx [ 3 ] * xx [ 9 ] ; xx [ 18 ]
= xx [ 21 ] + xx [ 7 ] ; xx [ 19 ] = xx [ 3 ] * xx [ 3 ] * xx [ 18 ] ; xx [
21 ] = xx [ 9 ] - xx [ 8 ] * ( xx [ 10 ] - xx [ 19 ] ) ; xx [ 22 ] = xx [ 20
] + xx [ 171 ] ; xx [ 20 ] = xx [ 69 ] * xx [ 22 ] ; xx [ 23 ] = xx [ 69 ] *
xx [ 21 ] ; xx [ 24 ] = xx [ 21 ] - xx [ 8 ] * ( xx [ 68 ] * xx [ 20 ] + xx [
69 ] * xx [ 23 ] ) ; xx [ 21 ] = xx [ 18 ] - xx [ 8 ] * ( xx [ 10 ] + xx [ 19
] ) ; xx [ 10 ] = xx [ 257 ] * xx [ 21 ] ; xx [ 18 ] = xx [ 257 ] * xx [ 24 ]
; xx [ 19 ] = xx [ 24 ] - xx [ 8 ] * ( xx [ 10 ] * xx [ 291 ] + xx [ 18 ] *
xx [ 257 ] ) ; xx [ 25 ] = xx [ 21 ] - xx [ 8 ] * ( xx [ 10 ] * xx [ 257 ] -
xx [ 18 ] * xx [ 291 ] ) ; xx [ 10 ] = xx [ 22 ] - xx [ 8 ] * ( xx [ 69 ] *
xx [ 20 ] - xx [ 68 ] * xx [ 23 ] ) ; xx [ 26 ] = xx [ 19 ] ; xx [ 27 ] = xx
[ 25 ] ; xx [ 28 ] = xx [ 10 ] ; xx [ 29 ] = xx [ 276 ] ; xx [ 30 ] = xx [
279 ] ; xx [ 31 ] = xx [ 243 ] ; xx [ 18 ] = xx [ 12 ] + xx [ 162 ] * xx [ 7
] + xx [ 210 ] - xx [ 76 ] * xx [ 22 ] ; xx [ 12 ] = xx [ 3 ] * xx [ 3 ] * xx
[ 18 ] ; xx [ 20 ] = xx [ 11 ] + xx [ 214 ] ; xx [ 11 ] = xx [ 3 ] * xx [ 3 ]
* xx [ 20 ] ; xx [ 3 ] = xx [ 18 ] - xx [ 8 ] * ( xx [ 12 ] - xx [ 11 ] ) +
xx [ 308 ] ; xx [ 18 ] = xx [ 13 ] + xx [ 45 ] + xx [ 76 ] * xx [ 9 ] + xx [
230 ] ; xx [ 9 ] = xx [ 69 ] * xx [ 18 ] ; xx [ 13 ] = xx [ 69 ] * xx [ 3 ] ;
xx [ 22 ] = xx [ 3 ] - xx [ 8 ] * ( xx [ 68 ] * xx [ 9 ] + xx [ 69 ] * xx [
13 ] ) ; xx [ 32 ] = xx [ 24 ] ; xx [ 33 ] = xx [ 21 ] ; xx [ 34 ] = xx [ 10
] ; pm_math_Vector3_cross_ra ( xx + 32 , xx + 343 , xx + 35 ) ; xx [ 3 ] = xx
[ 22 ] + xx [ 35 ] ; xx [ 23 ] = xx [ 20 ] - xx [ 8 ] * ( xx [ 12 ] + xx [ 11
] ) + xx [ 277 ] ; xx [ 11 ] = xx [ 23 ] + xx [ 36 ] ; xx [ 12 ] = xx [ 257 ]
* xx [ 11 ] ; xx [ 20 ] = xx [ 257 ] * xx [ 3 ] ; xx [ 38 ] = xx [ 3 ] - xx [
8 ] * ( xx [ 12 ] * xx [ 291 ] + xx [ 20 ] * xx [ 257 ] ) ; xx [ 3 ] = xx [
11 ] - xx [ 8 ] * ( xx [ 12 ] * xx [ 257 ] - xx [ 20 ] * xx [ 291 ] ) ; xx [
11 ] = xx [ 18 ] - xx [ 8 ] * ( xx [ 69 ] * xx [ 9 ] - xx [ 68 ] * xx [ 13 ]
) ; xx [ 9 ] = xx [ 11 ] + xx [ 37 ] ; xx [ 35 ] = xx [ 38 ] ; xx [ 36 ] = xx
[ 3 ] ; xx [ 37 ] = xx [ 9 ] ; xx [ 12 ] = xx [ 317 ] - (
pm_math_Vector3_dot_ra ( xx + 15 , xx + 26 ) + pm_math_Vector3_dot_ra ( xx +
29 , xx + 35 ) ) ; xx [ 13 ] = xx [ 25 ] + xx [ 178 ] ; xx [ 15 ] = xx [ 10 ]
- xx [ 12 ] ; xx [ 16 ] = xx [ 19 ] - xx [ 115 ] ; xx [ 17 ] = xx [ 38 ] + xx
[ 153 ] + xx [ 133 ] * xx [ 13 ] ; xx [ 18 ] = xx [ 3 ] + xx [ 249 ] * xx [
12 ] + xx [ 65 ] - ( xx [ 134 ] * xx [ 15 ] + xx [ 133 ] * xx [ 16 ] ) ; xx [
19 ] = xx [ 9 ] + xx [ 67 ] + xx [ 134 ] * xx [ 13 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 298 , xx + 17 , xx + 25 ) ; xx [ 17
] = xx [ 16 ] ; xx [ 18 ] = xx [ 13 ] ; xx [ 19 ] = xx [ 15 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 298 , xx + 17 , xx + 27 ) ; xx [ 3
] = xx [ 322 ] - ( xx [ 292 ] * xx [ 25 ] + xx [ 306 ] * xx [ 26 ] - xx [ 182
] * xx [ 29 ] ) ; xx [ 15 ] = xx [ 114 ] ; xx [ 16 ] = xx [ 120 ] ; xx [ 17 ]
= xx [ 87 ] ; xx [ 9 ] = xx [ 21 ] * xx [ 179 ] ; xx [ 13 ] = xx [ 24 ] * xx
[ 179 ] ; xx [ 18 ] = xx [ 24 ] - xx [ 8 ] * ( xx [ 9 ] * xx [ 185 ] + xx [
13 ] * xx [ 179 ] ) ; xx [ 19 ] = xx [ 21 ] - xx [ 8 ] * ( xx [ 9 ] * xx [
179 ] - xx [ 13 ] * xx [ 185 ] ) ; xx [ 25 ] = xx [ 18 ] ; xx [ 26 ] = xx [
19 ] ; xx [ 27 ] = xx [ 10 ] ; xx [ 35 ] = xx [ 173 ] ; xx [ 36 ] = xx [ 227
] ; xx [ 37 ] = xx [ 170 ] ; pm_math_Vector3_cross_ra ( xx + 32 , xx + 251 ,
xx + 38 ) ; xx [ 9 ] = xx [ 22 ] + xx [ 38 ] ; xx [ 13 ] = xx [ 23 ] + xx [
39 ] ; xx [ 20 ] = xx [ 13 ] * xx [ 179 ] ; xx [ 28 ] = xx [ 9 ] * xx [ 179 ]
; xx [ 30 ] = xx [ 9 ] - xx [ 8 ] * ( xx [ 20 ] * xx [ 185 ] + xx [ 28 ] * xx
[ 179 ] ) ; xx [ 9 ] = xx [ 13 ] - xx [ 8 ] * ( xx [ 20 ] * xx [ 179 ] - xx [
28 ] * xx [ 185 ] ) ; xx [ 13 ] = xx [ 11 ] + xx [ 40 ] ; xx [ 38 ] = xx [ 30
] ; xx [ 39 ] = xx [ 9 ] ; xx [ 40 ] = xx [ 13 ] ; xx [ 20 ] = xx [ 254 ] - (
pm_math_Vector3_dot_ra ( xx + 15 , xx + 25 ) + pm_math_Vector3_dot_ra ( xx +
35 , xx + 38 ) ) ; xx [ 15 ] = xx [ 19 ] - xx [ 201 ] ; xx [ 16 ] = xx [ 10 ]
+ xx [ 20 ] ; xx [ 17 ] = xx [ 18 ] + xx [ 188 ] ; xx [ 25 ] = xx [ 30 ] + xx
[ 256 ] + xx [ 133 ] * xx [ 15 ] ; xx [ 26 ] = xx [ 9 ] - xx [ 249 ] * xx [
20 ] + xx [ 181 ] - ( xx [ 134 ] * xx [ 16 ] + xx [ 133 ] * xx [ 17 ] ) ; xx
[ 27 ] = xx [ 13 ] + xx [ 250 ] + xx [ 134 ] * xx [ 15 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 206 , xx + 25 , xx + 35 ) ; xx [ 25
] = xx [ 17 ] ; xx [ 26 ] = xx [ 15 ] ; xx [ 27 ] = xx [ 16 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 206 , xx + 25 , xx + 15 ) ; xx [ 9
] = xx [ 234 ] - ( xx [ 202 ] * xx [ 35 ] + xx [ 222 ] * xx [ 36 ] - xx [ 187
] * xx [ 17 ] ) ; pm_math_Vector3_cross_ra ( xx + 32 , xx + 154 , xx + 25 ) ;
xx [ 13 ] = xx [ 22 ] + xx [ 25 ] ; xx [ 15 ] = xx [ 23 ] + xx [ 26 ] ; xx [
16 ] = xx [ 70 ] * xx [ 15 ] ; xx [ 18 ] = xx [ 70 ] * xx [ 13 ] ; xx [ 19 ]
= xx [ 70 ] * xx [ 24 ] ; xx [ 22 ] = xx [ 70 ] * xx [ 21 ] ; xx [ 23 ] = xx
[ 21 ] + xx [ 8 ] * ( xx [ 66 ] * xx [ 19 ] - xx [ 70 ] * xx [ 22 ] ) ; xx [
21 ] = xx [ 24 ] - xx [ 8 ] * ( xx [ 66 ] * xx [ 22 ] + xx [ 70 ] * xx [ 19 ]
) ; xx [ 24 ] = xx [ 13 ] - xx [ 8 ] * ( xx [ 66 ] * xx [ 16 ] + xx [ 70 ] *
xx [ 18 ] ) + xx [ 186 ] + xx [ 133 ] * xx [ 23 ] ; xx [ 25 ] = xx [ 15 ] +
xx [ 8 ] * ( xx [ 66 ] * xx [ 18 ] - xx [ 70 ] * xx [ 16 ] ) + xx [ 190 ] - (
xx [ 134 ] * xx [ 10 ] + xx [ 133 ] * xx [ 21 ] ) ; xx [ 26 ] = xx [ 11 ] +
xx [ 27 ] + xx [ 189 ] + xx [ 134 ] * xx [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 97 , xx + 24 , xx + 30 ) ; xx [ 24
] = xx [ 21 ] ; xx [ 25 ] = xx [ 23 ] ; xx [ 26 ] = xx [ 10 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 97 , xx + 24 , xx + 21 ) ; xx [ 8 ]
= xx [ 138 ] - ( xx [ 89 ] * xx [ 30 ] + xx [ 113 ] * xx [ 31 ] - xx [ 237 ]
* xx [ 23 ] ) ; logVector [ 0 ] = xx [ 0 ] * state [ 0 ] ; logVector [ 1 ] =
xx [ 0 ] * state [ 1 ] ; logVector [ 2 ] = xx [ 0 ] * state [ 2 ] ; logVector
[ 3 ] = xx [ 0 ] * state [ 3 ] ; logVector [ 4 ] = xx [ 0 ] * state [ 4 ] ;
logVector [ 5 ] = xx [ 0 ] * state [ 5 ] ; logVector [ 6 ] = xx [ 0 ] * state
[ 6 ] ; logVector [ 7 ] = xx [ 0 ] * state [ 7 ] ; logVector [ 8 ] = xx [ 0 ]
* state [ 8 ] ; logVector [ 9 ] = xx [ 0 ] * state [ 9 ] ; logVector [ 10 ] =
xx [ 0 ] * state [ 10 ] ; logVector [ 11 ] = xx [ 0 ] * state [ 11 ] ;
logVector [ 12 ] = xx [ 0 ] * state [ 12 ] ; logVector [ 13 ] = xx [ 0 ] *
state [ 13 ] ; logVector [ 14 ] = xx [ 0 ] * state [ 14 ] ; logVector [ 15 ]
= xx [ 0 ] * state [ 15 ] ; logVector [ 16 ] = xx [ 0 ] * state [ 16 ] ;
logVector [ 17 ] = xx [ 0 ] * state [ 17 ] ; logVector [ 18 ] = xx [ 0 ] *
state [ 18 ] ; logVector [ 19 ] = xx [ 0 ] * state [ 19 ] ; logVector [ 20 ]
= xx [ 0 ] * state [ 20 ] ; logVector [ 21 ] = xx [ 0 ] * state [ 21 ] ;
logVector [ 22 ] = xx [ 0 ] * state [ 22 ] ; logVector [ 23 ] = xx [ 0 ] *
state [ 23 ] ; logVector [ 24 ] = xx [ 0 ] * state [ 24 ] ; logVector [ 25 ]
= xx [ 0 ] * state [ 25 ] ; logVector [ 26 ] = xx [ 0 ] * state [ 26 ] ;
logVector [ 27 ] = xx [ 0 ] * state [ 27 ] ; logVector [ 28 ] = xx [ 0 ] * xx
[ 14 ] ; logVector [ 29 ] = xx [ 0 ] * xx [ 5 ] ; logVector [ 30 ] = xx [ 0 ]
* xx [ 6 ] ; logVector [ 31 ] = xx [ 0 ] * xx [ 1 ] ; logVector [ 32 ] = xx [
0 ] * xx [ 4 ] ; logVector [ 33 ] = xx [ 0 ] * xx [ 7 ] ; logVector [ 34 ] =
xx [ 0 ] * xx [ 12 ] ; logVector [ 35 ] = xx [ 0 ] * xx [ 3 ] ; logVector [
36 ] = xx [ 0 ] * ( xx [ 105 ] + ( xx [ 29 ] - xx [ 3 ] ) * xx [ 312 ] ) ;
logVector [ 37 ] = xx [ 0 ] * xx [ 20 ] ; logVector [ 38 ] = xx [ 0 ] * xx [
9 ] ; logVector [ 39 ] = xx [ 0 ] * ( xx [ 225 ] + ( xx [ 17 ] - xx [ 9 ] ) *
xx [ 220 ] ) ; logVector [ 40 ] = xx [ 0 ] * xx [ 8 ] ; logVector [ 41 ] = xx
[ 0 ] * ( xx [ 127 ] + ( xx [ 23 ] - xx [ 8 ] ) * xx [ 111 ] ) ; errorResult
[ 0 ] = xx [ 2 ] ; return NULL ; }
