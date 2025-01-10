/*Defina uma matriz com 3 linhas e 5 colunas e imprima o somatório dos elementos de sua última
coluna*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); // inicializa semente aleatória

    int matriz[3][5];
  

    // Imprimindo a matriz
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            matriz[l][c] = rand() % 9 + 1; // Gera números aleatórios de 1 a 9
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }
    

    int soma = 0;

    // Soma dos elementos da ultima coluna apenas
    for (int l = 0; l < 3; l++)
    {   
        soma += matriz[l][4]; 

    }
    
    printf("A soma dos elementos da ultima coluna eh: %d", soma);

    return 0;
}