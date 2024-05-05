#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
    int main(){
        char nome[51];
        int i, tamanho = 0;
        printf("Digite seu nome: ");
        gets(nome);
       
        while(nome[tamanho]!='\0'){
            tamanho++;
        }
        
        for( i= 0; i<tamanho;i++){
            if(isalpha(nome[i]) || nome[i]==' '){
                continue;
            }
            else{
                printf("O nome digitado eh invalido. \n");
                return 1;
            }
        }
        printf("Bem vindo, %s ",nome);
                
        return 0;
    }