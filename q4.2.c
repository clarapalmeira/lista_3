#include <stdio.h>

#define TAM 100

int main() {
    char str1[TAM], str2[TAM];
    int i, iguais = 1;

    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);

   
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            iguais = 0;
            break;
        }
    }

    if (iguais)
        printf("As strings sao IGUAIS.\n");
    else
        printf("As strings sao DIFERENTES.\n");

    return 0;
}
