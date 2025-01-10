#include <stdio.h>

int main ()
{
    float x, y, resultado; 
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

     /* Consumir o caractere de nova linha restante no buffer
    scanf(" %c", &operacao);  Note o espaço antes de %c*/

    printf("Selecione a operacao matematica desejada, usando: 'a' para adicao,\n");
    printf("'s' para subtracao, 'm' para multiplicacao e 'd' para divisao: ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
        case 'a': 
            resultado = x + y ;
        break;

        case 's': 
            resultado = x - y ;
        break;

        case 'm': 
            resultado = x * y ;
        break;

        case 'd': 
            if (y == 0) {
                printf("Divisao por zero nao e permitida.\n");
                return 1;
            }
            resultado = x / y;
            break;
        default:
            printf("Operacao invalida\n"); 
            return 1;
    }

    printf("O resultado sera: %.2f", resultado);

    return 0;

}