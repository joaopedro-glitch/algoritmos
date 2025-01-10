#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media, notaExame, notaMedia;

    // O loop do-while garante que a nota seja valida antes de continuar
    do{
        printf("Digite a nota de N1: ");
        scanf(" %f", &n1);

        // O if aciona uma mensagem caso o valor nao seja valido    
        if (n1 < 0 || n1 > 10) {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }
    }while ((n1 < 0)  || (n1 > 10.0));


   do{
        printf("Digite a nota de N2: ");
        scanf(" %f", &n2);

         if (n2 < 0 || n2 > 10) {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }
    }while ((n2 < 0)  || (n2 > 10.0));

    do{
        printf("Digite a nota de N3: ");
        scanf(" %f", &n3);

         if (n3 < 0 || n3 > 10) {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }
    }while ((n3 < 0)  || (n3 > 10.0));

    do{
        printf("Digite a nota de N4: ");
        scanf(" %f", &n4);

         if (n4 < 0 || n4 > 10) {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }
    }while ((n4 < 0)  || (n4 > 10.0));

    // Calculo da media ponderada de acordo com os pesos
    media = ((n1 * 2.0) + (n2 * 3.0) + (n3 *4.0) + (n4 * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0);
 
    printf("Media: %.1f\n", media);

    // Se a media for maior que 7.0 o aluno esta aprovado
    if(media >= 7.0){
        printf("Aluno aprovado\n");
    }

    // Se a media estiver no intervalo de [5.0 , 7.0) o aluno fara recuperacao
    else if ((media < 7.0) && (media >= 5.0)){
        printf("Aluno em recuperacao\n");

        // Apos indicar a recuperacao o sistema devera pedir a nota de recuperacao e verificar se o valor eh valido, entre 0 e 10
       do {
            printf("Digite a nota da recuperacao: ");
            scanf(" %f", &notaExame);

            if(notaExame < 0 || notaExame > 10.0){
                printf("Nota invalida. Digite um valor entre 0 e 10.\n");
            }
        } while (notaExame < 0 || notaExame > 10);

        // Calculo da media final (media aritmetica simples entre a media anterior e a nota do exame)
        notaMedia = (media + notaExame) / 2.0;

        // if verifica se a media alcançou a aprovacao

        if (notaMedia >= 5.0) {
            printf("Aluno aprovado no exame\n");
        } else {
            printf("Aluno reprovado no exame\n");
        }
    }
    
    // Caso a nota seja menor que 5.0 o aluno sera reprovado
    else{
        printf("Aluno reprovado\n");
    }
   
    return 0;


}