#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


unsigned long long combinacoes(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main() {
    int n, k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    if (n < 0 || k < 0 || k > n) {
        printf("Valores invalidos. os valores devem ser positivos e nao nulos.\n");
    } else {
        printf("O numero de combinacoes é %llu\n", combinacoes(n, k));
    }

    return 0;
}
