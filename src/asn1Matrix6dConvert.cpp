/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Matrix6d (implementation).
 */

#include "asn1Matrix6dConvert.hpp"

void Matrix6d_fromAsn1(base::Matrix6d& result, const asn1SccMatrix6d& asnVal)
{
    result << asnVal.arr[0].arr[0], asnVal.arr[0].arr[1], asnVal.arr[0].arr[2], asnVal.arr[0].arr[3], asnVal.arr[0].arr[4], asnVal.arr[0].arr[5], 
              asnVal.arr[1].arr[0], asnVal.arr[1].arr[1], asnVal.arr[1].arr[2], asnVal.arr[1].arr[3], asnVal.arr[1].arr[4], asnVal.arr[1].arr[5], 
              asnVal.arr[2].arr[0], asnVal.arr[2].arr[1], asnVal.arr[2].arr[2], asnVal.arr[2].arr[3], asnVal.arr[2].arr[4], asnVal.arr[2].arr[5], 
              asnVal.arr[3].arr[0], asnVal.arr[3].arr[1], asnVal.arr[3].arr[2], asnVal.arr[3].arr[3], asnVal.arr[3].arr[4], asnVal.arr[3].arr[5], 
              asnVal.arr[4].arr[0], asnVal.arr[4].arr[1], asnVal.arr[4].arr[2], asnVal.arr[4].arr[3], asnVal.arr[4].arr[4], asnVal.arr[4].arr[5], 
              asnVal.arr[5].arr[0], asnVal.arr[5].arr[1], asnVal.arr[5].arr[2], asnVal.arr[5].arr[3], asnVal.arr[5].arr[4], asnVal.arr[5].arr[5];
}

void Matrix6d_toAsn1(asn1SccMatrix6d& result, const base::Matrix6d& baseObj)
{
    result.nCount = 6;
    for (int j = 0; j < result.nCount; j++)
    {
        result.arr[j].nCount = 6;
        for (int i = 0; i < result.arr[j].nCount; i++)
        {
            result.arr[j].arr[i] = baseObj(i, j);
        }
    }
}
