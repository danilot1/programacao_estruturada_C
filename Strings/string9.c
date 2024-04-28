// concatenação de string com o strcat
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 int main(){
    char s1[80] ="ola " , s2[80] ="pessoal";
    strcat(s1,s2);
    printf("%s\n",s1);
    return 0;
 }