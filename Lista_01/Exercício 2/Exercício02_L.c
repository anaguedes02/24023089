#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int total;
    printf("O total é R$ ");
    scanf("%d", &total);

    if (total < 0) {
        printf("Não existe quantia negativa de dinheiro, favor inserir um valor positivo! \n");
        return 1;
    }

    int n1 = total / 1;
    int n10 = total / 10;
    total = total % 10;
    int n50 = total / 50;
    total = total % 100;
    int n100 = total / 100;
    total = total % 100;
    printf("Número de notas de 1: %d\n", n1);
    printf("Número de notas de 10: %d\n", n10);
    printf("Número de notas de 50: %d\n", n50);
    printf("Número de notas de 100: %d\n", n100);

    return 0;



}
