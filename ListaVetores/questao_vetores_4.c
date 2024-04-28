#include <stdio.h>
void preenchimento_vetor_x(float vet_x[100]){
    for(int i = 0; i<100;i++){
        printf("Digite o valor do vet_x[%d]:",i);
        scanf("%f",&vet_x[i]);
    }
}
void soma_de_elementos(int vet_x[100]){
    for(int i = 0;i<100;i++){
        float soma[100] = vet_x[i]+vet_x[i];
        printf("%f",soma[100]);
    }
}
int main (){
    float x[100];
    preenchimento_vetor_x(x);
    soma_de_elementos(x);
    return 0;
}