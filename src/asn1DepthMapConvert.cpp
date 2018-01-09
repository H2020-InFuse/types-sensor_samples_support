/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1DepthMap (implementation).
 */

#include "asn1DepthMapConvert.hpp"
#include "base_support/asn1Matrix3dConvert.hpp"
#include "base_support/asn1OrientationConvert.hpp"
#include "base_support/asn1StringConvert.hpp"
#include "base_support/asn1TimeConvert.hpp"
#include "base_support/asn1Vector3dConvert.hpp"
#include "base_support/asn1ArrayUtils.hpp"

void DepthMap_fromAsn1(base::samples::DepthMap& result, const asn1SccDepthMap& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.ref_time);
    // timestamps
    array_from_asn1_func(result.timestamps, asnVal.timestamps.nCount, asnVal.timestamps.arr, Time_fromAsn1);
    // vertical_projection
    result.vertical_projection = (base::samples::DepthMap::PROJECTION_TYPE)asnVal.vertical_projection;
    // horizontal_projection
    result.horizontal_projection = (base::samples::DepthMap::PROJECTION_TYPE)asnVal.horizontal_projection;
    // vertical_interval
    array_from_asn1_assign(result.vertical_interval, asnVal.vertical_interval.nCount, asnVal.vertical_interval.arr);
    // horizontal_interval
    array_from_asn1_assign(result.horizontal_interval, asnVal.horizontal_interval.nCount, asnVal.horizontal_interval.arr);
    // vertical_size
    result.vertical_size = asnVal.vertical_size;
    // horizontal_size
    result.horizontal_size = asnVal.horizontal_size;
    // distances
    array_from_asn1_assign(result.distances, asnVal.distances.nCount, asnVal.distances.arr);
    // remisions
    array_from_asn1_assign(result.remissions, asnVal.remissions.nCount, asnVal.remissions.arr);
}

void DepthMap_toAsn1(asn1SccDepthMap& result, const base::samples::DepthMap& baseObj)
{
    // time
    Time_toAsn1(result.ref_time, baseObj.time);
    // timestamps
    array_to_asn1_func(&result.timestamps.nCount, result.timestamps.arr, baseObj.timestamps, Time_toAsn1, "DepthMap timestamps");
    // vertical_projection
    result.vertical_projection = (asn1SccPROJECTION_TYPE)baseObj.vertical_projection;
    // horizontal_projection
    result.horizontal_projection = (asn1SccPROJECTION_TYPE)baseObj.horizontal_projection;
    // vertical_interval
    array_to_asn1_assign(&result.vertical_interval.nCount, result.vertical_interval.arr, baseObj.vertical_interval, "DepthMap vertical interval");
    // horizontal_interval
    array_to_asn1_assign(&result.horizontal_interval.nCount, result.horizontal_interval.arr, baseObj.horizontal_interval, "DepthMap horizontal interval");
    // vertical_size
    result.vertical_size = baseObj.vertical_size;
    // horizontal_size
    result.horizontal_size = baseObj.horizontal_size;
    // distances
    array_to_asn1_assign(&result.distances.nCount, result.distances.arr, baseObj.distances, "DepthMap distances");
    // remisions
    array_to_asn1_assign(&result.remissions.nCount, result.remissions.arr, baseObj.remissions, "DepthMap remissions");
}


