/*ENUNCIADO EXERC�CIO 01*/
//Controle de Temperatura Um laborat�rio de pesquisa monitora constantemente a temperatura de um ambiente controlado.
//O sistema precisa verificar a temperatura a cada segundo e ajustar a ventila��o para manter a temperatura em um intervalo seguro entre 20�C e 25�C.
//Quando a temperatura est� fora desse intervalo, o sistema exibe um alerta e continua monitorando at� que a temperatura retorne � faixa aceit�vel.
//Escreva um programa em C que simule o monitoramento da temperatura e mostre alertas sempre que o valor estiver fora da faixa de 20�C a 25�C.
//O valor da temperatura pode ser fornecido pelo usu�rio.

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
        printf("Temperatura fora do intervalo seguro! Por favor, reajuste a temperatura no intervalo aceit�vel entre 20�C e 25�C.\n");
        printf("Insira a nova temperatura: ");
        scanf("%d", &new_temp);
        if (new_temp >=  20 && new_temp <= 25 ){
            break;
        }
    }
    printf("Temperatura aceit�vel! Dispensa mudan�as. ");
    return 0;
}

