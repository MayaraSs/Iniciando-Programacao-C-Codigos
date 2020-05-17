#include<stdio.h>
#include<stdlib.h>

main(){
   int n, i, *num;

   printf("Quantos numeros:");
   scanf("%d",&n);

    num = (int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\n%d Numero: ",i+1);
        scanf("%d",num+i);
    }

    printf("\n\nQuantos numeros:");
    scanf("%d",&n);

    num = (int*) realloc(num, n*sizeof(int));

    for(i=0;i<n;i++)
        printf("\n%d Numero: %d ",i+1,*(num+i));

    free(num);

}
