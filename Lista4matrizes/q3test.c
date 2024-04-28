#include <stdio.h>

// Protótipos das funções e procedimentos
void preencherMatriz(float matriz[3][3]);
float encontrarMaiorElemento(float matriz[3][3]);
void multiplicarDiagonalSecundaria(float matriz[3][3]);
void exibirMatriz(float matriz[3][3]);

int main() {
    float matriz[3][3];

    // Preencher a matriz com valores informados pelo usuário
    preencherMatriz(matriz);

    // Multiplicar cada elemento da diagonal secundária pelo elemento de maior valor
    multiplicarDiagonalSecundaria(matriz);

    // Exibir a matriz resultante
    exibirMatriz(matriz);

    return 0;
}

// Procedimento para preencher a matriz coluna a coluna com valores informados pelo usuário
void preencherMatriz(float matriz[3][3]) {
    printf("Digite os valores da matriz, coluna por coluna:\n");
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função para calcular e retornar o elemento de maior valor armazenado na matriz
float encontrarMaiorElemento(float matriz[3][3]) {
    float maior = matriz[0][0];
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

// Procedimento para multiplicar cada elemento da diagonal secundária pelo elemento de maior valor
void multiplicarDiagonalSecundaria(float matriz[3][3]) {
    float maior = encontrarMaiorElemento(matriz);
    for (int i = 0; i < 3; i++) {
        matriz[2 - i][i] *= maior;
    }
}

// Procedimento para exibir uma matriz
void exibirMatriz(float matriz[3][3]) {
    printf("Matriz resultante:\n");
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}
