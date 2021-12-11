#include "unity.h"

#include "Math/TestVector.h"




int main(int argc, char** argv)
{
    UNITY_BEGIN();
    RUN_TEST(testVec2fLength);

    return UNITY_END();
}
