/*Escreva um programa em linguagem C que solicita ao usu�rio a quantidade de alunos de uma turma e aloca um vetor de notas
(n�meros reais). Depois de ler as notas, imprime a m�dia aritm�tica.
Obs: n�o deve ocorrer desperd�cio de mem�ria; e ap�s ser utilizada a mem�ria deve ser devolvida.*/
#include <stdio.h>
#include <stdlib.h>

main ()
{
    int i, qalunos;
    float media,*p;

    printf("Quantidade de alunos: \n ");
    scanf("%i",&qalunos);

    p=(float*) malloc(qalunos*sizeof(float));

    for (i=0; i<qalunos; i++)
    {
        printf("Nota do aluno: /n");
        scanf("%f",p+1);
    }
    media = 0.0;
    for (i=0; i<qalunos; i++)
    media += * (p+1);
    printf("M�dia: %2.f",media/qalunos);
    free(p);
}



