#include <stdio.h>

#define GORJETA 0.1

int main ()
{
   float contaParcial, comissaoGarcom, contaTotal;

   printf("Insira o valor da conta em reais: ");
   scanf("%f", &contaParcial);

   comissaoGarcom = contaParcial * GORJETA;
   contaTotal = contaParcial + comissaoGarcom;

   printf("O valor da gorjeta sera de %.2f R$, e o valor total da conta sera de: %.2f R$", comissaoGarcom, contaTotal);


   return 0;


}