#include "Numeric/Generator.h"

void GeneratorFillArrayu32(u32* array, u32 len, u32 end, u32 step)
{
    u32 limit = 0;
    if((end / step) > len)
    {
        limit = len;
    }
    else
    {
        limit = end / step;
    }
    for(u32 i = 0; i < limit; i++)
    {
        array[i] = i * step;
    }
}
