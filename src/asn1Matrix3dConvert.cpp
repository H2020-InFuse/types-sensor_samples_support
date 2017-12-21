/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Matrix3d (implementation).
 */

#include "asn1Matrix3dConvert.hpp"

void Matrix3d_fromAsn1(base::Matrix3d& result, const asn1SccMatrix3d& asnVal)
{
    result << asnVal.arr[0].arr[0], asnVal.arr[0].arr[1], asnVal.arr[0].arr[2], 
              asnVal.arr[1].arr[0], asnVal.arr[1].arr[1], asnVal.arr[1].arr[2], 
              asnVal.arr[2].arr[0], asnVal.arr[2].arr[1], asnVal.arr[2].arr[2];
}

void Matrix3d_toAsn1(asn1SccMatrix3d& result, const base::Matrix3d& baseObj)
{
    result.nCount = 3;
    for (int j = 0; j < result.nCount; j++)
    {
        result.arr[j].nCount = 3;
        for (int i = 0; i < result.arr[j].nCount; i++)
        {
            result.arr[j].arr[i] = baseObj(i, j);
        }
    }
}
