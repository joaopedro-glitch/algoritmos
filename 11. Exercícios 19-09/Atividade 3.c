#include <stdio.h>
#include <math.h>

int main() 
{ 
    int num, i; // Declara o num para leitura e o contator i

    do // Inicializa o loop de verificação de números primos 
    {
        int isPrimo = 1; // Inicializa a flag isPrimo como 1 (verdadeiro) usando a lógica booleana

        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

            // Números menores ou iguais a 1 não são primos
            if (num <= 1) {
            isPrimo = 0;
            } 
            else {
            // Verifica divisibilidade por números de 2 até a raiz quadrada de num
                for (i = 2; i <= sqrt(num); i++) {
                    if (num % i == 0) {
                    isPrimo = 0;
                    break; // Se encontrar um divisor, não é primo, então sai do loop
                    }
                }
            }

        if (isPrimo) {
        printf("O numero %d eh primo\n", num);
        } else {
        printf("O numero %d nao eh primo\n", num);
        } 
    } while (num >= 0); // Executa o código enquanto o número inserido for maior ou igual a zero

    printf("Numero negativo inserido! Finalizando.\n");

    return 0;
    
}