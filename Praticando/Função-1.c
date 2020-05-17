/*ARMAZENAR 15 NUMEROS INTEIROS EM UM VETOR NUM E IMPRIMIR UMA LISTAGEM CONTENDO O NUMERO E UMA DAS MENSAGEM PAR OU IMPAR (CRIE UMA FUNÇÃO)*/
#include<stdio.h>
main()
{
    int num[15],i;
    int *pnum[15]=&num[15];
    int *pi=&i;

    printf("Informar se o valor e par ou impar");

    for(i=0;i<15;i++)
    {
        printf("\nInforme o %i numeor: ",*pi);
        scanf("%i",&*pnum[i]);
        printf("Endereco:%d \t Valor:%d\n",pnum[i],*pnum[i]);
    }
    for(i=0;i<15;i++)
    {
        printf("\nnum [%d]:%d-",*pi,*pnum[i]);
        identifica(*pnum[i]);
        printf("Endereco:%d \t Valor:%d\n",pnum[i],*pnum[i]);
    }
}
void identifica (int x)
{
  if (x%2==0)
    printf("Par");
else
    printf("Impar");
}

