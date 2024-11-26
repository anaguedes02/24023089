/*Exercício 2: Leitura de Sensores de Distância
Um robô está equipado com um sensor de distância. O usuário pode iniciar a leitura do sensor, que deve ser feita repetidamente até que uma distância menor que 10 cm seja registrada.
O programa deve mostrar a distância medida e encerrar quando o usuário decidir parar.*/

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
        printf("Insira a distância lida pelo sensor: ");
        scanf("%f", &distance);

        printf("A distância é %.2f cm\n", distance);

        if(distance < 10){
            printf("Distância registrada menor que 10 cm! Atividades se encerrando... ");
            break;
        }

        printf("Deseja que o programe continue a leitura? (s para sim ou n para não): ");
        scanf(" %c", &comando);
        getchar();

    } while (comando ==  's' || comando == 'S');

    printf("Fim das leituras!");

    return 0;
}
