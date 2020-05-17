//   criar um vetor (array) com 10 elementos do tipo float;
// ler os valores fornecidos pelo usuário e armazenar esses valores nos elementos do vetor;
//imprimir o vetor;
//achar a soma dos elementos do vetor;

#include<stdio.h>
int main()
{
    float n[10], soma;
    int i;
    soma=0;

    for (i=0;i<10;i++)
    {
    printf("Digite os elementos do %i vetor:",i);
    scanf("%f",&n[i]);
    }

 printf ("Elemento   Valor\n");
   for (i=0; i<10; i++)
   printf ("%i            %f\n",i,n[i]    );
   for (i=0; i<10; i++)
   {
       soma= soma + n[i];
   }
     printf("Resultado da soma%.2f\n",soma);

return 0;
}

























































