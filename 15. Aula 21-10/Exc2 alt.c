/*Defina uma matriz com 3 linhas e 5 colunas e imprima o somatório dos elementos de sua última
coluna*/

#include <stdio.h>

int main(){

    int matriz[3][5];

    //Requisitando para o usuario preencher a matriz -> alternativo ao exercicio original
    
    for(int l = 0; l < 3; l++)  //percorre linhas
    {
        for(int c = 0; c < 5; c++)   //percorre colunas
        {
            printf("Atribua valor para a linha %d, coluna %d: ", l +1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }

    // Imprimindo a matriz
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 5; c++)
        {
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