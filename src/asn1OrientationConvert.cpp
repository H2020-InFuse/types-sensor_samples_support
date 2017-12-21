/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccOrientation (implementation).
 */

#include "asn1OrientationConvert.hpp"
#include "asn1QuaterniondConvert.hpp"
#include "asn1OrientationUtils.h"

void Orientation_fromAsn1(base::Orientation& result, const asn1SccOrientation& asnVal)
{
    Quaterniond_fromAsn1(result, (const asn1SccQuaterniond&)asnVal);
}

void Orientation_toAsn1(asn1SccOrientation& result, const base::Orientation& baseObj)
{
    Quaterniond_toAsn1((asn1SccQuaterniond&)result, baseObj);
}

