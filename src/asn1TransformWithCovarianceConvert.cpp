/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TransformWithCovariance (implementation).
 */

#include "asn1TransformWithCovarianceConvert.hpp"
#include "asn1Matrix6dConvert.hpp"
#include "asn1OrientationConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void TransformWithCovariance_fromAsn1(base::TransformWithCovariance& result, const asn1SccTransformWithCovariance& asnVal)
{
    Vector3d_fromAsn1(result.translation, asnVal.translation);
    Orientation_fromAsn1(result.orientation, asnVal.orientation);
    Matrix6d_fromAsn1(result.cov, asnVal.cov);
}


void TransformWithCovariance_toAsn1(asn1SccTransformWithCovariance& result, const base::TransformWithCovariance& baseObj)
{
    Vector3d_toAsn1(result.translation, baseObj.translation);
    Orientation_toAsn1(result.orientation, baseObj.orientation);
    Matrix6d_toAsn1(result.cov, baseObj.cov);
}


