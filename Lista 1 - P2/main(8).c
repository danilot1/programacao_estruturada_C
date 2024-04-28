#include <stdio.h>

int main(){
    char sexo,prematuro, escolha = 'S';
    int cont_masc = 0,cont_fem = 0,total = 0, prematuros = 0, soma_dias = 0 ,dias, max_dias = 0;
    while(escolha == 'S' || escolha == 's'){
        printf("Digite o sexo M para Masculino e F para feminino ");
        scanf("%c", &sexo);

        printf("O bebe eh prematuro");
        scanf("%c", &prematuro);
        
    if (prematuro == 'S' || prematuro == 's') {
        printf("Quantos dias o recem-nascido passou na incubadora? ");
        scanf("%d", &dias);
        prematuros++;
        soma_dias += dias;
        if (dias > max_dias) {
                max_dias = dias;
            }
        if(sexo == 'M' || sexo == 'm'){
            cont_masc++;
        }
        else if(sexo == 'F' || sexo == 'f'){
            cont_fem++;
        }
        
        }
        total++;
        printf("deseja continuar S- para sim,  N- para nao");
        scanf("%c",&escolha);
   }
        printf("Percentagem de recem-nascidos prematuros: %.2f\n", 100.0 * prematuros / total);
        printf("Percentagem de recem-nascidos prematuros do sexo masculino: %.2f\n", 100.0 * cont_masc / prematuros);
        printf("Percentagem de recem-nascidos prematuros do sexo feminino: %.2f\n", 100.0 * cont_fem / prematuros);
        printf("Media de dias de permanencia na incubadora: %.2f\n", (float)soma_dias / prematuros);
        printf("Maior numero de dias na incubadora: %d\n", max_dias);
    return 0;
}