#include <stdio.h>

void inverte(int *x, int *y){

    int aux;

        printf("Na funcao - Antes da troca %d %d \n", *x, *y);


    aux = *x;
    *x = *y;
    *y = aux;

    printf("Na funcao - Depois da troca %d %d \n", *x, *y);

}



int main(){

    int a = 2, b = 3;

    printf("Na main - Antes da troca %d %d \n", a, b);

    inverte(&a, &b);

    printf("Na main - Depois da troca %d %d \n", a, b);

    return 0;
}

