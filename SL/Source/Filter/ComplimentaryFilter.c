#include "Filter/ComplimentaryFilter.h"


#include <math.h>

void ComplimentaryFilterInitialize(ComplimentaryFilterF32 *filter, const f32 alpha, const f32 delta)
{
    filter->alpha = alpha;
    filter->delta = delta;
    filter->currentAngle.x = 0.0f;
    filter->currentAngle.y = 0.0f;
    filter->previousAngle.x = 0.0f;
    filter->previousAngle.y = 0.0f;
}

void ComplimentaryFilterUpdate(ComplimentaryFilterF32 *filter, const f32 ax, const f32 ay, const f32 az, const f32 gx,
                               const f32 gy)
{
    const f32 accPitch = atanf(ax / Vec2FLength(ay, az));
    const f32 accRoll = atanf(ay / Vec2FLength(ax, az));

    filter->currentAngle.x = ((1 - filter->alpha) * (filter->previousAngle.x + gx * filter->delta)) + (filter->alpha * accRoll);
    filter->currentAngle.y = ((1 - filter->alpha) * (filter->previousAngle.y + gy * filter->delta)) + (filter->alpha * accPitch);
}
