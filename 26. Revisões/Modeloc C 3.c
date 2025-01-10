/*Desenvolva um programa em linguagem C que faça uso de structs
para processar dados sobre hotéis em cinco cidades turísticas. O programa deve realizar as
seguintes tarefas:

1. Definir uma struct chamada Hotel com os seguintes campos:
○ Código do hotel (inteiro)
○ Nome da cidade (string de até 50 caracteres)
○ Número de quartos disponíveis (inteiro)
○ Número de hóspedes em 2024 (inteiro)

2. Solicitar ao usuário que insira os dados de cinco hotéis, um em cada cidade.

3. Determinar e imprimir o hotel com o maior e o hotel com o menor número de hóspedes em
2024, exibindo os respectivos nomes das cidades.

4. Calcular e imprimir a média de quartos disponíveis nos cinco hotéis juntos.

5. Calcular e imprimir a média de hóspedes nos hotéis localizados em cidades que possuem
menos de 100 quartos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codHotel;
    char nomeCidade[50];
    int quartosDis;
    int hospedes;

} hotel;

int main(){

    hotel hotelCid[5];

    int maiorHosp = 0, menorHosp = 9999999;
    char maisHosp[50], menosHosp[50];
    int somaQuartos = 0, somaMenosCem = 0, contMenosCem = 0;
    float mediaQuartos, mediaMenosCem;

    for (int i = 0; i < 5; i++){
        
        printf("Insira o codigo do hotel %d: ", i + 1);
        scanf("%d", &hotelCid[i].codHotel);

        printf("Insira o nome da cidade %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]", hotelCid[i].nomeCidade);

        printf("Insira o numero de quartos disponiveis no hotel: ");
        scanf("%d", &hotelCid[i].quartosDis);

        printf("Insira o numero de hospedes em 2024: ");
        scanf("%d", &hotelCid[i].hospedes);

        printf("\n");

        printf("O hotel %d o codigo: %d\n", i+1, hotelCid[i].codHotel);
        printf("Fica na cidade: %s\n", hotelCid[i].nomeCidade);
        printf("Tem %d quartos disponiveis\n", hotelCid[i].quartosDis);
        printf("E recebeu %d hospedes em 2024\n\n", hotelCid[i].hospedes);

        if (hotelCid[i].hospedes > maiorHosp){
            
            maiorHosp = hotelCid[i].hospedes;
            strcpy(maisHosp, hotelCid[i].nomeCidade);
        }

        if (hotelCid[i].hospedes < menorHosp){
            
            menorHosp = hotelCid[i].hospedes;
            strcpy(menosHosp, hotelCid[i].nomeCidade);
        }

        somaQuartos += hotelCid[i].quartosDis;

        if (hotelCid[i].quartosDis < 100){

            somaMenosCem += hotelCid[i].hospedes;
            contMenosCem++;     
        }
    }

    printf("O hotel com maior numero de hospedes em 2024 foi na ciadade de:  %s\n", maisHosp);
    printf("O hotel com menor numero de hospedes em 2024 foi na ciadade de:  %s\n", menosHosp);

    mediaQuartos = (float) somaQuartos/5;

    printf("A media de quartos em todos os hoteis foi de: %.2f\n", mediaQuartos); 

    if (contMenosCem > 0) {
        mediaMenosCem = (float)somaMenosCem / contMenosCem;
        printf("A media de hospedes nos hoteis com menos de cem quartos disponiveis foi de: %.2f\n", mediaMenosCem);
    } 
    
    else{
        printf("Nenhum hotel possui menos de cem quartos disponiveis.\n");
    }

    return 0;
}