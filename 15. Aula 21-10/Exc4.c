/*Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha a soma
dos valores de cada uma das linhas da matriz. Crie um vetor com 4 posições que contenha a
multiplicação dos valores de cada uma das colunas da matriz. Ao final do processamento, imprima
esses vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));  // inicializa semente aleatória

    int matriz[3][4];

    // Imprimindo a matriz
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            matriz[l][c] = rand() % 9 + 1; //Gera números aleatórios de 1 a 9, o +1 aplica-se para excluir a geração de 0
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }

    int vetSoma[3] = {0, 0, 0};

    // Calculando a soma de cada linha e armazenando no vetor
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            vetSoma[l] += matriz[l][c];           
        }
    }    

    // Imprimindo as somas das linhas
    for (int i = 0; i < 3; i++) 
    {
        printf("Soma da linha %d: %d\n", i+1, vetSoma[i]);
    }
    
    int vetMult[4] = {1, 1, 1, 1};

    // Calculando a multiplicação de cada coluna e armazenando no vetor
    for (int c = 0; c < 4; c++)
    {
        for (int l = 0; l < 3; l++)
        {
            vetMult[c] *= matriz[l][c];
        }
    }
    
    // Imprimindo as multiplicações das colunas
    for (int i = 0; i < 4; i++)
    {
        printf("Multiplicacao da coluna %d: %d\n", i+1, vetMult[i]);
    }
    

    return 0;
}