#include "integers.h"
#include "integers_primes.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("\n");
  printf("Hello world!\n");
  printf("gcd(15,12) = %d\n", gcd__int(15, 12));
  const uint64_t n = 10001;
  printf("Largest prime factor of %" PRIu64 " is %" PRIu64 ".\n", n, largest_prime_factor__uint64(n));
  return EXIT_SUCCESS;
}

// end
