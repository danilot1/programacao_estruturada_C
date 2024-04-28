#define _CRT_SECURE_NO_WARNINGS
#define TAM 4
#include <stdio.h>

void preenchimento(int matriz[TAM][TAM]) {
    int l, c;
    for (l = 0; l < TAM; l++) {
        for (c = 0; c < TAM; c++) {
            printf("Digite para preencher o elemento [%d][%d] da matriz: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

int verificarQuadradoMagico(int matriz[TAM][TAM]) {
    int l, c, total = 0, falhou = 0, soma = 0;
    
    
    for (l = 0; l < TAM; l++) {
        soma += matriz[l][l];
    }
    total = soma;

    
    soma = 0;
    for (l = 0; l < TAM; l++) {
        soma += matriz[l][TAM - 1 - l];
    }
    if (total != soma) {
        falhou = 1;
    }

    
    for (l = 0; l < TAM; l++) {
        soma = 0;
        for (c = 0; c < TAM; c++) {
            soma += matriz[l][c];
        }
        if (total != soma) {
            falhou = 1;
        }
    }

    
    for (c = 0; c < TAM; c++) {
        soma = 0;
        for (l = 0; l < TAM; l++) {
            soma += matriz[l][c];
        }
        if (total != soma) {
            falhou = 1;
        }
    }
    
  
    if (falhou == 1) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int matriz[TAM][TAM];
    preenchimento(matriz);
    printf("Verificando se a matriz eh um quadrado magico...\n");
    if (verificarQuadradoMagico(matriz)) {
        printf("A matriz eh um quadrado magico.\n");
    } else {
        printf("A matriz nao eh um quadrado mágico.\n");
    }
    return 0;
}
