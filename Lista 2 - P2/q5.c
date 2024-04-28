#include <stdio.h>


int determinarVencedor(int placar_time1, int placar_time2) {
    if (placar_time1 > placar_time2) {
        return 1; 
    } else {
        return 2; 
    }
}


void determinarFinalETerceiro(int placar1_time1, int placar1_time2, int placar2_time1, int placar2_time2) {
   
    int vencedor1 = determinarVencedor(placar1_time1, placar1_time2);
    
    int vencedor2 = determinarVencedor(placar2_time1, placar2_time2);

    
    printf("Seleções na final:\n");
    if (vencedor1 == 1) {
        printf("Brasil vs ");
    } else {
        printf("Japao vs ");
    }
    if (vencedor2 == 1) {
        printf("Franca\n");
    } else {
        printf("Uruguai\n");
    }

    
    printf("Seleções disputando o 3º lugar:\n");
    if (vencedor1 == 1) {
        printf("Japao vs ");
    } else {
        printf("Brasil vs ");
    }
    if (vencedor2 == 1) {
        printf("Uruguai\n");
    } else {
        printf("Franca\n");
    }
}

int main() {
    int placar1_time1, placar1_time2; 
    int placar2_time1, placar2_time2; 
    
    printf("Informe o placar do primeiro jogo (Brasil 1 vs Japao): ");
    scanf("%d %d", &placar1_time1, &placar1_time2);
    printf("Informe o placar do segundo jogo (Franca 1 vs Uruguai): ");
    scanf("%d %d", &placar2_time1, &placar2_time2);

    
    if (placar1_time1 == placar1_time2 || placar2_time1 == placar2_time2) {
        printf("Os jogos das semifinais nao podem terminar em empate.\n");
        return 1; 
    }

    
    determinarFinalETerceiro(placar1_time1, placar1_time2, placar2_time1, placar2_time2);

    return 0; 
}
