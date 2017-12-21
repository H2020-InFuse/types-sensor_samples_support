/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Vector6d (implementation).
 */

#include "asn1Vector6dConvert.hpp"
#include "asn1Vector6dUtils.h"

void Vector6d_fromAsn1(base::Vector6d& result, const asn1SccVector6d& asnVal)
{
    for (int i = 0; i < 6; i++)
    {
        result[i] = asnVal.arr[i];
    }
}

void Vector6d_toAsn1(asn1SccVector6d& result, const base::Vector6d& baseObj)
{
    result.nCount = 6;
    for (int i = 0; i < result.nCount; i++)
    {
        result.arr[i] = baseObj[i];
    }
}
