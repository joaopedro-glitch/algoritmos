#include <stdio.h>

int main()
{
    float dDistancia; 
    int cesta; 

    printf("Qual a distancia do lancamento em centimetros? ");
    scanf("%f", &dDistancia);

    if ((dDistancia >= 0) && (dDistancia <= 800 )){
        cesta = 1;
    }
    
    else if((dDistancia > 800 ) && (dDistancia <= 1400)){
        cesta = 2;
    }

    else if((dDistancia > 1400) && (dDistancia <=2000)){
        cesta = 3;
    }

    else if((dDistancia < 0) || (dDistancia > 200) ) {
        printf("Valor invalido");
        return 1;
    }

    printf("O lancamento vale %d pontos\n", cesta);

    return 0;

}