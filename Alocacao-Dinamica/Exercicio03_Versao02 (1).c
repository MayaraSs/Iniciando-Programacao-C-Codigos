#include<stdio.h>
#include<stdlib.h>

main(){
   int n=1, x, i=0, *vetor;

    vetor = (int*) malloc(sizeof(int));

    while(n<1000){

            if(i>0)
                vetor = (int*) realloc(vetor,(i+1)*(sizeof(int)) );

            *(vetor + i)= n*5;
            i++;
            n++;
    }

    for(x=0;x<i;x++)
        printf("%d - ", *(vetor+x));

    free(vetor);

}
