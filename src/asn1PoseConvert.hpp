/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Pose (header).
 */

#ifndef ASN1POSECONVERT_HPP
#define ASN1POSECONVERT_HPP

#include "asn1Types.h"
#include "base/Pose.hpp"

// Conversion functions
void Pose_fromAsn1(base::Pose& result, const asn1SccPose& asnVal);
void Pose_toAsn1(asn1SccPose& result, const base::Pose& baseObj);

#endif //ASN1POSECONVERT_HPP
