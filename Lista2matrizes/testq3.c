#include <stdio.h>

void preencherMatriz(int matriz[][4]) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int verificarPermutacao(int matriz[][4]) {
    int linhaSoma[4] = {0}, colunaSoma[4] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            linhaSoma[i] += matriz[i][j];
            colunaSoma[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        if (linhaSoma[i] != 1 || colunaSoma[i] != 1) {
            return 0; 
        }
    }
    return 1; 
}

void exibirMatriz(int matriz[][4]) {
    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[4][4];

    preencherMatriz(matriz);

    if (verificarPermutacao(matriz)) {
        printf("A matriz eh uma matriz de permutacao.\n");
    } else {
        printf("A matriz nao eh uma matriz de permutacao.\n");
    }

    exibirMatriz(matriz);

    return 0;
}
