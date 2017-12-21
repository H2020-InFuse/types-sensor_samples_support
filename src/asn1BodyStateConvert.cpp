/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1BodyState (implementation).
 */

#include "asn1BodyStateConvert.hpp"
#include "asn1TransformWithCovarianceConvert.hpp"
#include "asn1TwistWithCovarianceConvert.hpp"
#include "asn1TimeConvert.hpp"

void BodyState_fromAsn1(base::samples::BodyState& result, const asn1SccBodyState& asnVal)
{
    Time_fromAsn1(result.time, asnVal.ref_time);
    TransformWithCovariance_fromAsn1(result.pose, asnVal.pose);
    TwistWithCovariance_fromAsn1(result.velocity, asnVal.velocity);
}

void BodyState_toAsn1(asn1SccBodyState& result, const base::samples::BodyState& baseObj)
{
    Time_toAsn1(result.ref_time, baseObj.time);
    TransformWithCovariance_toAsn1(result.pose, baseObj.pose);
    TwistWithCovariance_toAsn1(result.velocity, baseObj.velocity);
}


