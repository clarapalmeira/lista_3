#include <stdio.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (i = 0; i < TAM; i++)
        printf("%d ", matriz[i][i]);

    printf("\n");
    return 0;
}
