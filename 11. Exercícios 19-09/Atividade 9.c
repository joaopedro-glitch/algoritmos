#include <stdio.h>
#include <math.h>

int main()
{
    int numN, i;
    float numH = 0;

    printf("Insira um valor inteiro N: ");
    scanf("%d", &numN);

    // O loop começa em i = 1
    for (i = 1; i <= numN; i++)
    {
        // Na primeira iteração (i = 1), H = 0 + 1/1 = 1
        // Nas próximas iterações, são adicionados os demais termos da série
        numH += 1.00/i;
    }
  
    printf("O valor de H eh: %.2f\n", numH);
    

    return 0;
}