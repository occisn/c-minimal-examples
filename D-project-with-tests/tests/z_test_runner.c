#include "unity.h"

// From test_integers.c
void test_gcd__int(void);

// From test_integers2.c
void test_largest_prime_factor__uint64(void);

void setUp(void) {
  //
}

void tearDown(void) {
  //
}

int main(void) {
  UNITY_BEGIN();

  // tests on 'integers'
  RUN_TEST(test_gcd__int);

  // tests on 'integers_primes'
  RUN_TEST(test_largest_prime_factor__uint64);

  return UNITY_END();
}

// end
