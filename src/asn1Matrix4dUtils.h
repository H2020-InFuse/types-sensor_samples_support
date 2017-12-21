/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Matrix4d (header).
 */

#ifndef ASN1MATRIX4DUTILS_H
#define ASN1MATRIX4DUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"

// Element access; matrixes stored in Column-Major order (default in Eigen)
inline static double Matrix4d_get(const asn1SccMatrix4d* asn, int i, int j)
{
    return asn->arr[j].arr[i];
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ASN1MATRIX4DUTILS_H
