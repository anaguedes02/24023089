/*Exerc�cio 2: Leitura de Sensores de Dist�ncia
Um rob� est� equipado com um sensor de dist�ncia. O usu�rio pode iniciar a leitura do sensor, que deve ser feita repetidamente at� que uma dist�ncia menor que 10 cm seja registrada.
O programa deve mostrar a dist�ncia medida e encerrar quando o usu�rio decidir parar.*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    float distance;
    char comando;

    do {
        printf("Insira a dist�ncia lida pelo sensor: ");
        scanf("%f", &distance);

        printf("A dist�ncia � %.2f cm\n", distance);

        if(distance < 10){
            printf("Dist�ncia registrada menor que 10 cm! Atividades se encerrando... ");
            break;
        }

        printf("Deseja que o programe continue a leitura? (s para sim ou n para n�o): ");
        scanf(" %c", &comando);
        getchar();

    } while (comando ==  's' || comando == 'S');

    printf("Fim das leituras!");

    return 0;
}
