/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1RigidBodyState (header).
 */

#ifndef ASN1RIGIDBODYSTATECONVERT_HPP
#define ASN1RIGIDBODYSTATECONVERT_HPP

#include "asn1Types.h"
#include "base/samples/RigidBodyState.hpp"

// Conversion functions
void RigidBodyState_fromAsn1(base::samples::RigidBodyState& result, const asn1SccRigidBodyState& asnVal);
void RigidBodyState_toAsn1(asn1SccRigidBodyState& result, const base::samples::RigidBodyState& baseObj);

#endif //ASN1RIGIDBODYSTATECONVERT_HPP
