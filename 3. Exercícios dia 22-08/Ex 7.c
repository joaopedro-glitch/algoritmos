#include <stdio.h>

int main()
{

    float valorProduto, valorDesconto, valorFinal;

    printf("Insira o valor original do produto em reais: ");
    scanf("%f", &valorProduto);

    printf("Insira o valor do desconto em reias: ");
    scanf("%f", &valorDesconto);

    valorFinal = valorProduto - valorDesconto;

    printf("O valor do produto com desconto será de %.2f R$", valorFinal);

    return 0;
}