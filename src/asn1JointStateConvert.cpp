/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1JointState (implementation).
 */

#include "asn1JointStateConvert.hpp"
#include "asn1TransformWithCovarianceConvert.hpp"
#include "asn1TwistWithCovarianceConvert.hpp"
#include "asn1TimeConvert.hpp"

void JointState_fromAsn1(base::JointState& result, const asn1SccJointState& asnVal)
{
    result.position = asnVal.position;
    result.speed = asnVal.speed;
    result.effort = asnVal.effort;
    result.raw = asnVal.raw;
    result.acceleration = asnVal.acceleration;
}

void JointState_toAsn1(asn1SccJointState& result, const base::JointState& baseObj)
{
    result.position = baseObj.position;
    result.speed = baseObj.speed;
    result.effort = baseObj.effort;
    result.raw = baseObj.raw;
    result.acceleration = baseObj.acceleration;
}


