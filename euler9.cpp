/* 
 * Solution to Project Euler problem 9
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
  int a, b;

  for (a = 1; a <= 333; a++) {
    for (b = a; b <= 666; b++) {
      int c = (1000 - a - b);
      if (a*a + b*b == c*c) {
        printf("%d\n", a * b * c);
      }
    }
  }
  return 0;
}
