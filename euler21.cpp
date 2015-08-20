/* 
 * Solution to Project Euler problem 21
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

static int divisors_sum(int n);

int main(void)
{
  int i, d, sum = 0;

  for (i = 2; i < 10000; i++) {
    d = divisors_sum(i);
    if (i < d && i == divisors_sum(d)) {
      sum += i + d;
    }
  }
  printf("%d\n", sum);

  return 0;
}

int divisors_sum(int n)
{
  int sum= 1;
  int i, k = n;

  for (i = 2; i <= k; i++) {
    int p = 1;
    while (k % i == 0) {
      p *= i;
      k /= i;
    }
    sum *= (p*i - 1)/(i-1);
  }
  return sum - n;
}
