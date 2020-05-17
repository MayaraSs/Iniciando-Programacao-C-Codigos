#include <stdio.h>
int main(){

    int num, num_e,digito, cont;
cont=0;

printf ("Entre com um numero inteiro:\n");
scanf("%i",&num);

printf("Entre com o numero especifico para contagem:\n");
scanf("%i",&num_e);

while(num!=0)
   {
    digito=num%10;
    num=num/10;
       if (digito==num_e)
       cont++;
   }
printf("O digito %i foi digitado %i vezes",num_e,cont);


return 0;
}
