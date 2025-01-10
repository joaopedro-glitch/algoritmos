// inclusão de biblioteca
#include <stdio.h>   

int main() {
    
    int numero_sapatos_vendidos;
    float valor_vendas, salario_vendedor;
    
    printf("Insira o valor total em vendas realizadas em R$: ");
    scanf("%f", &valor_vendas);
    
    printf("\nInsira o número de sapatos vendidos: ");
    scanf("%d",&numero_sapatos_vendidos);
    
   salario_vendedor =  (valor_vendas*0.2) + (numero_sapatos_vendidos*5);
   
   printf("O salário do vendedor nesse mês será de>: %.2f", salario_vendedor);
    
    
    
 return 0;    
}