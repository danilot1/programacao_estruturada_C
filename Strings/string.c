#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){
    char nome[10];
    int i;
    printf("Digite seu Nome ? ");
    for(i=0;i<6;i++){
        scanf("%c",&nome[i]);
    }
    printf("%s",nome);
}