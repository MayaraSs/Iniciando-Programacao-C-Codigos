/*Fa�a um programa que receba o sal�rio base de um
funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se
que o funcion�rio tem gratifica��o de 5% sobre o sal�rio
base e paga imposto de 7% sobre este sal�rio.*/
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
