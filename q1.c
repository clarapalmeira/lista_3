#include <stdio.h>

#define TAM 15

int main() {
    float vetor[TAM];
    float menor, maior, soma;
    int i;

    printf("Digite %d numeros reais:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%f", &vetor[i]);
    }

    menor = maior = vetor[0];

    for (i = 1; i < TAM; i++) {
        if (vetor[i] < menor)
            menor = vetor[i];
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    soma = menor + maior;
    printf("\nMenor elemento: %.2f\n", menor);
    printf("Maior elemento: %.2f\n", maior);
    printf("Soma do menor e maior: %.2f\n", soma);

    return 0;
}
