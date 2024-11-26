/*Exerc�cio 5: Simula��o de Navega��o Aut�noma
Um rob� aut�nomo pode se mover em um grid de 5x5, e o usu�rio pode inserir comandos para mover o rob� para cima, baixo, esquerda ou direita.
O rob� deve parar quando tentar sair do grid ou quando o usu�rio optar por parar.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAMANHO 5

void Robot_Posision(int x, int y) {
    printf("Posi��o do rob�: (%d, %d)\n", x, y);
}

int main() {
    int x = 0, y = 0;
    char comando[15];
    setlocale(LC_ALL, "Portuguese");

    printf("Simula��o Rob� Wall-E iniciada! \n");
    Robot_Posision(x, y);

    do {
        printf("\n Escolha um comando: \n  \t cima  \t baixo \t esquerda \tdireita \t parar\n ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            if (x > 0) {
                x -= 1;
            } else {
                printf("Rob� atingiu o limite superior! Movimento n�o permitido!\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
            if (x < TAMANHO - 1) {
                x += 1;
            } else {
                printf("Rob� atingiu o limite inferior! Movimento n�o permitido! \n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (y > 0) {
                y -= 1;
            } else {
                printf("Rob� atingiu o limite esquerdo! Movimento n�o permitido! \n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (y < TAMANHO - 1) {
                y += 1;
            } else {
                printf("Rob� atingiu o limite direito! Movimento n�o permitido! \n");
            }
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando inv�lido. Rob� n�o reconhece essa ordem! \n");
        }

        if (strcmp(comando, "parar") != 0) {
            Robot_Posision(x, y);
        }

    } while (strcmp(comando, "parar") != 0);

    printf("Simula��o encerrada.\n");

    return 0;
}
