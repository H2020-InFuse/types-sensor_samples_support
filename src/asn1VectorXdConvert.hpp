/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1VectorXd (header).
 */

#ifndef ASN1VECTORXDCONVERT_HPP
#define ASN1VECTORXDCONVERT_HPP

#include <base/Eigen.hpp>
#include "asn1Types.h"

// Templated versions for instances of the type T-StringN (parametrized size)
template <typename T>
void VectorXdN_fromAsn1(base::VectorXd& result, const T& asnVal, asn1SccT_UInt32 length)
{
    for( int i=0; i < length ; i++)
    {
        result[i]=asnVal.arr[i];
    }
}

template <typename T>
void VectorXdN_toAsn1(T& result, const base::VectorXd& baseObj, asn1SccT_UInt32 length)
{
    result.nCount = length;
    for (int i = 0; i < length ; i++)
    {
        result.arr[i] = baseObj[i];
    }
}


#endif 
