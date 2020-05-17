//FAZER UMA MATRIZ A[5][3] COM AS NOTAS DE 5 ALUNOS EM TRÊS PROVAS;
// MOSTRAR O RELATÓRIO COM O NUMERO DO ALUNO (NUMERO DA LINHA) E A PROVA (NUMERO DA COLUNA) EM QUE CADA ALUNO OBTEVE A MENOR NOTA (JUNTO AO VALOR DA NOTA)
//DEVE MOSTRAR QUANTOS ALUNOS TIVERAM A NOTA ABAIXO DA MEDIA EM CADA UMA DAS PROVAS, OU SEJA, NA PROVA1, NA PROVA2,NA PROVA3 (MOSTRAR OS ALUNOS E AS NOTAS DELES).

#include <stdio.h>
int main ()
{

    float A[5][3]; // Matriz A 5x3.
    int i, j; // Posições da Matriz, i = linha e j = coluna.
    float ValorMenorNota[5]; // Valor da Menor Nota de cada Aluno nas Provas.
    int PosicaoMenorNota[5]; // Posição da Menor Nota de cada Aluno na Matriz.
    int NotasBaixoMedia[3]; // Notas das Provas abaixo da Media dos Alunos.

    printf ("\nDigite as Notas das 3 Provas de cada Aluno: \n\n");

    for(i=0; i<5; i++)
    { printf("\n");

        for(j=0;j<3;j++)
        { printf("Aluno [%i], Nota da Prova[%i]: ", i+1, j+1);
          scanf("%f", &A[i][j]);
        }
    }

    printf ("\n\nMatriz com as Notas x Provas dos Alunos: \n\n");

    for ( i=0; i<5; i++)
    {
        for ( j=0; j<3; j++)
          { printf ("%.2f    ", A[i][j]); }
            printf ("\n");
    }

    for(i=0; i<3; i++)
    { NotasBaixoMedia[i] = 0; }

    for(i=0; i<5; i++)
    { ValorMenorNota[i] = A[i][0];
      PosicaoMenorNota[i] = 0;

        for(j=0; j<3; j++)
          { if(A[i][j] < ValorMenorNota[i])
              { ValorMenorNota[i] = A[i][j];
                PosicaoMenorNota[i] = j; }

            if(A[i][j] < 6) NotasBaixoMedia[j]++;
          }
    }

    printf ("\n\nAlunos e suas Menores Notas das Provas: \n");

    for(i=0; i<5; i++)
    {
        for(j=0; j<1; j++)
        { printf("\nAluno [%i], Menor Nota do Aluno foi na Prova[%i]= %.2f ", i+1, PosicaoMenorNota[i]+1,ValorMenorNota[i]); }
    }

    printf ("\n\n\nQuantos Alunos tiraram Notas abaixo da Média nas 3 Provas: \n");

    for(i=0; i<3; i++)
     { printf("\nProva %i = %i\n", i+1, NotasBaixoMedia[i]); }

    return 0;
}
