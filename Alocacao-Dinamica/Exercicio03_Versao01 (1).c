/* ELABORE UM PROGRAMA QUE RECEBERÁ OS DOIS NÚMEROS INTEIROS, MAS QUE O PROGRAMA PERGUNTE "DIGITE UM NUMERO MAIOR QUE ZERO PARA CADASTRAR OU
ZERO ´PARA FINALIZAR O CADASTRO", AO FINAL DESSE PROCESSO O PROGRAMA DEVERÁ EXIBIR OS NUMEROS CADASTRADOS (DICA: MALLOC E REALLOC);*/

#include<stdio.h>
#include<stdlib.h>

main(){
   int n, x, i=0, *vetor;

    vetor = (int*) malloc(sizeof(int));

    do{

        printf("\nDigite  um número >0 para cadastrar, ou zero para finalizar?\n");
        scanf("%d",&n);

        if (n>0) {
            if(i>0)
                vetor = (int*) realloc(vetor,(i+1)*(sizeof(int)) );

            *(vetor + i)= n;
            i++;
        }

    }while(n!=0);

    for(x=0;x<i;x++)
        printf("\n%d Numero: %d ",x+1,*(vetor+x));

    free(vetor);

}
