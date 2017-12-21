/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Vector6d (header).
 */

#ifndef ASN1VECTOR6DUTILS_H
#define ASN1VECTOR6DUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"

// Creation
asn1SccVector6d Vector6d_create(double v0, double v1, double v2, double v3, double v4, double v5);

// Element access
inline static double Vector6d_i(const asn1SccVector6d* v, int i) { return v->arr[i]; }

// Utilities
asn1SccVector6d Vector6d_normalize(const asn1SccVector6d* v);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ASN1VECTOR6DUTILS_H
