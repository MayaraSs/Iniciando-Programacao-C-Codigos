#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int n; //n de numero
    int repeticao;
    int contador1, contador2, contador3;
    contador1 = 0;
    contador2 = 0;
    contador3 = 0;
    float porcentagem1, porcentagem2, porcentagem3;


    int total;


while (n!=0)
{
    printf("menu:\n 1:vinho tinto \n 2: vinho branco \n 3: vinho rose");
printf ("\n digite a opcao escolhida \n");

scanf("%i", &n);

switch (n)

  {
case 1:
    printf("vinho tinto");
    contador1++;
    break;

case 2:
    printf ("vinho branco");
    contador2++;
    break;

case 3:
    printf ("vinho rose");
    contador3++;
    break;


    default: // caso nenhuma for escolhida se bota default
    printf ("nenhuma opcao escolhida");
    break;

    } }
printf("\n totais:");
printf("\ntotal de vinho tinto, %i", contador1);
printf("\ntotal de vinho branco, %i", contador2);
printf ("\ntotal de vinho rose, %i", contador3);

total= contador1 + contador2 + contador3;

if (total!=0) {
    porcentagem1 = (float)(contador1*100)/total;
    porcentagem2 = (float)(contador2*100)/total;
    porcentagem3 = (float)(contador3*100)/total;

printf("\nporcentagem vinho tinto, %f",porcentagem1);
printf("\nporcentagem vinho branco, %f", porcentagem2);
printf ("\nporcentagem vinho rose, %f", porcentagem3);
}





return 0;

}









