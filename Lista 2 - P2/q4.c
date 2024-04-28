#include <stdio.h>
 float calculo_media_notas(float nota1, float nota2){
     float media = (nota1+nota2)/2; 
     return media ;
    }
float conceito_media(float media ){
    if(media <= 0.0 && media <5.0){
        printf("conceito D\n");
    }
    else if(media <=5.0 && media <7.0){
        printf("conceito C\n");
    }
    else if( media <=7.0 && media < 9.0){
        printf("Conceito B\n");
    }
    else if(media <= 9.0 && media <= 10.0){
        printf("Conceito A\n");
    }
}
int main (){
   float nota1, nota2,media; 
   char escolha;
   int alunos =0;
  do{ 
   printf("Digite a primeira nota \n");
   scanf("%f", &nota1);
   printf("Digite a  segunda nota \n");
   scanf("%f", &nota2);
   //if(nota1 != 0.0 && nota1 != 10.0 ){
   //     printf("Resposta invalida digite novamente \n");
    //    alunos = 0;  
  // }
  // else if(nota2 != 0.0 && nota2 != 10.0 ){
   //     printf("Resposta invalida digite novamente \n");
     //   alunos = 0;  
  // }
   calculo_media_notas(nota1,nota2);
   conceito_media(media);
 //  printf("reiniciar o processo S-sim N-nao ?");
  // scanf("%c",&escolha);
 //  if(escolha == 'S' || escolha == 's'){
        alunos = 0;
  // }
  // else if(escolha == 'N' || escolha =='n'){
  //      break;
 //  }
  }while (alunos <=0 && alunos < 60);
  return 0;
}