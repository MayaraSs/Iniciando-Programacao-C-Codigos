#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 40

typedef struct{
    char nome[40];
    int numero;
    float area;
    int qtd;
    float vl_cond;
} apto;

apto condominios[T];

int menu();
void cadastrar();
float mostrar_total();
void calcular();
int maior_moradores();
void listar_maior_moradores();
void todos();

int id=0;

main(){
    int opcao;

	do{
		opcao = menu();
		switch(opcao){
            case 1:
                    cadastrar();
                    break;
            case 2:
                    printf("\nArea do condominio: %.2f\n\n", mostrar_total());
                    system("pause");
                    break;
            case 3:
                    calcular();
                    break;
            case 4:
                    listar_maior_moradores();
                    break;
            case 9:
                    todos();
                    break;
         }

    }while ( opcao != 0);
}


int menu(){
	int p;
	system("cls"); //limpa tela
	printf("1. Cadastrar Apto\n");
	printf("2. Mostrar area total condominio\n");
	printf("3. Calcular condominio\n");
	printf("4. Aptos com maior n. Moradores\n");
	printf("9. Listar todos\n");
	printf("0. Sair do programa!\n");
	printf("\n\nInforme a opcao desejada:");
	scanf("%d",&p);
	return(p);
}

void cadastrar(){
    printf("\nNome Responsavel: ");
    scanf("%s",&condominios[id].nome);
    printf("\nNumero Apto: ");
    scanf("%i",&condominios[id].numero);
    printf("\nArea do Apto: ");
    scanf("%f",&condominios[id].area);
    printf("\nNumero de Moradores: ");
    scanf("%i",&condominios[id].qtd);
    id++;
}



float mostrar_total(){
    int i;
    float parea = 0;

    for(i=0;i<id;i++)
        parea = parea + condominios[i].area;

    return(parea);
}


void calcular(){
    int i;
    float vl_total;
    float vl_apto;
    float area_total;

    printf("Informe valor total:");
    scanf("%f",&vl_total);

    area_total = mostrar_total();

    for(i=0;i<id;i++){
        vl_apto = (condominios[i].area * vl_total) / area_total;
        condominios[i].vl_cond = vl_apto;
    }

}

int maior_moradores(){
    int i, maior=0;
    for(i=0;i<id;i++){
            if (condominios[i].qtd > maior)
                maior = condominios[i].qtd;
    }

    return(maior) ;
}

void listar_maior_moradores(){
    int i, maior;
    maior= maior_moradores();
    for(i=0;i<id;i++){
            if (condominios[i].qtd == maior){
                printf("\nNome Responsavel: %s",condominios[i].nome);
                printf("\nNumero Apto: %i",condominios[i].numero);
                printf("\nArea do Apto: %.2f",condominios[i].area);
                printf("\nNumero de Moradores: %i",condominios[i].qtd);
                printf("\nValor Condominio: %.2f",condominios[i].vl_cond);
                printf("\n-----------");
            }
    }
    printf("\n\n");
    system("pause");
}



void todos(){
    int i;
    for(i=0;i<id;i++){
        printf("\nNome Responsavel: %s",condominios[i].nome);
        printf("\nNumero Apto: %i",condominios[i].numero);
        printf("\nArea do Apto: %.2f",condominios[i].area);
        printf("\nNumero de Moradores: %i",condominios[i].qtd);
        printf("\nValor Condominio: %.2f",condominios[i].vl_cond);
        printf("\n-----------");
    }
    printf("\n\n");
    system("pause");
}
