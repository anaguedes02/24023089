/*Exerc�cio 4: Monitoramento de Bateria do Rob�
O rob� possui um sistema de monitoramento de bateria que avisa o usu�rio quando a bateria est� baixa.
O programa deve verificar o n�vel da bateria e avisar o usu�rio at� que a bateria esteja acima de 20%. */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int battery_level;

    do{
        printf("Insira a %% da sua bateria: ");
        scanf("%d", &battery_level);

        if (battery_level == 20 || battery_level < 20){
            printf("Bateria baixa! Por favor, conectar o rob� ao carregador!\n");
        } else {
            printf("A bateria do rob� est� acima de 20%%. Seu n�vel de bateria � %d%%.\n", battery_level);
        }
    } while (battery_level < 100);

    if (battery_level == 100){
        printf("Bateria cheia! Carga completa!\n");
    }

    return 0;
}
