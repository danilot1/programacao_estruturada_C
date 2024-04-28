#include <stdio.h>

int main(void) {
  float salario;
  //char option;
 // while(option == 's' || option =='S'){

 // }
 
  printf("Digite seu salario ");
  while (salario < 1320) {
    scanf("%f", &salario);
    if (salario < 1320) {
      printf("salario nao se adequa ao reajuste, insira um valor igual ou "
             "maior "
             "a 1320.00  \n");
    }
   
    //if (salario > 1320) {
     // break;
//}
  }
  if(salario != 0 && salario != 9){
      printf("resposta invalida\n");
    }

  if (salario >= 1320.00 && salario <= 1500.00) {
    printf("o funcionario tera aumento de %.2f \n", salario * 0.2);
    printf("e passara a receber %.2f\n", (salario * 0.2) + salario);

  } else if (salario >= 1500.00 && salario <= 2500.00) {
    printf("o funcionario tera aumento de %.2f \n", salario * 0.15);
    printf("e passara a receber %.2f\n", (salario * 0.15) + salario);

  } else if (salario > 2500.00 && salario <= 4000.00) {
    printf("o funcionario tera aumento de %.2f \n", salario * 0.1);
    printf("e passara a receber %.2f\n", (salario * 0.1) + salario);

  } else if (salario > 4000.00) {
    printf("o funcionario tera aumento de %.2f \n", salario * 0.05);
    printf("e passara a receber %.2f\n", (salario * 0.05) + salario);
  }

  return 0;
}
