#ifndef CL_GENERATOR_H_
#define CL_GENERATOR_H_

#include "Definitions/Types.h"

/**
 * @brief Calculates the limit, for how far an array should be filled.
 * If the amount of steps is shorter then the length of the array, 
 * it will not keep on filling the array 
 * @param len Lenght of the array
 * @param end Value to stop at
 * @param step Step size
 * @return the limit
 */

u32 GeneratorCalculateFillLimit(u32 len, u32 end, u32 step);
/**
 * @brief Calculates the step size increment based on 
 * index,step and start parameters
 * @param index This is the multiplier in most cases
 * @param step How big of a increment should the next value be 
 * @param start From which value to start from
 * @return the step size
 */
u32 GeneratorCalculateStepSize(u32 index, u32 step, u32 start);
/**
 * @brief Fills an array based on specifc limit/step
 * it will start from zero and increment until the limit or 
 * the end of the array
 * @param array The array you want to fill
 * @param len The length of the array
 * @param end The end of the steps you want to fill
 * @param step The step size that you want it to increment everytime
 */
void GeneratorFillArrayu32(u32* arr, u32 len, u32 end, u32 step);

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
void GeneratorFillArrayWithStartu32(u32* arr, u32 len, u32 start, u32 end, u32 step);

#endif
