/*Carlos está tentando organizar melhor suas finanças pessoais. Ele
quer calcular quanto tempo levará para alcançar uma meta de economia mensal, considerando que
ele economiza um valor fixo todo mês e que o saldo inicial já possui um valor.
Escreva um programa que contenha:
● Uma função calcula_meses_para_meta que recebe a meta de economia, o saldo inicial e o
valor economizado mensalmente como parâmetros e retorna o número de meses necessários
para atingir ou ultrapassar a meta.
● Uma função exibe_progresso que, a cada mês, exibe o saldo acumulado até atingir a meta.
Esta função não retorna nada (void).
O programa deve solicitar a meta, o saldo inicial e o valor economizado mensalmente, e exibir
o número de meses necessários e o progresso mensal.
Exemplo de execução:
Digite a meta de economia: 5000
Digite o saldo inicial: 1200
Digite o valor economizado mensalmente: 300
Número de meses necessários: 13
Progresso mensal:
Mês 1: Saldo acumulado = 1500
Mês 2: Saldo acumulado = 1800
Mês 3: Saldo acumulado = 2100
...
Mês 13: Saldo acumulado = 5100*/

#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções
int calcula_meses_para_meta(float saldoInicial, float meta, float valorMensal);
void exibe_progresso(float saldoInicial, float valorMensal, int meses);

// Função principal
int main()
{
    float saldoInicial, meta, valorMensal;
    int meses;

    // Entrada de dados pelo usuário
    printf("Digite o saldo inicial: ");
    scanf("%f", &saldoInicial);

    printf("Digite a meta de economia: ");
    scanf("%f", &meta);

    printf("Digite o valor economizado mensalmente: ");
    scanf("%f", &valorMensal);

    // Calcula o número de meses necessários para atingir a meta
    meses = calcula_meses_para_meta(saldoInicial, meta, valorMensal);

    // Exibe o progresso mensal
    exibe_progresso(saldoInicial, valorMensal, meses);

    return 0;
}

// Função para calcular o número de meses necessários para atingir a meta
int calcula_meses_para_meta(float saldoInicial, float meta, float valorMensal)
{
    int meses = 0;
    float saldoAtual = saldoInicial; // Inicializa o saldo atual com o saldo inicial

    while (saldoAtual < meta) // Verifica se o saldo atual é menor que a meta
    {
        saldoAtual += valorMensal; // Adiciona o valor mensal ao saldo atual
        meses++;                   // Incrementa o número de meses
    }

    printf("\nO numero de meses necessarios sera de: %d\n", meses);
    return meses; // Retorna o número de meses
}

// Função para exibir o progresso mensal do saldo
void exibe_progresso(float saldoInicial, float valorMensal, int meses)
{
    float saldoAtual = saldoInicial; // Inicializa o saldo atual com o saldo inicial

    printf("\nProgresso mensal:\n");

    for (int i = 1; i <= meses; i++) // Loop para exibir o progresso mês a mês
    {
        saldoAtual += valorMensal; // Atualiza o saldo acumulado
        printf("Mes %d: Saldo acumulado = R$%.2f\n", i, saldoAtual);
    }
}