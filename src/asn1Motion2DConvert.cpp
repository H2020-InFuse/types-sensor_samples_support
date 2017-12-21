/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Motion2D (implementation).
 */

#include "asn1Motion2DConvert.hpp"

void Motion2D_fromAsn1(base::commands::Motion2D& result, const asn1SccMotion2D& asnVal)
{
    result.translation = asnVal.translation;
    result.rotation = asnVal.rotation;
}

void Motion2D_toAsn1(asn1SccMotion2D& result, const base::commands::Motion2D& baseObj)
{
    result.translation = baseObj.translation;
    result.rotation = baseObj.rotation;
}

