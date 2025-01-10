#include <stdio.h>

int main()
{
    int qtd[10]; // capacidade / tamanho
    int i;

    for (i = 0; i < 10; i++) // contador de 0 a 9 -> [10 números] -> tamanho - 1
    {
        printf("Atribua valor para o vetor [%d]: ", i);
        scanf("%d", &qtd[i]); // qtde[i] -> scaneia valores na repetição do contador
    }

    printf("\nVetores preenchidos: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Vetor preenchido [%d]: %d\n", i, qtd[i]); // imprime valores preenchidos
    }

    return 0;
}