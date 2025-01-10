#include <stdio.h>

int main()
{
    float valorDivida, juroMensal, juroTotal, dividaProximoMes;

    printf("Insira o valor da divida em reais: ");
    scanf("%f", &valorDivida);

    printf("Insira o a porcentagem do juro mensal: ");
    scanf("%f", &juroMensal);

    juroTotal = valorDivida/100 * juroMensal;  
    dividaProximoMes = valorDivida + juroTotal;

    printf("O valor da divida no proximo mes será de: %.2f R$", dividaProximoMes);

    return 0;
}