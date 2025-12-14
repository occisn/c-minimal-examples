#include "integers.h"
#include "unity.h"

void test_gcd__int(void)
{
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, gcd__int(7, 13), "GCD of two coprime numbers should be 1");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, gcd__int(17, 19), "GCD of two prime numbers should be 1");
  TEST_ASSERT_EQUAL_INT_MESSAGE(6, gcd__int(12, 18), "GCD of 12 and 18 should be 6");
  TEST_ASSERT_EQUAL_INT_MESSAGE(4, gcd__int(8, 12), "GCD of 8 and 12 should be 4");
  TEST_ASSERT_EQUAL_INT_MESSAGE(5, gcd__int(15, 25), "GCD of 15 and 25 should be 5");
  TEST_ASSERT_EQUAL_INT_MESSAGE(5, gcd__int(5, 15), "GCD when one number divides the other should be the smaller number");
  TEST_ASSERT_EQUAL_INT_MESSAGE(7, gcd__int(7, 49), "GCD when first number divides second should be the first number");
  TEST_ASSERT_EQUAL_INT_MESSAGE(10, gcd__int(10, 100), "GCD of 10 and 100 should be 10");
  TEST_ASSERT_EQUAL_INT_MESSAGE(5, gcd__int(5, 5), "GCD of identical numbers should be the number itself");
  TEST_ASSERT_EQUAL_INT_MESSAGE(42, gcd__int(42, 42), "GCD of same numbers should equal the number");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, gcd__int(1, 5), "GCD with 1 should always be 1");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, gcd__int(100, 1), "GCD with 1 should always be 1 (reversed)");
  TEST_ASSERT_EQUAL_INT_MESSAGE(5, gcd__int(0, 5), "GCD of 0 and n should be n");
  TEST_ASSERT_EQUAL_INT_MESSAGE(10, gcd__int(10, 0), "GCD of n and 0 should be n");
  TEST_ASSERT_EQUAL_INT_MESSAGE(0, gcd__int(0, 0), "GCD of 0 and 0 should be 0");
  TEST_ASSERT_EQUAL_INT_MESSAGE(gcd__int(12, 18), gcd__int(18, 12), "GCD should be commutative");
  TEST_ASSERT_EQUAL_INT_MESSAGE(gcd__int(7, 21), gcd__int(21, 7), "GCD should be commutative (reversed arguments)");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, gcd__int(1000000007, 1000000009), "GCD of large coprime numbers should be 1");
  TEST_ASSERT_EQUAL_INT_MESSAGE(12345, gcd__int(12345 * 7, 12345 * 11), "GCD of multiples should be the common factor");
  TEST_ASSERT_EQUAL_INT_MESSAGE(4, gcd__int(4, 8), "GCD of 4 and 8 should be 4");
  TEST_ASSERT_EQUAL_INT_MESSAGE(16, gcd__int(16, 32), "GCD of 16 and 32 should be 16");
}

// end
