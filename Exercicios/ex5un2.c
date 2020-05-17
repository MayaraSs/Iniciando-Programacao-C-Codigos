#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salariobase, gratificacao, salariog, imposto, salariofinal;

    printf("calculo salario reajustado\n\n");
    printf("informe salario de funcionario:\n");
    scanf("%2.f",&salariobase);

    gratificacao=(salariobase*5)/100;
    printf("gratificacao = %2.f/n",gratificacao);
    salariog = salariobase + gratificacao;

    imposto = (salariog *7)/100;
    printf("imposto = %2.f\n",imposto);
    salariofinal=salariog - imposto;
    printf("salariofinal =%f\n",salariofinal);

    return 0;
}
