#include <stdio.h>

int main()
{
    int numA, numB; 

    printf("Atribua um valor para A: ");
    scanf("%d", &numA);

    printf("Atribua um valor para B: ");
    scanf("%d", &numB);

    // Verificar se os valores são diferentes de 0
    if((numA==0) || (numB==0)){
        printf("Os valores sao invalidos\n");
    }
    
    // Utilizando o resto da divisão por para determinar multiplicidae
   else if ((numA % numB) == 0 || (numB % numA == 0)) {   
         printf("Os valores sao multiplos\n");
    }
    
    else{
        printf("Os valores nao sao multiplos\n");
    }

    return 0;


}