// precisa corrijir
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void preenchimento(int matriz[][100], int line_a, int col_a ){
    int i = 0, j = 0;
    for (i= 0; i < line_a; i++){
        for(j= 0; j< col_a; j++){
            printf("insira o valor da matriz a da posicao %d %d \n", line_a,col_a);
            scanf("%d",&matriz[line_a][col_a]);
        }
    }

}
void calculoTransposta( int matriz_A[][100], int matriz_B[][100],int line_a, int col_a  ){
    int i, j;
    for (i=0;i<line_a; i ++){
        for(j=0;j<col_a; j ++){
            matriz_B[i][j]=matriz_A[j][i];
        }
    }
}
void exibir(int matriz[][100],int line_a, int col_a){
    int i, j;
    for (i =0; i<line_a; i++){
        for(j=0;j<col_a; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n");
}

int main (){
    int line_a, col_a;
    printf("Digite a quantidade de linhas da matriz \n");
    scanf("%d", &line_a);
    printf("Digite a quantidade de colunas da matriz \n");
    scanf("%d",&col_a);
    int A[line_a][100], B[col_a][line_a];
    preenchimento(A,line_a,col_a);
    calculoTransposta(A,B,line_a,col_a);
    printf("Matriz A\n");
    exibir(A,line_a,col_a);
    printf("Matriz B\n");
    exibir(B,line_a,col_a);
    return 0;
}