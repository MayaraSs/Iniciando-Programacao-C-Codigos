#include<stdlib.h>
#include<stdio.h>

/*
1. Escreva um programa em linguagem C que solicita
ao usuário a quantidade de alunos de uma turma e
aloca um vetor de notas
(números reais). Depois de ler as notas, imprime
a média aritmética.
Obs: não deve ocorrer desperdício de memória;
e após ser utilizada a memória deve ser devolvida.
*/

int main(){
	int i , n ;
	float *pnotas, soma;

	printf( "\nInforme numeros de alunos:" );
	scanf("%d" , &n );

	/* aloca espaco na memoria */
	pnotas = (float*) malloc( n * sizeof(float));

	if(!pnotas){
		printf("Não há memória!");
		return 1;
	}

	for (i = 0; i < n ; i ++){
        printf( "\nNota %d:",i+1);
		scanf ("%f" , pnotas + i );
	}

	/* faco a soma dos numeros digitados */
	soma = 0.0;
	for (i = 0; i < n ; i ++){
		soma = soma + *(pnotas + i);
	}


	printf ("Media: %f\n",soma/n);

	free(pnotas);
	return 0;
}




