//Escrever um programa que cria e inicializa uma matriz 3*3 (float)
// leia o numero k (fornecido pelo usuario);
// multiplica todos os elementos da matriz por esse numero;

#include <stdio.h>

int main ()
{
    float A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; // Matriz A 3x3.
    int i, j; // Posições da Matriz, i = linha e j = coluna.
    int k; // Variável de entrada de multiplicação.

    printf ("\nPrograma imprime uma matriz 3x3 e multiplica todos os seus elementos por k:  \n\n");

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f   ", A[i][j]); }

            printf ("\n");
    }

    printf ("\nDigite o valor de k: ");
    scanf ("%i", &k);

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
         { if (i==j)
            { A[i][j] = A[i][j]*k; }
         }
    }

    printf ("\nValor da Multiplicacao da matriz A 3x3 por k: \n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
         printf ("%.2f    ", A[i][j]);
         printf ("\n");
    }

    return 0;
}

