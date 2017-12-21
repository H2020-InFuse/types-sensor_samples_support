/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Quaterniond (implementation).
 */

#include "asn1QuaterniondUtils.h"
#include "asn1Vector3dUtils.h"
#include <math.h>

asn1SccQuaterniond Quaterniond_create(double w, double x, double y, double z)
{
    asn1SccQuaterniond result;
    result.nCount = 4;
    result.arr[0] = x;
    result.arr[1] = y;
    result.arr[2] = z;
    result.arr[3] = w;
    return result;
}

asn1SccQuaterniond Quaterniond_angleAxis(double radians, const asn1SccVector3d* axis)
{
    asn1SccVector3d nAxis = Vector3d_normalize(axis);
    
    double s = sin(radians/2.0);
    double qx = s * Vector3d_x(&nAxis);
    double qy = s * Vector3d_y(&nAxis);
    double qz = s * Vector3d_z(&nAxis);
    double qw = cos(radians/2.0);
    
    return Quaterniond_create(qw, qx, qy, qz);
}
