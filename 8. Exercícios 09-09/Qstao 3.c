#include <stdio.h>

int main() 
{
    int numero, contador = 1;

    printf("Digite um nUmero inteiro positivo: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);
   
    while (contador <= 10) {
        printf("%d x %d = %d\n", numero, contador, numero * contador); // numero inserido X o contador de 1 a 10
        contador++; //contador = contador + 1
        
    }

    return 0;
}