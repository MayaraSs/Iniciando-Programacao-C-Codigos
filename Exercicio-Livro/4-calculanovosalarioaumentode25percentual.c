#include<stdio.h>
main()
{
    float salario,salarionovo,aumento;
    printf("\nInforme o salario do funcionario:");
    scanf("%f",&salario);
    aumento=(salario*25/100);
    printf("\nAumento sera igual a:");
    scanf("%f",aumento);
    salarionovo=(salario+aumento);
    printf("\n salarionovo=%f",salarionovo);
}
