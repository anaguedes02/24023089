/*2.1 Desafio
Desafio: Controle Completo de Rob�
Descri��o do Desafio: Voc� deve implementar um programa que controle um rob� em um ambiente simulado.
O rob� pode se mover, ler sensores, executar a��es, monitorar a bateria e navegar em um grid.
O usu�rio pode optar por realizar diferentes opera��es at� decidir sair do programa.
O usu�rio deve escolher entre cinco funcionalidades:
1. Controle de Movimento;
2. Leitura de Sensores de Dist�ncia;
3. Controle de Atua��o;
4. Monitoramento de Bateria;
5. Navega��o Aut�noma;
6. O programa deve usar uma estrutura do-while para manter o controle do fluxo at� que o usu�rio decida encerrar; e
7. Cada funcionalidade deve ter seu pr�prio controle e l�gica, mas todas devem ser integradas em um menu principal.
Dica: Cada funcionalidade � implementada em uma fun��o separada:
controleMovimento: Permite mover o rob� em um espa�o de 10x10.
leituraSensores: Simula a leitura de um sensor de dist�ncia.
controleAtuacao: Permite ao usu�rio acionar diferentes fun��es do rob�.
monitoramentoBateria: Monitora o n�vel de bateria do rob�.
navegacaoAutonoma: Controla o movimento do rob� em um grid de 5x5.*/

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
    printf("\nLeitura do sensor de dist�ncia: %d cm\n", distancia);
    bateria -= 2;
    if (bateria < 0) bateria = 0;
}


void controleAtuacao() {
    int opcao;
    printf("\nEscolha a a��o:\n");
    printf("1. Ligar Luz\n2. Acionar Bra�o Mec�nico\n3. Emitir Som\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Luz ligada!\n");
            break;
        case 2:
            printf("Bra�o mec�nico acionado!\n");
            break;
        case 3:
            printf("Som emitido!\n");
            break;
        default:
            printf("A��o inv�lida!\n");
    }
    bateria -= 3;
    if (bateria < 0) bateria = 0;
}


void monitoramentoBateria() {
    printf("\nN�vel de bateria: %d%%\n", bateria);
    if (bateria <= 20) {
        printf("Aviso: Bateria baixa! Por favor, recarregue.\n");
    }
}


void navegacaoAutonoma() {
    printf("\nIniciando navega��o aut�noma em um grid 5x5...\n");
    srand(time(NULL));
    int x = rand() % SMALL_GRID;
    int y = rand() % SMALL_GRID;
    printf("Rob� movido para posi��o (%d, %d) no grid 5x5.\n", x, y);
    bateria -= 10;
    if (bateria < 0) bateria = 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        printf("\n==== MENU PRINCIPAL ====\n");
        printf("Escolha uma op��o:\n \t 1.Controle de Movimento \t 2.Leitura de Sensores de Dist�ncia \t 3.Controle de Atua��o\n \t 4.Monitoramento de Bateria \t 5.Navega��o aut�noma \t 6.Sair\n ");
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
                printf("\nOp��o inv�lida! Tente novamente.\n");
        }

        if (bateria <= 0) {
            printf("\nA bateria acabou! Recarregue para continuar.\n");
            break;
        }

    } while (opcao != 6);

    return 0;
}
