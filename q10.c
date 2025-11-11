#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

int main() {
    int matriz[LIN][COL];
    int i, j, x, cont = 0;

    srand(time(NULL));

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    printf("Matriz gerada:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um valor para procurar: ");
    scanf("%d", &x);

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (matriz[i][j] == x)
                cont++;
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, cont);
    return 0;
}
