
#include <stdio.h>
void limpar_entrada (){
    char F;
    while ((F = getchar()) != '\n' && F != EOF) {}
}

int main()
{
    double C, F;
    char resp;
        printf ("Digite a temperatura em Fahrenheit: ");
        scanf ("%lf", &F);
        C = 5*F/9 - 160/9;
        printf ("Equivalente em Centigrados: %.2lf\n", C);

    return 0;
}
