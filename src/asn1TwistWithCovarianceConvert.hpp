/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TwistWithCovariance (header).
 */

#ifndef ASN1TWISTWITHCOVARIANCECONVERT_HPP
#define ASN1TWISTWITHCOVARIANCECONVERT_HPP

#include "asn1Types.h"
#include "base/TwistWithCovariance.hpp"

// Conversion functions
void TwistWithCovariance_fromAsn1(base::TwistWithCovariance& result, const asn1SccTwistWithCovariance& asnVal);
void TwistWithCovariance_toAsn1(asn1SccTwistWithCovariance& result, const base::TwistWithCovariance& baseObj);

#endif //ASN1TWISTWITHCOVARIANCECONVERT_HPP
