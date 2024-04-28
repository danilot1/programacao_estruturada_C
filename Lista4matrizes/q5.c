#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void preenchimentoVetor(int vetor[9]){
    int i;
    for(i=0; i<9; i++){
        printf("Digite o valor do posicao [%d]: \n", i);
        scanf("%d",&vetor[i]);
    }
}
void preenchimentoMatriz(int vetor[9],int matriz[3][3]){
    int i, j;
    int cont = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3;j++){
            matriz[j][i] = vetor[cont];
            cont++;
        }
    }
}
void exibir(int matriz[3][3]){
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}
int main (){
    int vetor[9];
    int matriz[3][3];
    preenchimentoVetor(vetor);
    preenchimentoMatriz(vetor, matriz);
    printf("Matriz: \n");
    exibir(matriz);
}