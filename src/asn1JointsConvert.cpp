/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Joints (implementation).
 */

#include "asn1JointsConvert.hpp"
#include "asn1JointStateConvert.hpp"
#include "asn1StringConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1ArrayUtils.hpp"

void Joints_fromAsn1(base::samples::Joints& result, const asn1SccJoints& asnVal)
{
    Time_fromAsn1(result.time, asnVal.timestamp);
    array_from_asn1_string(result.names, asnVal.names.nCount, asnVal.names.arr, jointsNameLength);
    array_from_asn1_func(result.elements, asnVal.elements.nCount, asnVal.elements.arr, JointState_fromAsn1);
}

void Joints_toAsn1(asn1SccJoints& result, const base::samples::Joints& baseObj)
{
    Time_toAsn1(result.timestamp, baseObj.time);
    array_to_asn1_string(&result.names.nCount, result.names.arr, baseObj.names, jointsNameLength, "Joints names");
    array_to_asn1_func(&result.elements.nCount, result.elements.arr, baseObj.elements, JointState_toAsn1, "Joints elements");
}


