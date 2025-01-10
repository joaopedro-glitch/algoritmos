#include <stdio.h>

int main()
{
    float num;

    printf("Digite um numero: ");
    scanf(" %f", &num);

    if ((num >= 0) && (num <=25)){
        printf("O numero esta no intervalo [0,25]\n");   
    }

    else if ((num > 25) && (num <= 50)){
        printf("O numero esta no intervalo (25,50]\n");
    }
    
    else if ((num > 50) && (num <=75)){
        printf("O numero esta no intervalo (50,75]\n");
    }

    else if ((num > 75) && (num <= 100)){
        printf("O numero esta no intervalo (75.100]\n");
    }

    else if ((num < 0) || (num > 100)){
        printf("Fora de intervalo");
    }
    
    return 0;

}