/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1T_String (header).
 */

#ifndef ASN1STRINGCONVERT_HPP
#define ASN1STRINGCONVERT_HPP

#include "asn1Types.h"
#include "asn1StringUtils.h"
#include <string>

// Conversion functions
void String_fromAsn1(std::string& result, const asn1SccT_String& asnVal);
void String_toAsn1(asn1SccT_String& result, const std::string& baseObj);

// Templated versions for instances of the type T-StringN (parametrized size)
template <typename T>
void StringN_fromAsn1(std::string& result, const T& asnVal, asn1SccT_UInt32 size)
{
    char cstr[size+1];
    StringN_toC<T>(cstr, &asnVal, size);
    result = std::string(cstr);
}

template <typename T>
void StringN_toAsn1(T& result, const std::string& baseObj, asn1SccT_UInt32 size)
{
    StringN_fromC<T>(&result, baseObj.c_str(), size);
}

#endif //ASN1STRINGCONVERT_HPP
