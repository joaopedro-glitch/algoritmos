#include <stdio.h>

int main()
{
    float nota;
    char conceito;

    printf("Digita a nota atribuida: ");
    scanf(" %f", &nota);

    if (nota == 0)
    {
        conceito = 'E';
    }

    else if (nota >= 1 && nota <=35 )
    {
        conceito = 'D';
    }

    else if (nota >= 36 && nota <= 60 )
    {
        conceito = 'C';
    }

    else if (nota >= 61 && nota <= 85)
    {
        conceito = 'B';
    }

    else if (nota >= 86 && nota <=100)
    {
        conceito = 'A';
    }

    else
    {
        printf("Valor invalido\n");
        return 1;
    }

    printf("O conceito para a nota atribuida sera %c\n", conceito);
    
return 0;

}