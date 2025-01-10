#include <stdio.h>

int main()
{   
    int i;

    //Itera sobre o intervalo de 1 a 1000
    for (i = 1; i <= 1000; i++)
    {
        if (i % 7 == 0) // Verifica multiciplicidade por 7
        {
          printf("%d\n", i);  
        }

    }
    
    return 0;

}