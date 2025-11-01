#include <stdio.h>

// Funcoes recursivas para mover as peças
// Baseada na quantidade de casas que o usuário quer andar

// Funcao para o movimento da Torre
void moverTorre (int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Funcao para o movimento do Bispo
void moverBispo (int casas) {
    if (casas > 0) {
        // Loop externo eixo y para vertical
        for (int y = 0; y < 1; y++) {
            for (int i = 0; i < 1; i++) {
                printf("Cima\n");
            }
            // Loop sequencial sendo x para horizontal
            for (int x = 0; x < 1; x++) {
                printf("Direita\n");
            }                                                          
           
        }
    moverBispo (casas - 1);
    }
}

// Funcao para o movimento da Rainha
void moverRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    
    }
}

// Funcao para o movimento do cavalo
void moverCavalo (int casas) {
    // Loop externo eixo x para horizontal
    for (int x = 0; x < casas; x++) {
       // Loop interno eixo y para vertical
        for (int y = 0; y < 2; y++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main()  {

    // Retorna a funcao moverTorre
    // Movendo a Torre 5 casas para a direita
    moverTorre(5);
    printf("\n");

    // Retorna a funcao moverBispo
    // Movendo o Bispo 5 casas na diagonal para cima e para direita
    moverBispo(5);
    printf("\n");

    // Retorna a funcao moverRainha
    // Movendo a Rainha 8 casas para a esquerda
    moverRainha(8);
    printf("\n");

    // Retorna a funcao moverTorre
    // Movendo o Cavalo 2 casas para baixo e 1 para a esquerda
    // Cavalo tem funcao clamada como 1 pois só possui um tipo de movimento ou seja
    // Se cavalo se move para 2x, cavalo precisa se mover para 1y
    // Ou 
    // Se cavalo se move para 2y, cavalo precisa se mover para 1x
    moverCavalo(1);


    return 0;
}