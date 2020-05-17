//MATRIZ 3*3 A FLOAT;
// CRIA UMA MATRIZ B COM ELEMENTOS DA MATRIZ A QUE ESTÃO ACIMA DA MEDIA (OS OUTROS ELEMENTOS DEVEM SER IGUAIS A 0)
// CRIAR UMA MATRIZ C COM ELEMENTOS DA MATRIZ A COM SUAS POSIÇÕES INVERTIDAS EM RELAÇÃO A DIAGONAL PRINCIPAL;
#include <stdio.h>

int main ()
{
    float A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; // Matriz A 3x3.
    float B[3][3]; // Matriz B 3x3, com os elementos acima da Média da Matriz A 3x3.
    float C[3][3]; // Matriz C 3x3, que é igual a Matriz A 3x3 inversa.
    int i, j; // Posições da Matriz, i = linha e j = coluna.
    int x = 0; // Divisor da Soma da Media da Matriz A 3x3.
    float Media = 0; // Media dos elementos da Matriz A 3x3.
    float Soma = 0; // Soma dos elementos da Matriz A 3x3.

    printf ("\nMatriz A 3x3:\n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f    ", A[i][j]); }
            printf ("\n");
    }

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { Soma =  Soma + A[i][j];
            x++;}
    }

    Media = Soma/x;

    printf ("\nMedia dos elementos da Matriz A 3x3 = %.2f \n", Media);

    printf ("\nMatriz B 3x3 com os elementos acima da Media da Matriz A 3x3:\n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { if (A[i][j] > Media)
            { B[i][j] = A[i][j]; }
            else
            { B[i][j] = 0; }
          }
    }

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f    ", B[i][j]); }
            printf ("\n");
    }

    printf ("\nMatriz C 3x3, inversa da Matriz A 3x3:\n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { C[i][j] = A[j][i];}
    }

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f    ", C[i][j]); }
            printf ("\n");
    }

    return 0;
}
