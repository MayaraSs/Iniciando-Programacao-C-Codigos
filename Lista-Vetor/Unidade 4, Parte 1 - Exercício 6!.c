#include <stdio.h>

int main ()
{
    float c[15]; // Array
    int i; // Indicador
    int AlunosAprovados = 0; // Numero de Alunos Aprovados na avalia��o
    int AlunosAvaliacao = 0; // Numeros de Alunos que ter�o direito a valor uma nova avalia��o
    int AlunosReprovados = 0; // Numeros de Alunos Reprovados na avalia��o
    float Soma = 0; // Soma dos elementos
    float Media; // Nota Media dos Alunos Aprovados na avalia��o

    for (i = 0; i < 15; i++)
    { printf ("\n Digite a nota %i do vetor: ", i);
      scanf ("%f", &c[i]);

      if (c[i] > 10 || c[i] < 0)
        {printf ("\n Nota Invalida!");
         i--;}
    }

    for (i = 0; i < 15; i++)
    {   if (c[i] >= 6)
        { AlunosAprovados++;
          Soma = Soma + c[i];}

        if (c[i] <= 5.5 && c[i] >= 3.5)
        { AlunosAvaliacao++; }

        if (c[i] < 3.5)
        { AlunosReprovados++;}
    }

    Media = Soma/AlunosAprovados;
    printf ("\n Soma = %.2f", Soma);
    printf ("\n Alunos Aprovados na avaliacao = %i", AlunosAprovados);
    printf ("\n Alunos que terao direito a nova avaliacao = %i", AlunosAvaliacao);
    printf ("\n Alunos Reprovados na avaliacao = %i", AlunosReprovados);
    printf ("\n Nota Media dos Alunos Aprovados na avaliacao = %.2f", Media);

    return 0;

}
