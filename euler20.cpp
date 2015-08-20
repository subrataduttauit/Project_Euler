/* 
 * Solution to Project Euler problem 20
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main(void)
{
  mpz_t n;
  char *str;
  int i;
  int sum = 0;

  mpz_init(n);
  mpz_fac_ui(n, 100);
  str = mpz_get_str(NULL, 10, n);
  for (i = 0; str[i]; i++) {
    sum += str[i]-'0';
  }
  printf("%d\n", sum);

  free(str);
  mpz_clear(n);

  return 0;
}
