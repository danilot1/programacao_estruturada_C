#include <stdio.h>

int main (){
    int resp, i=0, branco=0, joao=0, maria=0, pedro=0, luiz=0, ana=0, luiza=0, silvia=0, andre=0;
    char continuar;
    int resultado[100];
    int percentual_branco; //percentual_joao, percentual_maria, percentual_pedro, percentual_luiz, percentual_ana, percentual_silvia, percentual_andre;
    do{
    printf("Bem vindo ao progama de votacao \n");
    printf("Em que voce deseja votar ? \n");
    printf("0 Voto em branco \n");
    printf("1 Voto em Joao \n");
    printf("2 Voto em Maria \n");
    printf("3 Voto em Pedro \n");
    printf("4 Voto em Luis \n");
    printf("5 Voto em Ana \n");
    printf("6 Voto em Luiza \n");
    printf("7 Voto em Silvia \n");
    printf("8 Voto em Andre \n");
   
   
    scanf("digite o valor do seu candidato %d", &resp);
        resp = resultado[i];
        i++;
    if(resp != 0 && resp!=1 && resp!=2 && resp!=3 && resp!=4 && resp!=5 && resp!=6 && resp!=7 && resp!=8 ){
        printf("Valor nulo digite um valo valido \n ");
        
    }

    printf("Deseja continuar s para sim e n para nao");
    scanf("&c", &continuar);

    } while( continuar == 's');
    
    for(int j=0; j<=i;j++ ){
        if (resultado[j] == 0){
            branco++;
        }
         if (resultado[j] == 1){
            joao++;
        }
         if (resultado[j] == 2){
            maria++;
        }
         if (resultado[j] == 3){
            pedro++;
        }
         if (resultado[j] == 4){
            luiz++;
        }
         if (resultado[j] == 5){
            ana++;
        }
         if (resultado[j] == 6){
            luiza++;
        }
         if (resultado[j] == 7){
            silvia++;
        }
         if (resultado[j] == 8){
            andre++;
        }

        printf("O total de votos %d \n", i);
        printf("percentual de votos brancos %d \n", percentual_branco = (branco*i)/i);

    }
    
    return 0;
}