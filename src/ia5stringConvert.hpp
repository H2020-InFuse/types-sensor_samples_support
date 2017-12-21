/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for IA5String (header).
 */

#ifndef IA5STRINGCONVERT_HPP
#define IA5STRINGCONVERT_HPP

#include "asn1Types.h"
#include <string>

// Conversion functions: IA5Strings are converted to char[] by the ASN.1 compiler
void IA5String_fromAsn1(std::string& result, const char* asnVal, size_t maxSize);
void IA5String_toAsn1(char* result, const std::string& baseObj, size_t maxSize);

#endif //IA5STRINGCONVERT_HPP
