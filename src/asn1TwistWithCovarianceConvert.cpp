/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TwistWithCovariance (implementation).
 */

#include "asn1TwistWithCovarianceConvert.hpp"
#include "asn1Matrix6dConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void TwistWithCovariance_fromAsn1(base::TwistWithCovariance& result, const asn1SccTwistWithCovariance& asnVal)
{
    Vector3d_fromAsn1(result.vel, asnVal.vel);
    Vector3d_fromAsn1(result.rot, asnVal.rot);
    Matrix6d_fromAsn1(result.cov, asnVal.cov);
}


void TwistWithCovariance_toAsn1(asn1SccTwistWithCovariance& result, const base::TwistWithCovariance& baseObj)
{
    Vector3d_toAsn1(result.vel, baseObj.vel);
    Vector3d_toAsn1(result.rot, baseObj.rot);
    Matrix6d_toAsn1(result.cov, baseObj.cov);
}


