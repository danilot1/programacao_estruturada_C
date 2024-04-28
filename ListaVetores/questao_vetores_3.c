#include <stdio.h>
void preenchimento_vetorA(int vet_preenchimento_a[10]){
    for (int i=0;i<10;i++){
        printf("Digite o valor do vet_a[%d]:",i);
        scanf("%d",&vet_preenchimento_a[i]);
    }
}
void exibicao_de_vetor(int vet_exibicao[10]){
    printf("Elementos do vetor:\n");
    for(int i=0;i<10;i++){
        printf("vetor[%i]: %d \n",i,vet_exibicao[i]);
    }
    printf("\n");
}
void preenchimento_vetorB(const int vet_a[10], int vet_b[10]) {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vet_b[i] = vet_a[i] / 2;
        } else {

            vet_b[i] = vet_a[i] * 3;
        }
    }

}
int main (){
    int vet_a[10], vet_b[10];
    preenchimento_vetorA(vet_a);
    exibicao_de_vetor(vet_a);
    preenchimento_vetorB(vet_a,vet_b);
    exibicao_de_vetor(vet_b);
    return 0;
}