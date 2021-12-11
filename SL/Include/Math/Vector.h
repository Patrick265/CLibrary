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

f32 v2fLength(const float x, const float y);

#endif
