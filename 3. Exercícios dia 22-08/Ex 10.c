#include <stdio.h>

int main() 
{
   int quilowattGasto; 
   float salarioMinimo, valorQuilowatt, valorPago; 

   printf("Insira o valor do salalario minimo em reais: ");
   scanf("%f", &salarioMinimo);

   printf("Insira o numero de quilowatts gasto: ");
   scanf("%d", &quilowattGasto);

   valorQuilowatt = (salarioMinimo/7)/100;

   valorPago = (float) quilowattGasto*valorQuilowatt;

   printf("O valor do quilowatt e de R$: %.2f", valorQuilowatt); 
   printf("\nE o valor a ser pago e de R$: %.2f", valorPago);


return 0;

}