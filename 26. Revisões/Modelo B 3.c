/*Desenvolva um programa em linguagem C que gerencie os dados
de 6 aluguéis de veículos em uma locadora. O programa deve utilizar um vetor de registros (structs)
para armazenar as informações de cada aluguel. Para cada aluguel, o programa deve solicitar ao
usuário:

● O nome do cliente (string de até 50 caracteres);

● O tipo de veículo alugado (string, podendo ser "Carro", "Moto" ou "Caminhão");

● O número de dias de aluguel;

● O valor diário do aluguel.

Com base nessas informações, o programa deve calcular e armazenar no registro:

    ● O valor total do aluguel (número de dias * valor diário);

    ● Um desconto aplicado ao valor total, conforme o tipo de veículo:
        ○ Carro: 10% de desconto.
        ○ Moto: 5% de desconto.
        ○ Caminhão: 15% de desconto.

Tarefas a serem realizadas pelo programa:
    1. Ler e armazenar os dados de cada aluguel, incluindo o valor total e o valor com desconto.
    2. Determinar e exibir o aluguel com o maior valor total antes do desconto.
    3. Exibir a média do valor total dos aluguéis (sem desconto) de todos os registros.*/

#include <stdio.h>
#include <string.h>

#define NUM_ALUGUEIS 6

// Definição da estrutura para armazenar os dados de cada aluguel
typedef struct {
    char nome_cliente[50];
    char tipo_veiculo[20];
    int dias_aluguel;
    float valor_diario;
    float valor_total; // Valor total sem desconto
    float valor_com_desconto; // Valor total com desconto aplicado
} Aluguel;

float calcular_desconto(char tipo[], float valor_total) {
    if (strcmp(tipo, "Carro") == 0) {
        return valor_total * 0.10; // 10% de desconto
    } else if (strcmp(tipo, "Moto") == 0) {
        return valor_total * 0.05; // 5% de desconto
    } else if (strcmp(tipo, "Caminhão") == 0) {
        return valor_total * 0.15; // 15% de desconto
    } else {
        return 0; // Sem desconto caso o tipo seja inválido
    }
}

int main() {
    Aluguel alugueis[NUM_ALUGUEIS];
    float soma_valores_totais = 0.0;
    int indice_maior_valor = 0;

    // Leitura dos dados de cada aluguel
    for (int i = 0; i < NUM_ALUGUEIS; i++) {
        printf("Aluguel %d\n", i + 1);

        // Leitura do nome do cliente
        printf("Nome do cliente: ");
        getchar(); // Limpa o buffer do teclado
        fgets(alugueis[i].nome_cliente, 50, stdin);
        alugueis[i].nome_cliente[strcspn(alugueis[i].nome_cliente, "\n")] = '\0'; // Remove o '\n'

        // Leitura do tipo de veículo
        printf("Tipo de veículo (Carro, Moto, Caminhão): ");
        fgets(alugueis[i].tipo_veiculo, 20, stdin);
        alugueis[i].tipo_veiculo[strcspn(alugueis[i].tipo_veiculo, "\n")] = '\0'; // Remove o '\n'

        // Leitura do número de dias e valor diário
        printf("Número de dias de aluguel: ");
        scanf("%d", &alugueis[i].dias_aluguel);
        printf("Valor diário do aluguel: ");
        scanf("%f", &alugueis[i].valor_diario);

        // Cálculo do valor total
        alugueis[i].valor_total = alugueis[i].dias_aluguel * alugueis[i].valor_diario;

        // Aplicação do desconto
        float desconto = calcular_desconto(alugueis[i].tipo_veiculo, alugueis[i].valor_total);
        alugueis[i].valor_com_desconto = alugueis[i].valor_total - desconto;

        // Atualização da soma dos valores totais
        soma_valores_totais += alugueis[i].valor_total;

        // Determinação do maior valor total
        if (alugueis[i].valor_total > alugueis[indice_maior_valor].valor_total) {
            indice_maior_valor = i;
        }

        printf("\n");
    }

    // Cálculo da média do valor total dos aluguéis
    float media_valores_totais = soma_valores_totais / NUM_ALUGUEIS;

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Aluguel com o maior valor total (antes do desconto):\n");
    printf("Cliente: %s\n", alugueis[indice_maior_valor].nome_cliente);
    printf("Tipo de veículo: %s\n", alugueis[indice_maior_valor].tipo_veiculo);
    printf("Valor total: %.2f\n", alugueis[indice_maior_valor].valor_total);
    printf("\n");

    printf("Média do valor total dos aluguéis (antes do desconto): %.2f\n", media_valores_totais);
    printf("\n");

    // Listagem dos aluguéis registrados
    printf("Lista de aluguéis:\n");
    for (int i = 0; i < NUM_ALUGUEIS; i++) {
        printf("Cliente: %s, Tipo de veículo: %s, Valor total: %.2f, Valor com desconto: %.2f\n",
               alugueis[i].nome_cliente, alugueis[i].tipo_veiculo, alugueis[i].valor_total, alugueis[i].valor_com_desconto);
    }

    return 0;
}