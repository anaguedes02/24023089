/*Exerc�cio 3: Contagem de Passos para Meta Di�ria
Um aplicativo de sa�de monitora os passos que uma pessoa d� ao longo do dia. A meta di�ria � de 10.000 passos.
A cada atualiza��o, o aplicativo pede o n�mero de passos dados e soma ao total do dia.
O programa deve exibir a quantidade total de passos at� o momento e informar quando a meta de 10.000 passos for alcan�ada.
Escreva um programa em C que solicite ao usu�rio a quantidade de passos em intervalos e mostre o progresso at� atingir ou ultrapassar a meta di�ria*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int steps, total = 0;

    while (total < 10000) {
            printf("Insira o n�mero de passos: ");
            scanf("%d", &steps);
            total += steps;
            printf("O seu total de passos at� agora �: %d \n", total);
    }

    if(total == 10000 || total > 10000){
        printf("Parab�ns! Meta atingida! \n", total);
    }

    return 0;
}
