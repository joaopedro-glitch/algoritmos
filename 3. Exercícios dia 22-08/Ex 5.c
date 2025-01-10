#include <stdio.h>

#define PONTENCIA_METRO 18

int main()
{
   float comprimento, largura, potenciaTotal;

   printf("Insira o valor em metros do comprimento do comodo: ");
   scanf("%f", &comprimento);

   printf("Insira o valor em metros da largura do comodo: ");
   scanf("%f", &largura);

   potenciaTotal = (comprimento * largura) * PONTENCIA_METRO;

   printf("A potencia total para iluminar o seu comodo será de: %.2f W", potenciaTotal);

   return 0;  



}