#include <stdio.h>

int main() 
{
    int inicial = 2, soma = 0, contador = 0;
    float media;

    // Itera de 2 até 100 (números pares)
    while (inicial <= 100) {
        soma += inicial; // soma = soma + incial 
        contador++;     //contador = contador + 1
        inicial +=2;    //inicial = inicial + 2 
    }

    // Calcula a média
    media = (float)soma / contador;

    printf("A soma dos numeros pares de 1 a 100 eh: %d\n", soma);
    printf("Existem %d numeros pares entre 1 a 100\n", contador);
    printf("A media aritmetica dos numeros pares de 1 a 100 eh: %.2f\n", media);

    return 0;
}