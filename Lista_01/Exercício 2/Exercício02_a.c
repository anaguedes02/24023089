#include <stdio.h>
#include <stdlib.h>

int main()
{    double x, y, z;
     printf("Digite o primeiro numero: ");
     scanf("%lf", &x);
     printf("Digite o segundo numero: ");
     scanf("%lf", &y);
     printf("Digite o terceiro numero: ");
     scanf("%lf", &z);

     printf("Os numeros escolhidos sao: %.1lf, %.1lf, %.1f", z, y, x);
     return 0;

}
