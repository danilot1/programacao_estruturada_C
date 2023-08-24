#include <stdio.h>
int soma(int m, int n) {
  if (m == n) {
    return m;
  }
  return m + soma(m + 1, n);
}

int main() {
  soma(5, 10);
  printf("%i\n", soma(5, 10));
}