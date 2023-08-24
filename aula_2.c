#include <stdio.h>

int main(void) {
  int a = 3;
  int *p = &a;
  printf("%d\n",&a);
  printf("\n\n o valor de a%d\n\n", a);
  printf("\n\n valor do endereco de a eh : %d\n\n", &a);
  printf("\n\n valor de p eh : %d\n\n", p);
  printf("\n\n valor do endereco de p eh : %p\n\n", &p);
  printf("\n\n valor armazenado no endereco que p guarda eh %d\n\n", *p);  
}