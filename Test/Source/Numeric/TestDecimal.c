#include "Numeric/TestDecimal.h"

#include "Numeric/Decimal.h"

#include "unity.h"

void testDecimal()
{
	RUN_TEST(testApproxFloatT1);
	RUN_TEST(testApproxFloatT2);
	RUN_TEST(testApproxFloatT3);
}

void testApproxFloatT1()
{
	const float a = 647.0931658;
	const float b = 647.0;

	TEST_ASSERT_FALSE(FloatApproxEqual(a, b));
}

void testApproxFloatT2()
{
	const float a = 647.0931658;
	const float b = 647.0931658;

	TEST_ASSERT(FloatApproxEqual(a, b));
}

void testApproxFloatT3()
{
	const float a = 647.0931658;
	const float b = 647.0931658;
	const float e = 0.0000001;
	TEST_ASSERT(FloatApproxEqualWithEpsilon(a, b, e));
}
