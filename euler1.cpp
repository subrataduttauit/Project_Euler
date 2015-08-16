/* 
 * Solution to Project Euler problem 1
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
  int s3 = 0, s5 = 0, s15 = 0;
  int i;

  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      s3 += i;
    }
    if (i % 5 == 0) {
      s5 += i;
    }
    if (i % 15 == 0) {
      s15 += i;
    }
  }
  printf("%d\n", s3 + s5 - s15);

  return 0;
}
