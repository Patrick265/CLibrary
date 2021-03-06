#ifndef CL_COMPLIMENTARYFILTER_H
#define CL_COMPLIMENTARYFILTER_H

#include <stdint.h>

#include "Definitions/Types.h"
#include "Math/Vector.h"

typedef struct ComplimentaryFilter
{
    f32 alpha;
    f32 delta;
    V2f previousAngle;
    V2f currentAngle;
} ComplimentaryFilterF32;

void ComplimentaryFilterInitialize(ComplimentaryFilterF32* filter, const f32 alpha, const f32 delta);
void ComplimentaryFilterUpdate(ComplimentaryFilterF32* filter,
                               const f32 ax, const f32 ay, const f32 az,
                               const f32 gx, const f32 gy);

#endif
