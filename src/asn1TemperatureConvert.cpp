/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Temperature (implementation).
 */

#include "asn1TemperatureConvert.hpp"

void Temperature_fromAsn1(base::Temperature& result, const asn1SccTemperature& asnVal)
{
    result.kelvin = asnVal.kelvin;
}

void Temperature_toAsn1(asn1SccTemperature& result, const base::Temperature& baseObj)
{
    result.kelvin = baseObj.kelvin;
}

