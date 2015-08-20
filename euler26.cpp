/* 
 * Solution to Project Euler problem 26
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <stdio.h>
#include <gmp.h>

#define M 1000

int main(void)
{
  mpz_t p, r;
  unsigned maxlen = 0, imax = 0;
  unsigned i;

  mpz_init(p); mpz_init(r);

  for (i = 2; i < M; i++) {
    unsigned len = 1;

    if (i % 2 == 0 || i % 5 == 0) {
      continue;
    }

    mpz_set_ui(p, 10);
    while (mpz_mod_ui(r, p, i), mpz_cmp_ui(r, 1) != 0) {
      len++;
      mpz_mul_ui(p, p, 10);
    }
    if (len > maxlen) {
      maxlen = len;
      imax = i;
    }
  }
  printf("%u\n", imax);

  mpz_clear(p);
  mpz_clear(r);

  return 0;
}

