/*Criar um sistema que leia os nomes e idades das clientes de uma academia, em seguida lista-los. */

#include<stdio.h>
#include<stdlib.h>
#define T 2

typedef struct{
    char nome[30];
    int idade;
} TipoCliente;

TipoCliente clientes[T];

main(){
    int i;

    //Entrada dos dados
    for(i=0; i<T; i++){
        printf("\n\nCliente %d\n",i+1);
        printf("\nNome: ");
        scanf("%s",&clientes[i].nome);
        printf("\nIdade: ");
        scanf("%d",&clientes[i].idade);
    }

    //Saida dos dados
    for(i=0; i<T; i++){
        printf("\nNome: %s",clientes[i].nome);
        printf(" - Idade: %d",clientes[i].idade);
    }

    printf("\n\n");
}


