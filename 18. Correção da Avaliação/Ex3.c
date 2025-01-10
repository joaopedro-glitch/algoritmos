/*Em um programa de televisão chamado SOLETRANELSON, 6
competidores se enfrentam a fim de conquistar os grandes prêmios: uma escultura de gelo em
formato de capivara e um dogão com duas vinas. Sabendo que existem cinco rodadas, a cada
rodada os competidores tentam soletrar 10 palavras e o número de acertos por rodada é computado.
Ao final das 5 rodadas, a melhor e a pior rodada de cada competidor são eliminadas e a pontuação
final do competidor é a soma das três rodadas restantes.
Você deve escrever um programa que utilize uma matriz de 6 linhas (uma por competidor) e 5
colunas (uma por rodada). Essa matriz deve ser preenchida com valores entre 0 e 10,
correspondentes ao número de acertos do competidor em cada rodada. O programa deve calcular a
pontuação final de cada competidor de modo a desconsiderar a melhor e a pior rodada e fazer a
soma das pontuações das três rodadas restantes. Por fim, exiba a pontuação final para todos os
competidore*/

#include <stdio.h>

#define COMPETIDORES 6
#define RODADAS 5

void calcular_pontuacao_final(int pontuacoes[COMPETIDORES][RODADAS], int pontuacao_final[COMPETIDORES]) {
    for (int i = 0; i < COMPETIDORES; i++) {
        int melhor = 0, pior = 10; // Inicializa com valores adequados para comparação
        int soma_total = 0;

        // Encontra a melhor e a pior rodada
        for (int j = 0; j < RODADAS; j++) {
            if (pontuacoes[i][j] > melhor) {
                melhor = pontuacoes[i][j];
            }
            if (pontuacoes[i][j] < pior) {
                pior = pontuacoes[i][j];
            }
            soma_total += pontuacoes[i][j];
        }

        // Calcula a pontuação final
        pontuacao_final[i] = soma_total - melhor - pior;
    }
}

int main() {
    int pontuacoes[COMPETIDORES][RODADAS];
    int pontuacao_final[COMPETIDORES];

    // Preenchendo a matriz com os acertos dos competidores
    for (int i = 0; i < COMPETIDORES; i++) {
        printf("Digite os acertos do competidor %d em 5 rodadas (0 a 10):\n", i + 1);
        for (int j = 0; j < RODADAS; j++) {
            do {
                printf("Rodada %d: ", j + 1);
                scanf("%d", &pontuacoes[i][j]);
            } while (pontuacoes[i][j] < 0 || pontuacoes[i][j] > 10); // Valida a entrada
        }
    }

    // Calcula a pontuação final
    calcular_pontuacao_final(pontuacoes, pontuacao_final);

    // Exibindo as pontuações finais
    printf("\nPontuação final dos competidores:\n");
    for (int i = 0; i < COMPETIDORES; i++) {
        printf("Competidor %d: %d pontos\n", i + 1, pontuacao_final[i]);
    }

    return 0;
}

/*Explicação do Código:

1. Definições:

    COMPETIDORES: Define o número de competidores (6).
    RODADAS: Define o número de rodadas (5).

2. Função calcular_pontuacao_final:

    Esta função recebe a matriz de pontuações e um vetor para armazenar as pontuações finais.
    Para cada competidor, encontra a melhor e a pior rodada, calcula a soma total e então determina a pontuação final subtraindo a melhor e a pior rodada.

3. Entrada de Dados:

    O programa solicita que o usuário insira os acertos para cada competidor em cada rodada, garantindo que os valores estejam entre 0 e 10.

4. Cálculo e Saída:

    Após o preenchimento, a função calcular_pontuacao_final é chamada e, em seguida, o programa exibe as pontuações finais de todos os competidores.

Como Usar:
    Compile e execute o código em um compilador C.
    Insira os acertos conforme solicitado para cada competidor e rodadas.
    O programa exibirá a pontuação final de cada competidor.*/