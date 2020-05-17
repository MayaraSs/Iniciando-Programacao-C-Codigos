#include <stdio.h>
#include <stdlib.h>
int main()
{


int c;  // codigo
float s; // salario
float s_n; // novo salario
float a;  // aumento

printf("\n Salario atual: ");
scanf ("%f", &s);

printf("\n Escolha o cargo do funcionario: \n"
       "1- escrituario \n"
       "2- Secretario \n"
       "3- Caixa \n"
       "4- Gerente \n"
       "5- Diretor \n");

scanf("%i", &c);

switch (c)
{
case 1:
    a = s * 0.5;
    s_n = s + a;
    printf ("\n Cargo: 1 - Escrituario \n");
    printf ("\n Valor de aumento:  %.2f \n",a);
    printf ("\n Novo salario: %.2f \n", s_n);
    break;

case 2:
    a = s * 0.35;
    s_n = s + a;
    printf ("\n Cargo: 2 - secretario \n");
    printf ("\n Valor de aumento: %.2f \n", a);
    printf ("\n Novo salario:  %.2f \n", s_n);
    break;

case 3:
    a = s * 0.20;
    s_n = s + a;
    printf ("\n Cargo: 3 - caixa \n");
    printf ("\n Valor de aumento: %.2f \n", a);
    printf ("\n Novo salario:  %.2f \n", s_n);
    break;

case 4:
    a = s * 0.10;
    s_n = s + a;
    printf ("\n Cargo: 4 - gerente \n");
    printf ("\n Valor de aumento: %.2f \n", a);
    printf ("\n Novo salario:  %.2f \n", s_n);
    break;

case 5:
    a = s * 0.0;
    s_n = s + a;
    printf ("\n Cargo: 5 - diretor \n");
    printf ("\n Valor de aumento: %.2f \n", a);
    printf ("\n Novo salario:  %.2f \n", s_n);
    break;

default:
    printf(" \n Codigo de cargo invalido! \n ");
    break;
}
return 0;
}
