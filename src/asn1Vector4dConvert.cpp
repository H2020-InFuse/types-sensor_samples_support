/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Vector4d (implementation).
 */

#include "asn1Vector4dConvert.hpp"
#include "asn1Vector4dUtils.h"

void Vector4d_fromAsn1(base::Vector4d& result, const asn1SccVector4d& asnVal)
{
    for (int i = 0; i < 4; i++)
    {
        result[i] = asnVal.arr[i];
    }
}

void Vector4d_toAsn1(asn1SccVector4d& result, const base::Vector4d& baseObj)
{
    result.nCount = 4;
    for (int i = 0; i < result.nCount; i++)
    {
        result.arr[i] = baseObj[i];
    }
}
