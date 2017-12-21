/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Matrix3d (header).
 */

#ifndef ASN1MATRIX3DCONVERT_HPP
#define ASN1MATRIX3DCONVERT_HPP

#include "asn1Types.h"
#include "base/Eigen.hpp"

// Conversion functions
void Matrix3d_fromAsn1(base::Matrix3d& result, const asn1SccMatrix3d& asnVal);
void Matrix3d_toAsn1(asn1SccMatrix3d& result, const base::Matrix3d& baseObj);

#endif //ASN1MATRIX3DCONVERT_HPP
