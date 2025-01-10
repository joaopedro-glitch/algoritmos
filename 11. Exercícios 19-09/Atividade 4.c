#include <stdio.h>

int main()
{
    int i = 1000, cont = 0;

    while (cont < 5)
    {
        if (i % 11 == 5)
        {
            printf("O numero %d eh maior que 1000 e tem o resto 5 ao dividir por 11\n", i);
            cont++; //Se a condição for verdadeira, incrementa count para contar os números encontrados.
        }
        i++; //A cada iteração, o valor de i é incrementado, e a condição é verificada novamente para o próximo número.
    
    }
    
    return 0;

}