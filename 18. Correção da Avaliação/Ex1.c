/*Paulinho tem em suas mãos um
problema. A sua professora lhe pediu que construísse um programa para verificar, a partir de dois
valores A e B, se B corresponde aos últimos dígitos de A.
Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo
ter até 100 dígitos. Para cada caso de entrada imprima uma mensagem indicando se o segundo
valor encaixa no primeiro valor, conforme exemplo abaixo.
DICA: Trate os dados de entrada como strings e utilize a função strlen() para descobrir o
tamanho de cada valor de entrada.*/

#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];
    
    while (1) {
        printf("Digite A (ou 'sair' para encerrar): ");
        scanf("%s", A);
        if (strcmp(A, "sair") == 0) {
            break;
        }
        
        printf("Digite B: ");
        scanf("%s", B);
        
        int lenA = strlen(A);
        int lenB = strlen(B);

        // Verifica se B é maior que A
        if (lenB > lenA) {
            printf("B não encaixa em A\n");
            continue;
        }

        // Verifica se B está contido em A
        if (strcmp(A + (lenA - lenB), B) == 0)   // Ao somar a string A com os decimais (lenA -lenB) o compilador entende que a leitura 
        {                                        // se desloca para o número de caracteres adicionados a string.
            printf("B esta contido em A\n");     // Ex: string A = abc;
        }                                        // A + 0 -> A leitura inicia no primeiro caractere -> 'a'
                                                 // A + 1 -> A leitura se inicia no caractere (primeiro +1) = segundo -> 'b'
        else                                     // A + 2 -> A leitura se inicia no caractere (primeiro +2) = terceiro -> 'c'
        {                                        // Se o valor somado ou subtraído a uma string ultrapassar os limites será gerado um valor inválido,
            printf("B nao esta contido em A\n"); // dessa forma devemos sempre definir condicionais para que esses valores estejam dentro dos limites
        }                                        // do tamanho da string.
        
        

 }

    return 0;
}

/*Explicação do Código:

1. Entrada: O programa lê duas strings, A e B, até que o usuário digite "sair".

2. Comprimento: Usamos strlen() para obter o tamanho de A e B.

3. Comparação:
    Se o comprimento de B é maior que o de A, imprimimos que B não encaixa em A.
    Caso contrário, usamos strcmp() para comparar os últimos lenB caracteres de A com B.

4. Resultado: O programa informa se B encaixa ou não em A.

Uso:
    Compile o código usando um compilador C.
    Execute o programa e forneça as entradas conforme solicitado. Para encerrar, digite "sair".

Esse programa lida bem com números grandes, pois trata os valores como strings.*/