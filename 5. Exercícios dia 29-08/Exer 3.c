#include <stdio.h>

int main() 
{

    int dia_semana;

    printf("Digite o numero do dia da semana: ");
    scanf("%d", &dia_semana);

    switch (dia_semana)
    {
        case 1:
        printf("domingo");
        break;

        case 2:
        printf("segunda-feira");
        break;

        case 3:
        printf ("terca-feira");
        break;

        case 4:
        printf("quarta-feira");
        break;

        case 5:
        printf("quinta-feira");
        break;

        case 6:
        printf("sexta-feira");
        break;

        case 7:
        printf("sabado");
        break;
    
        default:
        printf("numero invalido");
        break;
    }

    return 0;

}