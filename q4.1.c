#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char str1[TAM], str2[TAM];

    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove o \n

    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove o \n

    if (strcmp(str1, str2) == 0)
        printf("As strings sao IGUAIS.\n");
    else
        printf("As strings sao DIFERENTES.\n");

    return 0;
}
