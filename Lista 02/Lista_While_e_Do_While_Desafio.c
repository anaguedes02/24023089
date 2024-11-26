/*Desafio: An�lise de Desempenho de A��es
Voc� est� desenvolvendo um programa que ajuda um investidor a analisar o desempenho das a��es de uma empresa.
O investidor pode inserir o pre�o das a��es ao longo de um determinado per�odo,
e o programa deve calcular a m�dia, o desvio padr�o e informar se o desempenho das a��es � considerado est�vel ou vol�til.
Requisitos:
� O usu�rio deve informar quantos dias deseja analisar.
� O programa deve coletar os pre�os das a��es em cada dia.
� Ap�s a coleta, o programa deve calcular a m�dia e o desvio padr�o.
O desvio padr�o deve ser usado para determinar se o desempenho das a��es � est�vel ou vol�til:
Se o desvio padr�o for menor que 5%, a a��o � considerada est�vel. Se o desvio padr�o for maior ou igual a 5%, a a��o � considerada vol�til.
O usu�rio pode optar por analisar novos dados ou sair do programa. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double Media(double precos[], int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += precos[i];
    }
    return soma / n;
}

double DesvioPadrao(double precos[], int n, double media) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += pow(precos[i] - media, 2);
    }
    return sqrt(soma / n);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int sim = 1;

    while (sim) {
        int dias;
        printf("Por quantos dias voc� quer analisar?  ");
        scanf("%d", &dias);

        if (dias <= 0) {
            printf("O n�mero de dias deve ser maior que zero.\n");
            continue;
        }

        double precos[dias];
        printf("Insira os pre�os das a��es dos %d dias: \n", dias);
        for (int i = 0; i < dias; i++) {
            printf("Dia %d: ", i + 1);
            scanf("%lf", &precos[i]);
        }

        double media = Media(precos, dias);
        double desvioPadrao = DesvioPadrao(precos, dias, media);

        double limite = media * 0.05;
        printf("\nResultados da an�lise:\n");
        printf("M�dia: %.2lf\n", media);
        printf("Desvio padr�o: %.2lf\n", desvioPadrao);

        if (desvioPadrao < limite) {
            printf("A��o Est�vel\n");
        } else {
            printf("A��o Vol�til\n");
        }

        printf("\nDeseja reiniciar? (1 - Sim, 0 - N�o): ");
        scanf("%d", &sim);
    }

    printf("Programa encerrado.\n");
    return 0;
}
