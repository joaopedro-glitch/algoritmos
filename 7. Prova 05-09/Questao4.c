#include <stdio.h>

int main()
{
    int alturaAbdomen, larguraAbdomen;

    printf("Insira a altura do abdomen em cm: ");
    scanf("%d", &alturaAbdomen);

    printf("Insira a largura do abdomen em cm: ");
    scanf("%d", &larguraAbdomen);

    if (alturaAbdomen <= 68 && larguraAbdomen <= 50)
    {
        printf("O tamanho sera PP\n");
    }

    else if (alturaAbdomen <= 70 && larguraAbdomen <= 53)
    {
        printf("O tamanho sera P\n");
    }

    else if (alturaAbdomen <= 72 && larguraAbdomen <= 56)
    {
        printf("O tamanho sera M\n");
    }

    else if (alturaAbdomen <= 75 && larguraAbdomen <= 59)
    {
        printf("O tamanho sera G\n");
    }

    else if (alturaAbdomen > 75 && larguraAbdomen > 59)
    {
        printf("O tamanho sera GG\n");
    }

    return 0;
}