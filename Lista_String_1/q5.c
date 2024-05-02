#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(){
    char frase[101];
    char caractere;
    int i, qtd_caractere = 0;
    printf("Digite uma frase de no max 100 caracteres: \n");
    fgets(frase, 101, stdin);
    printf("Digite o caractere desejado: \n");
    scanf("%c",&caractere);
    
    for(i=0;i<101 && frase[i]!='\0';i++){
        if(frase[i]==caractere){
            qtd_caractere++;
        }
    }
    printf("Numero de vezes que o caractere %c aparece eh %d",caractere,qtd_caractere);
    return 0;
}
