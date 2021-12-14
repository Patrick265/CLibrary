#include "unity.h"

#include "Math/TestVector.h"
#include "Numeric/TestGenerator.h"

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
    RUN_TEST(testGenerator);
    return UNITY_END();
}
