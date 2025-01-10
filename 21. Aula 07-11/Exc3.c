/*Um estabelecimento fará uma promoção com descontos nos produtos A e B. Se forem comprados
apenas os produtos A ou apenas os produtos B, o desconto será de 10%. Caso sejam comprados os
produtos A e B, o desconto será de 15%. O custo de cada produto é, respectivamente, para os
produtos A e B, R$10 e R$20. Elaborar um programa que, por meio de módulos, calcule e apresente
o valor da despesa do freguês na compra dos produtos. Lembre-se de que o freguês pode levar mais
de uma unidade de um determinado produto.*/

#include <stdio.h>

float calcularDesconto(float valorTotalA, float valorTotalB) {
    float desconto = 0.1; // Desconto padrão (10%)

    // Verifica se ambos os produtos foram comprados
    if (valorTotalA > 0 && valorTotalB > 0) {
        desconto = 0.15; // Desconto de 15% se ambos os produtos foram comprados
    }

    // Se pelo menos um dos produtos foi comprado, aplica o desconto
    if (valorTotalA > 0 || valorTotalB > 0) {
        return (valorTotalA + valorTotalB) * (1 - desconto);
    }

    else{
        return 0; // Nenhum produto foi comprado, retorna 0
    }

    return valorTotalA + valorTotalB * (1 - desconto);
}

int main() {
    float valorFinalA = 0, valorFinalB = 0, valorDesconto;
    char produto;
    int quantidade;

    do {
        printf("Insira o produto escolhido (A ou B): ");
        scanf(" %c", &produto);

        printf("Insira a quantidade escolhida: ");
        scanf("%d", &quantidade);

        if (produto == 'A' || produto == 'a') {
            valorFinalA += 10 * quantidade;
        } 
        
        else if (produto == 'B' || produto == 'b') {
            valorFinalB += 20 * quantidade;
        } 
        
        else {
            printf("Produto invalido.\n");
        }

        printf("Deseja adicionar mais produtos? (S/N): ");
        scanf(" %c", &produto);

    } while (produto == 'S' || produto == 's');

    valorDesconto = calcularDesconto(valorFinalA, valorFinalB);

    printf("O valor total sem o desconto eh de R$ %.2f\n", valorFinalA + valorFinalB);
    printf("O valor final com desconto eh de: R$ %.2f\n", valorDesconto);

    return 0;
}