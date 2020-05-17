/*Faça um programa que receba o salário de um
funcionário, calcule e mostre o novo salário, sabendo-se que
este sofreu um aumento de 25%.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float Salario; // O SALARIO QUE O FUNCIONARIO RECEBE
float NovoSalario; // SALARIO NOVO DO FUNCIONARIO COM O AUMENTO
float Aumento; // AUMENTO QUE TEVE

printf("\nInforme o salario do funcionario: ");
scanf("%f", &Salario);

Aumento=(Salario*25)/100; //CALCULANDO O AUMENTO QUE TEVE NO SALARIO
printf("\nAumento=%f\n\n",Aumento);

NovoSalario=Aumento + Salario; //CALCULAR O NOVO SALARIO
printf("\nNovoSalario=%f\n\n",NovoSalario);

return 0;
}
