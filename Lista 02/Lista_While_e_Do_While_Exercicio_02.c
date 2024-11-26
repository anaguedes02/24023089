/*Exerc�cio 2: Controle de Combust�vel em um Carro
Imagine que voc� est� desenvolvendo um sistema para monitorar o n�vel de combust�vel de um carro el�trico.
O sistema verifica o n�vel de combust�vel (em percentual) e avisa o motorista quando o tanque est� abaixo de 15%, pedindo que o ve�culo seja recarregado.
O sistema deve continuar monitorando at� que o n�vel de combust�vel seja de 100.
Escreva um programa em C que receba o n�vel de combust�vel do usu�rio e continue alertando o motorista se o n�vel estiver abaixo de 15%.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int energy_level;

    printf("Insira o n�vel percentual de combust�vel do seu carro: ");
    scanf("%d", &energy_level);

    while (energy_level < 100) {
        if (energy_level < 15) {
            printf("O tanque est� abaixo de 15%%! Por favor, recarregue o ve�culo!\n");
            printf("Insira o novo n�vel percentual ap�s o recarregamento: ");
            scanf("%d", &energy_level);
        } else {
            printf("O n�vel de combust�vel est� em %d%%. Por enquanto, n�o h� necessidade de carregar.\n", energy_level);
            break;
        }
    }

    if(energy_level == 100){
        printf("O n�vel de combust�vel est� em 100%%! Carregamento completo.\n");
    }

    return 0;
}
