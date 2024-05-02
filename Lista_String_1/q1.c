#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char frase[81];
    int i;
    printf("Insira uma frase de no max 80 caracteres: \n");
    gets(frase);
    for(i = 0; i<81; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' ||frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            frase[i] = '*';
        }
    }
    printf("frase criptografada: %s",frase);
    return 0;
}
