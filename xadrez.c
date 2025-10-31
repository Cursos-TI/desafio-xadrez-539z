#include <stdio.h>

int main()  {
    int casasBispo = 0, casasRainha = 0;

    // Move a Torre 5 casas para a direita
    for (int torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }

    // Move o Bispo 5 casas na diagonal para cima e para direita
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    // Move a Rainha 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        printf("%d", casasRainha);
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}