
#include <Math/Vector.h>
#include "Math/TestVector.h"

#include "unity.h"

void setUp()
{

}

void tearDown()
{

}


void testVec2fLength()
{
    Vec2f vector = { .x = 3.0f, .y = 4.0f };
    float out = v2fLength(vector.x, vector.y);
    TEST_ASSERT_EQUAL(out, 5.0f);
}