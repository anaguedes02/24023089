#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double raio, area;
    printf("Qual o raio do c�rculo? ");
    scanf ("%lf", &raio);

    area = pow(raio,2) * 3.14 ;

    printf ("A �rea do seu c�rculo �: %.2lf \n", area);

    return 0;
}
