
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){
    float A[3][4], B[3][4], C[3][4];
    int lin, col;
    printf("Digite os valores para preencher a matriz A \n");
    for(lin = 0; lin<3;lin++){
        for(col = 0; col<4; col++){
            scanf("%f",&A[lin][col]);
        }
    }
    printf("Digite os valores para preencher a matriz B \n");
    for(lin = 0; lin<3;lin++){
        for(col = 0; col<4; col++){
            scanf("%f",&B[lin][col]);
        }
    }
    
    for(lin = 0; lin<3;lin++){
        for(col = 0; col<4; col++){
            C[lin][col] = A[lin][col] + B[lin][col];
        }
    }
    

    printf("Valores da  matriz A: \n");
    for(lin = 0; lin<3;lin++){
        for(col = 0; col<4; col++){
            printf("%.2f ",A[lin][col]);
        }
    printf("\n");
    }
    printf("\n");
    printf("Valores da  matriz B: \n");
    for(lin = 0; lin<3;lin++){
        for(col = 0; col<4; col++){
            printf("%.2f ",B[lin][col]);
        }
    printf("\n");
    }
    printf("\n");
    printf("Valores da  matriz C: \n");
    for(lin = 0; lin<3;lin++){
        for(col = 0; col<4; col++){
            printf("%.2f ",C[lin][col]);
        }
    printf("\n");
    }
    
}