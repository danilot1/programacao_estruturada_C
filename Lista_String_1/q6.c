#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <ctype.h>
int main(){
    char frase[51], caractere;
    int i;
    printf("Digite uma frase de no max 50 caracteres: \n");
    gets(frase);
    printf("Digite um caractere que deseja alterar na frase: \n");
    do{
        scanf("%c",&caractere);
    }while(!isalpha(caractere));
     
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caractere) {
            frase[i] = toupper(caractere);
        }
    }
    printf("Frase com todas as ocorrencias do caractere '%c' substituidas por '%c': %s\n", caractere, toupper(caractere), frase);
    return 0;
}
