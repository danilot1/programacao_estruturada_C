#include <stdio.h>
float volume_cubo( float aresta_cubo){
   float volume_do_cubo;
   return volume_do_cubo = aresta_cubo * aresta_cubo * aresta_cubo;
}
float volume_paralepipedo(float altura_paralelepipedo,float largura_paralelepipedo, float comprimento_paralelepipedo){
    float volume_do_paralelepipedo; 
    return volume_do_paralelepipedo = altura_paralelepipedo * largura_paralelepipedo * comprimento_paralelepipedo;
}
float volume_esfera(float raio_esfera){
    float volume_da_esfera, pi = 3.14;
    return volume_da_esfera = (4*pi*(raio_esfera*raio_esfera*raio_esfera))/3;
}
float volume_cilindro(float altura_cilindro, float raio_da_base_cilindro){
    float volume_do_cilindro;
    return volume_do_cilindro =altura_cilindro * raio_da_base_cilindro;
}
int main (){
    char solido[10];
    int escolha = 0;
    float altura_paralelepipedo ,largura_paralelepipedo, comprimento_paralelepipedo ,aresta_cubo, raio_esfera, raio_da_base_cilindro, altura_cilindro;
   do{ 
    printf("Digite qual solido vc deseja calcular o volume: Cubo\n Parelepipedo\n Esfera\n Cilindro\n");
    scanf("%s",solido[10]);
    if (solido[10] == "cubo"){
        printf("Digite o valor da aresta: \n");
        scanf("%f", &aresta_cubo);
        printf("Volume do solido escolhido eh %f", volume_cubo);
    }
    else if(solido[10] == "paralelepipedo"){
        printf("Digite a altura, largura e comprimento do paralelepipedo \n");
        scanf("%f %f %f", &altura_paralelepipedo,&largura_paralelepipedo, &comprimento_paralelepipedo);
    }
    else if(solido [10] == "esfera"){
        printf("Digite o valor do raio \n");
        scanf("%f", &raio_esfera);
    }
    else if(solido [10] == "cilindro"){
        printf("Digite o valor da altura e raio da base");
        scanf("%f %f",&altura_cilindro, &raio_da_base_cilindro);
    }
    printf("Volume do solido escolhido eh %f");
    printf("Deseja continuar 1-sim 2-nao?");
    scanf("%d",&escolha);
    } while(escolha == 1);
    return 0;
}