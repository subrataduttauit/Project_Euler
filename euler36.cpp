/* 
 * Solution to Project Euler problem 36
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

#define N 1000000

static int palindromic_base(int n, int base);

int main(void)
{
  int i;
  int sum = 0;

  for (i = 1; i < N; i++) {
    if (palindromic_base(i, 10) && palindromic_base(i, 2)) {
      sum += i;
    }
  }
  printf("%d\n", sum);

  return 0;
}

int palindromic_base(int n, int base)
{
  int reversed = 0;
  const int orig = n;

  while (n) {
    reversed = base*reversed + n%base;
    n /= base;
  }
  return orig == reversed;
}

