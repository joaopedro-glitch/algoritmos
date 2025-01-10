/*Escreva um programa que leia uma string do teclado e a escreva na tela ao contrário (do final para o
início)*/

#include <stdio.h>
#include <string.h>

int main(){

    char frase[200];
    int i, tamanho;

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase, 200, stdin);

    tamanho = strlen(frase) -1; // -1 para excluir o enter

    printf("Tamanho da string: %d \n", tamanho);
    
    for (i = tamanho -1; i >= 0; i--)
    {
        printf("Indice %d: %c \n", i, frase[i]);
    }
        
    
    return 0;

}