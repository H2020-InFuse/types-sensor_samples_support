/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Frame (implementation).
 */

#include "asn1FrameConvert.hpp"
#include "base_support/asn1StringConvert.hpp"
#include "base_support/asn1TimeConvert.hpp"
#include "base_support/asn1ArrayUtils.hpp"


void Frame_fromAsn1(base::samples::frame::Frame& result, const asn1SccFrame& asnVal)
{
    // time
    Time_fromAsn1(result.time, asnVal.metadata.timeStamp);
    // received_time
    Time_fromAsn1(result.received_time, asnVal.metadata.receivedTime);
    // image
    array_from_asn1_assign(result.image, asnVal.image.nCount, asnVal.image.arr);
    // attributes
    array_from_asn1_func(result.attributes, asnVal.attributes.nCount, asnVal.attributes.arr, Frame_attrib_fromAsn1);
    // size
    result.size.width = asnVal.datasize.width;
    result.size.height = asnVal.datasize.height;
    // data_depth
    result.data_depth = asnVal.data_depth;
    // pixel_size
    result.pixel_size = asnVal.pixel_size;
    // row_size
    result.row_size = asnVal.row_size;
    // frame_mode
    result.frame_mode = (base::samples::frame::frame_mode_t)asnVal.frame_mode;
    // frame_status
    result.frame_status = (base::samples::frame::frame_status_t)asnVal.frame_status;
}

void Frame_toAsn1(asn1SccFrame& result, const base::samples::frame::Frame& baseObj)
{
    // time
    Time_toAsn1(result.frame_time, baseObj.time);
    // received_time
    Time_toAsn1(result.received_time, baseObj.received_time);
    // image
    array_to_asn1_assign(&result.image.nCount, result.image.arr, baseObj.image, "Frame image", frameMaxBytes);
    // attributes
    array_to_asn1_func(&result.attributes.nCount, result.attributes.arr, baseObj.attributes, Frame_attrib_toAsn1, "Frame attributes");
    // size
    result.datasize.width = baseObj.size.width;
    result.datasize.height = baseObj.size.height;
    // data_depth
    result.data_depth = baseObj.data_depth;
    // pixel_size
    result.pixel_size = baseObj.pixel_size;
    // row_size
    result.row_size = baseObj.row_size;
    // frame_mode
    result.frame_mode = (asn1SccFrame_mode_t)baseObj.frame_mode;
    // frame_status
    result.frame_status = (asn1SccFrame_status_t)baseObj.frame_status;
}

void Frame_attrib_fromAsn1(base::samples::frame::frame_attrib_t& result, const asn1SccFrame_attrib_t& asnVal)
{
    String_fromAsn1(result.data_, asnVal.data);
    String_fromAsn1(result.name_, asnVal.att_name);
}

void Frame_attrib_toAsn1(asn1SccFrame_attrib_t& result, const base::samples::frame::frame_attrib_t& baseObj)
{
    String_toAsn1(result.data, baseObj.data_);
    String_toAsn1(result.att_name, baseObj.name_);
}
