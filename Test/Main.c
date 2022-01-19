#include "unity.h"

#include "Math/TestVector.h"
#include "Numeric/TestGenerator.h"
#include "Numeric/TestBits.h"

void setUp()
{

}

void tearDown()
{

}

int main(int argc, char** argv)
{
    UNITY_BEGIN();
    RUN_TEST(testVec2fLength);
    testGenerator();
    testBits();
    return UNITY_END();
}
