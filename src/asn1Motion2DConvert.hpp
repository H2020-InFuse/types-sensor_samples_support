/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Motion2D (header).
 */

#ifndef ASN1MOTION2DCONVERT_HPP
#define ASN1MOTION2DCONVERT_HPP

#include "asn1Types.h"
#include "base/commands/Motion2D.hpp"

// Conversion functions
void Motion2D_fromAsn1(base::commands::Motion2D& result, const asn1SccMotion2D& asnVal);
void Motion2D_toAsn1(asn1SccMotion2D& result, const base::commands::Motion2D& baseObj);

#endif //ASN1MOTION2DCONVERT_HPP
