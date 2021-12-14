#include "Numeric/TestGenerator.h"

#include "unity.h"

void testGenerator()
{
    testGeneratorFillArrayu32T1();
    testGeneratorFillArrayu32T2();
    testGeneratorFillArrayu32T3();
}

void testGeneratorFillArrayu32T1()
{
    u32 data[5] = { 0 };
    GeneratorFillArrayu32(data, 5, 25, 5);
    for(int i = 0; i < 5; i++)
    {
        printf("%i ", data[i]);
    }
    printf("\n");
    TEST_ASSERT_EQUAL(0, 0);
}

void testGeneratorFillArrayu32T2()
{
    u32 data[32] = { 0 };
    GeneratorFillArrayu32(data, 32, 65536, 2048);
    for(int i = 0; i < 32; i++)
    {
        printf("%i ", data[i]);
    }
    printf("\n");
    TEST_ASSERT_EQUAL(0, 0);
}

void testGeneratorFillArrayu32T3()
{
    u32 data[32] = { 0 };
    GeneratorFillArrayu32(data, 32, 65536, 4096);
    for(int i = 0; i < 32; i++)
    {
        printf("%i ", data[i]);
    }
    printf("\n");
    TEST_ASSERT_EQUAL(0, 0);
}