#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double a, b, c, delta, x1, x2;
    printf("Qual é o valor de a? ");
    scanf("%lf", &a);
    printf("Qual é o valor de b? ");
    scanf("%lf", &b);
    printf("Qual é o valor de c? ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são reais e distintas: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("As raízes são reais e iguais, ou seja, possui raíz única: x1 = x2 = %.2lf\n", x1);
    } else {
        printf("Não possui raízes reais.\n");
    }

    return 0;

}
