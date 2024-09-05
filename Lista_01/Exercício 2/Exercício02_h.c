#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double a1, r,  n;
    printf ("Qual o primeiro termo da PA? ");
    scanf ("%lf", &a1);
    printf ("Qual a razão da PA? ");
    scanf ("%lf", &r);
    printf ("Qual a posição do N-ésimo termo a ser descoberto? ");
    scanf ("%lf", &n);

    double an;
    an = a1 + (n - 1) * r;
    printf("O termo descoberto é: %.2lf\n", an);
    return 0;
}
