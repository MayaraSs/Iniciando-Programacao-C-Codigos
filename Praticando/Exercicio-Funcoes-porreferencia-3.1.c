/*Armazenar 15 n�meros inteiros em um vetor NUM e imprimir uma listagem contendo o n�mero e uma das
mensagens: par ou �mpar (crie uma fun��o para essa identifica��o)*/
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
