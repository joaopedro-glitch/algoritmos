#include <stdio.h>

int main()
{
    int qtdTeste, cont, num, soma;

    do
    {
        printf("Quantos testes voce ira realizar? ");
        scanf("%d", &qtdTeste);
    } while (qtdTeste < 1 || qtdTeste > 20);

    for (int i = 0; i <= qtdTeste ; i++)
    {
        soma = 0;

        do
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
        } while (num < 1 || num > 1000000000);
    
    

        for(cont = 1; cont < num; cont++)
        {
            if (num % cont == 0)
            {
                soma += cont; 
                printf("Divisor encontrado: %d\n", cont);
            }
       
        }
    

        if (soma == num)
        {
            printf("O numero eh perfeito\n");
        }

        else
        {
            printf("O numero nao eh perfeito\n");
        }
    }
    
    return 0;

}