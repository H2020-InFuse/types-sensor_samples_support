/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Matrix4d (implementation).
 */

#include "asn1Matrix4dConvert.hpp"

void Matrix4d_fromAsn1(base::Matrix4d& result, const asn1SccMatrix4d& asnVal)
{
    result << asnVal.arr[0].arr[0], asnVal.arr[0].arr[1], asnVal.arr[0].arr[2], asnVal.arr[0].arr[3], 
              asnVal.arr[1].arr[0], asnVal.arr[1].arr[1], asnVal.arr[1].arr[2], asnVal.arr[1].arr[3], 
              asnVal.arr[2].arr[0], asnVal.arr[2].arr[1], asnVal.arr[2].arr[2], asnVal.arr[2].arr[3], 
              asnVal.arr[3].arr[0], asnVal.arr[3].arr[1], asnVal.arr[3].arr[2], asnVal.arr[3].arr[3];
}

void Matrix4d_toAsn1(asn1SccMatrix4d& result, const base::Matrix4d& baseObj)
{
    result.nCount = 4;
    for (int j = 0; j < result.nCount; j++)
    {
        result.arr[j].nCount = 4;
        for (int i = 0; i < result.arr[j].nCount; i++)
        {
            result.arr[j].arr[i] = baseObj(i, j);
        }
    }
}
