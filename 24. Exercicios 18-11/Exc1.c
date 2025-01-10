/*Escreva um programa que recebe nome completo, idade, salário, anos de
experiência na profissão e cargo em uma empresa de N funcionários. Calcule e mostre a
idade média dos funcionários, o nome do funcionário com maior experiência e o cargo do
funcionário com maior salário*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_FUNC 1500

typedef struct {
    char nome[50];
    char cargo[50];
    int idade;
    int experiencia;
    float salario;
    
}funcionario;

int main(){

    funcionario func[QTD_FUNC];
    float somaIdade = 0.0, mediaIdade, maiorSalario = 0.0;
    int maiorExp = 0;

    for (int i = 0; i < QTD_FUNC; i++){

        printf("-- Cadrasto funcionario %d --\n", i+1);

        printf("Nome completo: ");
        fflush(stdin);
        scanf("%[^\n]", func[i].nome);

        printf("Cargo: ");
        fflush(stdin);
        scanf("%[^\n]", func[i].cargo);

        printf("Idade: ");
        scanf("%d", &func[i].idade);

        printf("Salario: ");
        scanf("%f", &func[i].salario);

        printf("Anos de experiencia: ");
        scanf("%d", &func[i].experiencia);

        // acumula idades para calcular media
        somaIdade += func[i].idade;

        // descobre o valor da maior experiencia
        if (func[i].experiencia > maiorExp){
            maiorExp = func[i].experiencia;
        }

        // descobre o valor do maior salario
        if (func[i].salario > maiorSalario){
            maiorSalario = func[i].salario;
        }
    }
    
    mediaIdade = somaIdade/QTD_FUNC;

    printf("\nA media de idade dos funcionarios eh: %.1f\n\n", mediaIdade);

    printf("Funcionario(s) com maior experiencia: \n");

    for (int i = 0; i < QTD_FUNC; i++){

        if(func[i].experiencia == maiorExp){
            printf("%s\n", func[i].nome);
        }    
    }

    printf("\nCargo(s) com maior salario: \n");

    for (int i = 0; i < QTD_FUNC; i++){
        
        if (func[i].salario == maiorSalario){
           printf("%s\n", func[i].cargo); 
        }
    }

    return 0;
}
