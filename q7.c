#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3

int main() {
    int v[TAM];
    int i;
    float soma = 0, produto = 1;

    srand(time(NULL)); 

    printf("Vetor gerado: ");
    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 20;
        printf("%d ", v[i]);
        soma += v[i];
        produto *= v[i];
    }

    float mediaAritmetica = soma / TAM;
    float mediaGeometrica = pow(produto, 1.0 / TAM);

    printf("\nMedia Aritmetica = %.2f", mediaAritmetica);
    printf("\nMedia Geometrica = %.2f\n", mediaGeometrica);

    return 0;
}
