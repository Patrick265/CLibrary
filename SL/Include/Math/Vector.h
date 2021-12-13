#ifndef VECTOR_H
#define VECTOR_H

#include "Definitions/Types.h"

typedef struct
{
    f32 x;
    f32 y;
} V2f;

typedef struct
{
    f32 x;
    f32 y;
    f32 z;
} V3f;

typedef struct
{
    f64 x;
    f64 y;
} V2d;

typedef struct
{
    f64 x;
    f64 y;
    f64 z;
} V3d;

f32 v2fLength(const float x, const float y);

#endif
