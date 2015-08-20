/* 
 * Solution to Project Euler problem 24
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */


#include <iostream>
#include <algorithm>

#define N 1000000

int main(void)
{
  using namespace std;

  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i;

  for (i = 0; i <= N; i++) {
    next_permutation(a, a + sizeof a/sizeof *a);
  }
  for (i = 0; i < 10; i++) {
    cout << a[i];
  }
  cout << endl;

  return 0;
}

