/* 
 * Solution to Project Euler problem 44
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>
#include <limits.h>
#include <math.h>

#define N 10000

static unsigned pentagonal(unsigned n);
static int is_pentagonal(unsigned n);

/* this program may take a few seconds */
int main(void)
{
  unsigned i, j;
  unsigned min = UINT_MAX;
  for (i = 1; i < N; i++) {
    for (j = i; j < N; j++) {
      unsigned k = pentagonal(i);
      unsigned l = pentagonal(j);
      if (is_pentagonal(k+l) && is_pentagonal(l-k)) {
        if (l-k < min) {
          min = l-k;
        }
      }
    }
  }
  printf("%u\n", min);

  return 0;
}

unsigned pentagonal(unsigned n)
{
  return n*(3*n-1)/2;
}

int is_pentagonal(unsigned n)
{
  unsigned sq = sqrt(1+24*n);
  return sq*sq == 1+24*n && (1+sq) % 6 == 0;
}

