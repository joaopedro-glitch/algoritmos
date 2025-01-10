/*João tem um tanque de peixes ornamentais em casa e quer saber
quantos litros de água precisa trocar semanalmente para manter a qualidade da água. Ele também
quer monitorar quanto tempo levará para trocar toda a água do tanque se continuar trocando 15% da
água semanalmente, sem realizar trocas adicionais.
Sabendo disso, escreva um programa que contenha:

● Uma função calcula_troca_agua que recebe a capacidade total do tanque (em litros) como
parâmetro e calcula a quantidade de água que João deve trocar semanalmente (15% do
total).

● Uma função semanas_para_trocar_toda_agua que recebe a capacidade do tanque e a
quantidade trocada semanalmente, e calcula o número de semanas necessárias para que a
soma das trocas atinja o volume total do tanque.

O programa deve solicitar a capacidade do tanque, chamar as funções, e exibir a quantidade
de água trocada semanalmente e o número de semanas necessárias para que toda a água do
tanque seja trocada.

Exemplo:
Digite a capacidade do tanque em litros: 200
Quantidade de água a trocar semanalmente: 30 litros
Número de semanas para trocar toda a água do tanque: 6.66 ou 7 semanas*/

#include <stdio.h>
#include <math.h>

// Função para calcular a quantidade de água a ser trocada semanalmente (15% do total)
float calcula_troca_agua(float capacidade_tanque) {
    return capacidade_tanque * 0.15;
}

// Função para calcular o número de semanas necessárias para trocar toda a água do tanque
float semanas_para_trocar_toda_agua(float capacidade_tanque, float quantidade_trocada_semanalmente) {
    float agua_trocada = 0.0; // Acumulador para o volume de água trocada
    int semanas = 0;

    while (agua_trocada < capacidade_tanque) {
        agua_trocada += quantidade_trocada_semanalmente;
        semanas++;
    }

    return semanas;
}

int main() {
    float capacidade_tanque, quantidade_semanal;
    int semanas;

    // Solicitar ao utilizador a capacidade do tanque
    printf("Digite a capacidade do tanque em litros: ");
    scanf("%f", &capacidade_tanque);

    // Calcular a quantidade de água trocada semanalmente
    quantidade_semanal = calcula_troca_agua(capacidade_tanque);

    // Calcular o número de semanas necessárias para trocar toda a água
    semanas = semanas_para_trocar_toda_agua(capacidade_tanque, quantidade_semanal);

    // Exibir os resultados
    printf("Quantidade de agua a trocar semanalmente: %.2f litros\n", quantidade_semanal);
    printf("Numero de semanas para trocar toda a agua do tanque: %d semanas\n", semanas);

    return 0;
}