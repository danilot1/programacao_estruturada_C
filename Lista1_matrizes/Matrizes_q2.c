#include <stdio.h>
int main(){
    char aux, mat[4][4] = {'O','Q','*','I','E','*','E','S','R','E','U','T','A','*','*','S'};
    int i,j;
    for (i = 0; i <= 3; i++) {
        for (j = i+1; j <= 3; j++)  {
            aux = mat[i][j];
            aux = mat[i][j];
            mat [j][i] = aux;
            }
        }
        aux = mat[0][0];
        mat [0][0] = mat [3][3];
        mat [3][3] = aux;
        aux = mat[1][1];
        mat [1][1] = mat [2][2];
        mat [2][2] = aux;
        for(i = 0; i <= 3; i++) {
            for(j = 0; j <= 3; j++) {
                printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}