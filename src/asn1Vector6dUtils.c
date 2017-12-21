/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1Vector6d (implementation).
 */

#include "asn1Vector6dUtils.h"
#include <math.h>

asn1SccVector6d Vector6d_create(double v0, double v1, double v2, double v3, double v4, double v5)
{
    asn1SccVector6d result;
    result.nCount = 6;
    result.arr[0] = v0;
    result.arr[1] = v1;
    result.arr[2] = v2;
    result.arr[3] = v3;
    result.arr[4] = v4;
    result.arr[5] = v5;
    return result;
}

asn1SccVector6d Vector6d_normalize(const asn1SccVector6d* v)
{
    double l = sqrt(v->arr[0]*v->arr[0] + v->arr[1]*v->arr[1] + v->arr[2]*v->arr[2] + v->arr[3]*v->arr[3] + v->arr[4]*v->arr[4] + v->arr[5]*v->arr[5]);
    return Vector6d_create(v->arr[0]/l, v->arr[1]/l, v->arr[2]/l, v->arr[3]/l, v->arr[4]/l, v->arr[5]/l);
}
