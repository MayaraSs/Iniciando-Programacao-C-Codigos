
#include<stdio.h>
#include<stdlib.h>

main(){
int n,i;
int *p;

printf("Digite quantos numeros deseja cadastrar:");
scanf("%i",&n);

p=(int*)malloc(n*sizeof(int));

for(i=0;i<n;i++){
    printf("Digite o %i numero:",i+1);
    scanf("%i",p+i);
}

for (i=0;i<n;i++)
    printf("\nNumero %i: %i\n",i+1,*(p+i));

free(p);
}
