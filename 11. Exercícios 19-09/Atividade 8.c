#include <stdio.h>

int main()
{
    float valorLote, somaCalculada = 0, valorRecibo;
    int numRecibos;

    printf("Insira o valor total do lote em R$: ");
    scanf("%f", &valorLote);

    printf("Insira o numero de recibos: ");
    scanf("%d", &numRecibos);

    // contador inicia em 1 minimamente e realiza o loop até o valor ser igual ao número de recibos inserido
    for (int i = 1; i <= numRecibos; i++)
    {
        printf("Insira o valor do recibo %d em R$: ", i);
        scanf("%f", &valorRecibo);

        somaCalculada += valorRecibo;
    }
    
    //imprime a soma calculada após inserir o número e o valor de cada recibo separadamente
    printf("Soma calculada: %.2f\n", somaCalculada);

    //condicionais imprimem as mensagens para cada caso de relação do Lote inserido e o valor calculado dos recibos
    if ((somaCalculada == valorLote))
    {
        printf("LOTE OK\n");
    }

    else if ((somaCalculada < valorLote))
    {
        printf("Diferenca neagativa\n");
    }
    
    else if ((somaCalculada > valorLote))
    {
        printf("Diferenca positiva\n");
    }
    

    return 0;

}