#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[100];
    int i, qtd_number = 0, qtd_letter = 0, qtd_symbol = 0;
    printf("Digite uma frase de no max 100 caracteres: \n");
    fgets(frase, 100, stdin);
    for(i = 0; i<100 && frase[i] != '\0'; i++){
        if(isalpha(frase[i])){
            qtd_letter++;
        }
        else if(isdigit(frase[i])){
            qtd_number++;
        }
        else{
            qtd_symbol++;
        }
    }
    printf("Quantidade de letras da string: %d \nQuantidade de numeros da string: %d \nQuantidade de simbolos: %d" , qtd_letter,qtd_number,qtd_symbol);
}