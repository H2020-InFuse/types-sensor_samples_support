/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1LaserScan (header).
 */

#ifndef ASN1LASERSCANCONVERT_HPP
#define ASN1LASERSCANCONVERT_HPP

#include "sensorSamplesTypes.h"
#include "base/samples/LaserScan.hpp"

// Conversion functions
void LaserScan_fromAsn1(base::samples::LaserScan& result, const asn1SccLaserScan& asnVal);
void LaserScan_toAsn1(asn1SccLaserScan& result, const base::samples::LaserScan& baseObj);

#endif //ASN1LASERSCANCONVERT_HPP
