#include <stdio.h>
#include <string.h>

typedef struct {
   char nome[30];
   int matricula;
   float nota;
} TipoAluno;

main() {
   TipoAluno a;

    printf("\nNome: ");
    scanf("%s",&a.nome);
    printf("\nMatricula: ");
    scanf("%d", &a.matricula);
    printf("\nNota: ");
    scanf("%f", &a.nota);

    printf("\nNome: %s", a.nome);
    printf("\nMatricula: %d", a.matricula);
    printf("\nNota: %f \n\n", a.nota);

}
