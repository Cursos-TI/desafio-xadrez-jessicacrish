#include <stdio.h>

// Função recursiva para mover a Torre
// A Torre move-se horizontalmente, 1 casa por vez, até o número de casas desejado ser atingido.
void moverTorre(int casas) {
    // Caso base: se casas == 0, a recursão para
    if (casas == 0) {
        return;
    }
    
    // Movimento para a direita
    printf("Direita\n");
    
    // Recursão: chama a função para mover mais uma casa para a direita
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
// A Rainha se move na direção esquerda, 1 casa por vez, até o número de casas desejado ser atingido.
void moverRainha(int casas) {
    // Caso base: se casas == 0, a recursão para
    if (casas == 0) {
        return;
    }
    
    // Movimento para a esquerda
    printf("Esquerda\n");
    
    // Recursão: chama a função para mover mais uma casa para a esquerda
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo
// O Bispo se move na diagonal, uma casa para a direita e uma casa para cima por vez.
// A recursão vai se repetindo até o número de movimentos verticais atingir 0.
void moverBispo(int casasVerticais, int casasHorizontais) {
    // Caso base: se casasVerticais == 0, a recursão para
    if (casasVerticais == 0) {
        return;
    }

    // Para cada movimento vertical, movemos horizontalmente (para a direita) 'casasHorizontais' vezes
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Direita\n");
    }

    // Depois, movemos para cima
    printf("Cima\n");

    // Recursão: chama a função para mover mais uma casa na diagonal
    moverBispo(casasVerticais - 1, casasHorizontais);
}

// Função recursiva para mover o Cavalo
// O Cavalo se move em "L", duas casas para cima e uma casa para a direita por vez.
// A recursão vai se repetindo até o número de movimentos verticais atingir 0.
void moverCavalo(int casasVerticais, int casasHorizontais) {
    // Caso base: se casasVerticais == 0, a recursão para
    if (casasVerticais == 0) {
        return;
    }

    // Para cada movimento vertical, movemos horizontalmente (para a direita) 'casasHorizontais' vezes
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Direita\n");
    }

    // Depois, movemos para cima
    printf("Cima\n");

    // Recursão: chama a função para mover mais uma casa no "L"
    moverCavalo(casasVerticais - 1, casasHorizontais);
}

int main() {
    // Movimentação da Torre: mover 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5); // A Torre vai mover 5 casas para a direita

    // Separador entre os movimentos
    printf("\n");

    // Movimentação do Bispo: mover 5 casas na diagonal (Cima e Direita)
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1); // O Bispo vai mover 5 casas para cima e 1 para a direita

    // Separador entre os movimentos
    printf("\n");

    // Movimentação da Rainha: mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(8); // A Rainha vai mover 8 casas para a esquerda

    // Separador entre os movimentos
    printf("\n");

    // Movimentação do Cavalo: mover 2 casas para cima e 1 para a direita
    printf("Movimento do Cavalo:\n");
    moverCavalo(2, 1); // O Cavalo vai mover 2 casas para cima e 1 para a direita

    return 0;
}
