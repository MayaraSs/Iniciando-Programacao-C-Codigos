/*Faça um programa que receba o salário base de um
funcionário, calcule e mostre o salário a receber, sabendo-se
que o funcionário tem gratificação de 5% sobre o salário
base e paga imposto de 7% sobre este salário.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float SalarioBase;
float Gratificacao;
float Imposto;
float SalarioNovo;
float SalarioFinal;

printf("Informe o salario do funcionario: ");
scanf("%f", &SalarioBase);

Gratificacao=(SalarioBase*5)/100;
printf("\nGratificacao=%f\n", Gratificacao);

SalarioNovo=SalarioBase+Gratificacao;

Imposto = (SalarioBase*7)/100;
printf("\nImposto=%f\n",Imposto);

SalarioFinal= SalarioNovo-Imposto;
printf("\nSalarioFinal=%f \n", SalarioFinal);

return 0;
}
