#include <stdio.h>

void troca(int *x, int *y) {
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
  printf("\n%d\n", *x);
  printf("\n%d\n", *y);
}
int main(void) {
  int x = 4;
  int y = 5;
  troca(&x, &y);
  return 0;
}
