#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int competidorRodada[6][5], maior = 0, menor = 10, l, c;

    for (int l = 0; l < 6; l++) // percorre competidores
    {
        for (int c = 0; c < 5; c++) // percorre as rodadas
        {
            competidorRodada[l][c] = rand() % 11; // Gera números aleatórios de 1 a 9
        }
    }
    // Imprimindo a matriz

    // Loop para imprimir as rodadas por ID
    for (int c = 0; c < 5; c++)
    {
        printf("\tRodada %d\t", c + 1);
    }

    printf("\n");

    for (int l = 0; l < 6; l++)
    {
        printf("Competidor %d\t", l + 1); // Loop para imprimir os competidores por ID
        for (int c = 0; c < 5; c++)
        {
            printf("%d\t\t\t", competidorRodada[l][c]); // Impressão da pontuação por ID competidor X rodada
        }
        printf("\n");
    }

    printf("\n");

    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (competidorRodada[l][c] > maior)
            {
                maior = competidorRodada[l][c];
            }

            if (competidorRodada[l][c] < menor)
            {
                menor = competidorRodada[l][c];
            }
        }
    }

   
        printf("Maior pontuacao competidor %d: %d\n", l + 1, competidorRodada[l][c]);
        printf("Menor pontuacao competidor %d: %d\n\n", l + 1, competidorRodada[l][c]);
   

    return 0;
}