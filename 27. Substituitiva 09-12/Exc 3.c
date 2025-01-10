#include <stdio.h>
#include <stdlib.h>

float calculca_media_projeto(float inovacao, float impacto, float viabilidade)
{

    float mediaProjeto = (inovacao + impacto + viabilidade) / 3;

    return mediaProjeto;
}

void determina_conceito(float mediaProjeto)
{

    char conceito;

    if (mediaProjeto >= 8)
    {
        conceito = 'A';
    }

    if (mediaProjeto < 8 && mediaProjeto >= 6)
    {
        conceito = 'B';
    }

    if (mediaProjeto < 6)
    {
        conceito = 'C';
    }

    printf("Conceito: %c\n", conceito);
}

int main()
{

    char nomeProjeto[50];
    float inovacao, impacto, viabilidade, media;

    for (int i = 0; i < 3; i++)
    {

        printf("Digite o nome do projeto: ");
        fflush(stdin);
        scanf("%[^\n]", nomeProjeto);

        printf("Digite a nota de inovacao: ");
        scanf("%f", &inovacao);

        printf("Digite a nota de impacto: ");
        scanf("%f", &impacto);

        printf("Digite a nota de viabilidade: ");
        scanf("%f", &viabilidade);

        media = calculca_media_projeto(inovacao, impacto, viabilidade);

        printf("\n");

        printf("Media: %.2f\n", media);

        determina_conceito(media);

        printf("\n");
    }

    return 0;
}