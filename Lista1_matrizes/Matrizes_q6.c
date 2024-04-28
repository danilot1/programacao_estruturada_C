#include <stdio.h>

// Procedimento para somar os elementos de cada linha separadamente e armazenar em um vetor SOMALINHA
void somarLinhas(int matriz[][5], int somaLinha[], int linhas) {
    for (int i = 0; i < linhas; i++) {
        somaLinha[i] = 0; // Inicializa a soma da linha como 0
        for (int j = 0; j < 5; j++) {
            somaLinha[i] += matriz[i][j]; // Soma os elementos da linha atual
        }
    }
}

// Procedimento para somar os elementos de cada coluna separadamente e armazenar em um vetor SOMACOLUNA
void somarColunas(int matriz[][5], int somaColuna[]) {
    for (int j = 0; j < 5; j++) {
        somaColuna[j] = 0; // Inicializa a soma da coluna como 0
        for (int i = 0; i < 4; i++) {
            somaColuna[j] += matriz[i][j]; // Soma os elementos da coluna atual
        }
    }
}

// Função para somar todos os elementos do vetor SOMALINHA e retornar o resultado da soma
int somarSomaLinha(int somaLinha[], int linhas) {
    int somaTotal = 0;
    for (int i = 0; i < linhas; i++) {
        somaTotal += somaLinha[i]; // Soma os elementos do vetor SOMALINHA
    }
    return somaTotal;
}

int main() {
    int matriz[4][5];
    int somaLinha[4], somaColuna[5];
    int linhas = 4;

    // Preenche a matriz com valores digitados pelo usuário
    printf("Digite os elementos da matriz 4x5:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Chama o procedimento para somar os elementos de cada linha separadamente
    somarLinhas(matriz, somaLinha, linhas);

    // Chama o procedimento para somar os elementos de cada coluna separadamente
    somarColunas(matriz, somaColuna);

    // Exibe o conteúdo do vetor SOMALINHA
    printf("\nVetor SOMALINHA:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", somaLinha[i]);
    }

    // Exibe o conteúdo do vetor SOMACOLUNA
    printf("\nVetor SOMACOLUNA:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d ", somaColuna[j]);
    }

    // Chama a função para somar todos os elementos do vetor SOMALINHA
    int somaTotal = somarSomaLinha(somaLinha, linhas);
    printf("\nSoma total das linhas: %d\n", somaTotal);

    return 0;
}
