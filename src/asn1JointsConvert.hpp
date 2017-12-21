/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Joints (header).
 */

#ifndef ASN1JOINTSCONVERT_HPP
#define ASN1JOINTSCONVERT_HPP

#include "asn1Types.h"
#include "base/samples/Joints.hpp"

// Conversion functions
void Joints_fromAsn1(base::samples::Joints& result, const asn1SccJoints& asnVal);
void Joints_toAsn1(asn1SccJoints& result, const base::samples::Joints& baseObj);

#endif //ASN1JOINTSCONVERT_HPP
