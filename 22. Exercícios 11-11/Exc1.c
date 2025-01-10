/*Crie uma função que preencha um vetor de mil posições com
valores aleatórios de 1 até 6. Conte quantas vezes cada número foi sorteado.
Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tempo(int numeros[1000]){
    srand(time(NULL));

    int cont[6] = {0}; 

    // Preenchimento do vetor
    for(int i = 0; i < 1000; i ++) {
        // Números no intervalo [1, 6]
        numeros[i] = 1 + rand() % 6;
        
        // Incrementa apenas o contador do número sorteado
        cont[numeros[i] - 1]++;   

    }
    
     // Cálculo da porcentagem
    for (int i = 0; i < 6; i++){
        
        float porcentagem = (float) cont[i]/1000 * 100;
        
        printf("O numero %d apareceu %d vezes com a porcentagem de %.2f%%\n", i + 1, cont[i], porcentagem);
    } 
} 

int main(){
    int num[1000];
    
    tempo(num);

    return 0;

}




    


