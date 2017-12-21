/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1SccOrientation (implementation).
 */

#include "asn1OrientationUtils.h"
#include "asn1QuaterniondUtils.h"
#include "asn1Vector3dUtils.h"
#include <math.h>

asn1SccOrientation Orientation_create(double w, double x, double y, double z)
{
    return (asn1SccOrientation)Quaterniond_create(w, x, y, z);
}

asn1SccOrientation Orientation_angleAxis(double radians, const asn1SccVector3d* axis)
{
    return (asn1SccOrientation)Quaterniond_angleAxis(radians, axis);
}
