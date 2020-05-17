/*Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de notas
(números reais). Depois de ler as notas, imprime a média aritmética.
Obs: não deve ocorrer desperdício de memória; e após ser utilizada a memória deve ser devolvida.*/
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
    printf("Média: %2.f",media/qalunos);
    free(p);
}



