// copiando string com o strcpy
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 int main(){
    char s1[80] ="ola" , s2[80] ="pessoal";
    strcpy(s1,s2);
    printf("%s\n",s1);
    return 0;
 }