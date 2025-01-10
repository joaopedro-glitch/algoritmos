#include <stdio.h>

int main()
{
    float salario, parcelas;

    printf("Insira o valor do seu salario: ");
    scanf("%f", &salario);

    printf("Insira o valor das parcelas: ");
    scanf("%f", &parcelas);

    if (parcelas < 0.30 * salario)
    {
        printf("O emprestimo sera concedido\n");
    }
    else
    {
        printf("O emprestimo nao sera concedido\n");
    }

    return 0;
}