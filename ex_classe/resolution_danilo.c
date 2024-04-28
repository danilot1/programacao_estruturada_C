// atvd18.04.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARMAZENS 20
#define PRODUTOS 100
void preencher(int mat[ARMAZENS][PRODUTOS]) {
    int l, c;
    for (l = 0; l < ARMAZENS; l++) {
        for (c = 0; c < PRODUTOS; c++) {
            printf("Digite o valor para preencher o elemento [%d] [%d] do armazem", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
}
void printar_mat(int mat[ARMAZENS][PRODUTOS]) {
    int l, c;
    for (l = 0; l < ARMAZENS; l++) {
        for (c = 0; c < PRODUTOS; c++) {
            printf("%d ", &mat[l][c]);

        }
        printf("\n");
    }
}
void total_arm(int mat[ARMAZENS][PRODUTOS], int vet_arm[ARMAZENS]) {
    int l, c, soma;
    for (l = 0; l < ARMAZENS; l++) {
        soma = 0;
        for (c = 0; c < PRODUTOS; c++) {
           /* vet_arm[l] += mat[l][c];*/
            soma += mat[l][c];
        }
        vet_arm[l] = soma;
    }
}
void quant_total_prod(int mat[ARMAZENS][PRODUTOS], int total_por_produto[ARMAZENS]) {
    int l, c,soma;
    for (c = 0; c < PRODUTOS; c++) {
        soma = 0;
        for (l = 0; l < ARMAZENS; l++) {
            soma += mat[l][c];
        }
        total_por_produto[c] = soma;
    }
}

int main()
{
    int total_por_produto[20];
    int vet_total_arm[20];
    int mat[20][100];
    int total_armazenado ;
    preencher(mat);
    printar_mat(mat);
    total_arm(mat, vet_total_arm);
    quant_total_prod(mat, total_por_produto);
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
