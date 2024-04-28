//imprimindo strings com printf()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){
    char texto[] = "exemplo!";
    printf("A string %s\n",texto);
    printf("A primeira letra é %c\n", texto[0]);
return 0;
}