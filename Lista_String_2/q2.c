#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <conio.h>
int main(){
    char nome[31];
    int tamanho = 0;
    int i;
    printf("Qual o seu nome ? \n");
    for(i = 0; i<31;i++){
        nome[i] = getche();
        if (nome[i] == '\r') 
            break;
    }
     
     while(nome[tamanho] != '\0'){
        tamanho++;
    }
    if(tamanho > 31){
        printf("\n Ola %s", nome);
    }
    else{
        printf("\n Ola %s", nome);
    }
    
    return 0;
}