//Escreva um programa que cria um vetor (array) com 15 elementos do tipo int .
// acha o maior e o menor elemento do vetor com suas respectivas posições.
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n[15],minimo,maximo, i,posicao_min, posicao_max;
      for (i=0; i<15; i++)
   {
       printf("Digite elemento %i do vetor", i);
       scanf ("%i", &n[i]);
   }
   minimo = n[0];

        for (i=0; i<15; i++)
   {
       if (n[i]<minimo)
      {
       minimo=n[i];
       posicao_min=i;
      }
   }
   maximo=n[0];
for (i=0; i<15; i++)
   {
       if (n[i]>maximo)
      {
        maximo=n[i];
       posicao_max=i;
      }
   }
printf("\nMinimo:%i  Posicao:%i",minimo,posicao_min);
printf("\nMaximo:%i  Posicao:%i ",maximo, posicao_max);
return 0;
}
