/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Matrix4d (header).
 */

#ifndef ASN1MATRIX4DCONVERT_HPP
#define ASN1MATRIX4DCONVERT_HPP

#include "asn1Types.h"
#include "base/Eigen.hpp"

// Conversion functions
void Matrix4d_fromAsn1(base::Matrix4d& result, const asn1SccMatrix4d& asnVal);
void Matrix4d_toAsn1(asn1SccMatrix4d& result, const base::Matrix4d& baseObj);

#endif //ASN1MATRIX4DCONVERT_HPP
