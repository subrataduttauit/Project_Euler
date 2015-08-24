/* 
 * Solution to Project Euler problem 48
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

#define N 1000
#define Q 10000000000ULL

int main(void)
{
  unsigned long long rem = 0;
  unsigned i;
  for (i = 1; i < N; i++) {
    unsigned long long r = 1;
    unsigned j;
    for (j = 0; j < i; j++) {
      r = (r * i) % Q;
    }
    rem = (rem + r) % Q;
  }
  printf("%llu\n", rem);

  return 0;
}
