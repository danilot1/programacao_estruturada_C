#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <conio.h> //getch(), getchar(), getche()

int main(){
    char a, b, c;
    
    printf("Digite um caractere: \n");
    a = getch(); 
    printf("\n--------leitura getch------\n");
    printf("%c", a);

    printf("\nDigite um caractere: \n");
    b = getche(); 
    printf("\n--------leitura getche------\n");
    printf("%c", b);
    
    printf("\nDigite um caractere: \n");
    c = getchar(); 
    printf("\n--------leitura getchar------\n");
    printf("%c", c);
    
    return 0;
}