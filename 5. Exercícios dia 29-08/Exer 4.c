#include <stdio.h>

int main()

{
    float precoAvista, precoTotal; 
    int numParcelas;

    printf("Digite o preco do produto: ");
    scanf("%f", &precoAvista);

    printf("Digite o numero de parcelas escolhido: ");
    scanf("%d", &numParcelas);
    

    switch (numParcelas)
    {
        case 1: 
             precoTotal = precoAvista;
        break;
            
        case 2: 
            precoTotal = precoAvista * 1.10;
        break;

        case 3: 
            precoTotal = precoAvista * 1.20;
        break;
    
        default:
            printf("Entrada invalida");
        return 1;
    }

        printf("O valor final a ser pago: R$ %.2f\n", precoTotal);

    return 0;


}