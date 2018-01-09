/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1IMUSensors (header).
 */

#ifndef ASN1IMUSENSORSCONVERT_HPP
#define ASN1IMUSENSORSCONVERT_HPP

#include "sensorSamplesTypes.h"
#include "base/samples/IMUSensors.hpp"

// Conversion functions
void IMUSensors_fromAsn1(base::samples::IMUSensors& result, const asn1SccIMUSensors& asnVal);
void IMUSensors_toAsn1(asn1SccIMUSensors& result, const base::samples::IMUSensors& baseObj);

#endif //ASN1IMUSENSORSCONVERT_HPP
