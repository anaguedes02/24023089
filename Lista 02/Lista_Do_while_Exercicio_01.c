/*Exerc�cio 1: Controle de Movimento de um Rob�
Um rob� est� programado para se mover em um espa�o de 10x10 metros.
O usu�rio deve inserir comandos para mover o rob� para frente, para tr�s, para a esquerda ou para a direita.
O programa deve continuar aceitando comandos at� que o usu�rio digite �sair�.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

#define LIMITE 10 // utilizado para a compara��o, pois � definido no enunciado uma �rea de 10x10

void moveRobot(char direction[], int *x, int *y) {
    if (strcmp(direction, "frente") == 0) { //strcmp significa string compare que compara a vari�vel string com a dire��o
        if (*y < LIMITE) { //*y e *x s�o ponteiros, eles mostram onde est� o endere�o da mem�ria
            (*y)++;
        } else {
            printf("N�o h� mais movimentos para frente! Limite atingido!\n");
        }
    } else if (strcmp(direction, "tras") == 0) {
        if (*y > 0) {
            (*y)--;
        } else {
            printf("N�o h� mais movimentos para tr�s! Limite atingido!\n");
        }
    } else if (strcmp(direction, "esquerda") == 0) {
        if (*x > 0) {
            (*x)--;
        } else {
            printf("N�o h� mais movimentos para o lado esquerdo! Limite atingido!\n");
        }
    } else if (strcmp(direction, "direita") == 0) {
        if (*x < LIMITE) {
            (*x)++;
        } else {
            printf("N�o h� mais movimentos para o lado direito! Limite atingido! \n");
        }
    } else {
        printf("Comando inv�lido!\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x = 0, y = 0; // posi��o do rob� definida no in�cio
    char command[15];

    do {
        printf("Posi��o do rob�: (%d, %d)\n", x, y);
        printf("Digite o comando desejado - frente, tr�s, esquerda, direita ou sair: ");

        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0;

        if (strcmp(command, "sair") != 0) {
            moveRobot(command, &x, &y);
        }

    } while (strcmp(command, "sair") != 0);


    printf("Fim! Agora, o rob� vai descansar!\n");

    return 0;
}
