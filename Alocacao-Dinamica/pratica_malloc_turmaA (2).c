#include<stdio.h>
#include<stdlib.h>

main(){
	int n, i, *pnum;

	printf("Informe Qtidade:");
	scanf("%d",&n);

    pnum = (int*) malloc(n*sizeof(int));

    for (i = 0; i < n ; i ++){
        printf( "\nNumero %d:",i+1);
        scanf ("%d" , pnum + i );
    }

    printf("\n\nInforme Qtidade:");
    scanf("%d",&n);

    pnum = (int*) realloc(pnum, n*sizeof(int));

    for (i = 0; i < n ; i ++){
        printf( "\nNumero %d: %i ",i+1, *(pnum + i) );
    }

    free(pnum);
}
