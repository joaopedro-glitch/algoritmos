#include <stdio.h>

int main(){

    int vendas[4][3];
    int soma[4] = {0, 0, 0, 0}, somaRegiao[3] = {0, 0, 0}, somaFilial[4] = {0, 0, 0, 0};
    int maiorVendas = 0, regiaoMaior, maiorTotal = 0, filialMaior;
    int i, j;

    for (i = 0; i < 4; i++){
        printf("Insira o numero de vendas da empresa %d\n", i + 1);
        
        for (j = 0; j < 3; j++){

            printf("Regiao %d: ", j + 1);
            scanf("%d", &vendas[i][j]);
            
            soma[i] += vendas[i][j];

            somaRegiao[j] += vendas[i][j];


            if (somaRegiao[j] > maiorVendas)
            {
                maiorVendas = somaRegiao[j];
                regiaoMaior = j+1;
            }

            somaFilial[i] += vendas[i][j];

            if (somaFilial[i] > maiorTotal)
            {
                maiorTotal = somaFilial[i];
                filialMaior = i+1;

            }    
            
        }
        
        printf("O total de vendas da filial %d foi de %d\n\n", i+1, soma[i]);
        
    }

    printf("A regiao com maior numero de vendas foi a %d com %d vendas\n", regiaoMaior, maiorVendas);

    printf("A filial com maior numero de vendas foi a %d com %d vendas\n", filialMaior, maiorTotal);
    

    return 0;
}