#ifndef CL_DECIMAL_H_
#define CL_DECIMAL_H_

#include "Definitions/Types.h"
#include "stdbool.h"

bool FloatApproxEqualWithEpsilon(f32 a, f32 b, float epsilon);
bool FloatApproxEqual(f32 a, f32 b);

#endif
