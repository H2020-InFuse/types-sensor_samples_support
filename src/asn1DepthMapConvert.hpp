/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1DepthMap (header).
 */

#ifndef ASN1DEPTHMAPCONVERT_HPP
#define ASN1DEPTHMAPCONVERT_HPP

#include "asn1Types.h"
#include "base/samples/DepthMap.hpp"

// Conversion functions
void DepthMap_fromAsn1(base::samples::DepthMap& result, const asn1SccDepthMap& asnVal);
void DepthMap_toAsn1(asn1SccDepthMap& result, const base::samples::DepthMap& baseObj);

#endif //ASN1DEPTHMAPCONVERT_HPP
