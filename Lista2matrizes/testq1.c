#include <stdio.h>

void preencherGabarito(char gabarito[100]) {
    int i;
    for (i = 0; i < 100; i++) {
        scanf(" %c", &gabarito[i]); 
        while (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e') {
            printf("Resposta invalida digite novamente: ");
            scanf(" %c", &gabarito[i]); 
        }
    }
}

void preencherRespostas(char respostas[50][100]) {
    int i, j;
    for (i = 0; i < 50; i++) {
        for (j = 0; j < 100; j++) {
            scanf(" %c", &respostas[i][j]); // Adicionado espaço antes de %c para ignorar espaços em branco e novas linhas
            while (respostas[i][j] != 'a' && respostas[i][j] != 'b' && respostas[i][j] != 'c' && respostas[i][j] != 'd' && respostas[i][j] != 'e') {
                printf("Resposta invalida digite novamente: ");
                scanf(" %c", &respostas[i][j]); // Adicionado espaço antes de %c para ignorar espaços em branco e novas linhas
            }
        }
    }
}

void calculoAcertos(char gabarito[100], char respostas[50][100], int acertos[50]) {
    int i, j;
    for (i = 0; i < 50; i++) {
        acertos[i] = 0; // Inicializa o número de acertos do aluno i como zero antes de começar a contagem de acertos
        for (j = 0; j < 100; j++) {
            if (gabarito[j] == respostas[i][j]) {
                acertos[i]++; // Incrementa o número de acertos do aluno i se a resposta estiver correta
            }
        }
    }
}

void aprovacao(int acertos[50]) {
    for (int i = 0; i < 50; i++) {
        if (acertos[i] >= 70) {
            printf("O aluno numero %d acertou %d questoes e esta aprovado.\n", i + 1, acertos[i]);
        } else {
            printf("O aluno numero %d acertou %d questoes e esta reprovado.\n", i + 1, acertos[i]);
        }
    }
}

int main() {
    char gabarito[100], respostas[50][100];
    int acertos[50];
    printf("Preencha o gabarito:\n");
    preencherGabarito(gabarito);

    printf("Preencha as respostas dos alunos:\n");
    preencherRespostas(respostas);

    calculoAcertos(gabarito, respostas, acertos);

    aprovacao(acertos);

    return 0;
}
