// cria um vetor (array) com 10 elementos do tipo float;
//� leia os valores fornecidos pelo usu�rio e armazena esses valores nos elementos do vetor;
// � calcula o valor m�dio dos elementos;
//� imprima os elementos do vetor que est�o acima da m�dia com suas respectivas posi��es.
#include<stdio.h>
main()
{
    float n[10], media=0, soma = 0;
    int i;

    for (i=0;i<10;i++)
{
  printf("\nDigite os elementos do %i vetor:",i); // PARA APARECER PARA DIGITAR O VALOR DOS ELEMESTOS
    scanf("%f",&n[i]); // LENDO PRINTF PARA APARECER NA TELA
}
   printf ("\nElemento   Valor\n");
   for (i=0; i<10; i++)
   printf ("%i            %.2f\n",i,n[i]);

   for (i=0; i<10; i++)
     soma=soma + n[i];

 media=soma/10;
printf("\n Media: %.2f \n",media);

for(i=0;i<10;i++)
    {
         if(n[i]>media)
            {
                printf("\n Elemento: %f   Posicao:%i",n[i],i);

            }
     }

return 0;
}
