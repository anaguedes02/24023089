#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double c;
    printf("Insira a temperatura atual do dep�sito: ");
    scanf("%lf", &c);
    if(c < -10) {
        printf("Risco Baixo - Armazenamento ideal para alimentos congelados. ");
    } else if (c > -10 && c <= 0){
        printf("Risco Moderado - Condi��es aceit�veis para armazenamento refrigerado. ");
    } else if (c > 1 && c<= 10 || c==15){
        printf("Risco Elevado - Monitore a temperatura. ");
    }
    else {
        printf("Risco Cr�tico - A��o Imediata Necess�ria. ");
    }
    return 0;
}
