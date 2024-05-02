#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char frase[50];
    int i, qtd_vogal = 0;
    printf("Insira uma frase de no max 50 caracteres: \n");
    gets(frase);
    for(i = 0; i<50 && frase[i] != '\0'; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' ||frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            qtd_vogal++;
        }
    }
    printf("Quantidade de vogais: %d",qtd_vogal);
    return 0;
}