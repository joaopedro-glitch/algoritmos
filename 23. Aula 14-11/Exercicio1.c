#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float peso, altura, imc;
}esportista;

int main(){

    //criar vetor de registros
    esportista esp[5];

    for (int i = 0; i < 5; i++){
    
        printf("Digite o nome do atleta %d: ", i+1);
        fflush(stdin); //limpar o buffer do teclado antes de ler string
        // fgets(esp[i].nome, 50, stdin);
        scanf("%s[^\n]", esp[i].nome);

        printf("Digite o peso do atleta %d em Kg: ", i+1);
        scanf("%f", &esp[i].peso);

        printf("Digite a altura do atleta %d em metros: ", i+1);
        scanf("%f", &esp[i].altura);

        esp[i].imc= esp[i].peso / (esp[i].altura * esp[i].altura);

        printf("O IMC do atleta %s eh: %.1f\n", esp[i].nome, esp[i].imc);

    }
    
    return 0;
}
