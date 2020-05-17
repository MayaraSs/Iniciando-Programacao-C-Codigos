#include<stdio.h>

main(){	

	int x = 10;
	double y = 3.5;
	
	int *pX = &x;
	double *pY = &y; 
	
	double soma = *pX + *pY;	
	printf("Valor soma = %f \n", soma);	
	
}

