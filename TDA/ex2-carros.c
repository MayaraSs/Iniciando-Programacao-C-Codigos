#include <stdio.h>
#include <stdlib.h>
#define x 20

typedef struct{
char marca[15];
int ano;
char cor[10];
float preco;
}Carros;

Carros vetcarros[x];

int main(){
int i,n;
float preco_pesquisa;
char marca_pesquisa[15];
int ano_pesquisa;
char cor_pesquisa[10];

printf("Revenda de Carros \n");
 for(i=0;i<x;i++){
    printf("\n\nMarca:");
    scanf("%s",&vetcarros[i].marca);
    printf("Ano:");
    scanf("%i",&vetcarros[i].ano);
    printf("Cor:");
    scanf("%s",&vetcarros[i].cor);
    printf("Preco:");
    scanf("%f",&vetcarros[i].preco);
}
system("cls");
printf("Selecione a opcao desejada:\n 1-Pesquisar por preco.\n2-Pesquisar por marca.\n3-Pesquisa avancada.");
scanf("%i",&n);

switch(n)
    {
    case 1:
        printf("Digite o preco para pesquisa:");
        scanf("%f",&preco_pesquisa);
        for(i=0;i<x;i++){
            if(preco_pesquisa>=vetcarros[i].preco){
                printf("Marca:%s\t",vetcarros[i].marca);
                printf("Ano:%i\t",vetcarros[i].ano);
                printf("Cor:%s\t",vetcarros[i].cor);
        }}
    case 2:
        printf("Digite a marca para pesquisa:");
        scanf("%s",&marca_pesquisa);
        for(i=0;i<x;i++){
            if( strcmp(marca_pesquisa, vetcarros[i].marca) == 0 ){
                printf("\nPreco:%.2f\t",vetcarros[i].preco);
                printf("Ano:%i\t",vetcarros[i].ano);
                printf("Cor:%s\t",vetcarros[i].cor);
        }}
    case 3:
        printf("Digite a marca para pesquisa:");
        scanf("%s",&marca_pesquisa);
        printf("Digite o ano para pesquisa:");
        scanf("%i",&ano_pesquisa);
        printf("Digite a cor para pesquisa:");
        scanf("%s",&cor_pesquisa);
       for(i=0;i<x;i++){
            if( strcmp(marca_pesquisa, vetcarros[i].marca) == 0 ){
                if (ano_pesquisa==vetcarros[i].ano){
                    if(strcmp(cor_pesquisa, vetcarros[i].cor) == 0 )
                       printf("Preco:%.2f",vetcarros[i].preco);
                }
            }
        else
                printf("Nao existe carro com essas caracteristicas!");
       }
    }
return 0;}
