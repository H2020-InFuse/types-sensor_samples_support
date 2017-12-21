/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccOrientation (header).
 */

#ifndef ASN1ORIENTATIONCONVERT_HPP
#define ASN1ORIENTATIONCONVERT_HPP

#include "asn1Types.h"
#include "base/Pose.hpp"

// Conversion functions
void Orientation_fromAsn1(base::Orientation& result, const asn1SccOrientation& asnVal);
void Orientation_toAsn1(asn1SccOrientation& result, const base::Orientation& baseObj);

#endif //ASN1ORIENTATIONCONVERT_HPP
