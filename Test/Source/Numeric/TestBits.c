#include "Numeric/TestBits.h"

#include "Definitions/Types.h"
#include "Numeric/Bits.h"
#include "unity.h"

void testBits()
{
	RUN_TEST(testGetBitByIndexT1);
	RUN_TEST(testGetBitByIndexT2);
	RUN_TEST(testGetBitByIndexT3);
}

void testGetBitByIndexT1()
{
	const u8 in = 16;
	const u8 index = 4;

	for(u8 i = 0; i < 8; i++)
	{
		if(i == index)
		{
			TEST_ASSERT_EQUAL(1, GetBitOnIndex(in, i));
		}
		else
		{
			TEST_ASSERT_EQUAL(0, GetBitOnIndex(in, i));
		}
	}
}

void testGetBitByIndexT2()
{
	const u8 in = 255;
	for(u8 i = 0; i < 8; i++)
	{
		TEST_ASSERT_EQUAL(1, GetBitOnIndex(in, i));
	}
}

void testGetBitByIndexT3()
{
	const u8 in = 165;
	
	TEST_ASSERT_EQUAL(1, GetBitOnIndex(in, 0));
	TEST_ASSERT_EQUAL(1, GetBitOnIndex(in, 2));
	TEST_ASSERT_EQUAL(0, GetBitOnIndex(in, 4));
	TEST_ASSERT_EQUAL(1, GetBitOnIndex(in, 7));

}
