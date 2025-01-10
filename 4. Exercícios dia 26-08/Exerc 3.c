#include <stdio.h>

int main()
{
    float salarioAtual, aumento, valorAumento, salarioFinal;

    printf("Digite o valor do salario atual do funcionario: ");
    scanf("%f", &salarioAtual);

    if (salarioAtual < 0.0)
    {

        printf("O valor nao pode ser negativo");
    }

    else if ((salarioAtual >= 0.0) && (salarioAtual <= 1400.0))
    {

        aumento = 0.15;
    }

    else if ((salarioAtual >= 1400.1) && (salarioAtual <= 2000.0))
    {

        aumento = 0.12;
    }

    else if ((salarioAtual >= 2000.1) && (salarioAtual <= 3000.0))
    {

        aumento = 0.10;
    }

    else if ((salarioAtual >= 3000.1) && (salarioAtual <= 3800.0))
    {

        aumento = 0.07;
    }

    else if ((salarioAtual >= 3800.1) && (salarioAtual <= 5000.0))
    {

        aumento = 0.04;
    }

    else if (salarioAtual > 5000.0)
    {

        aumento = 0.0;
    }

    valorAumento = aumento * salarioAtual;

    salarioFinal = valorAumento + salarioAtual;

    printf("Com um aumento de %.2f, o salario virou %.2f", valorAumento, salarioFinal);

    return 0;
}