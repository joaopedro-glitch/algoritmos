#include <stdio.h>

int main()
{
    float quico = 1.40, chaves = 1.10, crescimentoQuico = 0.02, crescimentoChaves = 0.03;
    int anos = 0;

    while (chaves <= quico)
    {
        chaves += crescimentoChaves; // o loop ira adicionar o crescimento a altura até que atinja o limite da condicional
        quico += crescimentoQuico;
        anos++; // os anos terao a adição de + 1 em cada leitura até que se atinja os valores da condicional
    }

    printf("A altura de chaves sera: %.2f m\n", chaves);
    printf("A altura de quico sera: %.2f m\n", quico);
    printf("O chaves sera mais alto em %d anos", anos);

    return 0;
}