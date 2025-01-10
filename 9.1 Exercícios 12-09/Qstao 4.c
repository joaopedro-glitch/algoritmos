#include <stdio.h>

int main()

{
    int num, cont = 0;
    float soma = 0, media; // Declara a média como float

    do
    {
        printf ("Insira um numero inteiro (0 para sair): ");
        scanf(" %d", &num);

       if (num != 0) 
       {
            soma += num;
            cont++;
       }
        

    } while (num != 0);

  
    // Verifica se algum número diferente de zero foi digitado
    if (cont > 0) 
    {
        media = soma / cont;

        printf("A media dos numeros inseridos eh: %.2f\n", media);
    } 
    else 
    {
        printf("Nenhum numero foi inserido.\n");
    }

    return 0;

}