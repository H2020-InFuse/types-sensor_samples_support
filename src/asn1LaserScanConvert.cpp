/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1LaserScan (implementation).
 */

#include "asn1LaserScanConvert.hpp"
#include "base_support/asn1Matrix3dConvert.hpp"
#include "base_support/asn1OrientationConvert.hpp"
#include "base_support/asn1StringConvert.hpp"
#include "base_support/asn1TimeConvert.hpp"
#include "base_support/asn1Vector3dConvert.hpp"
#include "base_support/asn1ArrayUtils.hpp"

void LaserScan_fromAsn1(base::samples::LaserScan& result, const asn1SccLaserScan& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.ref_time);
    // start_angle
    result.start_angle = asnVal.start_angle;
    // angular_resolution
    result.angular_resolution = asnVal.angular_resolution;
    // speed
    result.speed = asnVal.speed;
    // vertical_interval
    array_from_asn1_assign(result.ranges, asnVal.ranges.nCount, asnVal.ranges.arr);
    // minRange
    result.minRange = asnVal.minRange;
    // maxRange
    result.maxRange = asnVal.maxRange;
    // remision
    array_from_asn1_assign(result.remission, asnVal.remission.nCount, asnVal.remission.arr);
}


void LaserScan_toAsn1(asn1SccLaserScan& result, const base::samples::LaserScan& baseObj)
{
    // time
    Time_toAsn1(result.ref_time, baseObj.time);
    // start_angle
    result.start_angle = baseObj.start_angle;
    // angular_resolution
    result.angular_resolution = baseObj.angular_resolution;
    // speed
    result.speed = baseObj.speed;
    // ranges
    array_to_asn1_assign(&result.ranges.nCount, result.ranges.arr, baseObj.ranges, "LaserScan ranges");
    // minRange
    result.minRange = baseObj.minRange;
    // maxRange
    result.maxRange = baseObj.maxRange;
    // remission
    array_to_asn1_assign(&result.remission.nCount, result.remission.arr, baseObj.remission, "LaserScan remission");
}


