/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * A header file to import all the asn1 types either from the 
 * types library or from dataview-uniq.h (if building from TASTE).
 */

#ifndef SENSORSAMPLESTYPES_HPP
#define SENSORSAMPLESTYPES_HPP

// Include types generated from ASN.1. These are either:
// - in dataview-uniq.h, if building from TASTE
//   (IMPORTANT: note that the order of includes matters)
// - in the asn1, if building from outside TASTE
// We distingush between the two cases by checking the include variable
#ifndef _INC_DATAVIEW_UNIQ_H
#ifndef GENERATED_ASN1_DATAVIEW_UNIQ_H
#ifndef GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
#include "asn1/DepthMap.h"
#include "asn1/DistanceImage.h"
#include "asn1/Frame.h"
#include "asn1/IMUSensors.h"
#include "asn1/LaserScan.h"
#include "asn1/Pointcloud.h"
#include "asn1/Sonar.h"
#include "asn1/SonarBeam.h"
#include "asn1/SonarScan.h"
#endif //GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
#endif //GENERATED_ASN1_DATAVIEW_UNIQ_H
#endif //_INC_DATAVIEW_UNIQ_H

#endif //SENSORSAMPLESTYPES_HPP
