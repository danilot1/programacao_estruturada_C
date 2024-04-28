//Invertendo string
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char texto[80],textoinv[80];
    int i,j,fim;
    fgets(texto,80,stdin);
    fim = 0;
    while(texto[fim] !='\0' && texto[fim]!='\n'){
        fim++;
    }
    i = fim -1;
    j = 0;
    while(j<fim){
        textoinv[j] = texto[i];
        i--;
        j++;
    }
    textoinv[fim] ='\0';
    printf("Inversa: %s \n", textoinv);
    return 0;
}
