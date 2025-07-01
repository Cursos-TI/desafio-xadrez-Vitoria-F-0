#include <stdio.h>

int main() {
    //Mover a Torre 5 casas para a direita
    for( int t = 0; t < 5; t++) { //t de Torre
        printf("Direita\n"); //Imprime a direção do movimento
    }

    // Mover o Bispo 5 casas para diagonal para cima e direita
    int b = 0; //b de Bispo

    while(b < 5) {
        printf("Cima Direita\n"); //Movimento diagonal
        b ++;
    }

    //Mover a Rainha 8 casas para a esquerda
    int r = 0; //r de Rainha

    do {
        printf("Esquerda\n");
        r++;
    } while (r <8);

    //Mover o Cavalo em formato de L
    int movimentoCompleto = 1; //Variável de controle para garantir a execução do movimento L
      
    while (movimentoCompleto--) //O loop funcionária enquanto a condição for diferente de zero
     {
        for (int c = 0; c < 2; c++) { //c de Cavalo
            printf("Baixo\n"); //Baixo duas vezes
        }
        printf("Esquerda\n"); //Esquerda uma vez
     }
    
    return 0;
}