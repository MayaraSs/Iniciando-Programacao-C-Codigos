#include<stdlib.h>
#include<stdio.h>

int main(){
	int i , n , *pvetor ;
	float media;

	printf( "\nInforme quantos numeros desejas cadastrar:" );
	scanf("%d" , &n );

	/* aloca espaco na memoria */
	pvetor = (int*) malloc( n * sizeof(int));

	if(!pvetor){
		printf( " Sem memória!" );
		return 1;
	}
	for (i = 0; i < n ; i ++){
        printf( "\nInforme o numero %d:",i+1);
		scanf ("%d" , pvetor + i );
	}

	/* faco a soma dos numeros digitados */
	media = 0.0;
	for (i = 0; i < n ; i ++){
		media += *( pvetor + i );
	}
	printf ("Media dos numeros: %f\n",media/n);
	/* aqui nao preciso mais de pvetor */

	free (pvetor);
	return 0;
}




