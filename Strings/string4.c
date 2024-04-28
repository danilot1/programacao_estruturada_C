//Leitura de strings com scanf() e fgets()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
 char texto[80];
 int idade;

 printf("Digite seu nome: \n");
 scanf("%s", texto);
 printf("Digite sua idade: \n");
 scanf("%d", &idade);

 printf("Nome: %s idade: %d \n", texto, idade);

 return 0;
}  