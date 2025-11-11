#include <stdio.h>

#define TAM 200

int main() {
    char str1[TAM], str2[TAM];
    int i, j;

    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);

    // encontra o final da primeira string
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') { // remove o \n do fgets
            str1[i] = '\0';
            break;
        }
    }

    // copia cada caractere da segunda para o final da primeira
    for (j = 0; str2[j] != '\0'; j++) {
        if (str2[j] == '\n') break; // ignora o \n
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0'; // finaliza com o caractere nulo

    printf("\nString concatenada: %s\n", str1);

    return 0;
}
