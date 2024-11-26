/*Exercício 1: Controle de Movimento de um Robô
Um robô está programado para se mover em um espaço de 10x10 metros.
O usuário deve inserir comandos para mover o robô para frente, para trás, para a esquerda ou para a direita.
O programa deve continuar aceitando comandos até que o usuário digite ’sair’.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

#define LIMITE 10 // utilizado para a comparação, pois é definido no enunciado uma área de 10x10

void moveRobot(char direction[], int *x, int *y) {
    if (strcmp(direction, "frente") == 0) { //strcmp significa string compare que compara a variável string com a direção
        if (*y < LIMITE) { //*y e *x são ponteiros, eles mostram onde está o endereço da memória
            (*y)++;
        } else {
            printf("Não há mais movimentos para frente! Limite atingido!\n");
        }
    } else if (strcmp(direction, "tras") == 0) {
        if (*y > 0) {
            (*y)--;
        } else {
            printf("Não há mais movimentos para trás! Limite atingido!\n");
        }
    } else if (strcmp(direction, "esquerda") == 0) {
        if (*x > 0) {
            (*x)--;
        } else {
            printf("Não há mais movimentos para o lado esquerdo! Limite atingido!\n");
        }
    } else if (strcmp(direction, "direita") == 0) {
        if (*x < LIMITE) {
            (*x)++;
        } else {
            printf("Não há mais movimentos para o lado direito! Limite atingido! \n");
        }
    } else {
        printf("Comando inválido!\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x = 0, y = 0; // posição do robô definida no início
    char command[15];

    do {
        printf("Posição do robô: (%d, %d)\n", x, y);
        printf("Digite o comando desejado - frente, trás, esquerda, direita ou sair: ");

        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0;

        if (strcmp(command, "sair") != 0) {
            moveRobot(command, &x, &y);
        }

    } while (strcmp(command, "sair") != 0);


    printf("Fim! Agora, o robô vai descansar!\n");

    return 0;
}
