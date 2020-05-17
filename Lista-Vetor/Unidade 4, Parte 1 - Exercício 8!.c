// CRIAR VETORES A,B E C COM 10 ELEMENTOS DO TIPO INT;
// OS VALORES DOS ELEMENTOS DE A PODEM SER FORNECIDO PELO UUARIO OU PRE DEFINIDOS;
// O VETOR B DEVE CONTER OS ELEMENTOS POSITIVOS DE A;
// O VETOR C DEVE CONTER OS ELEMENTOS NEGATIVOS DE A.
#include <stdio.h>

int main ()
{
    int a[10]; // Array de entrada
    int b[10]; // Array de saida positivos
    int c[10]; // Array de saída negativos
    int i; // Indicador

    for (i = 0; i < 10; i++)
    { printf ("\n Digite o valor %i do vetor: ", i);
      scanf ("%i", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {b[i] = 0;
     c[i] = 0;
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        b[i] = a[i];

        if (a[i] < 0)
        c[i] = a[i];

    }

    for (i = 0; i < 10; i++)
    {
        if (b[i] != 0)
        printf ("\n Valor de B (positivos) = %i", b[i]);

        if (c[i] != 0)
        printf ("\n Valor de C (negativos) = %i", c[i]);

    }

    return 0;
}
