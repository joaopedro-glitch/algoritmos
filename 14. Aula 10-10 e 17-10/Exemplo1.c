#include <stdio.h>
#include <string.h>

int main(){

    char dataNasc[11];
    char nome[100];
    int tamanho;

    printf("Digite sua data de nascimento: ");
    fflush(stdin); // limpa buffer do teclado
    scanf("%s", dataNasc);

    printf("Digite seu nome: ");
    fflush(stdin); // limpa buffer do teclado
    
    /* scanf("%s", nome); -> não é recomendado por ler somente a string antes do primeiro espaço
    scanf("%100[^\n]", nome); escaneia os 100 caracteres digitados com espaço usando a função [^\n] */

    fgets(nome, 100, stdin); // função de escanear que define a variavel, numero de caracteres, e o tipo de entrada

    printf("Data digitada: %s\n", dataNasc);
    
    printf("Nome digitado: %s\n", nome);

    tamanho = strlen(nome) - 1; // -1 para excluir o enter

    for (int i = 0; i < tamanho; i++)
    {
        printf("Indice %d: %c\n", i, nome[i]);
    }
    


    return 0;
}