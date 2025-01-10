/*Elaborar um programa que apresente como resultado um número positivo, mesmo que a entrada
tenha sido feita com um valor negativo. Use um procedimento com passagem de valor por
referência.*/

#include <stdio.h>

void positivar(int x)
{

    int numPos;
    if (x > 0)
    {
        numPos = x * 1;
    }

    if (x < 1)
    {
        numPos = x * (-1);
    }

    printf("Numero positivo: %d\n", numPos);
}

int main()
{

    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    positivar(num);

    return 0;
}