#include <stdio.h>

insercao(float vetor[50]){
    int i;
    for(i=0;i<50;i++){
        printf("digite o valor para prencher o vetor[%d] ", i);
        scanf("%d",&vetor[i]);
    }
}
busca(float vetor[50]){
    int i, cont = 0, cont_positions = 0;
    for (i= 0;i<50;i++){
        if(vetor[i]== vetor[i]){
            cont_positions++;
            
        }
        if(vetor[i] < 0){
            cont++;
        }
    }
    printf("posição do vetor %d", cont_positions);
    printf("quantidade de vetores vazios %d", cont );
}
exibir(float vetor[50]){
    int i;
for(i =0; i<50;i++){
    printf("Os valores do vetor[%d] %d \n",i,vetor[i]);
}
}
int main(){
    int A[50], B[50];
    int opt;
    int par_ou_impar;
    char opt_busca;
    char opt_exibir;
   do{
    printf("Menudo de opcoes\n");
    printf("O- sair\n");
    printf("1-insercao \n");
    printf("2-busca\n");
    printf("3-exibicao \n");
    scanf("%d",opt);
    if (opt==1)
    {
        printf("os numeros que você que inserir são pares ou impares, digite 2 para par e 3 para impar ");
        scanf("%i",&par_ou_impar);
        if(par_ou_impar % 2 == 0){
            insercao(A);
        }
        else if(par_ou_impar % 3 == 0){
            insercao(B);
        }
    }
    else if (opt==2)
    {
        printf("Em qual vetor você deseja fazer a Busca o A ou o B ?");
        scanf("%c", opt_busca); 
        if (opt_busca == 'A' || opt_busca == 'a'){
            busca(A);
        }
        else if(opt_busca == 'B' || opt_busca == 'b'){
            busca(B);
        }
    }
    else if (opt == 3)
        {
        printf("Qual vetor você deseja exibir o A ou o B ?");
        scanf("%c", opt_exibir); 
        if (opt_exibir == 'A' || opt_exibir == 'a'){
            exibir(A);
        }
        else if(opt_exibir == 'B' || opt_exibir == 'b'){
            exibir(B);
        }
        }
    else
    {
        printf("valor invalido");
        scanf("%d", opt);
    }
   }while(opt != 0);
   return 0;
}