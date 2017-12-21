/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * A header file to import all the asn1 types either from the 
 * types library or from dataview-uniq.h (if building from TASTE).
 */

#ifndef ASN1TYPES_HPP
#define ASN1TYPES_HPP

// Include types generated from ASN.1. These are either:
// - in dataview-uniq.h, if building from TASTE
//   (IMPORTANT: note that the order of includes matters)
// - in the asn1, if building from outside TASTE
// We distingush between the two cases by checking the include variable
#ifndef _INC_DATAVIEW_UNIQ_H
#ifndef GENERATED_ASN1_DATAVIEW_UNIQ_H
#include "asn1/asn1crt.h"
//#include "asn1/AUVMotion.h"
//#include "asn1/AUVPosition.h"
#include "asn1/Angle.h"
//#include "asn1/ApplicationCodes.h"
#include "asn1/BodyState.h"
//#include "asn1/ComponentLifecycle.h"
#include "asn1/CompressedFrame.h"
#include "asn1/Covariance.h"
//#include "asn1/DataSegment.h"
//#include "asn1/DataView.h"
#include "asn1/DepthMap.h"
#include "asn1/DistanceImage.h"
#include "asn1/Eigen.h"
#include "asn1/Frame.h"
#include "asn1/IMUSensors.h"
#include "asn1/JointLimitRange.h"
#include "asn1/JointLimits.h"
#include "asn1/JointState.h"
//--->#include "asn1/JointTransform.h"
#include "asn1/Joints.h"
#include "asn1/JointsTrajectory.h"
//--->#include "asn1/JoystickCommand.h"
#include "asn1/LaserScan.h"
//#include "asn1/Logger.h"
//#include "asn1/Mars.h"
#include "asn1/Motion2D.h"
#include "asn1/NamedVector.h"
#include "asn1/Point.h"
#include "asn1/Pointcloud.h"
#include "asn1/Pose.h"
#include "asn1/Pressure.h"
#include "asn1/RigidBodyAcceleration.h"
#include "asn1/RigidBodyState.h"
#include "asn1/Sonar.h"
#include "asn1/SonarBeam.h"
#include "asn1/SonarScan.h"
//--->#include "asn1/Speed6D.h"
#include "asn1/Temperature.h"
#include "asn1/Time.h"
//--->#include "asn1/TimeMark.h"
//--->#include "asn1/TimeStamped.h"
//--->#include "asn1/Timeout.h"
//--->#include "asn1/TimestampEstimatorStatus.h"
#include "asn1/Trajectory.h"
#include "asn1/TransformWithCovariance.h"
#include "asn1/TwistWithCovariance.h"
//--->#include "asn1/Vizkit3D.h"
#include "asn1/Waypoint.h"
#include "asn1/Wrench.h"
#include "asn1/Wrenches.h"
#include "asn1/asn1crt.h"
#include "asn1/taste-extended.h"
#include "asn1/taste-types.h"
#endif //GENERATED_ASN1_DATAVIEW_UNIQ_H
#endif //_INC_DATAVIEW_UNIQ_H

#endif //ASN1TYPES_HPP
