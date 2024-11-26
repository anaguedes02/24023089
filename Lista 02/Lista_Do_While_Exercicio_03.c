/*Exercício 3: Controle de Atuação do Robô
O robô pode ser programado para realizar diferentes ações, como ligar uma lâmpada, tocar um som ou mover um braço.
O usuário deve selecionar uma ação repetidamente até que decida encerrar o programa.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<unistd.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char x, y;
    do{
        printf("\nInsira um comando para o robô:\n \t a - Ligar uma lâmpada \t b - Ligar um Som \t c- Mover um Braço\n");
        scanf(" %c", &x);

        if(x == 'a'){
            printf("Luz acesa! Espero que tenha iluminado seu dia!\n");
        } else if (x == 'b') {
            printf("Som ligado! Espero que aproveite a música!\n");
        } else if (x == 'c'){
            printf("Toca aqui!\n");
            sleep(1);
        } else{
            printf("Comando inválido! Tente novamente!");
        }

        printf("Deseja continuar com as ações? (s para sim e n para não) \n");
        scanf(" %c", &y);
        getchar();


    } while(y == 's' || y == 'S');

    printf("Ações encerradas! Hora do descanso! Até a próxima!\n");
    return 0;
}
