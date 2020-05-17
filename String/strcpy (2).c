#include<stdio.h>
#include<string.h>
main(){
    char nome[50];
    char texto[50];
    printf("Digite um nome: ");
    scanf("%s", &nome);
    strcpy(texto, nome);
    printf("Texto: %s",texto);
    printf("\n\n\n") ;
}
