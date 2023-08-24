#include <stdio.h>

int main(void) {

  int m, n, k;
  m = 2;
  n = 5;
  n = m;
  k = m;
  if (n == m) {
    m = m;
  } else if (n > m) {
    m + (k = m + 1);
    k = m;
  }
  // else if (n > m) {
  //   n + (n - 1);
  //   k = m;
  // }
  printf("%i\n", m);
  printf("%i\n", n);
}