#include <stdio.h>

int main() {
  char caractere;
  printf("Digite um caractere: ");
  scanf(" %c", &caractere);
  if ((caractere >= 'A' && caractere <= 'Z') ||
      (caractere >= 'a' && caractere <= 'z')) {
    printf("eh uma letra.");
  } else if (caractere >= '0' && caractere <= '9') {
    printf("eh um numero.\n");
  } else {
    printf("eh um simbolo.\n");
  }

  return 0;
}
