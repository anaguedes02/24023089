/*ENUNCIADO EXERCÍCIO 01*/
//Controle de Temperatura Um laboratório de pesquisa monitora constantemente a temperatura de um ambiente controlado.
//O sistema precisa verificar a temperatura a cada segundo e ajustar a ventilação para manter a temperatura em um intervalo seguro entre 20°C e 25°C.
//Quando a temperatura está fora desse intervalo, o sistema exibe um alerta e continua monitorando até que a temperatura retorne à faixa aceitável.
//Escreva um programa em C que simule o monitoramento da temperatura e mostre alertas sempre que o valor estiver fora da faixa de 20°C a 25°C.
//O valor da temperatura pode ser fornecido pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int temperature, new_temp;
    printf("Insira o valor da temepratura atual: ");
    scanf("%d", &temperature);
    while (temperature < 20 || temperature > 25){
        printf("Temperatura fora do intervalo seguro! Por favor, reajuste a temperatura no intervalo aceitável entre 20ºC e 25ºC.\n");
        printf("Insira a nova temperatura: ");
        scanf("%d", &new_temp);
        if (new_temp >=  20 && new_temp <= 25 ){
            break;
        }
    }
    printf("Temperatura aceitável! Dispensa mudanças. ");
    return 0;
}

