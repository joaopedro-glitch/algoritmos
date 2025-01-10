#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Protótipo das funções

int somaDiv(int num);
void compara(int valor, int div);

int main(){

    srand(time(NULL)); //Inicializa semente aleatória

    int num;
    int divisores;

    do
    {
        num = rand() % 30;

        divisores = somaDiv(num);

        compara(num, divisores);

    } while (num != 0);
    
    return 0;

}

int somaDiv(int num){
    

}