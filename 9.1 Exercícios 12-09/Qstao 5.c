#include <stdio.h>

int main()
{
    int num1, num2, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

     // Garantindo que num1 seja sempre maior ou igual a num2
    if (num1 < num2) {
        int temp = num1;    //Uma nova variável inteira, temp, é criada e recebe o valor atual de num1. Essa variável servirá como um "espaço de armazenamento temporário" para o valor original de num1, evitando que seja perdido durante a troca.
        num1 = num2;        //num1 = num2;: O valor de num2 é atribuído a num1, sobreescrevendo o valor original de num1.
        num2 = temp;        //num2 = temp;: O valor original de num1 (que está armazenado em temp) é atribuído a num2, completando a troca.
    }

    do {
        resto = num1 % num2;  //resto = num1 % num2;: Calcula o resto da divisão de num1 por num2 e armazena o resultado em resto. Esse resto é fundamental para o algoritmo de Euclides.
        num1 = num2;          //num1 = num2;: O valor de num2 é atribuído a num1.
        num2 = resto;         //O valor do resto calculado anteriormente é atribuído a num2
    } while (resto != 0);     // Quando o resto se torna zero, significa que encontramos o MDC e o loop é encerrado.

    printf("O MDC dos numeros eh: %d\n", num1); //O último resto diferente de 0 é atribuído ao num1

    return 0;


}

/* Exemplo do loop de iterações calculando o MDC de 24 e 18:

 Iteração	num1	num2	resto
     1	     24	     18	      6
     2	     18	      6	      0
                     <-       <-

Na segunda iteração, o resto é 0, então o loop para. O último valor não nulo de num1 é 6, que é o MDC de 24 e 18.*/