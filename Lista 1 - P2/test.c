#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Erro! Fatorial de um numero negativo nao existe.");
    else {
        for(i = 1; i <= n; ++i) {
            fatorial *= i;
        }
        printf("O fatorial de %d eh %llu", n, fatorial);
    }

    return 0;
}
