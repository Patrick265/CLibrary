#include "unity.h"

#include "Math/TestVector.h"
#include "Numeric/TestGenerator.h"
#include "Numeric/TestBits.h"
#include "Numeric/TestConversion.h"

void setUp()
{

}

void tearDown()
{

}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(testVec2fLength);
    testGenerator();
    testBits();
    testConversion();
    return UNITY_END();
}
