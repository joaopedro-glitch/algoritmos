#include <stdio.h>

int main(){

    int cont=1,soma=0;


    while (cont<=100)
    {   
        soma+=cont;
        printf("Cont: %d  Soma: %d \n", cont, soma);

        cont++;    
    }
    
    printf("Soma final = %d", soma);



    return 0;



}