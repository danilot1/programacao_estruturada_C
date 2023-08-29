// posicionamento do valores em vetor
#include <stdio.h>

int main(void) {
  int i, vetor[5] = {1, 3, 5, 6, 7};
  for (i = 0; i < 5; i++) {
    if (vetor[i] == 7) {
      printf("A posicao do valor 7 eh: %i", i);
    }
  }

  // printf("%d\n", vetor[2]);
}
