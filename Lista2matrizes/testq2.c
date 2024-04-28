#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 15

void preencherMatriz(int matriz[LINHAS][COLUNAS]) {
    srand(time(NULL)); 
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 10 + 1; 
        }
    }
}

void procurarValor(int matriz[LINHAS][COLUNAS], int valor, int marcacoes[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == valor) {
                marcacoes[i][j] = 1; 
            }
        }
    }
}


void exibirResultados(int marcacoes[LINHAS][COLUNAS], int valor) {
    int total = 0;
    printf("Posições onde o valor procurado foi encontrado:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (marcacoes[i][j] == 1) {
                printf("%d,%d \n", i, j); 
                total++; 
            }
        }
    }
    printf("\nO valor procurado aparece %d vezes na matriz de números aleatórios.\n", total);
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int valorProcurado;
    int marcacoes[LINHAS][COLUNAS] = {0}; 

    preencherMatriz(matriz);

    
    printf("Matriz de números aleatórios:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    printf("Digite um numero inteiro entre 1 e 10 para procurar na matriz: ");
    scanf("%d", &valorProcurado);

   
    procurarValor(matriz, valorProcurado, marcacoes);

    exibirResultados(marcacoes, valorProcurado);

    return 0;
}
