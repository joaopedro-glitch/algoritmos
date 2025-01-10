/*Seja um vetor de inteiros de nove elementos. Escreva um programa que realize a seguinte sequência
de ações, na ordem indicada:
a) preenchimento do vetor por leitura de valores positivos;
b) impressão dos elementos do vetor em uma linha, usando dois espaços em branco para separar os
valores de cada elemento;
c) rotação dos elementos do vetor, com o deslocamento de todos os valores dos elementos para a
posição seguinte, exceto o último valor, que deve ser colocado na posição do primeiro elemento;
d) repetição do item b;
e) soma do índice de cada elemento ao conteúdo da posição correspondente;
f) repetição do item b;
g) leitura de um valor inteiro e apresentação do número de ocorrências desse valor no vetor*/

#include <stdio.h>

int main(){

    int vet[9], vet_soma[9], vet_aux[9], valorInserido, contagem = 0;

    // Preenchimento do vetor pelo usuário
   
    printf("Digite 9 valores inteiros positivos:\n");
   
    for (int i = 0; i < 9; i++) {
        printf("Vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    
    // Impressão inicial
    
    printf("Elementos do vetor: ");
    
    for (int i = 0; i < 9 ; i++)
    {
        printf("%d  ", vet[i]);
    }

    // Copia o vetor original para o vetor auxiliar (para armazenar o valor original para soma após a rotação) 
    for (int i = 0; i < 9; i++) {
    vet_aux[i] = vet[i];
    }

   // Rotação e impressão
    int ultimo = vet[8];            //armazena o valor o ultimo vetor
    
    printf("\n\nElementos do vetor rotacionados: ");
    
    for (int i = 8; i > 0; i--) {  //Cada elemento, do último até o segundo, recebe o valor do elemento anterior
        vet[i] = vet[i - 1];
    }

    vet[0] = ultimo;               // atribui o valor do ultimo no primeiro indice 
    
    for (int i = 0; i < 9; i++) {   
        printf("%d  ", vet[i]);
    }


    // Soma do índice e impressão (sem alterar o vetor original)
    printf("\n\nSoma dos elementos com o conteudo de sua posicao (antes da rotacao): ");
   
    for (int i = 0; i < 9; i++) {
        vet_soma[i] = vet_aux[i] + i;
        printf("%d  ", vet_soma[i]);
    }
    
    
    printf("\n\nDigite um valor inteiro: ");
    scanf("%d", &valorInserido);

    for (int i = 0; i < 9; i++)
    {
        if(valorInserido == vet[i]){
            contagem++;
        }
    }

    printf("\nO valor inserido ocorreu %d vez(es) no vetor", contagem);
    

    return 0;
}