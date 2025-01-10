#include <stdio.h>

int main()
{
    int num1, num2, soma = 0;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", & num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", & num2);

    // Garantindo que num2 seja sempre maior ou igual a num1
    if (num2 < num1)
    {
        int temp = num2; // variavel temporaria substitui os valores
        num2 = num1;
        num1 = temp;
    }

    printf("Limite inferior: %d\n", num1);
    printf("Limite superior: %d\n", num2);
    printf("Numeros pares do intervalo: ");

    // garante que o contador se inicie no numero superior a num1 e o intervalo seja aberto
    for (int i = num1 + 1; i < num2; i++)
    {
        if (i % 2 == 0 ) //imprimindo e somando os numeros pares
        {
            printf("%d ", i );
            soma+= i;
        }   
    }
    
    printf("\nSomatoria dos numeros pares: %d", soma);
    

    return 0;

}