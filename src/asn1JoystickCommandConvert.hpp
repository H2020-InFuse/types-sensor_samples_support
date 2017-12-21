/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1RawCommand (header).
 */

#ifndef ASN1JOYSTICKCOMMANDCONVERT_HPP
#define ASN1JOYSTICKCOMMANDCONVERT_HPP

#include "asn1Types.h"
#include "controldev_task/ControlDevTypes.hpp"

// Conversion functions
void JoystickCommand_fromAsn1(controldev::RawCommand& result, const asn1SccJoystickCommand& asnVal);
void JoystickCommand_toAsn1(asn1SccJoystickCommand& result, const controldev::RawCommand& baseObj);

#endif //ASN1JOINTSCONVERT_HPP
