/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1T_String (implementation).
 */

#include "asn1StringConvert.hpp"
#include "asn1StringUtils.h"
#include <cstring>
#include <iostream>

void String_fromAsn1(std::string& result, const asn1SccT_String& asnVal)
{
    StringN_fromAsn1<asn1SccT_String>(result, asnVal, maxSize_T_String);
}


void String_toAsn1(asn1SccT_String& result, const std::string& baseObj)
{
    StringN_toAsn1<asn1SccT_String>(result, baseObj, maxSize_T_String);
}



