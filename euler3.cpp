/* 
 * Solution to Project Euler problem 3
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

int main(void)
{
  unsigned long long n = 600851475143ULL;
  unsigned long long i;

  for (i = 2ULL; i < n; i++) {
    while (n % i == 0) {
      n /= i;
    }
  }
  printf("%llu\n", n);

  return 0;
}
