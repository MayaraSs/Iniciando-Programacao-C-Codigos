#include<stdio.h>
#include<string.h>
main(){
    char nome[50];
    printf("Digite um nome: ");
    scanf("%s", &nome);
    printf("\nDigitado: %s", nome);
    printf("\nMaiuscula: %s", strupr(nome));
    printf("\nMinuscula: %s", strlwr(nome));
    printf("\n\n\n") ;
}

