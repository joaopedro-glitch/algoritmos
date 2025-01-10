/*Você foi encarregado de desenvolver um sistema de pontuação para
as casas de Hogwarts. O sistema deve permitir que os professores concedam pontos às casas por
boas ações dos alunos e que o diretor possa visualizar e atualizar as pontuações ao longo do ano
letivo. Instruções:
1. Crie um vetor para representar as quatro casas de Hogwarts: Grifinória, Sonserina, Corvinal e
Lufa-Lufa. Cada elemento do vetor representa a pontuação atual de cada casa.
2. Implemente as seguintes operações:
○ Adicionar pontos a uma casa.
○ Subtrair pontos de uma casa.
○ Visualizar a pontuação de todas as casas.
3. O programa deve exibir um menu para o usuário com opções para realizar as operações
mencionadas.
4. Os professores devem ser capazes de adicionar e subtrair pontos das casas conforme
necessário.
5. O diretor deve ser capaz de visualizar a pontuação atual de todas as casas e realizar ajustes,
se necessário*/

#include <stdio.h>

#define NUM_CASAS 4

// Definição das casas de Hogwarts
const char* casas[NUM_CASAS] = {"Grifinória", "Sonserina", "Corvinal", "Lufa-Lufa"};

void adicionar_pontos(int pontos[], int casa, int quantidade) {
    pontos[casa] += quantidade;
}

void subtrair_pontos(int pontos[], int casa, int quantidade) {
    pontos[casa] -= quantidade;
}

void visualizar_pontos(int pontos[]) {
    printf("\nPontuação Atual das Casas:\n");
    for (int i = 0; i < NUM_CASAS; i++) {
        printf("%s: %d pontos\n", casas[i], pontos[i]);
    }
    printf("\n");
}

int main() {
    int pontos[NUM_CASAS] = {0, 0, 0, 0};
    int opcao, casa, quantidade;

    do {
        printf("Menu:\n");
        printf("1. Adicionar pontos\n");
        printf("2. Subtrair pontos\n");
        printf("3. Visualizar pontuação\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Escolha a casa (0: Grifinória, 1: Sonserina, 2: Corvinal, 3: Lufa-Lufa): ");
                scanf("%d", &casa);
                if (casa >= 0 && casa < NUM_CASAS) {
                    printf("Quantidade de pontos a adicionar: ");
                    scanf("%d", &quantidade);
                    adicionar_pontos(pontos, casa, quantidade);
                    printf("Pontos adicionados com sucesso!\n");
                } else {
                    printf("Casa inválida!\n");
                }
                break;

            case 2:
                printf("Escolha a casa (0: Grifinória, 1: Sonserina, 2: Corvinal, 3: Lufa-Lufa): ");
                scanf("%d", &casa);
                if (casa >= 0 && casa < NUM_CASAS) {
                    printf("Quantidade de pontos a subtrair: ");
                    scanf("%d", &quantidade);
                    subtrair_pontos(pontos, casa, quantidade);
                    printf("Pontos subtraídos com sucesso!\n");
                } else {
                    printf("Casa inválida!\n");
                }
                break;

            case 3:
                visualizar_pontos(pontos);
                break;

            case 4:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

/*Explicação do Código:
1. Constantes e Variáveis:

    Um vetor casas armazena os nomes das quatro casas de Hogwarts.
    Um vetor pontos é usado para manter a pontuação atual de cada casa.

2. Funções:

    adicionar_pontos(): Adiciona uma quantidade de pontos à casa selecionada.
    subtrair_pontos(): Subtrai uma quantidade de pontos da casa selecionada.
    visualizar_pontos(): Exibe a pontuação atual de todas as casas.

3. Menu Interativo:

    O programa exibe um menu onde o usuário pode escolher adicionar, subtrair ou visualizar a pontuação.
    O loop continua até que o usuário escolha sair (opção 0).

Como Usar:
    Compile e execute o código em um compilador C.
    Siga as instruções do menu para adicionar ou subtrair pontos e visualizar a pontuação atual das casas.

Esse sistema é simples e permite que professores e diretores gerenciem facilmente a pontuação das casas de Hogwarts*/