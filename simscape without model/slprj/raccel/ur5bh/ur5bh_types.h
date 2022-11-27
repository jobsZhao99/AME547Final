#ifndef RTW_HEADER_ur5bh_types_h_
#define RTW_HEADER_ur5bh_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef struct_tag_OXsSBS5uVDavZp4vbYKETG
#define struct_tag_OXsSBS5uVDavZp4vbYKETG
struct tag_OXsSBS5uVDavZp4vbYKETG { boolean_T matlabCodegenIsDeleted ; void *
CollisionPrimitive ; } ;
#endif
#ifndef typedef_c5znbsemt0
#define typedef_c5znbsemt0
typedef struct tag_OXsSBS5uVDavZp4vbYKETG c5znbsemt0 ;
#endif
#ifndef struct_tag_xcgxZ5He9ABYYFkMb0gw9F
#define struct_tag_xcgxZ5He9ABYYFkMb0gw9F
struct tag_xcgxZ5He9ABYYFkMb0gw9F { real_T f1 [ 36 ] ; } ;
#endif
#ifndef typedef_cmsq43dhts
#define typedef_cmsq43dhts
typedef struct tag_xcgxZ5He9ABYYFkMb0gw9F cmsq43dhts ;
#endif
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T { char_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_esknw0palk
#define typedef_esknw0palk
typedef struct emxArray_char_T esknw0palk ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_ja0ozpu1qr
#define typedef_ja0ozpu1qr
typedef struct emxArray_real_T ja0ozpu1qr ;
#endif
#ifndef typedef_ih1a22iqzu
#define typedef_ih1a22iqzu
typedef struct { c5znbsemt0 * * data ; int32_T * size ; int32_T allocatedSize
; int32_T numDimensions ; boolean_T canFreeData ; } ih1a22iqzu ;
#endif
#ifndef struct_tag_Cqnxnc08da43HsiMCKoHlE
#define struct_tag_Cqnxnc08da43HsiMCKoHlE
struct tag_Cqnxnc08da43HsiMCKoHlE { esknw0palk * Type ; ja0ozpu1qr *
MotionSubspace ; real_T JointToParentTransform [ 16 ] ; real_T
ChildToJointTransform [ 16 ] ; real_T JointAxisInternal [ 3 ] ; } ;
#endif
#ifndef typedef_d0bxqavfyq
#define typedef_d0bxqavfyq
typedef struct tag_Cqnxnc08da43HsiMCKoHlE d0bxqavfyq ;
#endif
#ifndef struct_tag_00yCXi7nR9pQk8H9si1uXF
#define struct_tag_00yCXi7nR9pQk8H9si1uXF
struct tag_00yCXi7nR9pQk8H9si1uXF { ih1a22iqzu * CollisionGeometries ; real_T
MaxElements ; c5znbsemt0 _pobj0 ; } ;
#endif
#ifndef typedef_aepf3nbc2k
#define typedef_aepf3nbc2k
typedef struct tag_00yCXi7nR9pQk8H9si1uXF aepf3nbc2k ;
#endif
#ifndef struct_tag_WMeMNR4DMNIJg72fJedFsF
#define struct_tag_WMeMNR4DMNIJg72fJedFsF
struct tag_WMeMNR4DMNIJg72fJedFsF { real_T Index ; esknw0palk * NameInternal
; d0bxqavfyq JointInternal ; real_T ParentIndex ; real_T SpatialInertia [ 36
] ; aepf3nbc2k CollisionsInternal ; } ;
#endif
#ifndef typedef_jn4o4x3xvo
#define typedef_jn4o4x3xvo
typedef struct tag_WMeMNR4DMNIJg72fJedFsF jn4o4x3xvo ;
#endif
#ifndef struct_tag_dDbn9nuPzfwmG9VbuQBHFG
#define struct_tag_dDbn9nuPzfwmG9VbuQBHFG
struct tag_dDbn9nuPzfwmG9VbuQBHFG { real_T NumBodies ; jn4o4x3xvo Base ;
real_T Gravity [ 3 ] ; jn4o4x3xvo * Bodies [ 10 ] ; real_T PositionDoFMap [
20 ] ; real_T VelocityDoFMap [ 20 ] ; jn4o4x3xvo _pobj0 [ 10 ] ; } ;
#endif
#ifndef typedef_oi2sf35czq
#define typedef_oi2sf35czq
typedef struct tag_dDbn9nuPzfwmG9VbuQBHFG oi2sf35czq ;
#endif
#ifndef struct_tag_QrMzrKHdwPLcbFnm8bPbGB
#define struct_tag_QrMzrKHdwPLcbFnm8bPbGB
struct tag_QrMzrKHdwPLcbFnm8bPbGB { int32_T isInitialized ; oi2sf35czq
TreeInternal ; } ;
#endif
#ifndef typedef_n235grlapm
#define typedef_n235grlapm
typedef struct tag_QrMzrKHdwPLcbFnm8bPbGB n235grlapm ;
#endif
#ifndef struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
#define struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
struct emxArray_tag_xcgxZ5He9ABYYFkMb0 { cmsq43dhts * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_hfv5schqsp
#define typedef_hfv5schqsp
typedef struct emxArray_tag_xcgxZ5He9ABYYFkMb0 hfv5schqsp ;
#endif
typedef struct P_ P ;
#endif
