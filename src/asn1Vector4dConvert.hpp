/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Vector4d (header).
 */

#ifndef ASN1VECTOR4DCONVERT_HPP
#define ASN1VECTOR4DCONVERT_HPP

#include "asn1Types.h"
#include "base/Eigen.hpp"

// Conversion functions
void Vector4d_fromAsn1(base::Vector4d& result, const asn1SccVector4d& asnVal);
void Vector4d_toAsn1(asn1SccVector4d& result, const base::Vector4d& baseObj);

#endif //ASN1VECTOR4DCONVERT_HPP
