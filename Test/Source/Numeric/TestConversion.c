#include "Numeric/TestConversion.h"
#include "Definitions/Types.h"
#include "Numeric/Conversion.h"

#include "unity.h"

void testConversion()
{
	RUN_TEST(testInvertValueWithSpecificZeroPoint);
}

void testInvertValueWithSpecificZeroPoint()
{
	u16 in = 48000;
	const u16 zero = 32768;

	TEST_ASSERT_EQUAL(17536, InvertValueWithSpecificZeroPoint(in, zero));
	in = 15123;
	TEST_ASSERT_EQUAL(50413, InvertValueWithSpecificZeroPoint(in, zero));
}