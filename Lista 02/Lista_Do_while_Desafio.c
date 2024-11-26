/*2.1 Desafio
Desafio: Controle Completo de Robô
Descrição do Desafio: Você deve implementar um programa que controle um robô em um ambiente simulado.
O robô pode se mover, ler sensores, executar ações, monitorar a bateria e navegar em um grid.
O usuário pode optar por realizar diferentes operações até decidir sair do programa.
O usuário deve escolher entre cinco funcionalidades:
1. Controle de Movimento;
2. Leitura de Sensores de Distância;
3. Controle de Atuação;
4. Monitoramento de Bateria;
5. Navegação Autônoma;
6. O programa deve usar uma estrutura do-while para manter o controle do fluxo até que o usuário decida encerrar; e
7. Cada funcionalidade deve ter seu próprio controle e lógica, mas todas devem ser integradas em um menu principal.
Dica: Cada funcionalidade é implementada em uma função separada:
controleMovimento: Permite mover o robô em um espaço de 10x10.
leituraSensores: Simula a leitura de um sensor de distância.
controleAtuacao: Permite ao usuário acionar diferentes funções do robô.
monitoramentoBateria: Monitora o nível de bateria do robô.
navegacaoAutonoma: Controla o movimento do robô em um grid de 5x5.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define GRID_SIZE 10
#define SMALL_GRID 5


int posX = 0, posY = 0;
int bateria = 100;

void controleMovimento() {
    int dx, dy;
    printf("\nMovimento atual: (%d, %d)\n", posX, posY);
    printf("Digite o movimento em X (-1 para esquerda, 1 para direita, 0 para parado): ");
    scanf("%d", &dx);
    printf("Digite o movimento em Y (-1 para baixo, 1 para cima, 0 para parado): ");
    scanf("%d", &dy);

    posX += dx;
    posY += dy;

    if (posX < 0) posX = 0;
    if (posX >= GRID_SIZE) posX = GRID_SIZE - 1;
    if (posY < 0) posY = 0;
    if (posY >= GRID_SIZE) posY = GRID_SIZE - 1;

    bateria -= 5;
    if (bateria < 0) bateria = 0;

    printf("Novo movimento: (%d, %d)\n", posX, posY);
}


void leituraSensores() {
    srand(time(NULL));
    int distancia = rand() % 101;
    printf("\nLeitura do sensor de distância: %d cm\n", distancia);
    bateria -= 2;
    if (bateria < 0) bateria = 0;
}


void controleAtuacao() {
    int opcao;
    printf("\nEscolha a ação:\n");
    printf("1. Ligar Luz\n2. Acionar Braço Mecânico\n3. Emitir Som\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Luz ligada!\n");
            break;
        case 2:
            printf("Braço mecânico acionado!\n");
            break;
        case 3:
            printf("Som emitido!\n");
            break;
        default:
            printf("Ação inválida!\n");
    }
    bateria -= 3;
    if (bateria < 0) bateria = 0;
}


void monitoramentoBateria() {
    printf("\nNível de bateria: %d%%\n", bateria);
    if (bateria <= 20) {
        printf("Aviso: Bateria baixa! Por favor, recarregue.\n");
    }
}


void navegacaoAutonoma() {
    printf("\nIniciando navegação autônoma em um grid 5x5...\n");
    srand(time(NULL));
    int x = rand() % SMALL_GRID;
    int y = rand() % SMALL_GRID;
    printf("Robô movido para posição (%d, %d) no grid 5x5.\n", x, y);
    bateria -= 10;
    if (bateria < 0) bateria = 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        printf("\n==== MENU PRINCIPAL ====\n");
        printf("Escolha uma opção:\n \t 1.Controle de Movimento \t 2.Leitura de Sensores de Distância \t 3.Controle de Atuação\n \t 4.Monitoramento de Bateria \t 5.Navegação autônoma \t 6.Sair\n ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                controleMovimento();
                break;
            case 2:
                leituraSensores();
                break;
            case 3:
                controleAtuacao();
                break;
            case 4:
                monitoramentoBateria();
                break;
            case 5:
                navegacaoAutonoma();
                break;
            case 6:
                printf("\nEncerrando programa...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

        if (bateria <= 0) {
            printf("\nA bateria acabou! Recarregue para continuar.\n");
            break;
        }

    } while (opcao != 6);

    return 0;
}
