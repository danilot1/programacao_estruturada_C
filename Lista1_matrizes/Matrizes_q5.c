#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void preencher(int matriz[][100],int ordem){
    int i = 0, j =0;
    for(i=0; i < ordem ; i++){
        for(j=0; j < ordem; j++){
            printf("Digite os valor na posicao %d %d \n", i,j);
            scanf("%d", &matriz[i][j]);
            }
        }
}
int verificarMatriz(int matriz[][100], int ordem){
    int i = 0, j=0;
    for (i = 0; i < ordem ; i++){
        for(j = 0; j < ordem; j++){
            if(matriz[i][j] == matriz[j][i]){
                return 1;
            }
            else{
                return 0;
            }
                
        }
    }
}
int main (){
    int ordem;
    printf("Digite a ordem da sua matriz \n");
    scanf("%d",&ordem);
    int matriz[ordem][100];
    preencher(matriz, ordem);
    verificarMatriz(matriz, ordem);
    return 0;
}