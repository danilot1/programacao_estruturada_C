#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LINHAS 10
#define COLUNAS 10

void preencherTabuleiro(int matriz[LINHAS][COLUNAS]){
  int l, c;
  for (l = 0; l < LINHAS; l++) {
    for (c = 0; c < COLUNAS ; c++) {
      matriz[l][c] = rand() % 3 ;
    }
  }
}
void jogarOJogo(int matriz[LINHAS][COLUNAS]);
  int chances = 10;
    for()
int main(){
    int tabuleiro[LINHAS][COLUNAS];

}