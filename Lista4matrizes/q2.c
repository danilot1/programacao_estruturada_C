#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM 4

void preencherColuna(int matriz[4][4]){
    int linha , coluna;
    for(linha=0; linha<TAM; linha++){
        for(coluna=0; coluna<TAM; coluna++){
            printf("Digite o valor da posicao [%d][%d]: ", coluna, linha);
            scanf("%d",&matriz[coluna][linha]);
        }
    }
}
int soma_acima_da_diagonal(int matriz[4][4]){
    int linha, coluna;
    int resultado = 0 ;
    for(linha = 0; linha<TAM; linha++){
        for(coluna = linha + 1; coluna<TAM; coluna++){
            resultado += matriz[linha][coluna];
        }
    }
    return resultado;
}


int main (){
    
    int matriz[TAM][TAM];
    printf("Preencher Coluna\n");
    preencherColuna(matriz);
    int soma = soma_acima_da_diagonal(matriz);
    printf("A soma acima da diagonal eh: %d",soma);
    return 0;
}