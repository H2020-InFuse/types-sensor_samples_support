/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TimestampEstimatorStatus (implementation).
 */

#include "asn1TimestampEstimatorStatusConvert.hpp"
#include "asn1TimeConvert.hpp"

void TimestampEstimatorStatus_fromAsn1(aggregator::TimestampEstimatorStatus& result, const asn1SccTimestampEstimatorStatus& asnVal)
{
    // stamp
    Time_fromAsn1(result.stamp, asnVal.stamp);
    // period
    Time_fromAsn1(result.period, asnVal.period);
    // latency
    Time_fromAsn1(result.latency, asnVal.latency);
    // time-raw
    Time_fromAsn1(result.time_raw, asnVal.time_raw);
    // reference-time-raw
    Time_fromAsn1(result.reference_time_raw, asnVal.reference_time_raw);
    // lost-samples-total
    result.lost_samples_total = asnVal.lost_samples_total;
    // lost-samples
    result.lost_samples = asnVal.lost_samples;
    // window-size
    result.window_size = asnVal.window_size;
    // window_capacity
    result.window_capacity = asnVal.window_capacity;
    // base-time
    Time_fromAsn1(result.base_time, asnVal.base_time);
    // base-time-reset-offset
    Time_fromAsn1(result.base_time_reset_offset, asnVal.base_time_reset_offset);
    // expected-losses
    result.expected_losses = asnVal.expected_losses;
    // rejected-expected-losses
    result.rejected_expected_losses = asnVal.rejected_expected_losses;
}


void TimestampEstimatorStatus_toAsn1(asn1SccTimestampEstimatorStatus& result, const aggregator::TimestampEstimatorStatus& baseObj)
{
    // stamp
    Time_toAsn1(result.stamp, baseObj.stamp);
    // period
    Time_toAsn1(result.period, baseObj.period);
    // latency
    Time_toAsn1(result.latency, baseObj.latency);
    // time-raw
    Time_toAsn1(result.time_raw, baseObj.time_raw);
    // reference-time-raw
    Time_toAsn1(result.reference_time_raw, baseObj.reference_time_raw);
    // lost-samples-total
    result.lost_samples_total = baseObj.lost_samples_total;
    // lost_samples
    result.lost_samples = baseObj.lost_samples;
    // window-size
    result.window_size = baseObj.window_size;
    // window_capacity
    result.window_capacity = baseObj.window_capacity;
    // base-time
    Time_toAsn1(result.base_time, baseObj.base_time);
    // base-time-reset-offset
    Time_toAsn1(result.base_time_reset_offset, baseObj.base_time_reset_offset);
    // expected-losses
    result.expected_losses = baseObj.expected_losses;
    // rejected-expected-losses
    result.rejected_expected_losses = baseObj.rejected_expected_losses;
}


