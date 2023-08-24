#include <stdio.h>

// int fatorial(int m) {
//  if (m ==10) {
//  }
//  return m = m * (m - 1);
//}
// int main() {
// fatorial(10);
//  printf("%i", fatorial(10));
//}
int fat(int a) {
  if (a == 0) {
    return 1;
  }
  return a * fat(a - 1);
}
int main() {
  fat(10);
  printf("%i", fat(10));
}
