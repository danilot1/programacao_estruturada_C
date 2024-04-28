#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(){
    char s1[80] ="aab", s2[80] ="aac";
    int r;
    r = strcmp(s1,s2);
    if(r<0){
        printf("%s vem antes que %s\n", s1,s2);
    }
    else if(r>0){
        printf("%s vem antes que %s\n",s2,s1);
    }
    else{
        printf("Sao iguais\n");
    }
    return 0;
}