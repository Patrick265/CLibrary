#ifndef CL_CONVERSIONS_H_
#define CL_CONVERSIONS_H_

#include "Definitions/Types.h"

u16 ConversionToU16(u8 msb, u8 lsb);
u16 ConversionToU16FromBuffer(u8* buffer);
u32 ConversionToU32FromBuffer(u8* buffer);

u16 InvertValueWithSpecificZeroPoint(u16 value, u16 zeroPoint);

#endif
