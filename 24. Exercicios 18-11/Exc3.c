/*Escreva um programa que realiza o cadastro de veículos e calcula o valor do
IPVA.
a. Receba a quantidade de veículos que serão registrados.
b. Receba o modelo, o ano de fabricação, o valor do veículo, a placa e o
número RENAVAM (documento do veículo).
c. Receba o tipo de combustível que o veículo utiliza: gás, flex(gasolina/etanol)
ou gasolina. Defina o percentual em relação ao valor do veículo para o
cálculo do IPVA: 1% para veículos que utilizam gás, 2% para flex e 4% para
gasolina. Defina que os veículos com mais de 20 (vinte) anos de fabricação
estão isentos do IPVA.
d. Calcule o valor do IPVA.
e. Mostre o modelo, a placa, o RENAVAM e o valor do IPVA de cada veículo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int ano;
    char modelo[50];
    float valor;
    char placa[8];
    int renavam;
    int combustivel;
    float ipva;

} veiculos;

int main()
{

    int qtdVeiculos;

    printf("Insira o numero de veiculos que deseja inserir: ");
    scanf("%d", &qtdVeiculos);

    veiculos carro[qtdVeiculos];

    for (int i = 0; i < qtdVeiculos; i++)
    {

        printf("Insira o modelo do veiculo %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]", carro[i].modelo);

        printf("Insira o ano de fabricacao do veiculo %d: ", i + 1);
        scanf("%d", &carro[i].ano);

        printf("Insira o valor do veiculo %d: ", i + 1);
        scanf("%f", &carro[i].valor);

        printf("Insira a placa do veiculo %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]", carro[i].placa);

        printf("Insira o RENAVAM do veiculo %d: ", i + 1);
        scanf("%d", &carro[i].renavam);

        printf("Insira o tipo de combustivel do veiculo %d (1 - Gas, 2 - Flex, 3 - Gasolina): ", i + 1);
        scanf("%d", &carro[i].combustivel);

        if (carro[i].combustivel == 1)
        {
            carro[i].ipva = 0.01 * carro[i].valor;
        }

        if (carro[i].combustivel == 2)
        {
            carro[i].ipva = 0.02 * carro[i].valor;
        }

        if (carro[i].combustivel == 3)
        {
            carro[i].ipva = 0.04 * carro[i].valor;
        }

        if (20 < 2024 - carro[i].ano)
        {
            carro[i].ipva = 0;
        }

        printf("\nO veiculo %d eh do modelo: %s\n", i + 1, carro[i].modelo);
        // printf("Foi fabricado no ano de: %d\n", carro[i].ano);
        // printf("Tem o valor estimado de: %.2f\n", carro[i].valor);
        printf("Possui a placa: %s\n", carro[i].placa);
        printf("Possui o numero de RENAVAM: %d\n", carro[i].renavam);
        printf("O IPVA do carro %d sera de: %.2f\n\n", i + 1, carro[i].ipva);
    }

    return 0;
}