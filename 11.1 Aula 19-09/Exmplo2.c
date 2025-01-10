#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, numB, i, tabuada;

    do
    {
        printf("Insira um numero inteiro A: ");
        scanf("%d", &numA);

        if (numA <= 0)
        {
            printf("Numero invalido. Digite um valor positivo maior que zero.\n");
        }

    } while (numA <= 0);

    do
    {
        printf("Insira um numero inteiro B: ");
        scanf("%d", &numB);

        if (numB <= 0 || numB < numA)
        {
            printf("Numero invalido. Digite um valor positivo maior que A.\n");
        }

    } while (numB <= 0 || numB < numA);

    // contator i começa no numA e repete o loop até o numB
    for (i = numA; i <= numB; i++)
    {
        for (tabuada = 1; tabuada <= 10; tabuada++) // tabuada começa no i = numA e realiza o loop até que o contador chegar em numB
        {
            printf("%d x %d = %d\n", i, tabuada, i * tabuada);
        }

        printf("\n"); // quebra de linha para melhor visualização
    }

    return 0;
}