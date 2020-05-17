#include<stdio.h>

main(){	

	int x;
	int *p;
	
	x = 10;
	p = &x;
	
	printf("%i\n",x);	
		
	*p = 90;	
	printf("%i\n",x);		
	
}

