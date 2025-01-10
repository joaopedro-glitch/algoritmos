/*Desenvolva um programa em C que determine o número de
palavras em uma string fornecida pelo usuário. O programa deve pedir ao usuário que digite uma
frase ou texto. Em seguida, o programa deve analisar a string fornecida e contar quantas palavras
ela contém.
Entrada do Usuário: Solicitar ao usuário que insira uma frase.
Processamento: Contar o número de palavras na frase. A contagem de palavras deve
considerar sequências de caracteres separadas por um espaço como palavras individuais.
Saída: Exibir o número total de palavras na frase.
Exemplo de Execução:
Por favor, digite uma frase: Hoje é um bom dia para programar.
Número de palavras: 7*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    int contPalavras = 0;
    int i;

    printf("Por favor, digite uma frase: ");
    // Usar fgets para evitar problemas com buffer e garantir a leitura da string completa
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha (\n) caso esteja presente no final da string
    frase[strcspn(frase, "\n")] = '\0';

    // Percorrer a frase para contar as palavras
    for (i = 0; frase[i] != '\0'; i++) {
        // Incrementa a contagem de palavras ao encontrar um espaço seguido de um caractere válido
        if ((frase[i] != ' ' && frase[i] != '\t') && 
            (frase[i + 1] == ' ' || frase[i + 1] == '\t' || frase[i + 1] == '\0')) {
            contPalavras++;
        }
    }

    printf("Numero de palavras: %d\n", contPalavras);

    return 0;
}