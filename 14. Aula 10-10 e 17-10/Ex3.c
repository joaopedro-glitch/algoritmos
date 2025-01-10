/*Escreva um programa que receba do teclado uma string de até 200 caracteres e um determinado
caractere, e devolva a localização da última ocorrência desse caractere na string. Se o caractere
não aparecer na string, o programa deve exibir uma mensagem informando isso.*/

#include <stdio.h>
#include <string.h>

int main()
{

    char caractere;
    char frase[200];
    int posicao = -1; // Inicializa com -1 para indicar que não encontramos o caractere

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase, sizeof(frase), stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // O espaço antes de %c ignora espaços em branco

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if ((frase[i] == caractere))
        {
            posicao = i; // Atualiza a posição sempre que encontra o caractere
        }
    }

    // Verificar se encontramos o caractere
    if (posicao != -1)
    {
        printf("A ultima ocorrencia do caractere '%c' esta na posicao: %d\n", caractere, posicao);
    }
    else
    {
        printf("O caractere '%c' nao foi encontrado na frase.\n", caractere);
    }

    return 0;
}