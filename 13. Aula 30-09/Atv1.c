/*Escreva um programa que leia do teclado valores para dois vetores de 4 posições de ponto
flutuante, depois subtraia os dois vetores. Ao final da execução deverá ser impresso o resultado na
tela.*/

#include <stdio.h>

int main()
{
    float vetA[4], vetB[4], subtracao[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Digite o valor para o indice [%d] A: ", i);
        scanf("%f", &vetA[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("Digite o valor para o indice [%d] B: ", i);
        scanf("%f", &vetB[i]);
    }

    
    for (i = 0; i < 4; i++)
    {
        if (vetA[i] < vetB[i]) // garantindo que vetA seja sempre maior que vetB
        {
            float temp = vetA[i];
            vetA[i] = vetB[i];
            vetB[i] = temp;
        }
        
        subtracao[i] = vetA[i] - vetB[i];
        printf("A subtracao dos vetores no indice [%d]: %.1f\n", i, subtracao[i]);
    }
    

    return 0;
}