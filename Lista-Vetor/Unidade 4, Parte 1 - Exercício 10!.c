//DADO UM VETOR COM 15 ELEMENTOS DO TIPO FLOAT.
// ACHAR O VALOR MEDIO DOS ELEMENTOS DO VETOR;
// ACHAR O ELEMENTO COM VALOR MAIS PROXIMO DO VALOR MÉDIO E MOSTRA ELE E SUA POSIÇÃO;
// DICA: USAR A FUNÇÃO FABS(N) DA BIBLIOTECA MATH.H O VALOR ABSOLUTO DO NUMERO N .
#include <stdio.h>
#include <math.h>

int main ()
{
    float c[15]; // Array de entrada e saida
    int i; // Indicador
    float Media = 0; // Media do valor dos elementos do vetor
    float Soma = 0; // Soma dos valor dos elementos do vetor
    float Comparacao[15]; // Comparação dos Elementos do Vetor
    float Menor; // Sinalizador para achar o Menor Elemento do Vetor
    int Lugar; // Posição do Elemento Menor do Vetor

    for (i = 0; i < 15; i++)
    { printf ("\n Digite o valor %i do vetor: ", i);
      scanf ("%f", &c[i]);
    }

    for (i = 0; i < 15; i++)
    { Soma = Soma + c[i];
    }

    Media = Soma/15;


    for (i = 0; i < 15; i++)
    { Comparacao[i] = Media - c[i];
      Comparacao[i] = fabs(Comparacao[i]);
    }

    Menor = Comparacao[0];

    for (i = 0; i < 15; i++)
    {  if (Comparacao[i] < Menor )
        {Menor = Comparacao[i];
         Lugar = i; }
    }

    printf ("\n Valor da Media dos Elementos do Vetor = %.2f", Media);
    printf ("\n Valor do Elemento mais próximo da Media = %.2f", c[Lugar]);
    printf ("\n Posicao do Valor do Elemento mais próximo da Media = %i", Lugar);

    return 0;
}
