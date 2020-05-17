
/*Faça um programa que leia duas sequências de inteiros, não necessariamente contendo
a mesma quantidade de números‏
dizer se a segunda sequencia está contida na primeira. Exemplo:‏
‎02‎:‎29
dizer se a segunda sequencia está contida na primeira. Exemplo:
v1: 7 3 2 3 2 6 4 7
v2: 3 2 6
Saída: sim

//CRIAR VETORES A,B COM 10 ELEMENTOS DO TIPO INT E VETOR C COM 20 ELEMENTOS ;
//OS VALORES DOS ELEMENTOS DE A E B  PODEM SER DEFINIDOS ;
// O VETOR C DEVE CONTER OS ELEMENTOS A E B DE FORMA INTERCALADA.*/
#include <stdio.h>

int main ()
{
    int a[10];
    int b[10];
    int i; // Indicador
    int x = 0; // Variável de elementos do vetor A
    int y = 0; // Variável de elementos do vetor B

    for (i = 0; i < 10; i++)
    {printf ("\n Digite o valor %i do vetor: ", i);
     scanf ("%i", &a[i]);
    }

    for (i = 0; i < 10; i++)
    { printf ("\n Digite o valor %i do vetor: ", i);
      scanf ("%i", &b[i]); }

    for (i = 0; i < 20; i++)
    { if (i %2 == 0)
      { c[i] = a[x];
        x++;
      }
      if (i %2 == 1)
      { c[i] = b[y];
        y++;
      }
    }

    for (i = 0; i < 20; i++)
    { printf ("\n Valor de A e B em C = %i", c[i]);
    }

    return 0;
}
