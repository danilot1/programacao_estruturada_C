//Leitura de strings com fgets()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char T[100];
    printf("Escreva seu nome: ");
    fgets(T,100,stdin);
    printf("Nome = %s",T);
    return 0;
}