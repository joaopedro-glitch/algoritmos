/*Uma empresa de saneamento deseja analisar o consumo diário de
água de uma residência ao longo de um mês. Os dados de consumo diário (em litros) foram
registrados em um vetor de 30 posições, onde cada posição representa o consumo diário de água
em um dia específico.
Escreva um programa que realize as seguintes tarefas:

● Preencha os valores de consumo diário para cada um dos 30 dias do mês.
● Calcule o consumo total e a média diária de consumo.
● Determine o dia com o maior consumo e o dia com o menor consumo.
● Exiba todos os dias em que o consumo foi superior à média diária*/

#include <stdio.h>

#define TAMANHO_MES 30

int main() {
    float consumo[TAMANHO_MES]; // Vetor para armazenar o consumo diário
    float total_consumo = 0.0;  // Variável para armazenar o consumo total
    float media_consumo = 0.0;  // Variável para armazenar a média de consumo
    int dia_maior_consumo = 0, dia_menor_consumo = 0;
    float maior_consumo, menor_consumo;

    // Preenchendo o vetor com o consumo diário
    printf("Digite o consumo diário de água (em litros) para cada um dos 30 dias:\n");
    for (int i = 0; i < TAMANHO_MES; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &consumo[i]);
        total_consumo += consumo[i]; // Somando ao consumo total
    }

    // Calculando a média de consumo
    media_consumo = total_consumo / TAMANHO_MES;

    // Inicializando maior e menor consumo com o consumo do primeiro dia
    maior_consumo = menor_consumo = consumo[0];
    dia_maior_consumo = dia_menor_consumo = 1;

    // Determinando o maior e o menor consumo
    for (int i = 1; i < TAMANHO_MES; i++) {
        if (consumo[i] > maior_consumo) {
            maior_consumo = consumo[i];
            dia_maior_consumo = i + 1;
        }
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            dia_menor_consumo = i + 1;
        }
    }

    // Exibindo resultados
    printf("\n--- Resultados ---\n");
    printf("Consumo total no mês: %.2f litros\n", total_consumo);
    printf("Média diária de consumo: %.2f litros\n", media_consumo);
    printf("Dia com maior consumo: Dia %d (%.2f litros)\n", dia_maior_consumo, maior_consumo);
    printf("Dia com menor consumo: Dia %d (%.2f litros)\n", dia_menor_consumo, menor_consumo);

    // Exibindo dias com consumo acima da média
    printf("\nDias com consumo acima da média diária:\n");
    for (int i = 0; i < TAMANHO_MES; i++) {
        if (consumo[i] > media_consumo) {
            printf("Dia %d: %.2f litros\n", i + 1, consumo[i]);
        }
    }

    return 0;
}