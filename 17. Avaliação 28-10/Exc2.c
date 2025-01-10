#include <stdio.h>

int main()
{

    int casas[4] = {0, 1, 2, 3};
    int menu, addPontos, removePontos, visuPontos, i;
    int cont[4] = {0};

    printf("1. Adicionar pontos a uma casa\n");
    printf("2. Subtrair pontos de uma casa\n");
    printf("3. Visualizar pontuacao das casas\n");
    printf("4. Sair\n");

    for (i = 0; i < 4; i++)
    {
        switch (menu)
        {
        case 1:
            printf("Selecione a casa que deseja adicionar pontos: ");
            printf("1. Grifinória");
            printf("2. Sonserina");
            printf("3. Corvinal");
            printf("4. Lufa-Lufa");
            switch (addPontos)
            {
            case 1:
                printf("Quantidade de pontos a ser adicionada: ");
                scanf("%d", &cont[0]);
                cont[0] +=
                    printf("%d Pontos adicionados a Grifinoria com sucesso!", cont[0]);
                break;

            case 2:
                printf("Quantidade de pontos a ser adicionada: ");
                scanf("%d", &cont[1]);
                cont[1] +=
                    printf("%d Pontos adicionados a Sonserina com sucesso!", cont[1]);
                break;

            case 3:
                printf("Quantidade de pontos a ser adicionada: ");
                scanf("%d", &cont[2]);
                cont[2] +=
                    printf("%d Pontos adicionados a Corvinal com sucesso!", cont[2]);
                break;

            case 4:
                printf("Quantidade de pontos a ser adicionada: ");
                scanf("%d", &cont[3]);
                cont[3] +=
                    printf("%d Pontos adicionados a Lufa-Lufa com sucesso!", cont[3]);
                break;

            default:
                printf("Opcao Invalida, selecione entre 1 e 4");
                break;
            }

            break;

        case 2:
            switch (removePontos)
            {
            case 1:
                printf("Quantidade de pontos a ser removidos: ");
                scanf("%d", &cont[0]);
                cont[0] -=
                    printf("%d Pontos removidos de Grifinoria!", cont[0]);
                break;

            case 2:
                printf("Quantidade de pontos a ser removidos: ");
                scanf("%d", &cont[1]);
                cont[1] -=
                    printf("%d Pontos removidos de Sonserina!", cont[1]);
                break;

            case 3:
                printf("Quantidade de pontos a ser removidos: ");
                scanf("%d", &cont[2]);
                cont[2] -=
                    printf("%d Pontos removidos de Corvinal!", cont[2]);
                break;

            case 4:
                printf("Quantidade de pontos a ser removidos: ");
                scanf("%d", &cont[3]);
                cont[3] -=
                    printf("%d Pontos removidos de Lufa-Lufa!", cont[3]);
                break;

            default:
                printf("Opcao Invalida, selecione entre 1 e 4");
                break;
            }

        case 3:

        case 4:
            printf("Caso encerrado.");
            break;

        default:
            printf("Opcao Invalida, selecione entre 1 e 4");
            break;
        }
    }

    return 0;
}