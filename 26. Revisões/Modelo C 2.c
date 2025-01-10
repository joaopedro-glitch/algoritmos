/*Uma estação meteorológica deseja analisar as temperaturas
registradas diariamente ao longo de um mês. A estação registrou as temperaturas diárias em um
vetor de 30 posições, onde cada posição representa a temperatura média registrada em um dia
específico. Com base nesses dados, escreva um programa que realize as seguintes tarefas:

1. Leia os valores de temperatura média diária para cada um dos 30 dias do mês.
2. Calcule a média diária de temperatura.
3. Determine o dia com a maior temperatura média e o dia com a menor temperatura média.
4. Exiba todos os dias em que a temperatura média foi superior à média diária.*/

#include <stdio.h>

int main(){

    int diaMaior = 0, diaMenor = 0;
    float temperaturas[30], mediaDiaria, maiorTemperatura = 0, menorTemperatura = 100, soma = 0;

    for (int i = 0; i < 30 ; i++){
        
        printf("Entre com a temperatura dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);

        soma += temperaturas[i];

        if (temperaturas[i] > maiorTemperatura){
            
            maiorTemperatura = temperaturas[i];
            diaMaior = i+1;
        }

        if (temperaturas[i] < menorTemperatura){
            
            menorTemperatura = temperaturas[i];
            diaMenor = i+1;
        }
   
        
    }

    mediaDiaria = soma/30;

    printf("\nA media diaria foi de %.2f C\n", mediaDiaria);
    printf("A maior temperatura foi %.2f C no dia %d\n", maiorTemperatura, diaMaior);
    printf("A menor temperatura foi %.2f C no dia %d\n", menorTemperatura, diaMenor);

    printf("\nDias com temperatura acima da media:\n");

    for (int i = 0; i < 30; i++){

        if (temperaturas[i] > mediaDiaria){
            
            printf("Dia %d: %.2f C\n", i + 1, temperaturas[i]);
        }    
    }
    

    return 0;
}

