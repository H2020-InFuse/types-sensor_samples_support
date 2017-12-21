/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1BodyState (header).
 */

#ifndef ASN1BODYSTATECONVERT_HPP
#define ASN1BODYSTATECONVERT_HPP

#include "asn1Types.h"
#include "base/samples/BodyState.hpp"

// Conversion functions
void BodyState_fromAsn1(base::samples::BodyState& result, const asn1SccBodyState& asnVal);
void BodyState_toAsn1(asn1SccBodyState& result, const base::samples::BodyState& baseObj);

#endif //ASN1BODYSTATECONVERT_HPP
