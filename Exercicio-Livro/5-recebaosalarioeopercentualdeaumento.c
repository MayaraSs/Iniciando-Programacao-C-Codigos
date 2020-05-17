#include<stdio.h>
main()
{
    float salario,percentual,aumento,novosalario;
    printf("Informe o salario do funcionario:");
    scanf("%f",&salario);
    printf("Informe o percentual de aumento:");
    scanf("%f",&percentual);
    aumento=(salario*percentual/100);
    printf("Aumento:");
    scanf("%f",&aumento);
    novosalario=(salario+aumento);
    printf("\n Salario novo:");
    scanf("%f+%f=%f",&novosalario);

}
