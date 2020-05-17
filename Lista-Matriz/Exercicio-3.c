// A 4*4, ACHAR O ELEMENTO MAXIMO DESSA MATRIZ
// CRIAR UMA NOVA MATRIZ B RESULTANTE DA MULTIPLICAÇÃAO DOS ELEMENTOS DE A PELO SEU MAIOR ELEMENTO.
#include <stdio.h>

int main ()
{
    int A[4][4] = { {10,1,2,3}, {12,-5,4,5}, {8,4,3,11}, {5,12,15,1} };
    int i, j;
    int Menor;

    printf ("\nMatriz 4x4:\n\n");

    for ( i=0; i<4; i++)
    {
        for ( j=0; j<4; j++)
          { printf ("%i   ", A[i][j]); }

            printf ("\n");
    }



    Menor = A[0][0];
    for ( i=0; i<4; i++)
    {
        for ( j=0; j<4; j++)
          { if (A[i][j] < Menor)
            {Menor = A[i][j];}
          }
    }

    printf ("\nNumero Minimo da Matriz A 4x4 = %i \n\n", Menor);


   return 0 ;
}
