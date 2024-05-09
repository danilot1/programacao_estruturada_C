// ConsoleApplication4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#define _CRT_SECURE_NO_WARNINGS
#define TAM 16
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void lerSenha(char s[]) {
	int pos = -1;
	do {
		pos++;
			s[pos] = _getch();
		if (s[pos] != '\n') { /* codigo ascii do enter = 13 ou 10 ou o \n*/
			printf("*");
		}
	} while (pos < TAM - 1 && s[pos] != '\n');
	if (pos == TAM - 1) {
		s[pos + 1] = '\0';
	}
	else {
		s[pos] = '\0';

	}

}
int validarSenha(char s[]) {
	int tamanho = strlen(s), i;
	if (tamanho < 8 || tamanho >15) {
		return FALSE;
	}
	else {
		for (i = 0; i < tamanho; i++) {
			if (isalnum(s[i]) == FALSE && s[i] != '@' && s[i] != '$' && s[i] != '#' && s[i] != '%') {
				return FALSE;
			}
		}
		return TRUE;
	}
}
int main() {
		char senha[16];
		int ehvalida;
		printf("Digite a senha: ");
		lerSenha(senha);
		printf("\nSenha %s \n", senha);
		ehvalida = validarSenha(senha);
		if (ehvalida == TRUE) {
			printf("Senha válida \n");
		}
		else {
			printf("Senha invalida \n");
		}
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
