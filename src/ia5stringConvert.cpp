/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for IA5String (implementation).
 */

#include "ia5stringConvert.hpp"
#include <cstring>
#include <iostream>


void IA5String_fromAsn1(std::string& result, const char* asnVal, size_t maxSize)
{
    result = std::string(asnVal);
}


void IA5String_toAsn1(char* result, const std::string& baseObj, size_t maxSize)
{
    size_t len = baseObj.size();

    strncpy(result, baseObj.c_str(), maxSize);
    
    if (len > maxSize - 1)
    {
        result[maxSize-1] = '\0';
        std::cerr <<  "WARNING: string truncated to " << maxSize << " characters." << std::endl;
    }
}


