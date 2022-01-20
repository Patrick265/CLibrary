#include "Numeric/Conversion.h"

u16 ConversionToU16(u8 msb, u8 lsb)
{
	return msb << 8 | lsb;
}

u16 ConversionToU16FromBuffer(u8* buffer)
{
	return ConversionToU16(buffer[0], buffer[1]);
}

u32 ConversionToU32FromBuffer(u8* buffer)
{
	return buffer[0] << 24 | buffer[1] << 16 | buffer[2] << 8 | buffer[3];
}


u16 InvertValueWithSpecificZeroPoint(u16 value, u16 zeroPoint)
{
	return zeroPoint - (value - zeroPoint);
}