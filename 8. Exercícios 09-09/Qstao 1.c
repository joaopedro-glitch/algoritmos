#include <stdio.h>

int main() 
{   
    float numero, soma = 0, media;
    int contagem = 1;

    // Leitura de 10 números
    while (contagem <= 10) {
        printf("Digite um numero %d: ", contagem); //loop de entrada
        scanf("%f", &numero);
        contagem++;                 //contagem adiciona uma leitura até o valor da condicional seja alcançado
        soma += numero;             //soma vai adicionar + 1 a cada leitura
    }

    // Cálculo da média
    media = soma / 10;

    // Impressão dos resultados
    printf("\nA soma dos numeros eh: %.2f\n", soma);
    printf("A media dos numeros eh: %.2f\n", media);

    return 0;


}