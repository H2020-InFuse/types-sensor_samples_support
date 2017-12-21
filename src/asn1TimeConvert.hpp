/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Time (header).
 */

#ifndef ASN1TIMECONVERT_HPP
#define ASN1TIMECONVERT_HPP

#include "asn1Types.h"
#include "base/Time.hpp"

// Conversion functions
void Time_fromAsn1(base::Time& result, const asn1SccTime& asnVal);
void Time_toAsn1(asn1SccTime& result, const base::Time& baseObj);

#endif //ASN1TIMECONVERT_HPP
