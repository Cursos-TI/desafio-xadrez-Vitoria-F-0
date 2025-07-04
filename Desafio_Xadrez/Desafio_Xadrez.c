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
    
    //Recursividade para Torre, Rainha e loops aninhados para o Bispo

    void mT (int casas) { //mT é mover Torre
        if (casas > 0) {
            printf("Direita\n");
            mT (casas - 1);
        }
    }

    mT(5);

     void mR (int casas) { 
        if (casas > 0) {
            printf("Esquerda\n");
            mR (casas - 1);
        }
    }

    mR(8);

    void mB(int movimentos) {
    if (passos == 5) return;

    for (int bC = 1; bC <= 1; bC++) {
        for (int bD = 1; bD <= 1; bD++) {
            printf("Cima Direita\n");
        }
    }
    mB(movimentos + 1);
}

mB (0);

    //Loops complexos para o Cavalo

 for (int cC = 0, cD = 3; cD = 1 && cC < 3  ; cC++, cD--) {
        if (cC == 0 || cC == 1) {
            printf("Cima\n");
        } 
        if (cC == 2) {
            printf("Direita\n");
        }
    }

    return 0;
}