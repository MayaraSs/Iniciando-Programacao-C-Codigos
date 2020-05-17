
#include <stdio.h>
#include <stdlib.h>
int main()
{
  float salariobase, reajuste,salariofinal;
  printf("Calculo salario reajuste\n\n");
  printf("Informe salario do funcionario:\n");
  scanf("%f",&salariobase);

  reajuste= (salariobase*25)/100;
  printf("Reajuste=%f\n\n", reajuste);
  salariofinal=salariobase+reajuste;
  printf("Salario final:%f\n\n",salariofinal);

    return 0;
}
