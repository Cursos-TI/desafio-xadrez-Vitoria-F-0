#include <stdio.h>

int main() {
    // Mover a Torre 5 casas para a direita
    for( int t = 0; t < 5; t++) {
        printf("Direita\n"); //Imprime a direção do movimento
    }

    // Mover o Bispo 5 casas para diagonal para cima e direita
    int b = 0; 

    while(b < 5) {
        printf("Cima Direita\n"); //Movimento diagonal
        b ++;
    }

    //Mover a Rainha 8 casas para a esquerda
    int r = 0;

    do {
        printf("Esquerda\n");
        r++;
    } while (r <8);

    return 0;
}