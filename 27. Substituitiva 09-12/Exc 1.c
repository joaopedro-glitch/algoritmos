#include <stdio.h>
#include <string.h>

typedef struct{
    char nome_cliente[50];
    char nome_do_prato[50];
    float preco_prato_princ;
    char nome_bebida[50]; 
    float preco_bebida; 
    float valor_total;

}restaurante;

int main(){

    restaurante rest[5];
    float maior_valor = 0;
    float soma = 0.0, media;
    char pedidoMaior[50];
    int pedido;


    for (int i = 0; i < 5; i++){

        printf("Pedido %d\n", i + 1);

        printf("Nome do cliente: ");
        fflush(stdin);
        scanf("%[^\n]", rest[i].nome_cliente);

   
        printf("Nome do prato: ");
        fflush(stdin);
        scanf("%[^\n]", rest[i].nome_do_prato);


        printf("Preco prato principal: ");
        scanf("%f", &rest[i].preco_prato_princ);

        printf("Nome da bebida: ");
        fflush(stdin);
        scanf("%[^\n]", rest[i].nome_bebida);

        printf("Preco da bebida: ");
        scanf("%f", &rest[i].preco_bebida);

        rest[i].valor_total = rest[i].preco_prato_princ + rest[i].preco_bebida;

        printf("O valor total do pedido %d eh de: %.2f\n\n", i+1, rest[i].valor_total);

        if (rest[i].valor_total > maior_valor)
        {
            maior_valor = rest[i].valor_total;
            strcpy(pedidoMaior, rest[i].nome_cliente);
            pedido = i+1;
        }
        
        soma += rest[i].valor_total;

    }
    
    printf("O pedido com maior valor total foi o pedido %d do cliente %s com valor de: %.2f\n", pedido, pedidoMaior, maior_valor);

    media = soma / 5;

    printf("A media dos valores dos pratos foi de %.2f\n", media);



    return 0;
}