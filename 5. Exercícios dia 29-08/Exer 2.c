#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

     // Utilizando o resto da divisão por 2 para determinar par ou ímpar
    switch (num % 2)
    {
        case 0:
        printf("%d eh par\n", num);
        break;

        case 1:
        printf("%d eh impar\n", num);
        break;
    
        default:
        printf("entrada invalida\n");
        break;
    }

    return 0;

}