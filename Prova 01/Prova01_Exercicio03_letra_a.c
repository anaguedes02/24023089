#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double F; // F = 089
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%lf", &F);
    double C = (F - 32.0) * (5.0 / 9.0); // C = 31,67
    printf("A temperatura escolhida corresponde em graus Celsius a: %.2lf\n ", C);
    return 0;
}
