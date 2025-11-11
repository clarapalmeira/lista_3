#include <stdio.h>

#define TAM 100

int main() {
    char texto[TAM];
    char c;
    int i, encontrado = 0;

    printf("Digite uma string: ");
    fgets(texto, TAM, stdin);  // lê a string com espaços

    printf("Digite um caractere: ");
    scanf("%c", &c);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == c) {
            encontrado = 1;
            break;  // já encontrou, não precisa continuar
        }
    }

    if (encontrado)
        printf("O caractere '%c' foi encontrado na string.\n", c);
    else
        printf("O caractere '%c' NAO foi encontrado na string.\n", c);

    return 0;
}
