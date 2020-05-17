/*ELABORE UM PROGRAMA DE CONTATOS, ONDE O USUARIO DEVERÁ CADASTRAR NOME,E-MAIL, FONE . e NO FINAL EXIBA OS CAMPOS PREENCHIDOS*/
#include<stdio.h>

typedef struct {
    char nome[30];
    char email[30];
    char fone[15];
} TipoAgenda;

main(){
    TipoAgenda cliente;

    printf("\nNome: ");
    scanf("%s",&cliente.nome);
    printf("\nE-mail: ");
    scanf("%s",&cliente.email);
    printf("\nFone: ");
    scanf("%s",&cliente.fone);

    printf("\nNome: %s",cliente.nome);
    printf("\nE-mail: %s",cliente.email);
    printf("\nFone: %s",cliente.fone);


}
