#include <stdio.h>

int main()
{  
    int num = 1, cont = 1;

    do
    {   
        printf("Numero impar %d : %d\n", cont, num);
        num += 2 ;
        cont++;
    
    } while (num < 20);
    


    return 0;



}