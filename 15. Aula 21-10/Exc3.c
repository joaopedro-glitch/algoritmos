/*Defina uma matriz de 4 linhas por 4 colunas e imprima a multiplicação de sua diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); // inicializa semente aleatória

    int matriz[4][4];

    // Imprimindo a matriz
    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            matriz[l][c] = rand() % 9 + 1; //Gera números aleatórios de 1 a 9, o +1 aplica-se para excluir a geração de 0
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
    }
    
    int multiplicacao = 1;

   // Calculo da diagonal principal
    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (l == c)            // Define uma condicional para mutiplicação quando o índice da linha for igual o da coluna
            {
                multiplicacao *= matriz[l][c];
            }
        }
        
    }
    
    printf("A multiplicacao da coluna principa eh: %d", multiplicacao);
    

    return 0;
}