/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Vector3d (header).
 */

#ifndef ASN1VECTOR3DUTILS_H
#define ASN1VECTOR3DUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"

// Creation
asn1SccVector3d Vector3d_create(double x, double y, double z);

// Element access
inline static double Vector3d_x(const asn1SccVector3d* v) { return v->arr[0]; }
inline static double Vector3d_y(const asn1SccVector3d* v) { return v->arr[1]; }
inline static double Vector3d_z(const asn1SccVector3d* v) { return v->arr[2]; }

// Utilities
asn1SccVector3d Vector3d_normalize(const asn1SccVector3d* v);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ASN1VECTOR3DUTILS_H
