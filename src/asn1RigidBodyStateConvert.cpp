/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1RigidBodyState (implementation).
 */

#include "asn1RigidBodyStateConvert.hpp"
#include "asn1Matrix3dConvert.hpp"
#include "asn1OrientationConvert.hpp"
#include "asn1StringConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void RigidBodyState_fromAsn1(base::samples::RigidBodyState& result, const asn1SccRigidBodyState& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.timestamp);
    // sourceFrame
    String_fromAsn1(result.sourceFrame, asnVal.sourceFrame);
    // targetFrame
    String_fromAsn1(result.targetFrame, asnVal.targetFrame);
    // position
    Vector3d_fromAsn1(result.position, asnVal.pos);
    // cov_position
    Matrix3d_fromAsn1(result.cov_position, asnVal.cov_position);
    // orientation
    Orientation_fromAsn1(result.orientation, asnVal.orient);
    // cov_orientation
    Matrix3d_fromAsn1(result.cov_orientation, asnVal.cov_orientation);
    // velocity
    Vector3d_fromAsn1(result.velocity, asnVal.velocity);
    // cov_velocity
    Matrix3d_fromAsn1(result.cov_velocity, asnVal.cov_velocity);
    // angular_velocity
    Vector3d_fromAsn1(result.angular_velocity, asnVal.angular_velocity);
    // cov_angular_velocity
    Matrix3d_fromAsn1(result.cov_angular_velocity, asnVal.cov_angular_velocity);
}


void RigidBodyState_toAsn1(asn1SccRigidBodyState& result, const base::samples::RigidBodyState& baseObj)
{
    // time
    Time_toAsn1(result.timestamp, baseObj.time);
    // sourceFrame
    String_toAsn1(result.sourceFrame, baseObj.sourceFrame);
    // targetFrame
    String_toAsn1(result.targetFrame, baseObj.targetFrame);
    // position
    Vector3d_toAsn1(result.pos, baseObj.position);
    // cov_position
    Matrix3d_toAsn1(result.cov_position, baseObj.cov_position);
    // orientation
    Orientation_toAsn1(result.orient, baseObj.orientation);
    // cov_orientation
    Matrix3d_toAsn1(result.cov_orientation, baseObj.cov_orientation);
    // velocity
    Vector3d_toAsn1(result.velocity, baseObj.velocity);
    // cov_velocity
    Matrix3d_toAsn1(result.cov_velocity, baseObj.cov_velocity);
    // angular_velocity
    Vector3d_toAsn1(result.angular_velocity, baseObj.angular_velocity);
    // cov_angular_velocity
    Matrix3d_toAsn1(result.cov_angular_velocity, baseObj.cov_angular_velocity);
}


