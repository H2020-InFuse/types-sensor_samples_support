/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Vector6d (header).
 */

#ifndef ASN1VECTOR6DCONVERT_HPP
#define ASN1VECTOR6DCONVERT_HPP

#include "asn1Types.h"
#include "base/Eigen.hpp"

// Conversion functions
void Vector6d_fromAsn1(base::Vector6d& result, const asn1SccVector6d& asnVal);
void Vector6d_toAsn1(asn1SccVector6d& result, const base::Vector6d& baseObj);

#endif //ASN1VECTOR6DCONVERT_HPP
