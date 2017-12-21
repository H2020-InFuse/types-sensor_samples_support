/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Quaterniond (implementation).
 */

#include "asn1QuaterniondConvert.hpp"
#include "asn1QuaterniondUtils.h"

void Quaterniond_fromAsn1(base::Quaterniond& result, const asn1SccQuaterniond& asnVal)
{
    result = base::Quaterniond(asnVal.arr[3], asnVal.arr[0], asnVal.arr[1], asnVal.arr[2]);
}

void Quaterniond_toAsn1(asn1SccQuaterniond& result, const base::Quaterniond& baseObj)
{
    result = Quaterniond_create(baseObj.w(), baseObj.x(), baseObj.y(), baseObj.z());
}

