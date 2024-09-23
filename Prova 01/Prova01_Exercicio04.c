
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double c;
    printf("Insira a temperatura atual em graus Celsius: ");
    scanf("%lf", &c);
    if(c <= 0) {
        printf("Geleira - Temperatura muito fria! ");
    } else if (c>= 1 && c <= 15){
        printf("Frio - Pode precisar de um casaco! ");
    } else if (c >= 16 && c<=25){
        printf("Agradável - Tempo bom para sair! ");
    }
    else if (c>=26 && c<=35){
        printf("Quente - Ótimo para um dia de praia! ");
    }
    else {
        printf("Muito quente - Mantenha-se hidratado! ");
    }
    return 0;
}
