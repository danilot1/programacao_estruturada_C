#include <stdio.h>

int main(void) {

  int d;
  int f;
  int vetor[5];

  vetor[4] = 5;
  d = vetor[4];

  printf("%d\n", d);

  // vetor[-1] = 5; lixo de memória
  // d = vetor[-1];

  //  int i, notas[3] = {0, 1, 2};
  //  printf("%i\n", notas[1]);
  // for (i = 0; i < 3; i++) {
  //  printf("%i", notas[i]);
}