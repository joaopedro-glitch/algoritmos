// inclusão de biblioteca
#include <stdio.h>   

int main() {
    
    float conta_parcial, conta_final, gorjeta;
    
    printf("Insira o valor da conta em reais: ");
    scanf("%f", &conta_parcial);
    
    gorjeta = (float) conta_parcial*0.1;
    conta_final = conta_parcial+gorjeta; 
    
    printf("\nO valor parcial da conta foi: %.2f", conta_parcial);
    printf("\nCom gorjeta de %.2f, o valor final ficou %.2f", gorjeta, conta_final);
    
    
    
    
 return 0;    
}
