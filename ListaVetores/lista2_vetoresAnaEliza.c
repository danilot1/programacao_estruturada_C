#include <stdio.h>

void preencherVetores(float preencher_vetores[60]) {
    for (int i = 0; i < 60; i++) {
        printf("Digite o valor da nota %d: ", i + 1);
        scanf("%f", &preencher_vetores[i]);
        if (preencher_vetores[i] < 0 || preencher_vetores[i] > 10) {
            printf("Valor inválido, digite um valor no intervalo de 0 a 10:\n");
            i--; // Reconsiderar a entrada inválida
        }
    }
}

void calcularMedias(float notas_1[60], float notas_2[60], float media[60]) {
    for (int i = 0; i < 60; i++) {
        media[i] = (notas_1[i] * 2 + notas_2[i] * 3) / 5.0;
    }
}

void exibirValores(float exib_valores[60]) {
    for (int i = 0; i < 60; i++) {
        printf("%.2f ", exib_valores[i]);
    }
    printf("\n");
}

void avaliarMedia(float av_media[60], char situation[60]) {
    for (int i = 0; i < 60; i++) {
        if (av_media[i] >= 7) {
            situation[i] = 1;
            printf("O aluno com a nota da prova %d esta aprovado.\n", i + 1);
        } else if (av_media[i] >= 3) {
            situation[i] = 2;
            printf("O aluno com a nota da prova %d esta em Recuperacao.\n", i + 1);
        } else {
            situation[i] = 3;
            printf("O aluno com a nota da prova %d esta Reprovado.\n", i + 1);
        }
    }
}

void calcularPercentuais(char situacoes[60], int tamanho,
                         float *percentualAprovados,
                         float *percentualRecuperacao,
                         float *percentualReprovados) {
    int totalAlunos = tamanho;
    int aprovadosDireto = 0, emRecuperacao = 0, reprovadosDireto = 0;

    for (int i = 0; i < tamanho; i++) {
        if (situacoes[i] == 1) { 
            aprovadosDireto++;
        } else if (situacoes[i] == 2) { 
            emRecuperacao++;
        } else if (situacoes[i] == 3) { 
            reprovadosDireto++;
        }
    }

    *percentualAprovados = (float)aprovadosDireto / totalAlunos * 100.0;
    *percentualRecuperacao = (float)emRecuperacao / totalAlunos * 100.0;
    *percentualReprovados = (float)reprovadosDireto / totalAlunos * 100.0;
}

void menorMedia(float media[60]) {
    float menor = media[0];
    for (int i = 1; i < 60; i++) {
        if (media[i] < menor) {
            menor = media[i];
        }
    }
    printf("Menor valor: %.2f\n", menor);
}

void maiorMedia(float media[60]) {
    float maior = media[0];
    for (int i = 1; i < 60; i++) {
        if (media[i] > maior) {
            maior = media[i];
        }
    }
    printf("Maior valor: %.2f\n", maior);
}

void calc_media(float media[60], float media_definitiva[60]) {
    float soma = 0;
    for (int i = 0; i < 60; i++) {
        soma += media[i];
    }
    for (int i = 0; i < 60; i++) {
        media_definitiva[i] = soma / 60;
    }
}

int mediaBaixa(float media_definitiva[60]) {
    int cont = 0;
    for (int i = 0; i < 60; i++) {
        if (media_definitiva[i] < 7) {
            cont++;
        }
    }
    return cont;
}

int main() {
    float notas_1[60], notas_2[60];
    float media[60] = {0};
    float media_definitiva[60];
    char situation[60] = {0};
    float percentualAprovados, percentualRecuperacao, percentualReprovados;

    printf("Preencher notas 1:\n");
    preencherVetores(notas_1);

    printf("Preencher notas 2:\n");
    preencherVetores(notas_2);

    calcularMedias(notas_1, notas_2, media);

    printf("Notas 1:\n");
    exibirValores(notas_1);

    printf("Notas 2:\n");
    exibirValores(notas_2);

    printf("Media:\n");
    exibirValores(media);

    avaliarMedia(media, situation);

    calcularPercentuais(situation, 60, &percentualAprovados, &percentualRecuperacao, &percentualReprovados);

    printf("Percentual de alunos aprovados: %.2f%%\n", percentualAprovados);
    printf("Percentual de alunos em recuperacão: %.2f%%\n", percentualRecuperacao);
    printf("Percentual de alunos reprovados: %.2f%%\n", percentualReprovados);
    menorMedia(media);
    maiorMedia(media);
    printf("Media final\n");
    calc_media(media, media_definitiva);
    printf("Media baixa");
    mediaBaixa(media_definitiva);
    return 0;
}