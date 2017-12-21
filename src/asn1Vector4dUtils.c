/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Vector4d (implementation).
 */

#include "asn1Vector4dUtils.h"
#include <math.h>

asn1SccVector4d Vector4d_create(double x, double y, double z, double w)
{
    asn1SccVector4d result;
    result.nCount = 4;
    result.arr[0] = x;
    result.arr[1] = y;
    result.arr[2] = z;
    result.arr[3] = w;
    return result;
}

asn1SccVector4d Vector4d_normalize(const asn1SccVector4d* v)
{
    double l = sqrt(v->arr[0]*v->arr[0] + v->arr[1]*v->arr[1] + v->arr[2]*v->arr[2] + v->arr[3]*v->arr[3]);
    return Vector4d_create(v->arr[0]/l, v->arr[1]/l, v->arr[2]/l, v->arr[3]/l);
}
