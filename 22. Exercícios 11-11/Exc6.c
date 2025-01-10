/*Você foi contratado para desenvolver um programa que simule
uma conta bancária. O programa deve permitir que o usuário realize três
operações principais: depositar dinheiro na conta, sacar dinheiro da conta e
verificar o saldo atual da conta. Para isso, você deve criar um programa em
linguagem C que inclui funções para cada uma dessas operações.
Os requisitos do programa são:
a. Crie uma função chamada “depositar” que permita ao usuário depositar
uma quantia de dinheiro na conta bancária. A função deve receber o
valor a ser depositado como argumento e atualizar o saldo da conta.
b. Desenvolva uma função chamada “sacar” que permita ao usuário sacar
uma quantia de dinheiro da conta bancária. A função deve verificar se
há saldo suficiente na conta para realizar o saque e atualizar o saldo, se
possível. Caso contrário, deve exibir uma mensagem de erro.
c. Implemente uma função chamada “verificarSaldo” que retorne o saldo
atual da conta bancária.
d. No programa principal, permita que o usuário escolha entre as três
operações: depositar, sacar ou verificar saldo. O programa deve
continuar rodando até que o usuário escolha sair.
e. Certifique-se de que o saldo da conta não possa se tornar negativo após
um saque*/

#include <stdio.h>
#include <stdlib.h>

//protótipo de funções
void deposito(float *saldoAtual);
void saque(float *saldoAtual);
void impSaldo(float saldoAtual);

int main(){

    float saldo = 0.0;
    int opcao;

     printf(" ------ Bem  vindo(a) ao Banco XYZ -----------");

    do
    {   
        printf("\n1 - Deposito \n2 - Saque \n3 - Verificar saldo \n4 - Sair\n ");
        
        do{
            printf("Digite a ocao desejada: ");
            scanf("%d", &opcao);

        } while (opcao < 1 || opcao > 4 );

        switch (opcao)
        {
        case 1: deposito(&saldo); 
            break;

        case 2:saque(&saldo);
            break;


        case 3: impSaldo(saldo);
            break;

        case 4: printf("\nEncerrando execucao...\n");
            break;
        }


    } while (opcao != 4);
    


    return 0;
}

void deposito(float *saldoAtual){
    float valor;

    impSaldo(*saldoAtual);

    do{
        printf("Qual o valor a ser depositado? ");
        scanf("%f", &valor);
    }while(valor <=0);

    *saldoAtual += valor;

    impSaldo(*saldoAtual);

}

void saque(float *saldoAtual){
    float valor;

    impSaldo(*saldoAtual);

    do{
        printf("Digite o valor do saque:");
        scanf("%f", &valor);
    }while(valor > *saldoAtual);

    *saldoAtual -= valor;

    impSaldo(*saldoAtual);
}

void impSaldo(float saldoAtual){
    printf("\nSaldo atual da conta R$%.2f\n\n", saldoAtual);
}

