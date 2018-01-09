/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SonarBeam (implementation).
 */

#include "asn1SonarBeamConvert.hpp"
#include "base_support/asn1AngleConvert.hpp"
#include "base_support/asn1TimeConvert.hpp"
#include "base_support/asn1ArrayUtils.hpp"

void SonarBeam_fromAsn1(base::samples::SonarBeam& result, const asn1SccSonarBeam& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.ref_time);
    // bearing
    Angle_fromAsn1(result.bearing, asnVal.bearing);
    // sampling_interval
    result.sampling_interval = asnVal.sampling_interval;
    // speed_of_sound
    result.speed_of_sound = asnVal.speed_of_sound;
    // beamwidth_horizontal
    result.beamwidth_horizontal = asnVal.beamwidth_horizontal;
    // beamwidth_vertical
    result.beamwidth_vertical = asnVal.beamwidth_vertical;
    // beam
    array_from_asn1_assign(result.beam, asnVal.beam.nCount, asnVal.beam.arr);
}


void SonarBeam_toAsn1(asn1SccSonarBeam& result, const base::samples::SonarBeam& baseObj)
{
    // time
    Time_toAsn1(result.ref_time, baseObj.time);
    // bearing
    Angle_toAsn1(result.bearing, baseObj.bearing);
    // sampling_interval
    result.sampling_interval = baseObj.sampling_interval;
    // speed_of_sound
    result.speed_of_sound = baseObj.speed_of_sound;
    // beamwidth_horizontal
    result.beamwidth_horizontal = baseObj.beamwidth_horizontal;
    // beamwidth_vertical
    result.beamwidth_vertical = baseObj.beamwidth_vertical;
    // beam
    array_to_asn1_assign(&result.beam.nCount, result.beam.arr, baseObj.beam, "SonarBeam beam");
}


