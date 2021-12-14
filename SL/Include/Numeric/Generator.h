#ifndef GENERATOR_H_
#define GENERATOR_H_

#include "Definitions/Types.h"

/**
 * @brief Fills an array based on specifc limit/step
 * it will start from zero and increment until the limit or 
 * the end of the array
 * @param array The array you want to fill
 * @param len The length of the array
 * @param end The end of the steps you want to fill
 * @param step The step size that you want it to increment everytime
 */
void GeneratorFillArrayu32(u32* array, u32 len, u32 end, u32 step);

/**
 * @brief Fills an array based on specifc limit/step
 * it will start from start parameneter and increment until the limit or 
 * the end of the array
 * @param array The array you want to fill
 * @param len The length of the array
 * @param start the start value you want to increment it from
 * @param end The end of the steps you want to fill
 * @param step The step size that you want it to increment everytime
 */
void GeneratorFillArrayWithStartu32(u32* array, u32 len, u32 start, u32 end, u32 step);

#endif