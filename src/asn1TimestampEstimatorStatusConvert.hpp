/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TimestampEstimatorStatus (header).
 */

#ifndef ASN1TIMESTAMPESTIMATORSTATUSCONVERT_HPP
#define ASN1TIMESTAMPESTIMATORSTATUSCONVERT_HPP

#include "asn1Types.h"
#include "aggregator/TimestampEstimatorStatus.hpp"

// Conversion functions
void TimestampEstimatorStatus_fromAsn1(aggregator::TimestampEstimatorStatus& result, const asn1SccTimestampEstimatorStatus& asnVal);
void TimestampEstimatorStatus_toAsn1(asn1SccTimestampEstimatorStatus& result, const aggregator::TimestampEstimatorStatus& baseObj);

#endif //ASN1TIMESTAMPESTIMATORSTATUSCONVERT_HPP
