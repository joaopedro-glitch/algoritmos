#include <stdio.h>

int main()
{
    float quantidadeMorango, quantidadeMaca, precoMorango, precoMaca, desconto, contaParcial, contaFinal;

    printf("Selecione a quantidade de morango em kg: ");
    scanf("%f", &quantidadeMorango);

    if (quantidadeMorango < 5.00)
    {
        precoMorango = 13.50;
    }

    else if (quantidadeMorango >= 5.00)
    {
        precoMorango = 10.75;
    }

    printf("Selecione a quantidade de maca em kg: ");
    scanf("%f", &quantidadeMaca);

    if (quantidadeMaca < 5.00)
    {
        precoMaca = 7.99;
    }

    else if (quantidadeMaca >= 5.00)
    {
        precoMaca = 6.50;
    }

    contaParcial = ((quantidadeMorango * precoMorango) + (quantidadeMaca * precoMaca));

    if ((quantidadeMorango + quantidadeMaca) >= 10.00 || (precoMaca + precoMorango) >= 50.00)
    {
        desconto = contaParcial * 0.10;
    }

    else
    {
        desconto = 0;
    }

    contaFinal = contaParcial - desconto;

    printf("O preco total sera de %.2f R$\n", contaFinal);

    return 0;
}