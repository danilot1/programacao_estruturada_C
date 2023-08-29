#include <stdio.h>

int main(void) {
  float nota[100];
  int i;
  for (i = 0; i < 100; i++) {
    scanf("%f", &nota[i]);
    printf("Nota[%i] = %0.3f\n", i, nota[i]);
  }
}