#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float receita, despesa, saldo = 0.0;

    printf("Minhas receitas:");
    scanf ("%f", &receita);

    printf("Despesa diaria:");
    scanf("%f",&despesa);

    saldo = receita - despesa;

    printf("Saldo atualizado: R$ %.2f\n", saldo );

    system ("pause");
    return(0);

}
