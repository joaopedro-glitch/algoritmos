#include <stdio.h>

int main()
{
    int i, num, razao;

    printf("Insira um valor A para progressao aritmetica: ");
    scanf("%d", &num);

    printf("Insira uma razao R para progressao aritmetica: ");
    scanf("%d", &razao);

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", num);
        num += razao;
    }

    return 0;
}