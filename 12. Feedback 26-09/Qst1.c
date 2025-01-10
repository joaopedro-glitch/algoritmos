#include <stdio.h>

int main()
{
    int idade;
    char estudante;
    float tarifaNormal = 5.0, preco;

    do{
        printf("Digite a idade do passageiro: ");
        scanf("%d", &idade);
    }while(idade < 0);

    
    if (idade < 6)
    {
        preco = 0.0;
        printf("O valor da passagem: %.2f\n", preco);
    }
    
    else if (idade <= 18)
    {
        
        do{
        printf("O passageiro eh estudante? [S/N]");
            getchar();
            scanf("%c", &estudante);
        }while (estudante != 'S' && estudante != 's' && estudante != 'N' && estudante != 'n');

        if(estudante == 'S' || estudante == 's')
        {
            preco = 0.5 * tarifaNormal;
            printf("O valor da passagem: %.2f\n", preco);
        }
        else if(estudante == 'N' || estudante == 'n')
        {
            printf("O valor da passagem: %.2f\n", tarifaNormal);
        }
    }   

    else if(idade <= 59)
    {
        printf("Valor da passagem: %.2f\n", tarifaNormal);

    }

    else
    {
        preco = tarifaNormal - (tarifaNormal * 0.3);
        printf("Valor da passagem: %.2f\n", preco);
    }

    return 0;


}