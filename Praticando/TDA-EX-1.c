/*ELABORE UM PROGRAMA DE CONTATOS, ONDE O USUARIO DEVERÁ CADASTRAR NOME,E-MAIL, FONE . e NO FINAL EXIBA OS CAMPOS PREENCHIDOS*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char nome[30];
    char email[30];
    char fone[30];
}Tipoagenda;
main ()
{
    Tipoagenda cliente;

    printf("\nNome: ");
    scanf("%s",&cliente.nome);
    printf("\nEmail: ");
    scanf("%s",&cliente.email);
    printf("\nFone: ");
    scanf("%s",&cliente.fone);

    printf("\nNome: %s",cliente.nome);
    printf("\nEmail:%s", cliente.email);
    printf("\nFone: %s",cliente.fone);
}
