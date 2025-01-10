/*Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10.*/

#include <stdio.h>

int main(){

    int tabuada[11][11];

    // Preenche a matriz com os valores da tabuada
    for (int l = 0; l <= 10; l++)
    { 
        for (int c = 0; c <= 10; c++)
        {
           tabuada[l][c] = l * c; 
        }
    }

    // Imprime a matriz
    for (int l = 0; l <= 10; l++) 
    {
        for (int c = 0; c <= 10; c++) {
            printf("%d\t", tabuada[l][c]);
        }
        printf("\n");
    }
    

return 0;


}