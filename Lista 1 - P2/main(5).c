#include <stdio.h>

int fat(int a) {
  if (a == 0) {
    return 1;
  }
  return a * fat(a - 1);
}
int main() {
  int num;
  printf("Digite o numero que deseja calcular o fatorial: ");
  scanf("%d", &num);
  fat(num);
  printf("%i", fat(num));
}
