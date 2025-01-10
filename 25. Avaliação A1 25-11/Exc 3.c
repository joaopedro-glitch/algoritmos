/*Desenvolva um programa em linguagem C que faça uso de structs
para processar dados sobre bibliotecas municipais em cinco cidades brasileiras. O programa deve
realizar as seguintes tarefas:
1) Definir uma struct chamada Biblioteca com os seguintes campos:
● Código da cidade (inteiro)
● Nome da cidade (string de até 50 caracteres)
● Número de livros disponíveis na biblioteca (inteiro)
● Número de visitantes anuais da biblioteca em 2024 (inteiro)
2) Solicitar ao usuário que insira os dados das bibliotecas de cada uma das cinco cidades.
3) Determinar e imprimir a cidade com o maior e a cidade com o menor número de visitantes
anuais, exibindo os respectivos nomes.
4) Calcular e imprimir a média de livros disponíveis nas bibliotecas das cinco cidades juntas.
5) Calcular e imprimir a média de visitantes anuais das bibliotecas em cidades que possuem
mais de 50.000 livros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codCidade;
    char nomeCidade[50];
    int numLivros;
    int numVisitantes;

} biblioteca;

int main()
{

    biblioteca bibCidade[5];

    int maior = 0, menor = 99999999999;
    char maisVisitantes[50], menosVisitantes[50];
    int somaLivros = 0, somaVis = 0, contMaisCinquenta = 0;
    float mediaLivros, mediaVis;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o nome da cidade %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]", bibCidade[i].nomeCidade);

        printf("Insira o codigo da cidade %d: ", i + 1);
        scanf("%d", &bibCidade[i].codCidade);

        printf("Insira o numero de livros disponiveis na biblioteca: ");
        scanf("%d", &bibCidade[i].numLivros);

        printf("Insira o numero de visitantes anuais da biblioteca: ");
        scanf("%d", &bibCidade[i].numVisitantes);

        printf("\n");

        printf("A cidade %d eh: %s\n", i + 1, bibCidade[i].nomeCidade);
        printf("Tem o codigo: %d\n", bibCidade[i].codCidade);
        printf("Tem %d livros disponiveis\n", bibCidade[i].numLivros);
        printf("E recebe %d visitantes\n\n", bibCidade[i].numVisitantes);

        if (bibCidade[i].numVisitantes > maior)
        {
            maior = bibCidade[i].numVisitantes;
            strcpy(maisVisitantes, bibCidade[i].nomeCidade);
        }

        if (bibCidade[i].numVisitantes < menor)
        {
            menor = bibCidade[i].numVisitantes;
            strcpy(menosVisitantes, bibCidade[i].nomeCidade);
        }

        somaLivros += bibCidade[i].numLivros;

        if (bibCidade[i].numLivros > 50000)
        {
            somaVis += bibCidade[i].numVisitantes;
            contMaisCinquenta++;
        }
    }

    printf("A cidade com o maior numero de visitantes eh: %s\n", maisVisitantes);
    printf("A cidade com o menor numero de visitantes eh: %s\n", menosVisitantes);

    mediaLivros = somaLivros / 5;

    printf("A media de livros disponiveis eh de: %.2f\n", mediaLivros);

    mediaVis = somaVis / contMaisCinquenta;

    printf("A media de visitantes nas bibliotecas com mais de 50 mil livros eh de: %.2f\n", mediaVis);

    return 0;
}
