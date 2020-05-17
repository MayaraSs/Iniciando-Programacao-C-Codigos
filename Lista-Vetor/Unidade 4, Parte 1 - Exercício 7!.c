//CRIAR VETORES A,B E C COM 10 ELEMENTOS DO TIPO FLOAT CADA UM. OS VALORES DE A E B PODEM SER FORNECIDOS PELO USUARIO OU PRE DEFIBIDO;
// CALCULAR A SOMA DOS ELEMENTOS NAS POSIÇOES CORRESPONDENTES DE A E B E GRAVA O RESULTADO EM C.
#include <stdio.h>

int main ()
{
    float a[10]; // Array de entrada para soma
    float b[10]; // Array de entrada para soma
    float c[10]; // Array de saida do resultado da soma
    int i; // Indicador


    for (i = 0; i < 10; i++)
    { a[i] = i + 2;
      b[i] = i + 4;
    }

    for (i = 0; i < 10; i++)
    { c[i] = a[i] + b[i];}

    for (i = 0; i < 10; i++)
    { printf ("\n Valor dos Elementos A = %.2f", a[i]);
      printf ("\n Valor dos Elementos B  = %.2f", b[i]);
      printf ("\n  Soma dos Elementos AB = %.2f", c[i]);
    }

    return 0;
}
