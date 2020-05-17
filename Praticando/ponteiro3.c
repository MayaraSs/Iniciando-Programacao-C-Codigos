#include<stdio.h>

main(){	

	int x = 1;
	int *p;
	p = &x;
	
	int y = 2;
	*p = y;
	
		
	printf("%i %i \n", x, y);	
	
	
}

