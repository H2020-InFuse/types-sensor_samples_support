/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Time (implementation).
 */

#include "asn1TimeConvert.hpp"

void Time_fromAsn1(base::Time& result, const asn1SccTime& asnVal)
{
    result.microseconds = asnVal.microseconds;
    // FIXME: field usecPerSec should be static, constant
}

void Time_toAsn1(asn1SccTime& result, const base::Time& baseObj)
{
    result.microseconds = baseObj.microseconds;
    result.usecPerSec = baseObj.UsecPerSec;
    // FIXME: field usecPerSec should be static, constant
}

