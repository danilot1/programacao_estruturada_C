#include <stdio.h>

void preenchimento(float vetor[100]){
    int i;
    for(i= 0; i<100;i++ ){
        printf("insira o valor do vetor[%d]: ",i);
        scanf("%f",&vetor[i]);
    }
}
void exibicao(float vetor[100]){
    int i;
    for (i=0;i<100;i++){
        printf("valor do vetor[%d]: %.2f \n",i, vetor[i]);
    }
    
}
float produto_Escalar(float vetor_A[100], float vetor_B[100]){
    int i;
    float produto = 0;
    for(i=0; i<100;i++){
        produto += vetor_A[i]*vetor_B[i];
    }
    return produto;
}

int main(){
    float A[100], B[100];
    printf("Preenchimento vetor A:\n");
    preenchimento(A);
    printf("Preenchimento vetor B:\n");
    preenchimento(B);
    printf("Exibicao de valores vetor A: \n");
    exibicao(A);
    printf("Exibicao de valores vetor B: \n");
    exibicao(B);
    produto_Escalar(A,B);
    float produto = produto_Escalar(A,B);
    printf("Produto Escalar: %.2f\n", produto);
    return 0;
}