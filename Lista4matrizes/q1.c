#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TAM 4

void preencher(int matriz[TAM][TAM]){
    int linha, coluna;
    for(linha=0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            printf("Digite o valor da posicao [%d][%d]: ",linha,coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }
}
void exibir(int matriz[TAM][TAM]){
    int linha, coluna;
    for(linha=0; linha<TAM; linha++){
        for(coluna=0;coluna<TAM;coluna++){
            printf("%d ",matriz[linha][coluna]);
        }
        printf("\n");
    }
}
void divisao(int matriz[TAM][TAM]){
    int linha, coluna;
    int resultado[TAM][TAM];
    for(linha=0;linha <TAM; linha++){
        for(coluna=0; coluna <TAM; coluna++){
            resultado[linha][coluna] = matriz[linha][coluna]/ matriz[linha][linha];
            printf("%d ",resultado[linha][coluna]);
        }
        printf("\n");
    }
}
int main(){
    int matriz[TAM][TAM];
    preencher(matriz);
    printf("\n");
    printf("Matriz 4x4:\n");
    exibir(matriz);
    printf("\n");
    printf("Matriz apos divisao:\n");
    divisao(matriz);
    return 0;
}
