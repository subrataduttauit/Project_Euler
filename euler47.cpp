/* 
 * Solution to Project Euler problem 47
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

#define N 4
#define M 1000000

static int distinct_factor_count(unsigned n);

/* this program may take sevaral seconds */
int main(void)
{
  unsigned i, j = 0;
  for (i = 2; i < M && j < N; i++) {
    for (j = 0; j < N && distinct_factor_count(i+j) == 4; j++)
      ;
  }
  printf("%u\n", i-1);

  return 0;
}

int distinct_factor_count(unsigned n)
{
  unsigned count = 0;
  unsigned i;
  for (i = 2; i <= n; i++) {
    if (n % i == 0) {
      count++;
      n /= i;
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  return count;
}

