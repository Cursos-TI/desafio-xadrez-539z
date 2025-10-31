#include <stdio.h>

int main()  {
    int casasBispo = 0, casasRainha = 0;

    // Move a Torre 5 casas para a direita
    for (int casasTorre = 0; casasTorre < 5; casasTorre++) {
        printf("Direita\n");
    }
    printf("\n");

    // Move o Bispo 5 casas na diagonal para cima e para direita
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }
    printf("\n");

    // Move a Rainha 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);
    printf("\n");

    // Move o Cavalo 2 casas para baixo e 1 para a esquerda
    for (int casasCavalo = 0; casasCavalo < 3; casasCavalo++){
        while (casasCavalo < 2) {
            printf("Baixo\n");
            casasCavalo++;
        }
        printf("Esquerda");
    }

    return 0;
}