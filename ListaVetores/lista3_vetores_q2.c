#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int jogarDado() {
    return rand() % 6 + 1;
}


void realizarSimulacao(int resultado[]) {
    for (int i = 0; i < 1000000; i++) {
        int face = jogarDado();
        resultado[face - 1]++;
    }
}


void exibeResultado(int resultado[]) {
    printf("Resultado da simulação:\n");
    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, resultado[i]);
    }
}


int verificarViciado(int resultado[]) {
    int total = 1000000;
    float percentual_esperado = total * 0.16;
    float margem_erro = total * 0.01;

    for (int i = 0; i < 6; i++) {
        if (resultado[i] < percentual_esperado - margem_erro || resultado[i] > percentual_esperado + margem_erro) {
            return 1; 
        }
    }
    return 0; 
}
int main() {
    srand(time(NULL)); 

    int resultado[6] = {0}; 

    realizarSimulacao(resultado); 

    exibeResultado(resultado); 

    if (verificarViciado(resultado)) {
        printf("O dado eh viciado.\n");
    } else {
        printf("O dado nao eh viciado.\n");
    }

    return 0;
}
