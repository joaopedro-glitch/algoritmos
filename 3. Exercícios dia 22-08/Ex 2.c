#include <stdio.h>

#define PI 3.1415

int main()

{
    float raio, altura, volume;

    printf("Insira o raio da lata em cm: ");
    scanf("%f", &raio);

    printf("Insira a altura da lata em cm: ");
    scanf("%f", &altura);

    volume = PI * (raio * raio) * altura;

    printf("O volume da lata sera de: %.2f cm³", volume) ;

    return 0;
}