/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Frame (header).
 */

#ifndef ASN1FRAMECONVERT_HPP
#define ASN1FRAMECONVERT_HPP

#include "sensorSamplesTypes.h"
#include "base/samples/Frame.hpp"

// Conversion functions
void Frame_fromAsn1(base::samples::frame::Frame& result, const asn1SccFrame& asnVal);
void Frame_toAsn1(asn1SccFrame& result, const base::samples::frame::Frame& baseObj);

// Type asn1Frame_attrib_t
void Frame_attrib_fromAsn1(base::samples::frame::frame_attrib_t& result, const asn1SccFrame_attrib_t& asnVal);
void Frame_attrib_toAsn1(asn1SccFrame_attrib_t& result, const base::samples::frame::frame_attrib_t& baseObj);

#endif //ASN1FRAMECONVERT_HPP
