#include <stdio.h>

int main() {
    int matriz[12][4];
    int l, col;
    char option;
    int i, j;

    // Inicializa todas as poltronas como desocupadas
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }

    printf("Bem-vindo à Viagem Bem! Qual poltrona você deseja escolher?\n");

    do {
        printf("Mapa de Poltronas\n");
        printf("  A  B  C  D\n");

        // Exibe o mapa de poltronas
        for (i = 0; i < 12; i++) {
            for (j = 0; j < 4; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        printf("Deseja mais alguma poltrona? (s/n): ");
        scanf(" %c", &option);

        if (option == 's' || option == 'S') {
            printf("Digite a fila e a coluna da poltrona desejada (ex: 1 1 para fila 1, coluna A): ");
            scanf("%d %d", &l, &col);

            // Ajusta os índices para os da matriz (que começam em 0)
            l--;
            if (col == 1) {
                col = 0; // Coluna A
            } else if (col == 2) {
                col = 3; // Coluna D
            } else {
                printf("Coluna inválida!\n");
                continue;
            }

            // Verifica se a poltrona está ocupada
            if (matriz[l][col] == 1) {
                printf("Essa poltrona já está ocupada. Por favor, escolha outra.\n");
            } else {
                matriz[l][col] = 1; // Ocupa a poltrona
                printf("Poltrona %c%d reservada com sucesso!\n", 'A' + col, l + 1);
            }
        } else if (option != 'n' && option != 'N') {
            printf("Opção inválida!\n");
        }

        // Verificação de todas as poltronas ocupadas
        int poltronasDisponiveis = 0;
        for (i = 0; i < 12; i++) {
            for (j = 0; j < 4; j++) {
                if (matriz[i][j] == 0) {
                    poltronasDisponiveis = 1;
                    break;
                }
            }
            if (poltronasDisponiveis) {
                break;
            }
        }

        if (!poltronasDisponiveis) {
            printf("Todos os lugares já foram ocupados, encerrando o programa.\n");
            break;
        }

    } while (option == 's' || option == 'S');

    printf("Obrigado por escolher a Viagem Bem!\n");

    return 0;
}
