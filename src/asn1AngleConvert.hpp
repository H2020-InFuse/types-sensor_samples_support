/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Angle (header).
 */

#ifndef ASN1ANGLECONVERT_HPP
#define ASN1ANGLECONVERT_HPP

#include "asn1Types.h"
#include "base/Angle.hpp"

// Conversion functions
void Angle_fromAsn1(base::Angle& result, const asn1SccAngle& asnVal);
void Angle_toAsn1(asn1SccAngle& result, const base::Angle& baseObj);

void AngleSegment_fromAsn1(base::AngleSegment& result, const asn1SccAngleSegment& asnVal);
void AngleSegment_toAsn1(asn1SccAngleSegment& result, const base::AngleSegment& baseObj);

#endif //ASN1ANGLECONVERT_HPP
