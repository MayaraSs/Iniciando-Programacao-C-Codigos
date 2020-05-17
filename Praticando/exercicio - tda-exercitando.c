//Criar um sistema que leia os nomes e idades das clientes de uma academia, em seguida lista-las.
// [i] usado para repeticao
// s = string ou c = char
#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nome[30];
char idade;
}Tipoacademia;
Tipoacademia cliente[4];
main(){
int i ;
for (i=0; i<4; i++){
printf("Nome: ");
scanf("%s",&cliente[i].nome);
printf("Idade:");
scanf("%i",&cliente[i].idade);
}
for (i=0; i<4; i++){
    printf("Nome: %s",cliente[i].nome);
    printf("Idade: %i",cliente[i].idade);
}
}
