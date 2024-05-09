// lista2stringq3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>


int main() {
    char senha[100];
    int tamanho = 0, i;
    printf("Digite a senha de no max 15: \n");
    for (i = 0; i < 100; i++) {
        senha[i] = _getch();
        if (senha[i] == '\r') {
            break;
        }
        printf("*");
    }
    senha[i] = '\0';
    printf("\n");
    while (senha[tamanho] != '\0') {
        tamanho++;
    }
    if (tamanho > 16) {
        printf("O numero de digitos ultrapassa o limite \n");
    }
    else if (tamanho < 8) {
        printf("O numero de digitos eh inferior ao exigido\n");
    }
    printf("Senha %s", senha);
    return 0;
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
