// Resolução da atividade de sala sobre matrizes trabalhada durante a aula do dia 18-04-2024

#define _CRT_SECURE_NO_WARNINGS
#define PRODUTOS 5
#define ARMAZENS 2
#include <stdio.h>

void preencher(int matriz[ARMAZENS][PRODUTOS]) { 
    int lin, col;
    for (lin = 0; lin < ARMAZENS; lin++) {
        printf("Armazem %d \n", lin + 1);
        for (col = 0; col < PRODUTOS; col++) {
            printf("Informe a quantidade do produto %d: ", col + 1);
            scanf("%d", &matriz[lin][col]);
        }
    }
}

void calcularTotalPorArmazem(int matriz[ARMAZENS][PRODUTOS], int vetor[ARMAZENS]) {
    int lin, col, soma;
    for (lin = 0; lin < ARMAZENS; lin++) { // fixa a linha 
        soma = 0;
        for (col = 0; col < PRODUTOS; col++) { // varia a coluna dentro da linha
            soma = soma + matriz[lin][col];
        }
        vetor[lin] = soma;
    }
}

void calcularTotalPorProduto(int matriz[ARMAZENS][PRODUTOS], int vetor[PRODUTOS]) {
    int lin, col, soma;
    for (col = 0; col < PRODUTOS; col++) {  // fixa a coluna
        soma = 0;
        for (lin = 0; lin < ARMAZENS; lin++) { // varia a linha dentro da coluna
            soma = soma + matriz[lin][col];
        }
        vetor[col] = soma;
    }
}

int calcularTotalArmazenado(int vetor[ARMAZENS]) {
    int i, total = 0;
    for (i = 0; i < ARMAZENS; i++) {
        total = total + vetor[i];
    }
    return total;
}

void exibirVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int tabela[ARMAZENS][PRODUTOS];
    int totalPorArmazem[ARMAZENS];
    int totalPorProduto[PRODUTOS];
    int totalArmazenado;
    printf("Preenchimento da tabela com a quantidade de produtos por armazém \n");
    preencher(tabela);
    calcularTotalPorArmazem(tabela, totalPorArmazem);
    printf("Total por armazem \n");
    exibirVetor(totalPorArmazem,ARMAZENS);
    calcularTotalPorProduto(tabela, totalPorProduto);
    printf("Total por produto \n");
    exibirVetor(totalPorProduto, PRODUTOS);
    totalArmazenado = calcularTotalArmazenado(totalPorArmazem);
    printf("O total armazenado em todos os armazéns juntos é %d \n", totalArmazenado);
    return 0;
}
