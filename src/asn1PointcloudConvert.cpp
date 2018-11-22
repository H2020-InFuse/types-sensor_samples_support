/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Pointcloud (implementation).
 */

#include "asn1PointcloudConvert.hpp"
#include "base_support/asn1TimeConvert.hpp"
#include "base_support/asn1PointConvert.hpp"
#include "base_support/asn1Vector3dConvert.hpp"
#include "base_support/asn1ArrayUtils.hpp"

void Color_fromAsn1(base::Vector4d& result, const asn1SccVector3d& asnVal){
    for (int i = 0; i < 3; i++)
    {
        result[i] = asnVal.arr[i];
        result[3] = 0;
    }
}
void Color_toAsn1(asn1SccVector3d& result, const base::Vector4d& baseObj){
    for (int i = 0; i < 3; i++)
    {
        result.arr[i] = baseObj[i];
    }
}

void Pointcloud_fromAsn1(base::samples::Pointcloud& result, const asn1SccPointcloud& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.metadata.timeStamp);
    // points
    array_from_asn1_func(result.points, asnVal.data.points.nCount, asnVal.data.points.arr, Point_fromAsn1);
    // colors
    array_from_asn1_func(result.colors, asnVal.data.colors.nCount, asnVal.data.colors.arr, Color_fromAsn1);
    //add intensities as alpha
    for (int i = 0; i<asnVal.data.intensity.nCount;i++){
        result.colors[i][3] = asnVal.data.intensity.arr[i];
    }
}


void Pointcloud_toAsn1(asn1SccPointcloud& result, const base::samples::Pointcloud& baseObj)
{
    // time
    Time_toAsn1(result.metadata.timeStamp, baseObj.time);
    // points
    array_to_asn1_func(&result.data.points.nCount, result.data.points.arr, baseObj.points, Point_toAsn1, "Pointcloud points");
    // colors
    array_to_asn1_func(&result.data.colors.nCount, result.data.colors.arr, baseObj.colors, Color_toAsn1, "Pointcloud colors");
    //get intensities from alpha
    for (int i = 0; i < baseObj.colors.size();i++){
        result.data.intensity.arr[i] = baseObj.colors[i][3];
    }
}


