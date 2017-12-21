/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Waypoint (implementation).
 */

#include "asn1WaypointConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void Waypoint_fromAsn1(base::Waypoint& result, const asn1SccWaypoint& asnVal)
{
    Vector3d_fromAsn1(result.position, asnVal.position);
    result.heading = asnVal.heading;
    result.tol_position = asnVal.tol_position;
    result.tol_heading = asnVal.tol_heading;
}


void Waypoint_toAsn1(asn1SccWaypoint& result, const base::Waypoint& baseObj)
{
    Vector3d_toAsn1(result.position, baseObj.position);
    result.heading = baseObj.heading;
    result.tol_position = baseObj.tol_position;
    result.tol_heading = baseObj.tol_heading;
}


