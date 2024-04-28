//Converte todos os caracteres para maiusculo
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    
    char texto[] ="Esse Eh Um exemplo";
    int tam = 0;
    while(texto[tam]!='\0'){
        tam++;  
    }
    printf("tamanho = %d\n",tam);
    int i;
    for(i = 0; i<tam;i++){
        if(texto[i]>='a'&&texto[i]<='z'){
            //A == 65
            // 'a' == 97-32 ==> 'A'
            //97 - 65 = 32
            printf("%c",texto[i]-32);
        }
        else{
            printf("%c",texto[i]);
        }
    }
    printf("\n");
    return 0;
    
}