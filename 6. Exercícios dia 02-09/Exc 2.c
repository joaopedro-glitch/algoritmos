#include <stdio.h>

int main ()
{
    int numA, numB; 

    printf("Atribua um valor para A: ");
    scanf("%d", &numA);

    printf("Atribua um valor para B: ");
    scanf("%d", &numB);

    if((numA*numB) > 0){
        printf("Sinal positivo");

    }
    
    else if( (numA*numB) < 0 ){
        printf("Sinal negativo");
    } 

    else{
        printf("Nulo");
    }
    
    return 0;

}