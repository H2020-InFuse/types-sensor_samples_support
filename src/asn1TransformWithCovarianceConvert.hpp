/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TransformWithCovariance (header).
 */

#ifndef ASN1TRANSFORMWITHCOVARIANCECONVERT_HPP
#define ASN1TRANSFORMWITHCOVARIANCECONVERT_HPP

#include "asn1Types.h"
#include "base/TransformWithCovariance.hpp"

// Conversion functions
void TransformWithCovariance_fromAsn1(base::TransformWithCovariance& result, const asn1SccTransformWithCovariance& asnVal);
void TransformWithCovariance_toAsn1(asn1SccTransformWithCovariance& result, const base::TransformWithCovariance& baseObj);

#endif //ASN1TRANSFORMWITHCOVARIANCECONVERT_HPP
