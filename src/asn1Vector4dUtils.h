/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Vector4d (header).
 */

#ifndef ASN1VECTOR4DUTILS_H
#define ASN1VECTOR4DUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"

// Creation
asn1SccVector4d Vector4d_create(double x, double y, double z, double w);

// Element access
inline static double Vector4d_x(const asn1SccVector4d* v) { return v->arr[0]; }
inline static double Vector4d_y(const asn1SccVector4d* v) { return v->arr[1]; }
inline static double Vector4d_z(const asn1SccVector4d* v) { return v->arr[2]; }
inline static double Vector4d_w(const asn1SccVector4d* v) { return v->arr[3]; }

// Utilities
asn1SccVector4d Vector4d_normalize(const asn1SccVector4d* v);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ASN1VECTOR4DUTILS_H
