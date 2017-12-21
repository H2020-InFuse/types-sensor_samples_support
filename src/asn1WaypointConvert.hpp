/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Waypoint (header).
 */

#ifndef ASN1WAYPOINTCONVERT_HPP
#define ASN1WAYPOINTCONVERT_HPP

#include "asn1Types.h"
#include "base/Waypoint.hpp"

// Conversion functions
void Waypoint_fromAsn1(base::Waypoint& result, const asn1SccWaypoint& asnVal);
void Waypoint_toAsn1(asn1SccWaypoint& result, const base::Waypoint& baseObj);

#endif //ASN1WAYPOINTCONVERT_HPP
