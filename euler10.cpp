/* 
 * Solution to Project Euler problem 10
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *sieve;
  unsigned i, j;
  size_t n = 2000000;
  unsigned long long sum = 0ULL;

  sieve = calloc(n, sizeof *sieve);
  for (i = 2; i < n; i++) {
    if (!sieve[i]) {
      sum += i;
      for (j = i*2; j < n; j += i) {
        sieve[j] = 1;
      }
    }
  }
  free(sieve);

  printf("%llu\n", sum);

  return 0;
}
