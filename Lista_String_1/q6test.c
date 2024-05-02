#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[51], caractere;
    
    printf("Digite uma frase de no máximo 50 caracteres: \n");
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha (\n) da entrada
    if (frase[strlen(frase) - 1] == '\n')
        frase[strlen(frase) - 1] = '\0';

    printf("Digite um caractere que deseja alterar na frase: \n");
    do {
        scanf(" %c", &caractere);
    } while (!isalpha(caractere)); // Verificar se é realmente uma letra

    // Substituir todas as ocorrências do caractere na frase por sua versão maiúscula
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caractere) {
            frase[i] = toupper(caractere);
        }
    }

    // Imprimir a frase modificada
    printf("Frase com todas as ocorrências do caractere '%c' substituídas por '%c': %s\n", caractere, toupper(caractere), frase);

    return 0;
}
