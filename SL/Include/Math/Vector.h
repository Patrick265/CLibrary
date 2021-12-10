#ifndef VECTOR_H
#define VECTOR_H

#include "Definitions/Types.h"

typedef struct
{
    f32 x;
    f32 y;
} Vec2f;

typedef struct
{
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

f32 Vec2FLength(const float x, const float y);

#endif //VECTOR_H
