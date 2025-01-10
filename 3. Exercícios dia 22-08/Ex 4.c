#include <stdio.h>

int main()
{ 
     float valorDivida, diasAtraso, percentualDia, percentualTotal, valorMulta, valorTotal; 
     
     printf("Insira o valor devido pelo cliente em reais: ");
     scanf("%f", &valorDivida);

     printf("Insira os dias de atraso: ");
     scanf("%f", &diasAtraso);

     printf("Insira a porcentagem do juro por dia: ");
     scanf("%f", &percentualDia);

     percentualTotal = diasAtraso * percentualDia;

     valorMulta = percentualTotal/100 * valorDivida;
     
     valorTotal = valorDivida + valorMulta; 

     printf("O valor total devido com os juros em reais sera de: %.2f", valorTotal);

     return 0;




}