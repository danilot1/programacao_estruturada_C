#define _CRT_SECURE_NO_WARINGS
#define TAM 3
#include <stdio.h>
void preencher( float matriz[TAM][TAM]){
    int linha, coluna;
    for(linha=0; linha<TAM ; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            printf("Digite o valor da posicao [%d][%d]: ",linha,coluna);
            scanf("%f",&matriz[linha][coluna]);
        }
    }
}
void produtosMatrizes(float Matriz_A[TAM][TAM], float Matriz_B[TAM][TAM], float Matriz_C[TAM][TAM]){
    int linha, coluna;
    for(linha=0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            Matriz_C[linha][coluna] = Matriz_A[linha][coluna]*Matriz_B[TAM][TAM];
        }
    }
}
void exibir(float matriz[TAM][TAM]){
    int linha , coluna;
    for(linha = 0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            printf("%.2f ",matriz[linha][coluna]);
        }
        printf("\n");
    }
}
int main(){
    float A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
    printf("Preencha a matriz A:\n");
    preencher(A);
    printf("Preencha a matriz B:\n");
    preencher(B);
    produtosMatrizes(A,B,C);
    printf("Matriz A\n");
    exibir(A);
    printf("\n");
    printf("Matriz B\n");
    exibir(B);
    printf("\n");
    printf("Matriz C\n");
    exibir(C);
    return 0;
}