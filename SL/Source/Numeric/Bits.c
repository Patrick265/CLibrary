#include "Numeric/Bits.h"

u8 GetBitOnIndex(u8 byte, u8 index)
{
	return (byte >> index) & 1;
}
