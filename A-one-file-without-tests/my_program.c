#include <stdio.h>
#include <stdlib.h>

int times_2(int n) { return 2 * n; }

int main(void)
{
  int m = 4;
  printf("\n");
  printf("Double of %d is %d\n", m, times_2(m));
  return EXIT_SUCCESS;
}

// end
