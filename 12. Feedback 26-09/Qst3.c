#include <stdio.h>

int main()
{
    int estoque, venda, somaVendas = 0;
    char decisao;

    do
    {
        printf("Digite a quantidade de produtos em estoque: ");
        scanf("%d", &estoque);
    } while (estoque < 0);

    do
    {
        do
        {
            printf("Digite a quantidade de produtos vendidos hoje: ");
            scanf("%d", &venda);

            if (venda > estoque)
            {
                printf("Quantidade indisponivel no estoque\n");
            }

        } while (venda < 0 || venda > estoque);

        somaVendas += venda;

        estoque -= venda;
        printf("Estoque atual: %d\n", estoque);

        printf("Voce deseja continuar? [S/N]");
        getchar();
        scanf("%c", &decisao);

    } while ((estoque > 0) && (decisao == 'S' || decisao == 's'));

    printf("Quantidade de itens vendidos: %d", somaVendas);

    return 0;
}