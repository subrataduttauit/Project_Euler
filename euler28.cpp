/* 
 * Solution to Project Euler problem 28
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

#define N 1001

int main(void)
{
  int sum = 1, i;
  for (i = 3; i <= N; i += 2) {
    sum += 2*(2*i*i - 3*i + 3);
  }
  printf("%d\n", sum);
  return 0;
}
