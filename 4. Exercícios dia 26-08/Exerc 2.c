#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d", num);
    }

    else
    {
        printf("%d", num * (-1));
    }

    return 0;
}