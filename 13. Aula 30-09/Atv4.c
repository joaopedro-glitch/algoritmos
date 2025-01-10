/* Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com
valores lidos do teclado. O programa deverá aceitar somente números pares entre 1 e 20. Ao final,
imprima todos os valores salvos no vetor, além da média dos valores, o menor e o maior valor. */

#include <stdio.h>

int main(){
    
    int vet[6], i, soma = 0, maior, menor;
    float media;

    // Lê o primeiro valor e inicializa maior e menor
    do{
    printf("Insira um valor par de 1 a 20 para o indice [0]: ");
    scanf("%d", &vet[0]);

         if (vet[0] < 2 || vet[0] > 20 || vet[0] % 2 != 0){
                
                printf("Valor invalido!\n");
            }

    }while (vet[0] < 2 || vet[0] > 20 || vet[0] % 2 != 0);

    maior = vet[0];
    menor = vet[0];

    // começa no 1 sendo que o valor de [0] foi inserido na primeira leitura
    for (i = 1; i < 6; i++){
        
        do{
           
            printf("Insira um valor par de 1 a 20 para o indice [%d]: ", i);
            scanf("%d", &vet[i]);

            if (vet[i] < 2 || vet[i] > 20 || vet[i] % 2 != 0){
                
                printf("Valor invalido!\n");
            }

        //Os limites foram ajustados para incluir 2 e 20, já que o exercício pede números pares entre 1 e 20
        } while (vet[i] < 2 || vet[i] > 20 || vet[i] % 2 != 0);
        

         // Atualiza maior e menor
        if (vet[i] > maior){
            
            maior = vet[i];
        }

        else if (vet[i] < menor){
            
            menor = vet[i];
        }

        soma += vet[i];
   
    }

    media = (float) soma / 6;

    printf("\n");

    for (i = 0; i < 6; i++){
        
        printf("O valor povoado do indice [%d]: %d\n", i, vet[i]); 
    }

    printf("\nO menor valor inserido foi: %d\n", menor);
    printf("O maior valor inserido foi: %d\n", maior);
    printf("A media dos valores eh: %.2f\n", media);


    return 0;
}