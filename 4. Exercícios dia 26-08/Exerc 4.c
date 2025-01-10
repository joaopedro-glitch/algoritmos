#include <stdio.h>

int main()
{

    int idadeCrianca;

    printf("Digita a idade da crianca: ");
    scanf("%d", &idadeCrianca);

    if ((idadeCrianca < 4) || (idadeCrianca > 10) )
    {
        printf("Nao possuimos turmas para essa idade");
    }

    else if ((idadeCrianca >= 4 ) && (idadeCrianca <= 5)){

        printf("A crianca tera aulas na Turma A");
    }

     else if ((idadeCrianca >= 6 ) && (idadeCrianca <= 8)){

        printf("A crianca tera aulas na Turma B");
    }

     else if ((idadeCrianca>= 9 ) && (idadeCrianca <= 10)){

        printf("A crianca tera aulas na Turma C");
    }

      return 0;


}