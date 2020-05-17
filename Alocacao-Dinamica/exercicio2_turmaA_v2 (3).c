#include<stdlib.h>
#include<stdio.h>

int main(){
	int i , n ;
	float *pnotas, soma;

	printf( "\nInforme numeros de alunos:" );
	scanf("%d" , &n );

	/* aloca espaco na pnotasmemoria */
	pnotas = (float*) malloc( n * sizeof(float));

	if(!pnotas){
		printf("Não há memória!");
		return 1;
	}

	for (i = 0; i < n ; i ++){
        printf("\nNota %d:",i+1);
		scanf ("%f" , pnotas + i );
	}

	/* faco a soma dos numeros digitados */
	soma = 0.0;
	for (i = 0; i < n ; i ++){
		soma = soma + *(pnotas + i);
	}

	printf ("Media: %f\n",soma/n);p


	free(pnotas);
	return 0;
}




