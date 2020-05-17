#include<stdlib.h>
#include<stdio.h>

/*
1. Escreva um programa em linguagem C que solicita
ao usu�rio a quantidade de alunos de uma turma e
aloca um vetor de notas
(n�meros reais). Depois de ler as notas, imprime
a m�dia aritm�tica.
Obs: n�o deve ocorrer desperd�cio de mem�ria;
e ap�s ser utilizada a mem�ria deve ser devolvida.
*/

int main(){
	int i , n ;
	float *pnotas, soma;

	printf( "\nInforme numeros de alunos:" );
	scanf("%d" , &n );

	/* aloca espaco na memoria */
	pnotas = (float*) malloc( n * sizeof(float));

	if(!pnotas){
		printf("N�o h� mem�ria!");
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




