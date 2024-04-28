#include <math.h>
#include <stdio.h>
int main(void) {
  // equacao: X^2 -3x-10 = 0
  int delta, a, b, c, x;
  printf("Informe os valores de a, b e c repectivamente: ");
  scanf("%d %d %d", &a, &b, &c);
  delta = (b * b) - (4 * a * c);
  if (delta < 0) {
    printf("Nao existe raiz real");
  }
  printf("Delta: %d\n", delta);

  int x1 = (-b + sqrt(delta)) / 2 * a;
  int x2 = (-b - sqrt(delta)) / 2 * a;

  printf("x1 = %d\n", x1);
  printf("x2 = %d\n", x2);

  return 0;
}