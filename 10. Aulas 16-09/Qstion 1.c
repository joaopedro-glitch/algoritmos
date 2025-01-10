#include <stdio.h>

int main ()
{
int i, soma = 0;

// Itera sobre o intervalo de 1 a 500
for (i = 1; i <= 500; i++)
{
    // Verifica se o número é ímpar e múltiplo de 3
    if ((i % 2 != 0) && (i % 3 == 0))
    {
        soma += i;  // Adiciona o número à soma
        printf("i: %d, soma parcial: %d\n", i, soma);

    }
}

printf("A soma dos numeros impares multiplos de 3 eh: %d,", soma);

return 0;


}