/*criar um sistemas que leia os nomes e idades dos clientes da academia em seguida lista-los*/
#include <stdio.h>
#include <stdlib.h>
#define x 3

typedef struct
char nome[30];
int idade;
Academia;
Academia clientes[x];
void leitura();
void impressao();
int i;

main(){

    printf("Sistema Academia\n\n");
    leitura();
    impressao();
}

void leitura(){
    for(i=0;i<x;i++){
        printf("Nome:");
        scanf("%s",&clientes[i].nome);
        printf("Idade:");
        scanf("%i",&clientes[i].idade);
    }
}

void impressao(){
    for(i=0;i<x;i++){
        printf("\nNome:%s\t",clientes[i].nome);
        printf("Idade:%i\n\n",clientes[i].idade);
    }
}
