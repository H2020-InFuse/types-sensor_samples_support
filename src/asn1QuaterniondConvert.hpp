/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Quaterniond (header).
 */

#ifndef ASN1QUATERNION3DCONVERT_HPP
#define ASN1QUATERNION3DCONVERT_HPP

#include "asn1Types.h"
#include "base/Eigen.hpp"

// Conversion functions
void Quaterniond_fromAsn1(base::Quaterniond& result, const asn1SccQuaterniond& asnVal);
void Quaterniond_toAsn1(asn1SccQuaterniond& result, const base::Quaterniond& baseObj);

#endif //ASN1QUATERNION3DCONVERT_HPP
