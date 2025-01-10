#include <stdio.h>

int main()
{
    int num, somaPos = 0, somaNeg = 0, cont = 0;

    do
    {
        printf("Insira um numero inteiro: ");
        scanf(" %d", &num);

        if (num > 0 )
        {
            somaPos += num;
        }

        else if (num < 0)
        {
            somaNeg += num;
        }

        cont++;

    } while (cont < 6);

    printf("A soma dos numeros positivos sera: %d \n", somaPos);
    printf("A soma dos numeros negativos sera: %d", somaNeg);

    return 0;
    

}