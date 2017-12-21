/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Pointcloud (implementation).
 */

#include "asn1PointcloudConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1Vector3dConvert.hpp"
#include "asn1Vector4dConvert.hpp"
#include "asn1ArrayUtils.hpp"

void Pointcloud_fromAsn1(base::samples::Pointcloud& result, const asn1SccPointcloud& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.ref_time);
    // points
    array_from_asn1_func(result.points, asnVal.points.nCount, asnVal.points.arr, Vector3d_fromAsn1);
    // colors
    array_from_asn1_func(result.colors, asnVal.colors.nCount, asnVal.colors.arr, Vector4d_fromAsn1);
}


void Pointcloud_toAsn1(asn1SccPointcloud& result, const base::samples::Pointcloud& baseObj)
{
    // time
    Time_toAsn1(result.ref_time, baseObj.time);
    // points
    array_to_asn1_func(&result.points.nCount, result.points.arr, baseObj.points, Vector3d_toAsn1, "Pointcloud points");
    // colors
    array_to_asn1_func(&result.colors.nCount, result.colors.arr, baseObj.colors, Vector4d_toAsn1, "Pointcloud colors");
}


