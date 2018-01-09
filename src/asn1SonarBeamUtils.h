/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * File reading functions for asn1SonarBeam (header).
 */

#ifndef ASN1SONARBEAMUTILS_HPP
#define ASN1SONARBEAMUTILS_HPP

#include "sensorSamplesTypes.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

// Read a data file and write to an array (array must be allocated)
size_t readSonarBeamFile(const char* file, asn1SccSonarBeam** pOutSamples, size_t maxSamples);

// Parse a line; returns 0 if success
int readSonarBeamEntry(const char* line, asn1SccSonarBeam* pOutSample);

#ifdef __cplusplus
}
#endif

#endif //ASN1SONARBEAMUTILS_HPP
