#include <stdio.h>

int main()
{
    int num, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    do
    {
        printf("Insira um valor inteiro: ");
        scanf("%d", &num);

        if (num >= 0 && num <= 25)
        {
            printf("O numero esta no intervalo [0,25]\n");
            cont1++;
        }

        else if (num >= 26 && num <= 50)
        {
            printf("O numero esta no intervalo [26,50]\n");
            cont2++;
        }

        else if (num >= 51 && num <= 75)
        {
            printf("O numero esta no intervalo [51,75]\n");
            cont3++;
        }

        else if (num >= 76 && num <= 100)
        {
            printf("O numero esta no intervalo [76,100]\n");
            cont4++;
        }

        else if (num > 100)
        {
            printf("Numero maior que 100\n");
        }

    } while (num >= 0);

    printf("Existem %d no intervalo [0,25] \n", cont1);
    printf("Existem %d no intervalo [26,50] \n", cont2);
    printf("Existem %d no intervalo [51,75] \n", cont3);
    printf("Existem %d no intervalo [76,100] \n", cont4);

    printf("Numero negativo. Finalizando");

    return 0;
}