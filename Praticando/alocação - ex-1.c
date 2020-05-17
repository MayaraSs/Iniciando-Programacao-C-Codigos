/*1. Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de notas
(números reais). Depois de ler as notas, imprime a média aritmética.
Obs: não deve ocorrer desperdício de memória; e após ser utilizada a memória deve ser devolvida.*/
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
