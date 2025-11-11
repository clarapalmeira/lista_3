#include <stdio.h>

#define TAM 100

int main() {
    char texto[TAM];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(texto, TAM, stdin);  // lê a string, incluindo espaços

    // conta os caracteres até encontrar o '\0'
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != '\n')  // ignora o Enter no final
            contador++;
    }

    printf("A string possui %d caracteres.\n", contador);

    return 0;
}
