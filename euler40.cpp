/* 
 * Solution to Project Euler problem 40
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>
#include <math.h>

int main(void)
{
  int nth = 1;
  int i;
  int d[7], l;
  int p = 1;

  for (i = 1, l = 0; l < 7; i++) {
    int digits = log10(i)+1;
    int j;
    for (j = 0; j < digits; j++, nth++) {
      if (nth == pow(10, l)) {
        d[l++] = (i / (int)pow(10, digits-j-1)) % 10; /* retrieve i's j-th digit */
      }
    }
  }

  for (i = 0; i < l; i++) {
    p *= d[i];
  }
  printf("%d\n", p);

  return 0;
}

