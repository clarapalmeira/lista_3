#include <stdio.h>

#define TAM 100

int main() {
    char texto[TAM];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(texto, TAM, stdin);  

   
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != '\n') 
            contador++;
    }

    printf("A string possui %d caracteres.\n", contador);

    return 0;
}
