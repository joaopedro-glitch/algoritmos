#include <stdio.h>

int main()
{
    int codigo;
    float precoInicial, precoFinal;

    printf("Insira o preco da etiqueta do produto em reais: ");
    scanf("%f", &precoInicial);

    printf("Insira o codigo da condicao de pagamento: (1- a vista dinheiro ou pix, 2-a vista cartao\n");
    printf("3- Em 2x cartao, 4- 3x ou mais cartao): ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        precoFinal = precoInicial - (precoInicial * 0.10);
        break;

    case 2:
        precoFinal = precoInicial - (precoInicial * 0.05);
        break;

    case 3:
        precoFinal = precoInicial;
        break;

    case 4:
        precoFinal = precoInicial + (precoInicial * 0.10);
        break;

    default:
        printf("Codigo invalido\n");
        return 1;
    }

    printf("O preco do produto de acordo com a forma de pagamento sera: %.2f R$\n", precoFinal);

    return 0;
}