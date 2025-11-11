#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
    int v[TAM];
    int i, j, aux;
    int limiteInferior, limiteSuperior;

    printf("Digite o limite inferior: ");
    scanf("%d", &limiteInferior);
    printf("Digite o limite superior: ");
    scanf("%d", &limiteSuperior);

    srand(time(NULL));
    for (i = 0; i < TAM; i++)
        v[i] = rand() % (limiteSuperior - limiteInferior + 1) + limiteInferior;

   
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (i = 0; i < TAM; i++)
        printf("%d ", v[i]);

    printf("\n");
    return 0;
}
