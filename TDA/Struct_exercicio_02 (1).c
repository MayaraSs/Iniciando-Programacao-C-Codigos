#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 20

typedef struct{
    char marca[20];
    int ano;
    char cor[10];
    float preco;
} carro;

carro vetcarros[T];

int menu();
int cadastrar(int cod);
void pesquisa(int op);
int id = 0;

main(){

	int opcao;

	do{
		opcao = menu();
		switch (opcao){
			case 1:
			    if ((id+1)<T)
                    id = cadastrar(id);
                else
                    printf("Limite de %d cadastros excedido!",T);
				break;
			case 2:
				pesquisa(1); //por preço
				break;
			case 3:
				pesquisa(2); //por marca
				break;
			case 4:
				pesquisa(3); //por marca, ano e cor
				break;
			case 9:
				pesquisa(0); //Listar todos
				break;
		}
	}while ( opcao != 0);
}

int menu(){
	int p;
	system("cls"); //limpa tela
	printf("1. Cadastrar Carro\n");
	printf("2. Pesquisar por preço\n");
	printf("3. Pesquisar por marca\n");
	printf("4. Pesquisar por marca, ano e cor\n");
	printf("9. Listar todos\n");
	printf("0. Sair do programa!\n");
	printf("\n\nInforme a opcao desejada:");
	scanf("%d",&p);
	return(p);
}

int cadastrar(int cod){

    printf("\nMarca: ");
    scanf("%s",&vetcarros[cod].marca);
    printf("\nAno: ");
    scanf("%i",&vetcarros[cod].ano);
    printf("\nCor: ");
    scanf("%s",&vetcarros[cod].cor);
    printf("\nPreço: ");
    scanf("%f",&vetcarros[cod].preco);

    cod++;
    return(cod);

}

void pesquisa(int op){
    int i, aux = 0;
    char pmarca[20];
    float pvalor;
    int pano;
    char pcor[10];

    switch (op){
        case 1 :
             printf("\nInforme o preco:");
             scanf("%f",&pvalor);
             for(i=0;i<id;i++){
               if (vetcarros[i].preco<=pvalor){
                    aux = 1;
                    printf("\nMarca: %s", vetcarros[i].marca);
                    printf("\nAno: %i", vetcarros[i].ano);
                    printf("\nCor: %s", vetcarros[i].cor);
                    printf("\nPreço: %f", vetcarros[i].preco);
               }
             }
             if (aux==0)
                    printf("Nenhum registro encontrado!!!");
              break;
        case 2 :
             printf("\nInforme a marca:");
             scanf("%s",&pmarca);
             for(i=0;i<id;i++){
               if (strcmp(vetcarros[i].marca,pmarca)==0){
                    aux = 1;
                    printf("\nMarca: %s", vetcarros[i].marca);
                    printf("\nAno: %i", vetcarros[i].ano);
                    printf("\nCor: %s", vetcarros[i].cor);
                    printf("\nPreço: %f", vetcarros[i].preco);
               }
             }
             if (aux==0)
                    printf("Nenhum registro encontrado!!!");
              break;
        case 3 :
             printf("\nInforme a marca:");
             scanf("%s",&pmarca);
             printf("\nInforme a ano:");
             scanf("%d",&pano);
             printf("\nInforme a cor:");
             scanf("%s",&pcor);
             for(i=0;i<id;i++){
               if (vetcarros[i].ano== pano){
                   if (strcmp(vetcarros[i].marca,pmarca)==0){
                        if (strcmp(vetcarros[i].cor,pcor)==0){
                            aux = 1;
                            printf("\nMarca: %s", vetcarros[i].marca);
                            printf("\nAno: %i", vetcarros[i].ano);
                            printf("\nCor: %s", vetcarros[i].cor);
                            printf("\nPreço: %f", vetcarros[i].preco);
                        }
                   }
                }
             }
             if (aux==0)
                    printf("Nenhum registro encontrado!!!");
              break;
        default :
            for(i=0;i<id;i++){
                printf("\nMarca: %s", vetcarros[i].marca);
                printf("\nAno: %i", vetcarros[i].ano);
                printf("\nCor: %s", vetcarros[i].cor);
                printf("\nPreço: %f", vetcarros[i].preco);
            }
    }

    printf("\n\n\n");
    system("pause");
}
