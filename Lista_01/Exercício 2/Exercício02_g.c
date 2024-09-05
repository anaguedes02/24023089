#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double p, v, t;
    printf ("Qual a pressão do pneu? ");
    scanf ("%lf", &p);
    printf ("Qual o volume do pneu? ");
    scanf ("%lf", &v);
    printf ("Qual a temperatura do pneu? ");
    scanf ("%lf", &t);

    double massa;
    massa = (p * v) / (0.37 * (t + 460));
    printf("A massa de ar existente no pneu é: %.2lf\n", massa);
    return 0;
}
