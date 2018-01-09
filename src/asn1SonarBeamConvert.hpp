/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SonarBeam (header).
 */

#ifndef ASN1SONARBEAMCONVERT_HPP
#define ASN1SONARBEAMCONVERT_HPP

#include "sensorSamplesTypes.h"
#include "base/samples/SonarBeam.hpp"

// Conversion functions
void SonarBeam_fromAsn1(base::samples::SonarBeam& result, const asn1SccSonarBeam& asnVal);
void SonarBeam_toAsn1(asn1SccSonarBeam& result, const base::samples::SonarBeam& baseObj);

#endif //ASN1SONARBEAMCONVERT_HPP
