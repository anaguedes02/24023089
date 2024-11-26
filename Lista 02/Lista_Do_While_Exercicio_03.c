/*Exerc�cio 3: Controle de Atua��o do Rob�
O rob� pode ser programado para realizar diferentes a��es, como ligar uma l�mpada, tocar um som ou mover um bra�o.
O usu�rio deve selecionar uma a��o repetidamente at� que decida encerrar o programa.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<unistd.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char x, y;
    do{
        printf("\nInsira um comando para o rob�:\n \t a - Ligar uma l�mpada \t b - Ligar um Som \t c- Mover um Bra�o\n");
        scanf(" %c", &x);

        if(x == 'a'){
            printf("Luz acesa! Espero que tenha iluminado seu dia!\n");
        } else if (x == 'b') {
            printf("Som ligado! Espero que aproveite a m�sica!\n");
        } else if (x == 'c'){
            printf("Toca aqui!\n");
            sleep(1);
        } else{
            printf("Comando inv�lido! Tente novamente!");
        }

        printf("Deseja continuar com as a��es? (s para sim e n para n�o) \n");
        scanf(" %c", &y);
        getchar();


    } while(y == 's' || y == 'S');

    printf("A��es encerradas! Hora do descanso! At� a pr�xima!\n");
    return 0;
}
