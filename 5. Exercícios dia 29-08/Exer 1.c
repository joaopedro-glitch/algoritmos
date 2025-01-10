#include <stdio.h>

int main()
{
    char caractere;

    printf ("Digite uma letra: ");
    scanf ("%c", &caractere);

    switch (caractere)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c eh uma vogal.\n", caractere);
            break;
        default:
            printf("%c eh uma consoante.\n", caractere);
            break;
    }

 return 0;



}