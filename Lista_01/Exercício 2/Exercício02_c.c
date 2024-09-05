#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char nome[50];
    printf ("Qual é o seu nome? ");
    scanf ("%s", &nome);

    int idade;
    printf ("Qual é a sua idade? ");
    scanf ("%d", &idade);

    int dias;
    dias = idade * 365;
    printf ("Sua idade equivale a %d dias!\n", &dias);



    return 0;
}
