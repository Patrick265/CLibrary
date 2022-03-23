#include "Numeric/Generator.h"

u32 GeneratorCalculateFillLimit(u32 len, u32 end, u32 step)
{
    if((end / step) > len)
    {
        return len;
    }
    else
    {
        return end / step;
    }
}

u32 GeneratorCalculateStepSize(u32 index, u32 step, u32 start)
{
    return start + (index * step);
}

void GeneratorFillArrayu32(u32* arr, u32 len, u32 end, u32 step)
{
    const u32 limit = GeneratorCalculateFillLimit(len, end, step);
    for(u32 i = 0; i < limit; i++)
    {
        arr[i] = GeneratorCalculateStepSize(i, step, 0);
    }
}

void GeneratorFillArrayWithStartu32(u32* arr, u32 len, u32 start, u32 end, u32 step)
{
    const u32 limit = GeneratorCalculateFillLimit(len, end, step);
    for(u32 i = 0; i < limit; i++)
    {
        arr[i] = GeneratorCalculateStepSize(i, step, start);
    }
}
