#include <stdio.h>
#include <stdlib.h>
int main ()
{
// declaraceos de variaveis
float n1,n2,n3; // notas
float r; //resultado

printf ("calcule a nota media ponderada e conceito (A, B, C, D, E): \N ");
// Entrada de dados: recebe 3 notas

printf ("Nota 1 (laboratorio): ");
scanf ("%f", &n1);

printf ("Nota 2 (semestral): ");
scanf ("%f",&n2);

printf("Nota 3 (exame final): ");
scanf ("%f", &n3);

// Processamento e saida de dados
r = n1 * 0.2 + n2 * 0.3 + n3 * 0.5;

printf ("\n Nota media: %f", r);
printf("\n Conceito : ");

if (r < 5)
    printf (" E \n");
else if (r < 6 )
    printf (" D \n");
else if (r < 7)
    printf (" C \n");
else if (r < 8 )
    printf (" B \n");
else if (r <= 10)
    printf ("A \n");
}

