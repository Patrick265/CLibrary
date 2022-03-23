#include "Numeric/TestGenerator.h"

#include "unity.h"

void testGenerator()
{
    RUN_TEST(testGeneratorCalculateFillLimitT1);
    RUN_TEST(testGeneratorCalculateFillLimitT2);
    RUN_TEST(testGeneratorCalculateFillLimitT3);

    RUN_TEST(testGeneratorCalculateStepSizeT1);
    RUN_TEST(testGeneratorCalculateStepSizeT2);
    RUN_TEST(testGeneratorCalculateStepSizeT3);

    RUN_TEST(testGeneratorFillArrayu32T1);
    RUN_TEST(testGeneratorFillArrayu32T2);
    RUN_TEST(testGeneratorFillArrayu32T3);

    RUN_TEST(testGeneratorFillArrayWithStartu32T1);
    RUN_TEST(testGeneratorFillArrayWithStartu32T2);
    RUN_TEST(testGeneratorFillArrayWithStartu32T3);
}

void testGeneratorCalculateFillLimitT1()
{
    TEST_ASSERT_EQUAL(1, GeneratorCalculateFillLimit(1, 4096, 32));
}

void testGeneratorCalculateFillLimitT2()
{
    TEST_ASSERT_EQUAL(1, GeneratorCalculateFillLimit(16, 4096, 4096));
}

void testGeneratorCalculateFillLimitT3()
{
    TEST_ASSERT_EQUAL(2, GeneratorCalculateFillLimit(64, 4096, 2048));
}

void testGeneratorCalculateStepSizeT1()
{
    TEST_ASSERT_EQUAL(4096, GeneratorCalculateStepSize(1, 4096, 0));
}

void testGeneratorCalculateStepSizeT2()
{
    TEST_ASSERT_EQUAL(4096 + 32, GeneratorCalculateStepSize(1, 4096, 32));
}

void testGeneratorCalculateStepSizeT3()
{
    TEST_ASSERT_EQUAL(131104, GeneratorCalculateStepSize(32, 4096, 32));
}

void testGeneratorFillArrayu32T1()
{
    u32 actual[5] = { 0 };
    const u32 expected[5] = { 0, 5, 10, 15, 20};
    GeneratorFillArrayu32(actual, 5, 25, 5);
    for(int i = 0; i < 5; i++)
    {
        TEST_ASSERT_EQUAL(expected[i], actual[i]);
    }
}

void testGeneratorFillArrayu32T2()
{
    u32 actual[32] = { 0 };
    // incrementing starts from zero
    const u32 expected[32] = {  0, 2048, 4096, 6144, 8192, 10240,
                                12288, 14336, 16384, 18432, 20480,
                                22528, 24576, 26624, 28672, 30720,
                                32768, 34816, 36864, 38912, 40960,
                                43008, 45056, 47104, 49152, 51200,
                                53248, 55296, 57344, 59392, 61440,
                                63488 };

    GeneratorFillArrayu32(actual, 32, 65536, 2048);
    for(int i = 0; i < 32; i++)
    {
        TEST_ASSERT_EQUAL(expected[i], actual[i]);
    }
}

void testGeneratorFillArrayu32T3()
{
    u32 actual[32] = { 0 };
    GeneratorFillArrayu32(actual, 32, 65536, 4096);
    const u32 expected[32] = {  0, 4096, 8192, 12288, 16384, 20480,
                                24576, 28672, 32768, 36864, 40960,
                                45056, 49152, 53248, 57344, 61440,
                                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0 };
    for(int i = 0; i < 32; i++)
    {
        TEST_ASSERT_EQUAL(expected[i], actual[i]);
    }
}

void testGeneratorFillArrayWithStartu32T1()
{
    u32 actual[5] = { 0 };
    GeneratorFillArrayWithStartu32(actual, 5, 5, 25, 5);
    const u32 expected[5] = { 5, 10, 15, 20, 25};
    for(int i = 0; i < 5; i++)
    {
        TEST_ASSERT_EQUAL(expected[i], actual[i]);
    }
}

void testGeneratorFillArrayWithStartu32T2()
{
    u32 actual[32] = { 0 };
    GeneratorFillArrayWithStartu32(actual, 32, 2048, 65536, 2048);
    const u32 expected[32] = {  2048, 4096, 6144, 8192, 10240,
                                12288, 14336, 16384, 18432, 20480,
                                22528, 24576, 26624, 28672, 30720,
                                32768, 34816, 36864, 38912, 40960,
                                43008, 45056, 47104, 49152, 51200,
                                53248, 55296, 57344, 59392, 61440,
                                63488, 65536 };
    for(int i = 0; i < 32; i++)
    {
        TEST_ASSERT_EQUAL(expected[i], actual[i]);
    }
}

void testGeneratorFillArrayWithStartu32T3()
{
    u32 actual[32] = { 0 };
    GeneratorFillArrayWithStartu32(actual, 32, 4096, 65536, 4096);
    const u32 expected[32] = {  4096, 8192, 12288, 16384, 20480,
                                24576, 28672, 32768, 36864, 40960,
                                45056, 49152, 53248, 57344, 61440,
                                65536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0 };
    for(int i = 0; i < 32; i++)
    {
        TEST_ASSERT_EQUAL(expected[i], actual[i]);
    }
}
