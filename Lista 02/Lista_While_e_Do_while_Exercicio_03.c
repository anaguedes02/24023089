/*Exercício 3: Contagem de Passos para Meta Diária
Um aplicativo de saúde monitora os passos que uma pessoa dá ao longo do dia. A meta diária é de 10.000 passos.
A cada atualização, o aplicativo pede o número de passos dados e soma ao total do dia.
O programa deve exibir a quantidade total de passos até o momento e informar quando a meta de 10.000 passos for alcançada.
Escreva um programa em C que solicite ao usuário a quantidade de passos em intervalos e mostre o progresso até atingir ou ultrapassar a meta diária*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int steps, total = 0;

    while (total < 10000) {
            printf("Insira o número de passos: ");
            scanf("%d", &steps);
            total += steps;
            printf("O seu total de passos até agora é: %d \n", total);
    }

    if(total == 10000 || total > 10000){
        printf("Parabéns! Meta atingida! \n", total);
    }

    return 0;
}
