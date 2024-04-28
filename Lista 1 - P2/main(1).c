#include <stdio.h>

int main(void) {
  float A, V, R, C, pi = 3.14;
  printf("Informe o valor do raio:");
  scanf("%f", &R);
  C = 2 * pi * R;
  A = pi * (R * R);
  V = (4.0 / 3.0) * pi * R * R * R;
  printf("O comprimento da circunferencia do rai o R: %.2f\n", C);
  printf("A area da circunferencia de raio R: %.2f \n", A);
  printf("O volume da esfera de raio R: %.2f\n", V);

  return 0;
}