/*Armazenar 15 números inteiros em um vetor NUM e imprimir uma listagem contendo o número e uma das
mensagens: par ou ímpar (crie uma função para essa identificação)*/
#include <stdio.h>

void indentifica (int *x);
main() {

    int num [15], i;

    for (i=0; i<15; i++){
        printf ("\nInforme o %i numero:",i);
        scanf ("%d", &num [i]);
    }
    for (i=0; i<15; i++){
        printf ("\n Num [%d] : %d -" , i , num [i]);
        indentifica (&num [i]);
    }
}
    void indentifica (int *x){
        if (*x% 2 == 0)
            printf ("Par");
        else
            printf ("Impar");
    }
