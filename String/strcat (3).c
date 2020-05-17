#include<stdio.h>
#include<string.h>
main(){
    char nome[30];
    char sobrenome[30];
    printf("Digite um nome: ");
    scanf("%s", &nome);
    printf("Digite um sobrenome: ");
    scanf("%s", &sobrenome);
    printf("\nNome: %s", nome);
    strcat(nome, sobrenome);
    printf("\nNome completo: %s", nome);
    printf("\n\n\n") ;
}
