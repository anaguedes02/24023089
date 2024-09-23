#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int F; // F = 089
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%d", &F);
    int C = (F - 32) * (5 / 9); // C = 0
    printf("A temperatura escolhida corresponde em graus Celsius a: %d\n ", C);
    return 0;
}
