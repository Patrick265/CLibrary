#include "Numeric/Decimal.h"

#include <float.h>
#include <math.h>

bool FloatApproxEqualWithEpsilon(f32 a, f32 b, float epsilon)
{
	return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}
bool FloatApproxEqual(f32 a, f32 b)
{
	return FloatApproxEqualWithEpsilon(a, b, FLT_EPSILON);
}
