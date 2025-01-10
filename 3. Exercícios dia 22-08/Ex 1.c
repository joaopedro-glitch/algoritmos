#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    c = (a + b) * b;

    printf("O valor de C é: %d", c);

    return 0;
}