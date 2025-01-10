/*Escreva um programa que leia uma string do teclado (com tamanho máximo de 200 caracteres) e
conte quantas ocorrências de cada vogal existem nessa string.*/

#include <stdio.h>
#include <string.h>

int main(){

    char frase[200];
    int contagem[5] = {0}; // contagem para a, e, i, o, u

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase, sizeof(frase), stdin);

   

    for (int i = 0; frase[i] != '\0' ; i++)
    {
        if ((frase[i] == 'a') || (frase[i] == 'A'))
        {
            contagem[0]++;
        }

        if ((frase[i] == 'e') || (frase[i]== 'E'))
        {
            contagem[1]++;
        }

        if ((frase[i] == 'i') || (frase[i] == 'I'))
        {
            contagem[2]++;
        }

        if ((frase[i] == 'o') || (frase[i] == 'O'))
        {
            contagem[3]++;
        }

        if ((frase[i] == 'u') || (frase[i] == 'U'))
        {
            contagem[4]++;
        }
    }

    // Exibir resultados
    printf("A vogal 'a' ocorreu %d vez(es)\n", contagem[0]);
    printf("A vogal 'e' ocorreu %d vez(es)\n", contagem[1]);
    printf("A vogal 'i' ocorreu %d vez(es)\n", contagem[2]);
    printf("A vogal 'o' ocorreu %d vez(es)\n", contagem[3]);
    printf("A vogal 'u' ocorreu %d vez(es)\n", contagem[4]);

    return 0;
}