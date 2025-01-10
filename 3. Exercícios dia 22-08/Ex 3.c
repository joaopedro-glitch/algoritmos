#include <stdio.h>

int main()
{
    float salario_atual, aumento, porcentagem, salario_aumento;

    printf("Insira o salario atual do funcionario em reais: ");
    scanf("%f", &salario_atual);

    printf("Insira a porcentagem do aumento do funcionário: ");
    scanf("%f", &porcentagem);

    aumento = salario_atual * porcentagem * 0.01;
    salario_aumento = salario_atual + aumento;

    printf("O novo salario com aumento sera de: %.2f reais", salario_aumento);

    return 0;
}