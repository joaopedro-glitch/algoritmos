#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float totalPagar;
    const float cachorroQuente = 12.00, Xsalada = 15.50, Xbacon = 18.00, torradaSimples = 8.0, refrigerante = 4.50;


    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf ("Digite a quantidade do produto: ");
    scanf("%d", &quantidade);

     // Verificar se o código é válido
    if (codigo < 1 || codigo > 5) {
        printf("Codigo invalido.\n");
        return 1;
    }

    // Verificar se a quantidade é válida
    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    switch (codigo)
    {
        case 1:
            totalPagar = cachorroQuente * quantidade;
        break;

          case 2:
            totalPagar = Xsalada * quantidade;
        break;

          case 3:
            totalPagar = Xbacon * quantidade;
        break;

          case 4:
            totalPagar = torradaSimples * quantidade;
        break;

          case 5:
            totalPagar = refrigerante * quantidade;
        break;
    
    }

        printf("O preco total a ser pago sera de: %.2f", totalPagar);

    return 0;

}