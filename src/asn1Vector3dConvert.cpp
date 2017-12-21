/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Vector3d (implementation).
 */

#include "asn1Vector3dConvert.hpp"
#include "asn1Vector3dUtils.h"
#include <cmath>

void Vector3d_fromAsn1(base::Vector3d& result, const asn1SccVector3d& asnVal)
{
    for (int i = 0; i < 3; i++)
    {
        result[i] = asnVal.arr[i];
    }
}

void Vector3d_toAsn1(asn1SccVector3d& result, const base::Vector3d& baseObj)
{
    result.nCount = 3;
    for (int i = 0; i < result.nCount; i++)
    {
        result.arr[i] = baseObj[i];
    }
}

