#include <stdio.h>
#include <stdlib.h>

#define TEST(name, condition)        \
  do {                               \
    if (condition) {                 \
      printf("✓ %s\n", name);        \
    } else {                         \
      printf("✗ %s FAILED\n", name); \
      return 1;                      \
    }                                \
  } while (0)

int times_2(int n) { return 2 * n; }

int TEST_times_2(void)
{
  TEST("times_2 / 2 * 0 = 0", times_2(0) == 0);
  TEST("times_2 / 2 * 1 = 2", times_2(1) == 2);
  TEST("times_2 / 2 * 2 = 4", times_2(2) == 4);
  return 0;
}

int all_tests(void)
{
  TEST_times_2();
  return 0;
}

int main(void)
{
  printf("\n");
  all_tests();
  int m = 4;
  printf("\n");
  printf("Double of %d is %d\n", m, times_2(m));
  return EXIT_SUCCESS;
}

// end
