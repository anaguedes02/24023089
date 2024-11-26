/*Desafio: Análise de Desempenho de Ações
Você está desenvolvendo um programa que ajuda um investidor a analisar o desempenho das ações de uma empresa.
O investidor pode inserir o preço das ações ao longo de um determinado período,
e o programa deve calcular a média, o desvio padrão e informar se o desempenho das ações é considerado estável ou volátil.
Requisitos:
• O usuário deve informar quantos dias deseja analisar.
• O programa deve coletar os preços das ações em cada dia.
• Após a coleta, o programa deve calcular a média e o desvio padrão.
O desvio padrão deve ser usado para determinar se o desempenho das ações é estável ou volátil:
Se o desvio padrão for menor que 5%, a ação é considerada estável. Se o desvio padrão for maior ou igual a 5%, a ação é considerada volátil.
O usuário pode optar por analisar novos dados ou sair do programa. */

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
        printf("Por quantos dias você quer analisar?  ");
        scanf("%d", &dias);

        if (dias <= 0) {
            printf("O número de dias deve ser maior que zero.\n");
            continue;
        }

        double precos[dias];
        printf("Insira os preços das ações dos %d dias: \n", dias);
        for (int i = 0; i < dias; i++) {
            printf("Dia %d: ", i + 1);
            scanf("%lf", &precos[i]);
        }

        double media = Media(precos, dias);
        double desvioPadrao = DesvioPadrao(precos, dias, media);

        double limite = media * 0.05;
        printf("\nResultados da análise:\n");
        printf("Média: %.2lf\n", media);
        printf("Desvio padrão: %.2lf\n", desvioPadrao);

        if (desvioPadrao < limite) {
            printf("Ação Estável\n");
        } else {
            printf("Ação Volátil\n");
        }

        printf("\nDeseja reiniciar? (1 - Sim, 0 - Não): ");
        scanf("%d", &sim);
    }

    printf("Programa encerrado.\n");
    return 0;
}
