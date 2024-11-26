/*Exerc�cio 4: Verifica��o de Dep�sito M�nimo
Um sistema banc�rio solicita ao usu�rio um valor m�nimo de dep�sito de R$ 500,00 para abrir uma conta.
O sistema deve pedir ao usu�rio para inserir o valor do dep�sito inicial e verificar se atende ao m�nimo.
Caso o valor seja inferior a R$ 500,00, o programa deve informar o erro e solicitar um novo valor at� que o dep�sito seja v�lido.
Escreva um programa em C que simule este processo de valida��o */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor;

    printf("Insira o valor do dep�sito inicial para abrir a conta R$: ");
    scanf("%d", &valor);

    while (valor < 500) {
            printf("Dep�sito Inv�lido! Neste banco, o valor m�nimo para dep�sito � de R$ 500,00. Por favor, deposite um novo valor. \n");
            printf("Insira o valor do novo dep�sito R$: ");
            scanf("%d", &valor);
    }

    if(valor == 500 || valor > 500){
        printf("Bem vindo ao Banco! Nova conta criada com sucesso! \n");
    }

    return 0;
}
