#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char frase[101], fraseInver[81];
    int i, j,
    fim;
    printf("Insira uma frase de no max 100 caracteres: \n");
    gets(frase);
    fim =0;
    while(frase[fim] != '\0' && frase[fim] != '\n'){
        fim++;
    }
    i = fim -1;
    j = 0;
    while (j<fim){
        fraseInver[j] = frase[i];
        i--;
        j++;
    }
    printf("Frase criptografada:  %s ",fraseInver);
    return 0;
}
