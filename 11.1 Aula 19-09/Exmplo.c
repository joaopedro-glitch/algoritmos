#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    do{
       
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Valor invalido\n");
        }     

        else{
            for (i = 1; i <= num; i++)
            {
                printf("*");
            }

            printf("\n");
        }

    } while(num != 0);

    printf("Zero digitado! Finalizando.");
    

    return 0;

}