/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Quaterniond (header).
 */

#ifndef ASN1QUATERNION3DUTILS_H
#define ASN1QUATERNION3DUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"

// Creation
asn1SccQuaterniond Quaterniond_create(double w, double x, double y, double z);

// Element access: quaternion = w + xi + yj +zk
inline static double Quaterniond_w(const asn1SccQuaterniond* asn) { return asn->arr[3]; }
inline static double Quaterniond_x(const asn1SccQuaterniond* asn) { return asn->arr[0]; }
inline static double Quaterniond_y(const asn1SccQuaterniond* asn) { return asn->arr[1]; }
inline static double Quaterniond_z(const asn1SccQuaterniond* asn) { return asn->arr[2]; }

// Utilities
asn1SccQuaterniond Quaterniond_angleAxis(double radians, const asn1SccVector3d* axis);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ASN1QUATERNION3DUTILS_H
