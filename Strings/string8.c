// percorrendo todos os caracteres de uma string
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
 int main(){
    char s[80] = "ola pessoal";
    int i ,tam = strlen(s);
    for(i=0; i<=tam; i++){
        printf("%d",s[i]);
    }
    return 0;
 }