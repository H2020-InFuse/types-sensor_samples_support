/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Pointcloud (header).
 */

#ifndef ASN1POINTCLOUDCONVERT_HPP
#define ASN1POINTCLOUDCONVERT_HPP

#include "sensorSamplesTypes.h"
#include "base/samples/Pointcloud.hpp"

// Conversion functions
void Pointcloud_fromAsn1(base::samples::Pointcloud& result, const asn1SccPointcloud& asnVal);
void Pointcloud_toAsn1(asn1SccPointcloud& result, const base::samples::Pointcloud& baseObj);

#endif //ASN1POINTCLOUDCONVERT_HPP
