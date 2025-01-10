#include <stdio.h>

int main()
{
    float valorInicial, desconto, valorDesconto, valorPago;

    printf("Insira o valor do produto em reais: ");
    scanf("%f", &valorInicial);

    if (valorInicial < 0.0)
    {
        printf("O valor nao pode ser negativo");
    }

    else if (valorInicial >= 500.0 )
    {
        desconto = 0.15;
    }

    else if ((valorInicial <= 499.99) && (valorInicial >= 200.0 ))
    {
        desconto = 0.1; 
    }

    else if ((valorInicial < 200.0 ) && (valorInicial > 0.0))
    {
        desconto = 0.05;
    }

    valorDesconto = valorInicial * desconto;
    valorPago = valorInicial - valorDesconto; 

    printf("O valor do produto antes do desconto e de: %.2f", valorInicial);
    printf("\nO valor do desonto e de: %.2f", valorDesconto);
    printf("\nO valor a ser pago sera de: %.2f", valorPago);


    return 0;



}