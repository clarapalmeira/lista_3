#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char texto[TAM];
    int i, tamanho;

    printf("Digite uma string: ");
    fgets(texto, TAM, stdin);
    texto[strcspn(texto, "\n")] = '\0'; 

    tamanho = 0;
    while (texto[tamanho] != '\0')
        tamanho++;

    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--)
        printf("%c", texto[i]);

    printf("\n");
    return 0;
}
