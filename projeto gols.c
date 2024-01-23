#include <stdio.h>
#include <stdlib.h>

int main() {

    int gols_timeA, gols_timeB, diferenca_gols;

    printf("Digite a quantidade de gols do time A:\n");
    scanf("%d", &gols_timeA);

    printf("Digite a quantidade de gols do time B:\n");
    scanf("%d", &gols_timeB);

    diferenca_gols = abs(gols_timeA - gols_timeB);

    if (diferenca_gols == 0) {
        printf("A partida acabou em empate.\n");
    }
    else if (diferenca_gols <= 3) {
        printf("A partida terminou em uma grande vitoria.\n");
    }
    else if (diferenca_gols >= 4) {
        printf("A partida terminou em uma grande goleada.\n");
    }
    else {
        printf("Resultado fora dos padrões estabelecidos. Insira valores condizentes com uma partida de futebol.\n");
    }

    return 0;
}
