#include <stdio.h>

int main()
{
    int i, fatorial = 1, num;

    do
    {
        printf("Digite um numero para calcular fatorial: ");
        scanf(" %d", &num);

        if (num < 0)
        {
            printf("Valor negativo, insira um valor positivo\n");
        }
        

    } while (num < 0);
    

    for (i = num; i >= 1; i--)
    {
        fatorial *= i;
        printf("i : %d fatorial parcial: %d\n", i, fatorial); 

    }
    
    return 0;

}