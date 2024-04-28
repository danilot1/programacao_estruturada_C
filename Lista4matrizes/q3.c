#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM 3
//precisa corrijir 
void preencherViaColuna(float matriz[TAM][TAM]){
    int linha, coluna;
    for(linha=0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            printf("Digite o valor da posicao [%d][%d] ",coluna,linha);
            scanf("%f",&matriz[coluna][linha]);
        }
    }
}
float maiorElemento(float matriz[TAM][TAM]){
    int linha, coluna;
    float maior_elemento = 0;
    for(linha = 0;linha<TAM;linha++){
        for(coluna=0; coluna<TAM; coluna++){
            if(matriz[linha][coluna]>matriz[coluna+1][linha+1]){
                maior_elemento = matriz[linha][coluna] ;

            }
        }
    }
    return maior_elemento;
}
void multiplicaDiagonalSec_MaiorElemento(float matriz[TAM][TAM]){
    int linha, coluna; 
    float resultado[TAM][TAM];
     for (linha = 0; linha < TAM; linha++) {
        for(coluna = linha - 1 ; coluna < TAM; coluna){
           resultado[TAM][TAM] = matriz[linha][coluna]*maiorElemento(matriz);
        }
    }
}
void exibir(float matriz[TAM][TAM]){
    int linha, coluna;
    for(linha=0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            printf("%f ",matriz[linha][coluna]);
        }
        printf("\n");
    }
}
int main(){
    float matriz[TAM][TAM];
    preencherViaColuna(matriz);
    maiorElemento(matriz);
    multiplicaDiagonalSec_MaiorElemento(matriz);
    exibir(matriz);


}