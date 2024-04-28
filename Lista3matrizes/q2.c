#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){
    int matriz[12][4];
    int l, col;
    char option;
    int i , j;
    for(i = 0; i< 12; i++){
        for(j = 0 ;j<4; j++){
                matriz[i][j] = 0;
        } 
    }
    printf("Bem vindo, ao viagem bem qual poltrona voce que escolher ?\n");
    scanf("%d  %d", &l, &col);
    matriz[l][col]=1;
    
    printf("Mapa de Poltronas \n");
    printf("  A  B  C  D\n");
    for(i = 0; i< 12; i++){
        for(j = 0 ;j<4; j++){
        
        printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    do{
    printf("Deseja mais alguma poltrona ?\n");
    scanf(" %c", &option);
        if(option == 's'){
            scanf("%d  %d", &l, &col);
            matriz[l][col] = 1;
            printf("Mapa de Poltronas \n");
            printf("  A  B  C  D\n");
            for(i = 0; i< 12; i++){
                for(j = 0 ;j<4; j++){
                printf("%d ",matriz[i][j]);
            }
            printf("\n");
        }

        }else if(option =='n'){
            break;
        }
        /*for(i =0; i<12;i++){
            for(j=0; j<4; j++){
                if(matriz[i][j]!= 0){
                    printf("Todos os lugares ja foram ocupados, encerrando o programa \n");
                    break;
                }
            }
        }*/
    }while (option=='s');
}