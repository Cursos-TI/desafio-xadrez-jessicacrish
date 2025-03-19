#include <stdio.h>

// Função para movimentar a peça em uma direção específica
void moverParaDirecao(const char *direcao, int casas) {
    for (int i = 1; i <= casas; i++) {
        printf("%s\n", direcao);
    }
}

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverParaDirecao("Direita", 5);

    // Movimento do Bispo: 5 casas na diagonal Cima e Direita
    printf("\nMovimento do Bispo:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Cima Direita\n");
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    moverParaDirecao("Esquerda", 8);

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda
    printf("\nMovimento do Cavalo:\n");
    // Movimento para baixo (2 casas)
    moverParaDirecao("Baixo", 2);
    // Movimento para a esquerda (1 casa)
    moverParaDirecao("Esquerda", 1);

    return 0;
}
