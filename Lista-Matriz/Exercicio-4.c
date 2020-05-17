// CRIA DUAS MATRIZES 3*3 A E B COM ELEMENTOS DO TIPO FLOAT;
// CALCULAR O RESULTADO DA SOMA DE DUAS MATRIZES E ARMAZENAR O RESULTADO DA MATRIZ C:c[i][j]=a[i][j]+b[i][j]
// CALCULA E MOSTRA A SOMA DOS ELEMENTOS NA DIAGONAL PRINCIPAL PARA CADA UMA DAS MATRIZES A,B E C.
#include <stdio.h>

int main ()
{
    float A[3][3] = { {2,4,6}, {8,10,12}, {14,16,18} }; // Matriz A 3x3.
    float B[3][3] = { {1,3,5}, {7,9,11}, {13,15,17} }; // Matriz B 3x3
    int i, j; // Posições da Matriz, i = linha e j = coluna.
    float C[3][3]; // Matriz C 3x3, resultante da Soma das Matrizes A 3x3 e B 3x3.

    printf ("\nMatriz A 3x3:\n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f    ", A[i][j]); }
            printf ("\n");
    }

    printf ("\nMatriz B 3x3:\n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f   ", B[i][j]); }
            printf ("\n");
    }

    printf ("\nResultado da Soma das Matrizes A e B 3x3, armazenado na Matriz C 3x3:\n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { C[i][j] = A[i][j] + B[i][j]; }
    }

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f   ", C[i][j]); }
            printf ("\n");
    }

    return 0;

}
