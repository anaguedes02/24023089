/*Exercício 4: Monitoramento de Bateria do Robô
O robô possui um sistema de monitoramento de bateria que avisa o usuário quando a bateria está baixa.
O programa deve verificar o nível da bateria e avisar o usuário até que a bateria esteja acima de 20%. */

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
            printf("Bateria baixa! Por favor, conectar o robô ao carregador!\n");
        } else {
            printf("A bateria do robô está acima de 20%%. Seu nível de bateria é %d%%.\n", battery_level);
        }
    } while (battery_level < 100);

    if (battery_level == 100){
        printf("Bateria cheia! Carga completa!\n");
    }

    return 0;
}
