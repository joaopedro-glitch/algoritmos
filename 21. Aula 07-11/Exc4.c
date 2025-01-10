/*Escreva um programa que simule a compra de um lanche em uma padaria. O programa deve ser
executado enquanto o cliente informar o que deseja comprar e a quantidade desejada. A cada novo
item inserido na compra, o programa deve mostrar na tela o subtotal a ser pago. Ao final da
execução apresente o valor total da compra*/

#include <stdio.h>
#include <stdlib.h>

// protótipo de funções
void inserirItem(float *valorCompra);
void cancelarItem(float *valorCompra);
void subTotal(float valorCompra);

int main(){

    float valorTotal;
    int opcao;

    printf("--------Bem-vindo a Padaria Sonho---------\n\n");

    do{
        printf("1 - Inserir item \n2 - Cancelar item \n3 - Subtotal \n4 - Sair\n\n");

        do{
            printf("Digite a opcao desejada: ");
            scanf("%d", &opcao);

        } while (opcao < 1 || opcao > 4);

        switch (opcao) {
        
            case 1: inserirItem(&valorTotal);
                break;
        
            case 2: cancelarItem(&valorTotal);
                break;
            
            case 3: subTotal(valorTotal);     
                break;
            
            case 4: printf("\nO valor total da compra eh de R$%.2f\n", valorTotal);
                break;
        }
        

    } while (opcao != 4);
    

    return 0;
}


void inserirItem(float *valorCompra){
    float valorItem;
    int quantidadeItem;

    subTotal(*valorCompra);

    do{
      printf("Informe o valor do item inserido: ");
      scanf("%f", &valorItem);

      printf("Informe a quantidade do item inserido: ");
      scanf("%d", &quantidadeItem);


    } while (quantidadeItem < 0);

    *valorCompra += (valorItem * quantidadeItem);    

    subTotal(*valorCompra);

}

void cancelarItem(float *valorCompra){
    float valorItem;
    int quantidadeItem;

    subTotal(*valorCompra);

    do{
    printf("Informe o valor do item que deseja retirar: ");
      scanf("%f", &valorItem);

      printf("Informe a quantidade do item que deseja retirar: ");
      scanf("%d", &quantidadeItem);
        
    } while (quantidadeItem < 0);
    
    *valorCompra -= (valorItem* quantidadeItem);

        subTotal(*valorCompra);

}

void subTotal(float valorCompra){
    printf("\nO subtotal da compra eh de: R$%.2f\n\n", valorCompra);

}