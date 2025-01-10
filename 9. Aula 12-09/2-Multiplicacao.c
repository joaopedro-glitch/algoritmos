#include <stdio.h>

int main(){

    int multiplicacao = 1, num;

    do
    {
        printf("Insira um valor: \n");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Zero digitado. Finalizando!");
            return 1;
        }
        

        multiplicacao = multiplicacao * num;
        printf("Multiplicacao parcial: %d\n", multiplicacao);

    } while (multiplicacao<=100);

    printf("Multiplicacao final: %d\n", multiplicacao);


   
    return 0;



}