#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double acao_1 = 24.13;
    double acao_2 = 11.00;
    double acao_3 = 38.65;

    double dividendos_1 = 17.00;
    double dividendos_2 = 35.00;
    double dividendos_3 = 25.00;

    double investimento_inicial = 1000.00;

    int quantidade_1 = (int)(investimento_inicial / acao_1);
    int quantidade_2 = (int)(investimento_inicial / acao_2);
    int quantidade_3 = (int)(investimento_inicial / acao_3);

    double dy_1 = (dividendos_1 / acao_1) * 100;
    double dy_2 = (dividendos_2 / acao_2) * 100;
    double dy_3 = (dividendos_3 / acao_3) * 100;

    printf("Investimento inicial de R$ %.2f\n\n", investimento_inicial);
    printf("Ação 1:\n");
    printf("  Preço médio da ação 1: R$ %.2f\n", acao_1);
    printf("  Dividendos por unidade da ação 1: R$ %.2f\n", dividendos_1);
    printf("  Quantidade de ações que se obtém com a ação 1: %d\n", quantidade_1);
    printf("  Dividend Yield (DY) da ação 1: %.2f%%\n\n", dy_1);

    printf("Ação 2:\n");
    printf("  Preço médio da ação 2: R$ %.2f\n", acao_2);
    printf("  Dividendos por unidade da ação 2: R$ %.2f\n", dividendos_2);
    printf("  Quantidade de ações que se obtém com a ação 2: %d\n", quantidade_2);
    printf("  Dividend Yield (DY) da ação 2: %.2f%%\n\n", dy_2);

    printf("Ação 3:\n");
    printf("  Preço médio da ação 3: R$ %.2f\n", acao_3);
    printf("  Dividendos por unidade da ação 3: R$ %.2f\n", dividendos_3);
    printf("  Quantidade de ações que se obtém com a ação 3: %d\n", quantidade_3);
    printf("  Dividend Yield (DY) da ação 3: %.2f%%\n\n", dy_3);

    return 0;
}

