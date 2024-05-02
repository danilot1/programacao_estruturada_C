#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char frase[101], fraseInver[81];
    int i;
    printf("Insira uma frase de no max 100 caracteres: \n");
    gets(frase);
    for(i=101;i<0;i--){
        fraseInver[i] = frase[i];
    }
    puts("%s",fraseInver);
}
