#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM 3

void preeenchimento(float matriz[TAM][TAM]){
    int linha, coluna;
    for(linha = 0; linha < TAM; linha++){
        for(coluna = 0; coluna < TAM; coluna++){
            printf("digite o valor da posicao [%d][%d] da matriz ",linha,coluna);
            scanf("%f",&matriz[linha][coluna]);

        }
    }
}
float somaDiagonalPrincipal(float matriz[TAM][TAM]){
    float soma_diagonal = 0;
    int linha, coluna;
    for(linha = 0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            if(linha==coluna){
            soma_diagonal += matriz[linha][linha];
            }
        }
    }
    return soma_diagonal;
}

void multiplicaAbaixoDaDiagonal(float matriz[TAM][TAM]){
    int linha, coluna;
    for(linha = 0; linha<TAM; linha++){
        for(coluna =0; coluna<TAM; coluna++){
        if(linha > coluna){
           matriz[linha][coluna] *= somaDiagonalPrincipal(matriz); 
            }
        }
    }
}
void exibir(float matriz[TAM][TAM]){
    int linha, coluna;
    for(coluna=0; coluna<TAM; coluna++){
        for(linha=0; linha<TAM; linha++){
            printf("%.2f ",matriz[coluna][linha]);
        }
    printf("\n");
    }
}
int main(){
    float matriz[TAM][TAM];
    preeenchimento(matriz);
    exibir(matriz);
    somaDiagonalPrincipal(matriz);
    multiplicaAbaixoDaDiagonal(matriz);
    printf("Matriz apos soma abaixo da diagonal: \n");
    exibir(matriz);
    return 0;
}