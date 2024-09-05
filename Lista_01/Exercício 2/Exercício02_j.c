#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double n1, n10, n50, n100;
    printf ("Notas de 1 real: ");
    scanf ("%lf", &n1);
    printf ("Notas de 10 reias: ");
    scanf ("%lf", &n10);
    printf ("Notas de 50 reias: ");
    scanf ("%lf", &n50);
     printf ("Notas de 100 reias:  ");
    scanf ("%lf", &n100);

    double total;
    total = (n1 * 1) + (n10 * 10) + (n50 * 50) + (n100 * 100);
    printf("O valor total é de R$ %.2lf\n", total);
    return 0;
}
