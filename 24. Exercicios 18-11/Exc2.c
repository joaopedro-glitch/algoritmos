/*Escreva um programa, utilizando estrutura, que atende os itens abaixo:
a. O programa recebe e armazena o nome de N cidades com renda per capita,
IDH (índice de desenvolvimento humano) e população. O usuário fornece a
quantidade de cidades N e as demais informações.
b. Calcular e mostrar a média da renda per capita das N cidades.
c. Determinar e mostrar o nome da cidade com maior população.
d. Mostre a renda per capita, IDH e população de acordo com o nome de uma
cidade digitada pelo usuário*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int populacao;
    float rendaPercap, idh;
} cidade;

int main(){
    int qtdCidade, tamBusca, tamCidade;
    float somaPercap = 0, mediaPercap;
    int maiorCidade = 0; 
    char maior[100], busca[100];

    printf("Insira o numero de cidades que deseja inserir: ");
    scanf("%d", &qtdCidade);

    cidade dados[qtdCidade];

    for (int i = 0; i < qtdCidade; i++){

        printf("\nInsira o nome da cidade %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]", dados[i].nome);

        printf("Informe a populacao da cidade %d: ", i + 1);
        scanf("%d", &dados[i].populacao);

        printf("Insira a renda per capita da cidade %d: ", i + 1);
        scanf("%f", &dados[i].rendaPercap);

        printf("Insira o IDH da cidade %d: ", i + 1);
        scanf("%f", &dados[i].idh);

        printf("A cidade %s tem a populacao de %d tem a renda per capita de %.2f\n", dados[i].nome, dados[i].populacao, dados[i].rendaPercap);
        printf("e o IDH de %.3f\n", dados[i].idh);

        somaPercap += dados[i].rendaPercap;

        if (dados[i].populacao > maiorCidade){
   
            maiorCidade = dados[i].populacao;
            strcpy(maior, dados[i].nome);
        }
    }

    mediaPercap = somaPercap / qtdCidade;

    printf("\nA media da renda per capita das %d cidades de entrada eh de: %.2f\n", qtdCidade, mediaPercap);
    printf("\nA maior cidade da entrada eh: %s\n\n", maior);

    printf("Digite a cidade qual deseja fazer a busca: ");
    fflush(stdin);
    scanf("%[^\n]", busca);

    tamBusca = strlen(busca);

    for (int i = 0; i < qtdCidade; i++){

        int cont = 0;
        
        tamCidade = strlen(dados[i].nome);

        if (tamBusca == tamCidade){

            for (int j = 0; j < tamCidade; j++){
               
                if (dados[i].nome[j] != busca[j]){
                    cont = 1;
                }    
            }
            if(cont == 0){
            printf("\nRenda per capita: %.2f\n", dados[i].rendaPercap);
            printf("IDH: %.3f\n", dados[i].idh);
            printf("Popuplacao: %d\n", dados[i].populacao);
            }

        }
    }

    return 0;
}

