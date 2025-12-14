#include "integers.h"
#include <stdint.h>

int gcd__int(int a, int b)
{
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// end
