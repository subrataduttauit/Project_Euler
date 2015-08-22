/* 
 * Solution to Project Euler problem 34
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>

unsigned fact(unsigned n);

int main(void)
{
  unsigned i, sum = 0;
  char buf[16];

  for (i = 3; i < 100000; i++) {
    unsigned j, s = 0;

    snprintf(buf, sizeof buf, "%u", i);
    for (j = 0; buf[j] != 0; j++) {
      s += fact(buf[j]-'0');
    }
    if (i == s) {
      sum += s;
    }
  }
  printf("%u\n", sum);

  return 0;
}

unsigned fact(unsigned n)
{
  unsigned f = 1;
  while (n != 0) {
    f *= n--;
  }
  return f;
}

