#include<stdio.h>
#include<string.h>
main(){
    char nome[50];
    char texto[50];
    printf("Digite o 1o nome: ");
    scanf("%s", &nome);
    printf("Digite o 2o nome: ");
    scanf("%s", &texto);
    if (strcmp(texto, nome)==0)
        printf("Nomes iguais");
    else
        printf("Nomes diferentes");
    printf("\n\n\n") ;
}
