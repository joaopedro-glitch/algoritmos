/*Ana está planejando uma viagem de carro e deseja saber quantos
litros de combustível serão necessários para percorrer uma certa distância. Além disso, ela quer
calcular quantas paradas precisará fazer para abastecer, considerando a capacidade do tanque do
carro e que ela começará a viagem com o tanque cheio.
Escreva um programa que contenha:

● Uma função calcula_combustivel_necessario que recebe a distância total da viagem (em km)
e o consumo médio do carro (km/l) como parâmetros e retorna a quantidade de combustível
necessária (em litros).

● Uma função calcula_paradas_abastecimento que recebe a quantidade de combustível
necessária e a capacidade do tanque do carro (em litros) e retorna o número de paradas
necessárias para abastecer durante a viagem.

O programa deve solicitar a distância da viagem, o consumo médio do carro e a capacidade do
tanque, e exibir a quantidade de combustível necessária e o número de paradas.

Exemplo de execução:

Digite a distância total da viagem em km: 850
Digite o consumo médio do carro em km/l: 15
Digite a capacidade do tanque em litros: 50
Quantidade de combustível necessária: 56.67 litros
Número de paradas para abastecer: 1*/

#include <stdio.h>

// Função para calcular a quantidade de combustível necessária
float calcula_combustivel_necessario(float distancia, float consumo) {
    return distancia / consumo;
}

// Função para calcular o número de paradas de abastecimento
int calcula_paradas_abastecimento(float combustivelNecessario, float capacidadeTanque) {
    int paradas = combustivelNecessario / capacidadeTanque; // Divisão inteira para obter o número inicial de paradas

    // Se houver sobra de combustível que não cabe no tanque, adicionar mais uma parada
    if ((int)(combustivelNecessario) % (int)(capacidadeTanque) != 0) {
        paradas++;
    }

    // Como o carro começa com o tanque cheio, uma parada é desnecessária
    if (paradas > 0) {
        paradas--;
    }

    return paradas;
}

int main() {
    float distancia, consumo, capacidadeTanque, combustivelNecessario;
    int paradas;

    // Entrada de dados
    printf("Digite a distancia total da viagem em km: ");
    scanf("%f", &distancia);

    printf("Digite o consumo medio do carro em km/l: ");
    scanf("%f", &consumo);

    printf("Digite a capacidade do tanque em litros: ");
    scanf("%f", &capacidadeTanque);

    // Chamada das funções
    combustivelNecessario = calcula_combustivel_necessario(distancia, consumo);
    paradas = calcula_paradas_abastecimento(combustivelNecessario, capacidadeTanque);

    // Saída de resultados
    printf("Quantidade de combustivel necessaria: %.2f litros\n", combustivelNecessario);
    printf("Numero de paradas para abastecer: %d\n", paradas);

    return 0;
}