#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código serve para simular a movimentação das peças de xadrez
// utilizando diferentes técnicas de programação como recursividade e loops aninhados.

void moveTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }

    printf("Direita\n");
    moveTorre(casasRestantes - 1);
}

void moveRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }

    printf("Esquerda\n");
    moveRainha(casasRestantes - 1);
}

void moveBispo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }

    printf("Cima, Direita\n");
    moveBispo(casasRestantes - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração de constantes para o número de casas que cada peça pode se mover

    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;
    const int CAVALO_VERTICAL = 2;
    const int CAVALO_HORIZONTAL = 1;

    int i, j, k;

    printf("\n--- Movimento do Bispo usando Recursividade (5 casas na diagonal para cima e à direita) ---\n");
    moveBispo(BISPO_CASAS);

    printf("\n--- Movimento da Torre usando Recursividade (5 casas para a direita) ---\n");
    moveTorre(TORRE_CASAS);

    printf("\n--- Movimento da Rainha usando Recursividade (8 casas para a esquerda) ---\n");
    moveRainha(RAINHA_CASAS);

    printf("\n--- Movimento do Bispo usando Loops Aninhados (5 casas na diagonal para cima e à direita) ---\n");

    for (i = 1; i <= BISPO_CASAS; i++) {
        for (j = 1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    printf("\n--- Movimento do Cavalo com Loops Complexos (duas casas para cima, uma para a direita) ---\n");

    int movimentoVertical = 0;
    int movimentoHorizontal = 0;
    int totalMovimentos = 0;

    for (i = 0; i < CAVALO_VERTICAL + CAVALO_HORIZONTAL; i++) {
        for (j = 0; j < 1; j++) {
            if (movimentoVertical < CAVALO_VERTICAL) {
                printf("Cima\n");
                movimentoVertical++;
                totalMovimentos++;

                if (movimentoVertical < CAVALO_VERTICAL) {
                    continue;
                }
            }
            else if (movimentoHorizontal < CAVALO_HORIZONTAL) {
                printf("Direita\n");
                movimentoHorizontal++;
                totalMovimentos++;

                if (totalMovimentos >= CAVALO_VERTICAL + CAVALO_HORIZONTAL) {
                    break;
                }
            }
        }
    }

    return 0;
}
