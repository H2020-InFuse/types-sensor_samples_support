/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1JointState (header).
 */

#ifndef ASN1JOINTSTATECONVERT_HPP
#define ASN1JOINTSTATECONVERT_HPP

#include "asn1Types.h"
#include "base/JointState.hpp"

// Conversion functions
void JointState_fromAsn1(base::JointState& result, const asn1SccJointState& asnVal);
void JointState_toAsn1(asn1SccJointState& result, const base::JointState& baseObj);

#endif //ASN1JOINTSTATECONVERT_HPP
