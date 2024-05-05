#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main() {
    char senha[100]; 
    int tamanho = 0, i;
    printf("Digite a senha de no max 15: \n");

    for (i = 0; i < 100; i++) { 
        senha[i] = getch();
        if (senha[i] == '\r') 
            break;
        printf("*"); 
    }
    senha[i] = '\0'; 
    
    printf("\n");

    while (senha[tamanho] != '\0') {
        tamanho++;
    }
    if (tamanho > 16) {
        printf("O numero de digitos ultrapassa o limite \n");
    } else if (tamanho < 8) {
        printf("O numero de digitos eh inferior ao exigido\n");
    } 

    return 0;
}
