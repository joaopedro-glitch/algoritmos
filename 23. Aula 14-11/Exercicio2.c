/*Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
a. Data do jogo;
b. Time mandante;
c. Time visitante;
d. Gols do mandante;
e. Gols do visitante.
Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char mandante[50];
    char visitante[50];
    int golsMandante;
    int golsVisitante;

}partidas;

typedef struct{
    int dia;
    int mes;
    int ano;
}data;


int main(){

    partidas rodadas[5];
    data diaPartida[5];

    for (int i = 0; i < 5; i++){
        do{
        printf("Digite a data do jogo %d: \n", i+1);
        scanf("%d-%d-%d", &diaPartida[i].dia, &diaPartida[i].mes, &diaPartida[i].ano);

        if ((diaPartida[i].dia < 1 && diaPartida[i].dia >= 31) || (diaPartida[i].mes < 1 && diaPartida[i].mes >= 12) || (diaPartida[i].ano < 1990 && diaPartida[i].ano > 2025)){
            printf("Data inválida! Digite uma data válida: ");
            scanf("%d-%d-%d", &diaPartida[i].dia, &diaPartida[i].mes, &diaPartida[i].ano);
        } 

        }while((diaPartida[i].dia < 1 && diaPartida[i].dia >= 31) || (diaPartida[i].mes < 1 && diaPartida[i].mes >= 12) || (diaPartida[i].ano < 1990 && diaPartida[i].ano > 2025));

        printf("%d-%d-%d\n", diaPartida[i].dia, diaPartida[i].mes, diaPartida[i].ano);
    }
    


    return 0;
}