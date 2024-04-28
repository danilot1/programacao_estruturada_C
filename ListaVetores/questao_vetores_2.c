#include <stdio.h>

void preenchimento_de_vetor(int vet_preenchimento[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posicao[%d]:",i);
        scanf("%d", &vet_preenchimento[i]);
    }
}

void exibicao_de_elementos_do_vetor(int vet_exibicao[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vet_exibicao[i]);
    }
}

void soma_de_vetores(int vetor_de_somaA[5], int vetor_de_somaB[5], int vetor_resultantec[5]) {
    for (int i = 0; i < 5; i++) {
        vetor_resultantec[i] = vetor_de_somaA[i] + vetor_de_somaB[i];
    }
}

int main() {
    int vet_a[5], vet_b[5], vet_c[5];
    preenchimento_de_vetor(vet_a);
    preenchimento_de_vetor(vet_b);
    printf("valores do Vetor a: \n");
    exibicao_de_elementos_do_vetor(vet_a);
    printf("valores do Vetor b: \n");
    exibicao_de_elementos_do_vetor(vet_b);
    soma_de_vetores(vet_a, vet_b, vet_c);
    printf("valores do vetor c: \n");
    exibicao_de_elementos_do_vetor(vet_c);
    return 0;
}