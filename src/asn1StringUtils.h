/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1String (header).
 */

#ifndef ASN1STRINGUTILS_H
#define ASN1STRINGUTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1Types.h"
#include <string.h>
#include <stdio.h>

// Creation from C string; result if truncated if input exceeds the maximum length
void String_fromC(asn1SccT_String* asnStr, const char* cStr);

// Conversion to C string; cStrOut should be at least maxSize_T_String+1 long
void String_toC(char* cStrOut, const asn1SccT_String* asnStr);

// Print
int String_print(const asn1SccT_String* asnStr);

#ifdef __cplusplus
} // extern "C"
#endif

// Template functions for T-StringN only declared in C++
#ifdef __cplusplus

template <typename T>
void StringN_fromC(T* asnStr, const char* cStr, asn1SccT_UInt32 size)
{
    // Limit length to the maximum supported
    asn1SccT_UInt32 len = strlen(cStr);
    if (len > size)
    {
        len = size;
        fprintf(stderr, "WARNING: string truncated to %lld characters.\n", size);
    }
    
    memcpy(&asnStr->arr[0], cStr, len);
    asnStr->nCount = len;
}

template <typename T>
void StringN_toC(char* cStrOut, const T* asnStr, asn1SccT_UInt32 size)
{
    memcpy(cStrOut, &asnStr->arr[0], asnStr->nCount);
    cStrOut[asnStr->nCount] = '\0';
}

template <typename T>
int StringN_print(const T* asnStr, asn1SccT_UInt32 size)
{
    char cStr[size+1];
    StringN_toC(cStr, asnStr, size);
    return printf("%s", cStr);
}

#endif

#endif //ASN1STRINGUTILS_H
