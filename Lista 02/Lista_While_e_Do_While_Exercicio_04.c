/*Exercício 4: Verificação de Depósito Mínimo
Um sistema bancário solicita ao usuário um valor mínimo de depósito de R$ 500,00 para abrir uma conta.
O sistema deve pedir ao usuário para inserir o valor do depósito inicial e verificar se atende ao mínimo.
Caso o valor seja inferior a R$ 500,00, o programa deve informar o erro e solicitar um novo valor até que o depósito seja válido.
Escreva um programa em C que simule este processo de validação */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor;

    printf("Insira o valor do depósito inicial para abrir a conta R$: ");
    scanf("%d", &valor);

    while (valor < 500) {
            printf("Depósito Inválido! Neste banco, o valor mínimo para depósito é de R$ 500,00. Por favor, deposite um novo valor. \n");
            printf("Insira o valor do novo depósito R$: ");
            scanf("%d", &valor);
    }

    if(valor == 500 || valor > 500){
        printf("Bem vindo ao Banco! Nova conta criada com sucesso! \n");
    }

    return 0;
}
