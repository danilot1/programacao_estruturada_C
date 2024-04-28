#include <stdio.h>
float fahrenheit(float value);
float celsius(float value);
int main(){
  float temperature;
  int continuar = 0 , escolha = 0;
 do {
  printf("Digite o valor que queria converter: \n");
  scanf("%f", &temperature);
  printf("Digite qual conversao deseja fazer, 1 - Celsius e 2 - Fahrenheit \n");
  scanf("%d", &escolha);
  if (escolha == 1){
    temperature = celsius(temperature);
  }
  else if(escolha == 2 ){
    temperature = fahrenheit(temperature);
  }
  else if(escolha != 1 && escolha != 2){
    printf("Resposta invalida \n");
  }
  printf("A Temperatura eh %.2f \n", temperature);
  printf("Deseja continuar 1- Sim ou 2- Nao ");
  scanf("%d", &continuar);

 } while(continuar == 1);
 return 0;
}
float fahrenheit(float value){
    return (value *1.8) + 32;
}
float celsius(float value){
    return (value -32)/ 1.8;

}
