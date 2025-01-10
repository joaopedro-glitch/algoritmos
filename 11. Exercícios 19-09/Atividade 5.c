#include <stdio.h>

int main()
{ // valores improvaveis para maior e menor antes da primeira atualização
    float altura, maiorAltura = 0, menorAltura = 1000, somaMulheres = 0, somaTotal = 0;
    int sexo, contMulheres = 0, contHomens = 0, contTotal = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Insira a altura da pessoa em metros %d: ", i + 1);
        scanf("%f", &altura);

        // Verifica se a altura é válida com valores improvaveis
        while (altura <= 0.8 || altura >= 2.6)
        {
            printf("Altura invalida. Por favor, digite um valor valido.\n");
            scanf("%f", &altura);
        }

        printf("Insira o sexo da pessoa %d (0 para masculino, 1 para feminino e 2 para nao declarado): ", i + 1);
        scanf(" %d", &sexo);

        // Verifica se o valor do sexo é válido
        while (sexo < 0 || sexo > 2)
        {
            printf("Sexo invalido. Por favor, digite um valor valido.\n");
            scanf("%d", &sexo);
        }

        // Atualizando a maior e menor altura
        if (altura > maiorAltura)
        { // Se for maior que maior, atualiza maior
            maiorAltura = altura;
        }
        else if (altura < menorAltura)
        { // Se for menor que menor, atualiza menor.
            menorAltura = altura;
        }

        // Calculando somas e contagens
        somaTotal += altura; // soma total

        // Calculando soma e contagem feminina
        if (sexo == 1)
        {
            somaMulheres += altura;
            contMulheres++;
        }
        // Calculando contagem masculina
        else if (sexo == 0)
        {
            contHomens++;
        }

        contTotal++; // contador total
    }

    // Calculando a média das mulheres
    float mediaMulheres = (contMulheres > 0) ? somaMulheres / contMulheres : 0;
    /* O simbolo de ? indica para executar o que vem depois se a condição for verdadeira
       O simbolo de : indica para executar a ação posterior se a condição for falsa */

    // Calculando a média da população
    float mediaTotal = somaTotal / contTotal;

    // Calculando o percentual de homens, forçando o contator masc a ser float
    float percentHomens = (float)contHomens / contTotal * 100;

    // Imprimindo os resultados
    printf("\nResultados:\n");
    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);
    printf("Media de altura das mulheres: %.2f\n", mediaMulheres);
    printf("Media de altura da populacao: %.2f\n", mediaTotal);
    printf("Percentual de homens: %.2f%%\n", percentHomens);

    return 0;
}