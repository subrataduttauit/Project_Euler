/* 
 * Solution to Project Euler problem 2
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
  unsigned int a1 = 1, a2 = 1, a3 = 2, sum = 0;

  while (a3 < 4000000) {
    a3 = a1 + a2;
    sum += a3 * !(a3%2);
    a1 = a2;
    a2 = a3;
  }

  printf("%u\n", sum);

  return 0;
}
