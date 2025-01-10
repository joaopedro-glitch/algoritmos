#include <stdio.h>

int main()
{
    int numFolhas;
    float valorPago;

    printf("Informe o numero de folhas: ");
    scanf("%d", &numFolhas);

    if ((numFolhas>0) && (numFolhas<100))
    {
        valorPago = numFolhas * 0.25;
    }

    else if (numFolhas >= 100)
    {
        valorPago = numFolhas * 0.20;
    }
    
    else {
        printf("Valor invalido\n");
    }

    printf("O valor a ser pago: %.2f R$\n", valorPago);

    return 0;

}