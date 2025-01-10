#include <stdio.h>

int main ()
{
    int num, i = 0;

    do
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &num);
        

        if (num >= 100 && num <= 200) // contador altera somente quando o numero digitado está no intervalo
        {
            i++;
        }

    } while (num != 0);

    printf("Foram digitados %d no intervalo [100,200]", i);


    return 0;

}