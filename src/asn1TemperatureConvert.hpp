/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Temperature (header).
 */

#ifndef ASN1TEMPERATURECONVERT_HPP
#define ASN1TEMPERATURECONVERT_HPP

#include "asn1Types.h"
#include "base/Temperature.hpp"

// Conversion functions
void Temperature_fromAsn1(base::Temperature& result, const asn1SccTemperature& asnVal);
void Temperature_toAsn1(asn1SccTemperature& result, const base::Temperature& baseObj);

#endif //ASN1TEMPERATURECONVERT_HPP
