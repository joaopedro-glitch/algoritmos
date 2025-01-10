/*Faça um programa para lançar uma moeda. Quando chamamos
uma função, ela deve retornar cara ou coroa (pode ser representado como 0 e
1). Em outra função, faça n lançamentos de moedas, em que n é o valor que o
usuário quiser, e mostre a porcentagem de vezes em que deu cara e em que
deu coroa. Se você jogar a moeda 10, 100, 1000, um milhão de vezes...o que
tende a acontecer?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ladoC = 0, ladoR = 0; // Variáveis globais para contar caras e coroas

int girarMoeda(){
    return rand() % 2;
}

void lancamentos(int num){
    float porcentagemC, porcentagemR;

   for (int i = 0; i < num; i++) {
        if (girarMoeda() == 0) {
            ladoC++;
        } 
        else {
            ladoR++;
        }
    }
    
    porcentagemC = (float) ladoC/num * 100;
    porcentagemR = (float) ladoR/num * 100; 

    printf("\nA moeda apos %d vezes jogadas teve uma porcentagem de %.2f%% Cara e %.2f%% Coroa", num, porcentagemC, porcentagemR);

}

int main(){
    srand(time(NULL)); // Inicializa a semente aleatória apenas uma vez
    int num;
    char continuar;

    do{
        printf("Presione 'G' para girar a moeda e 'L' para inserir um numero de lancamentos: ");
        scanf(" %c", &continuar);
        girarMoeda();

        if (continuar == 'G' || continuar == 'g') {

            int resultado =  girarMoeda();

            if (resultado == 0) {
                printf("Cara\n");
            } 
            else {
                printf("Coroa\n");
            }
        }
        
    } while (continuar == 'G' || continuar == 'g');
    
    

    printf("\nInsira o numero de vezes que deseja lancar a moeda: ");
    scanf("%d", &num);

    ladoC = 0;
    ladoR = 0; // Reinicializa os contadores antes de cada conjunto de lançamentos

    lancamentos(num);

    return 0;

}