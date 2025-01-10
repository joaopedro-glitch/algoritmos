/*Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
teclado e verificar se esse número está contido ou não no vetor.*/

#include <stdio.h>

int main() {
    int vetor[8];
    int i = 0, contador = 0, numeroBuscado;

    // Leitura dos valores positivos
    while (contador < 8) {
        printf("Digite um valor inteiro positivo para o indice %d: ", contador + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] > 0) {
            contador++;
            i++;
        } else {
            printf("Valor invalido! Por favor, digite um valor positivo.\n");
        }
    }

    printf("Leitura dos valores concluida.\n");

    // Busca pelo número no vetor
    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &numeroBuscado);

    int encontrado = 0; // variável booleana para encontrar o número procurado

    for (i = 0; i < 8; i++) {
        if (vetor[i] == numeroBuscado) {
            encontrado = 1;            // variável tonar-se true se o número buscado existir em algum indice do vetor
            break;
        }
    }

    if (encontrado) {
        printf("O numero %d foi encontrado no vetor.\n", numeroBuscado);
    } else {
        printf("O numero %d nao foi encontrado no vetor.\n", numeroBuscado);
    }

    return 0;
}