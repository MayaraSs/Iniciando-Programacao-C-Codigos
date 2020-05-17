#include<stdio.h>

main(){	
	int x = 10;
	double y = 3.5;
	char c = 'a';
	
	int *pX = &x;
	double *pY = &y; 
	char *pC = &c;
	
	printf("Endereco x = %i - Valor x = %i \n", pX, *pX);		
	printf("Endereco y = %i - Valor y = %f \n", pY, *pY);		
	printf("Endereco c = %i - Valor c = %c \n", pC, *pC);		
	
}

