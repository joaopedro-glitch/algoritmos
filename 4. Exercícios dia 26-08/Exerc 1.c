#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O primeiro numero e maior que o segundo");
    }

    else if (num1 < num2)
    {
        printf("O segundo numero e maior que o primeiro");
    }

    else
    {
        printf("Os numeros digitados sao iguais");
    }

    return 0;
}