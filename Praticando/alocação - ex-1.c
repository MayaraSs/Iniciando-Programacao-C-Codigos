/*1. Escreva um programa em linguagem C que solicita ao usu�rio a quantidade de alunos de uma turma e aloca um vetor de notas
(n�meros reais). Depois de ler as notas, imprime a m�dia aritm�tica.
Obs: n�o deve ocorrer desperd�cio de mem�ria; e ap�s ser utilizada a mem�ria deve ser devolvida.*/
#include <stdio.h>
#include <stdlib.h>

main()
{
int i, qtd_aluno;
float media,*p;

printf("Qual a quantidade de aluno: ");
scanf("%i",&qtd_aluno);

p = (float*) malloc(qtd_alunos * sizeof(float));// variavel (tipo*) malooc(variavel * sizeof(tipo0));
}
for(i=0;i<qtd_alunos;i++){
    printf("Digite a nota do aluno %i:  ",i+1);
    scanf("%f",p+i);
}
media=0.0;
for(i=0;i<qtd_alunos;i++)
      media += *( p + i );

printf("Media: %.2f",media/qtd_alunos);

free (p);
}
