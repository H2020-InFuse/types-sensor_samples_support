/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1SccOrientation (header).
 */

#ifndef ASN1ORIENTATIONUTILS_H
#define ASN1ORIENTATIONUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"

// Creation
asn1SccOrientation Orientation_create(double w, double x, double y, double z);

// Element access: quaternion = w + xi + yj +zk
inline static double Orientation_w(const asn1SccOrientation* asn) { return asn->arr[3]; }
inline static double Orientation_x(const asn1SccOrientation* asn) { return asn->arr[0]; }
inline static double Orientation_y(const asn1SccOrientation* asn) { return asn->arr[1]; }
inline static double Orientation_z(const asn1SccOrientation* asn) { return asn->arr[2]; }

// Utilities
asn1SccOrientation Orientation_angleAxis(double radians, const asn1SccVector3d* axis);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ASN1ORIENTATIONUTILS_H
