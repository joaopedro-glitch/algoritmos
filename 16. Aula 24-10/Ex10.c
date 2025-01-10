/*Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça à
gerência algumas informações relativas aos salários dos funcionários dessa empresa. Os salários
devem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:
a. preencher a matriz de salários por leitura do teclado;
b. imprimir os salários de todos os funcionários, identificando qual a loja em que trabalha;
c. imprimir o total pago em salários por loja;
d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;
e. informar a média salarial da segunda loja*/

/* Valores que utilizei para teste:
1200.50 2000.00 2400.90 1500.40 1600.00 1780.90
1000.00 3000.00 4500.98 1700.00 1900.00 1600.00
2000.00 2200.20 1300.00 2475.96 1200.64 1780.59*/

#include <stdio.h>

int main(){

    float lojaSalario[3][6];

    //Requisitando para o usuario preencher a matriz de salários de funcionário por loja
    
    for(int l = 0; l < 3; l++)  //percorre as lojas
    {
        for(int c = 0; c < 6; c++)   //percorre os funcionários
        {
            printf("Preencha os salario em R$ do funcionario %d na loja %d: ", c+1, l+1);
            scanf("%f", &lojaSalario[l][c]);
        }
    }

    // Imprimindo a matriz

    // Loop para imprimir os funcionários por ID
    for (int c = 0; c < 6; c++)
    {
        printf("\tFcn %d\t", c+1);
    }
    
    printf("\n");

    for (int l = 0; l < 3; l++)
    {
        printf("Loja %d\t", l+1);   //Loop para imprimir as lojas por ID
        for (int c = 0; c < 6; c++)
        {
            printf("%.2f\t\t", lojaSalario[l][c]); //Impressão dos salários por ID loja X funcionário
        }
        printf("\n");
    }

    printf("\n");

    float soma[3] = {0, 0, 0}; //vetor de soma por loja

    //Loop de cáculo e impressão das somas
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 6; c++)
        {
            soma[l] += lojaSalario[l][c];
        }
        printf("Soma de salarios loja %d: %.2f\n", l+1, soma[l]);
    }

    printf("\n");

    int funcionario2000 = 0; //Contador funcionarios que recebem mais de 2000

    for (int c = 0; c < 6; c++)
    {
        if (lojaSalario[0][c] > 2000  )
        {
            funcionario2000++;
        }
        
    }
    
    printf("%d funcionarios recebem mais que R$2000.00 na loja 1\n", funcionario2000);

    float somaloja2 = 0 , mediaLoja2; //Variavel para soma e média da loja 2

    for (int c = 0; c < 6; c++)
    {
        somaloja2 += lojaSalario[1][c];
    }

    mediaLoja2 = somaloja2 / 6;  
    
    printf("A media salarial da loja 2 eh de: %.2f\n", mediaLoja2);


    return 0;
}