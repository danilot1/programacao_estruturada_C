#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(){
    char frase[80];
    int i;
    printf("Insira uma frase de no max 80 caracteres: \n");
    gets(frase);
    for(i = 0; i<80; i++){
       // frase[i] = toupper(frase[i]);
        if(frase[i] == 'c' || frase[i] == 'd' || frase[i] == 'f' || frase[i] == 'g' || frase[i] == 'h' || frase[i] == 'j' || frase[i] == 'k' || frase[i] == 'l' || frase[i] == 'm' ||frase[i] == 'n' || frase[i] == 'p' || frase[i] == 'q' || frase[i] == 'r' || frase[i] == 's' || frase[i] == 't' || frase[i] == 'v' || frase[i] == 'w' || frase[i] == 'x' || frase[i] == 'y' || frase[i] == 'z' || frase[i] == 'q' || frase[i] == 'q' || frase[i] == 'q' || frase[i] == 'q' ){
            frase[i] = '#';
        }
    }
    printf("frase criptografada: %s",frase);
    return 0;
}