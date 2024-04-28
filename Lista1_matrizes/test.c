#include <stdio.h>

void preenchimento(int matriz[][100], int line_a, int col_a) {
    for (int i = 0; i < line_a; i++) {
        for (int j = 0; j < col_a; j++) {
            printf("Insira o valor da matriz A da posicao %d %d: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calculoTransposta(int matriz_A[][100], int matriz_B[][100], int line_a, int col_a) {
    for (int i = 0; i < line_a; i++) {
        for (int j = 0; j < col_a; j++) {
            matriz_B[j][i] = matriz_A[i][j];
        }
    }
}

void exibir(int matriz[][100], int line_a, int col_a) {
    for (int i = 0; i < line_a; i++) {
        for (int j = 0; j < col_a; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int line_a, col_a;

    printf("Digite a quantidade de linhas da matriz A: \n");
    scanf("%d", &line_a);
    printf("Digite a quantidade de colunas da matriz A: \n");
    scanf("%d", &col_a);

    int A[line_a][100], B[col_a][line_a];

    preenchimento(A, line_a, col_a);
    calculoTransposta(A, B, line_a, col_a);

    printf("Matriz A:\n");
    exibir(A, line_a, col_a);
    printf("Matriz B (Transposta de A):\n");
    exibir(B, col_a, line_a);

    return 0;
}
