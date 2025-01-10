/*Escreva um programa que apresente os dados de um vetor na ordem inversa em que eles foram
inseridos.*/

#include <stdio.h>

int main()
{
    int vet[10] = {6, 3, 9, 5, 10, 8, 2, 5, 1, 5};

    for (int i = 9; i >= 0; i--)
    {
        printf("Os vetores na ordem inversa [%d]: %d\n", i, vet[i]);
    }

    return 0;
}