#include <stdio.h>

void impremevar(int x, int y, float w){

    printf("Valor1: %d Valor 2: %d Valor 3: %.2f \n", x, y, w);

 
}

int main(){

    int a = 2, b = 3;

    impremevar(a, b, 50.6);

   
    return 0;
}