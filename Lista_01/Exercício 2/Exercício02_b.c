#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
   setlocale(LC_ALL, "Portuguese");
   char nome[100];
   printf("Ol� eu sou o N� 1, como � seu nome? ");
   scanf("%s", &nome);
   printf("Bem-vindo ao clube %s!\n ", nome);
}
