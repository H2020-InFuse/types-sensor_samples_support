/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Vector3d (implementation).
 */

#include "asn1Vector3dUtils.h"
#include <math.h>

asn1SccVector3d Vector3d_create(double x, double y, double z)
{
    asn1SccVector3d result;
    result.nCount = 3;
    result.arr[0] = x;
    result.arr[1] = y;
    result.arr[2] = z;
    return result;
}

asn1SccVector3d Vector3d_normalize(const asn1SccVector3d* v)
{
    double l = sqrt(v->arr[0]*v->arr[0] + v->arr[1]*v->arr[1] + v->arr[2]*v->arr[2]);
    return Vector3d_create(v->arr[0]/l, v->arr[1]/l, v->arr[2]/l);
}
