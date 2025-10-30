#include <stdio.h>

int main() {
    // Tamanho do tabuleiro 10x10
    int tabuleiro[10][10] = {0};

    // Coordenadas iniciais dos navios
    int x_vertical = 2, y_vertical = 3;   // início do navio vertical
    int tamanho_vertical = 3;             // tamanho do navio vertical

    int x_horizontal = 5, y_horizontal = 6; // início do navio horizontal
    int tamanho_horizontal = 4;             // tamanho do navio horizontal

    printf("=== POSICIONAMENTO DOS NAVIOS ===\n\n");

    // Navio vertical
    printf("Navio Vertical (coluna fixa em x=%d):\n", x_vertical);
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[x_vertical][y_vertical + i] = 1; // marca o navio
        printf("Parte %d -> Coordenadas: (%d, %d)\n", i + 1, x_vertical, y_vertical + i);
    }

    printf("\nNavio Horizontal (linha fixa em y=%d):\n", y_horizontal);
    // Navio horizontal
    for (int i = 0; i < tamanho_horizontal; i++) {
        tabuleiro[x_horizontal + i][y_horizontal] = 1; // marca o navio
        printf("Parte %d -> Coordenadas: (%d, %d)\n", i + 1, x_horizontal + i, y_horizontal);
    }

    return 0;
}
