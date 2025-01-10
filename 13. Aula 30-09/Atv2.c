/*Implemente um programa que exiba os conteúdos dos itens de índice par de um vetor.*/

#include <stdio.h>

int main()
{
    int vet[10] = {6,3,9,5,10,8,2,5,1,5};

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0) //verificação se o indice é par
        {
            printf("Os valores dos indices pares sao [%d]: %d\n", i, vet[i]);
        }    
        
    }
    

    return 0;
}