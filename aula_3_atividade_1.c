#include <stdio.h>

int main(void) { return 0; }

int soma(int m, int n) {
  m = 2, n = 5;
  if (m == n) {
    return n;
  } else
    return m + soma(m + 1, n);
  printf("%d", m);
  printf("%d", n);
}