#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double h, x;
    printf ("Qual a altura da parede? ");
    scanf ("%lf", &h);
    printf ("Qual a largura da parede? ");
    scanf ("%lf", &x);

    double latas;
    latas = (h*x)*3/20;
    printf("O número de latas necessário é: %.2lf\n", latas);
    return 0;
}
