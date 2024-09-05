#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
   setlocale(LC_ALL, "Portuguese");
   char nome[100];
   printf("Olá eu sou o Nº 1, como é seu nome? ");
   scanf("%s", &nome);
   printf("Bem-vindo ao clube %s!\n ", nome);
}
