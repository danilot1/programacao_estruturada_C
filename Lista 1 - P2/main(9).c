#include <stdio.h>

int main() {
    char sexo, prematuro, continuar = 'S';
    int dias, total = 0, prematuros = 0, masculinos = 0, femininos = 0, soma_dias = 0, max_dias = 0;

    while (continuar == 'S' || continuar == 's') {
        printf("Digite o sexo M para Masculino e F para feminino: ");
        scanf(" %c", &sexo);

        printf("O bebe eh prematuro ? ");
        scanf(" %c", &prematuro);

        if (prematuro == 'S' || prematuro == 's') {
            printf("Quantos dias o recem-nascido passou na incubadora? ");
            scanf("%d", &dias);

            prematuros++;
            soma_dias += dias;
            if (dias > max_dias) {
                max_dias = dias;
            }

            if (sexo == 'M' || sexo == 'm') {
                masculinos++;
            } else if (sexo == 'F' || sexo == 'f') {
                femininos++;
            }
        }

        total++;

        printf("deseja continuar S- para sim,  N- para nao: ");
        scanf(" %c", &continuar);
    }

    printf("Porcentagem de recem-nascidos prematuros: %.2f%%\n", 100.0 * prematuros / total);
    printf("Porcentagem de recem-nascidos prematuros do sexo masculino: %.2f%%\n", 100.0 * masculinos / prematuros);
    printf("Porcentagem de recem-nascidos prematuros do sexo feminino: %.2f%%\n", 100.0 * femininos / prematuros);
    printf("Media de dias de permanencia na incubadora: %.2f\n", (float)soma_dias / prematuros);
    printf("Maior numero de dias na incubadora: %d\n", max_dias);

    return 0;
}
