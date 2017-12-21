/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Matrix6d (header).
 */

#ifndef ASN1MATRIX6DCONVERT_HPP
#define ASN1MATRIX6DCONVERT_HPP

#include "asn1Types.h"
#include "base/Eigen.hpp"

// Conversion functions
void Matrix6d_fromAsn1(base::Matrix6d& result, const asn1SccMatrix6d& asnVal);
void Matrix6d_toAsn1(asn1SccMatrix6d& result, const base::Matrix6d& baseObj);

#endif //ASN1MATRIX6DCONVERT_HPP
