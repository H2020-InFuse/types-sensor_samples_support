/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Pose (implementation).
 */

#include "asn1PoseConvert.hpp"
#include "asn1OrientationConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void Pose_fromAsn1(base::Pose& result, const asn1SccPose& asnVal)
{
    Vector3d_fromAsn1(result.position, asnVal.pos);
    Orientation_fromAsn1(result.orientation, asnVal.orient);
}


void Pose_toAsn1(asn1SccPose& result, const base::Pose& baseObj)
{
    Vector3d_toAsn1(result.pos, baseObj.position);
    Orientation_toAsn1(result.orient, baseObj.orientation);
}


