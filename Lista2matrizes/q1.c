#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void preencherGabarito(char gabarito[100]){
    int i;
    for (i = 0; i < 100; i++){
        scanf(" %c", &gabarito[i]); 
        while(gabarito[i] != 'a' && gabarito[i] != 'b'  && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e'){
            printf("Resposta invalida digite novamente\n");
            scanf(" %c", &gabarito[i]); 
        }
    }
}

void preencherRespostas(char respostas[50][100]){
    int i, j;
    for(i = 0; i < 50; i++){
        for(j = 0; j < 100; j++){
            scanf(" %c", &respostas[i][j]); 
            while(respostas[i][j] != 'a' && respostas[i][j] != 'b'  && respostas[i][j] != 'c' && respostas[i][j] != 'd' && respostas[i][j] != 'e'){
                printf("Resposta invalida digite novamente\n");
                scanf(" %c", &respostas[i][j]); 
            }
        }
    }
}

void calculoAcertos(char gabarito[100], char respostas[50][100], int acertos[100]) {
    int i, j;
    for (i = 0; i < 50; i++) {
        acertos[i] = 0;
        for (j = 0; j < 100; j++) {
            if (gabarito[j] == respostas[i][j]) {
                acertos[i]++;
            }
        }
    }
}

void aprovacao(int acertos[100]){
    int i;
    for(i = 0; i < 100; i++){
        if(acertos[i] > 70){ 
            printf("Aluno %d: aprovado\n", i + 1); 
        }
        else{
            printf("Aluno %d: reprovado\n", i + 1); 
        }
    }
}

int main (){
    char gabarito[100], respostas[50][100];
    int acertos[100];
    preencherGabarito(gabarito);
    preencherRespostas(respostas);
    calculoAcertos(gabarito, respostas, acertos);
    aprovacao(acertos);
    return 0;
}
