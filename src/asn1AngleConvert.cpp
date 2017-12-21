/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Angle (implementation).
 */

#include "asn1AngleConvert.hpp"
#include "asn1Matrix3dConvert.hpp"
#include "asn1OrientationConvert.hpp"
#include "asn1StringConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1Vector3dConvert.hpp"
#include "asn1ArrayUtils.hpp"


void Angle_fromAsn1(base::Angle& result, const asn1SccAngle& asnVal)
{
    // rad
    result.rad = asnVal.rad;

}

void Angle_toAsn1(asn1SccAngle& result, const base::Angle& baseObj)
{
    // rad
    result.rad = baseObj.rad;
}

void AngleSegment_fromAsn1(base::AngleSegment& result, const asn1SccAngleSegment& asnVal)
{
    // width
    result.width = asnVal.width;
    // startRad
    result.startRad = asnVal.startRad;
}

void AngleSegment_toAsn1(asn1SccAngleSegment& result, const base::AngleSegment& baseObj)
{
    // width
    result.width = baseObj.width;
    // startRad
    result.startRad = baseObj.startRad;
}

