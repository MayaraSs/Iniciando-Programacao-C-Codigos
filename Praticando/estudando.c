#include <stdio.h>
#include <stdlib.h>
#define x30

typedef stuct {
char nome[30];
int ano;
float salario;
}funcionario;

funcionario flha [x];
int aux = 0;
int opcao,i;
int aux=0;
int menu(opcao);
int leitura(int aux);
int reajuste(int aux);
int listar(int aux);

int main(){
printf("Funcionario");
do{

    opcao = menu(opcao);
    switch (opcao){
    case 1: if (aux<x)
    aux = leitura (aux);
    else
        printf("Limite de %d cadastro",x);
    break;
    case 2: reajuste (aux);
    printf("Reajuste");
    break;
    case 3: listar(aux);
    break;
    case 0 :
        break;
    }
    while(opcao!=0);
}

int menu(opcao){
printf("Selecione opcao");
printf("1 - cadastrar");
printf("2 - calcular");
printf("3 - listar");
printf("0 - Sair");
return (opcao);
}
int leitura(int aux){
printf("Nome");
scanf("%s",&folha[aux].nome);
printf("Ano de admissao: ");
scanf("%i",&folha[aux].ano);
printf("Salario");
scanf("%i",&folha[aux].salario);
aux++
return (aux);

void reajuste (int aux){
float porcentagem;
for (i=0; i<aux; i++)
    folha [i].salario=folha[i].salario+folha[i].salario*5/100;
}
void listar (int aux){
for (i=0; i<aux; i++)
    printf("Nome %s",folha[i].nome);
    printf("Salario %i", folha[i].salario);
}
}
