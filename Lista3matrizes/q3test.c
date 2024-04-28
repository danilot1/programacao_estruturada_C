#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10
#define MOTOS 5
#define BOMBAS 10

void preencherTabuleiro(int tabuleiro[LINHAS][COLUNAS]);
void jogarOJogo(int tabuleiro[LINHAS][COLUNAS]);

int main() {
    int tabuleiro[LINHAS][COLUNAS];

    srand(time(NULL));

    preencherTabuleiro(tabuleiro);
    jogarOJogo(tabuleiro);

    return 0;
}

void preencherTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    
    int motos_colocadas = 0;
    while (motos_colocadas < MOTOS) {
        int linha = rand() % LINHAS;
        int coluna = rand() % COLUNAS;
        if (tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = 2; 
            motos_colocadas++;
        }
    }

    
    int bombas_colocadas = 0;
    while (bombas_colocadas < BOMBAS) {
        int linha = rand() % LINHAS;
        int coluna = rand() % COLUNAS;
        if (tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = 1; 
            bombas_colocadas++;
        }
    }
}

void jogarOJogo(int tabuleiro[LINHAS][COLUNAS]) {
    int vidas = 5;
    int motos_encontradas = 0;
    int jogadas_restantes = 10;

    while (jogadas_restantes > 0 && motos_encontradas < MOTOS) {
        int linha, coluna;

        printf("Digite a linha e a coluna (de 0 a 9) separadas por espaco: ");
        scanf("%d %d", &linha, &coluna);

        
        if (linha < 0 || linha >= LINHAS || coluna < 0 || coluna >= COLUNAS) {
            printf("Posicao invalida. Tente novamente.\n");
            continue;
        }

        
        switch (tabuleiro[linha][coluna]) {
            case 0:
                printf("Nada encontrado.\n");
                break;
            case 1:
                printf("Voce encontrou uma bomba! Perdeu uma vida.\n");
                vidas--;
                break;
            case 2:
                printf("Parabens! Você encontrou uma moto\n");
                motos_encontradas++;
                break;
        }

        jogadas_restantes--;

        printf("Vidas restantes: %d\n", vidas);
        printf("Motos encontradas: %d\n", motos_encontradas);
        printf("Jogadas restantes: %d\n", jogadas_restantes);
    }

    
    if (motos_encontradas == MOTOS) {
        printf("Parabens! Você encontrou todas as motos. Você venceu\n");
    } else if (vidas == 0 || jogadas_restantes == 0) {
        printf("Voce perdeu. Melhor sorte da proxima vez\n");
    }
}