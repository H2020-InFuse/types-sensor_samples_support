/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1String (implementation).
 */

#include "asn1StringUtils.h"


void String_fromC(asn1SccT_String* asnStr, const char* cStr)
{
    StringN_fromC<asn1SccT_String>(asnStr, cStr, maxSize_T_String);
}

void String_toC(char* cStrOut, const asn1SccT_String* asnStr)
{
    StringN_toC<asn1SccT_String>(cStrOut, asnStr, maxSize_T_String);
}

int String_print(const asn1SccT_String* asnStr)
{
    return StringN_print<asn1SccT_String>(asnStr, maxSize_T_String);
}

