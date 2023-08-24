#include <stdio.h>

int main(void) {

  // sizeof retorna o tamanho de cada tipo de variavel em Bytes
  printf("O tamanho da variavel  int eh: %d\n", sizeof(int));
  printf("O tamanho da variavel short int eh: %d\n", sizeof(short int));
  printf("O tamanho da variavel char eh: %d\n", sizeof(char));
  printf("O tamanho da variavel double eh: %d\n", sizeof(double));
  printf("O tamanho da variavel float eh: %d\n", sizeof(float));
  printf("O tamanho da variavel long int eh: %d\n", sizeof(long int));
  printf("O tamanho unsigned long inteh: %d\n", sizeof(unsigned long int));
  printf("Hello World\n");

  // calculo de raiz
  int n;
  float resultado;
  printf("Digite um numero inteiro para calcula a sua raiz:");
  scanf("%d", &n);

  resultado = n * n;
  printf("o valor quadratico do numero %d e %.2f\n\n", n, resultado);

  // calculo do produto
  int a, b, produto;
  printf("Digite 2 valores para encontrar o produto entre eles: ");
  scanf("%d %d", &a, &b);
  produto = a * b;
  printf("o produto e: %d\n", produto);

  // printando um caractere
  char g = 'G';
  printf("%c\n", g);
  return 0;
}