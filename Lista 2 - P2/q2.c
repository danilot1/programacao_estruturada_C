#include <stdio.h>
float cal_media_saldo (float saldo){
  float credito;
  if (saldo >= 1 && saldo <= 200.00){
    return credito = saldo * 0.1;
  }
  else if(saldo > 200 && saldo <= 300.00){
    return credito = saldo * 0.2;
  }
  else if( saldo > 300 && saldo <= 400.00){
    return credito = saldo * 0.25;
  }
  else if( saldo > 400){
    return credito = saldo * 0.3;
  }
}
int main (){
    float saldo , credito ;
    int continuar = 0 ;
   do{
    printf("Digite o valor do seu saldo medio \n");
    scanf("%f", &saldo);
    if(saldo <= 0){
        printf("Voce nao tem direito ao beneficio \n");
        continue;
    }
    credito  = cal_media_saldo(saldo);
    printf("Para  um  saldo  medio  igual a R$ %.2f sera dado um credito de R$ %.2f \n",saldo, credito);
    printf("Deseja realizar outro calculo, 1 - Sim ou 2 - Nao \n");
    scanf("%d",&continuar);
 } while (continuar == 1);
   return 0;
}