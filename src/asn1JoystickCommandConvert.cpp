/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Joints (implementation).
 */

#include "asn1JoystickCommandConvert.hpp"
#include "asn1StringConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1ArrayUtils.hpp"
#include <string.h>
#include <stdio.h>

void JoystickCommand_fromAsn1(controldev::RawCommand& result, const asn1SccJoystickCommand& asnVal)
{
    StringN_fromAsn1(result.deviceIdentifier, asnVal.deviceIdentifier, deviceNameLength);
    Time_fromAsn1(result.time, asnVal.base_time);
    
    //Time_fromAsn1(result.axes.timestamp, asnVal.axes.timestamp);
    array_from_asn1_string(result.axes.names, asnVal.axes.names.nCount, asnVal.axes.names.arr, joystickNameLength);
    array_from_asn1_assign(result.axes.elements, asnVal.axes.elements.nCount, asnVal.axes.elements.arr);
    
    //Time_fromAsn1(result.buttons.timestamp, asnVal.buttons.timestamp);
    array_from_asn1_string(result.buttons.names, asnVal.buttons.names.nCount, asnVal.buttons.names.arr, joystickNameLength);
    array_from_asn1_assign(result.buttons.elements, asnVal.buttons.elements.nCount, asnVal.buttons.elements.arr);
         
}

void JoystickCommand_toAsn1(asn1SccJoystickCommand& result, const controldev::RawCommand& baseObj)
{
    StringN_toAsn1(result.deviceIdentifier, baseObj.deviceIdentifier, deviceNameLength);
    Time_toAsn1(result.base_time, baseObj.time);
    
    //Time_toAsn1(result.axes.timestamp, baseObj.axes.timestamp);
    array_to_asn1_string(&result.axes.names.nCount, result.axes.names.arr, baseObj.axes.names, jointsNameLength, "Axes names");
    array_to_asn1_assign(&result.axes.elements.nCount, result.axes.elements.arr, baseObj.axes.elements, "Axes elements");
    
    //Time_toAsn1(result.buttons.timestamp, baseObj.buttons.timestamp);
    array_to_asn1_string(&result.buttons.names.nCount, result.buttons.names.arr, baseObj.buttons.names, jointsNameLength, "Buttons names");
    array_to_asn1_assign(&result.buttons.elements.nCount, result.buttons.elements.arr, baseObj.buttons.elements, "Buttons elements");
}


