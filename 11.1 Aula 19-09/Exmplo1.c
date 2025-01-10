#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, linha;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Valor invalido\n");
    }     

        // loop das linhas 
        for (linha = 1; linha <= num; linha++)
        {
            for (i = 0; i < linha; i++) // loop dos asteriscos
            {
                printf("*");
            }
            printf("\n");
        }  

    return 0;

}