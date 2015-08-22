/* 
 * Solution to Project Euler problem 30
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>
#include <math.h>

#define M 1000000
#define E 5

int main(void)
{
  char buf[16];
  int i;
  int ttl = 0;
  for (i = 10; i < M; i++) {
    int sum = 0, j;

    snprintf(buf, sizeof buf, "%d", i);
    for (j = 0; buf[j]; j++) {
      sum += pow(buf[j]-'0', E);
    }
    if (i == sum) {
      ttl += i;
    }
  }
  printf("%d\n", ttl);
  return 0;
}

