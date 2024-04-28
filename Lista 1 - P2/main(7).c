#include <stdio.h>

int main() {
    float angulo_decolagem, distancia_percorrida, altura;

    
    printf("Digite o angulo de decolagem em graus: ");
    scanf("%f", &angulo_decolagem);

    printf("Digite a distancia percorrida em metros: ");
    scanf("%f", &distancia_percorrida);

    
    angulo_decolagem = angulo_decolagem * 3.14 / 180.0;

    
    altura = angulo_decolagem * distancia_percorrida;

    printf("A altura do aviao é: %.2f metros\n", altura);

    return 0;
}

