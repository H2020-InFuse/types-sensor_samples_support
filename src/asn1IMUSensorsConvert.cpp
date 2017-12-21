/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1IMUSensors (implementation).
 */

#include "asn1IMUSensorsConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void IMUSensors_fromAsn1(base::samples::IMUSensors& result, const asn1SccIMUSensors& asnVal)
{
    Time_fromAsn1(result.time, asnVal.timestamp);
    Vector3d_fromAsn1(result.acc, asnVal.acc);
    Vector3d_fromAsn1(result.gyro, asnVal.gyro);
    Vector3d_fromAsn1(result.mag, asnVal.mag);
}

void IMUSensors_toAsn1(asn1SccIMUSensors& result, const base::samples::IMUSensors& baseObj)
{
    Time_toAsn1(result.timestamp, baseObj.time);
    Vector3d_toAsn1(result.acc, baseObj.acc);
    Vector3d_toAsn1(result.gyro, baseObj.gyro);
    Vector3d_toAsn1(result.mag, baseObj.mag);
}


