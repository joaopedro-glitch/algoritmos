#include <stdio.h>
#include <string.h>

int main()
{

    char stringA[100], stringB[100], validacao[100];
    int tamanhoA, tamanhoB, i;

    printf("Insira o valor de A: ");
    fflush(stdin);
    fgets(stringA, 200, stdin);

    tamanhoA = strlen(stringA) - 1;

    printf("Insira o valor de B: ");
    fflush(stdin);
    fgets(stringB, 200, stdin);

    tamanhoB = strlen(stringB) - 1;

    printf("%s", stringA);
    printf("%s\n", stringB);

    for (i = tamanhoA; i >= 0; i--)
    {
        printf("Indice %d: %c \n", i, stringA[i]);
    }

    return 0;
}