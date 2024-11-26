/*Exercício 2: Controle de Combustível em um Carro
Imagine que você está desenvolvendo um sistema para monitorar o nível de combustível de um carro elétrico.
O sistema verifica o nível de combustível (em percentual) e avisa o motorista quando o tanque está abaixo de 15%, pedindo que o veículo seja recarregado.
O sistema deve continuar monitorando até que o nível de combustível seja de 100.
Escreva um programa em C que receba o nível de combustível do usuário e continue alertando o motorista se o nível estiver abaixo de 15%.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int energy_level;

    printf("Insira o nível percentual de combustível do seu carro: ");
    scanf("%d", &energy_level);

    while (energy_level < 100) {
        if (energy_level < 15) {
            printf("O tanque está abaixo de 15%%! Por favor, recarregue o veículo!\n");
            printf("Insira o novo nível percentual após o recarregamento: ");
            scanf("%d", &energy_level);
        } else {
            printf("O nível de combustível está em %d%%. Por enquanto, não há necessidade de carregar.\n", energy_level);
            break;
        }
    }

    if(energy_level == 100){
        printf("O nível de combustível está em 100%%! Carregamento completo.\n");
    }

    return 0;
}
