#include<stdio.h>
#include<stdlib.h>
#define T 100

typedef struct {
    char nome[15];
    char setor [30];
    int qtd;
    float preco;
} produto;

produto estoque[T];

int menu();
void cadastrar();
int produtos_setor();
float capital_estoque();
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
                    printf("\n\tProdutos do Setor: %d\n\n",produtos_setor());
                    system("pause");
                    break;
            case 3:
                    printf("\n\tCapital em estoque: %.2f\n\n",capital_estoque());
                    system("pause");
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
	printf("1. Cadastrar Produto\n");
	printf("2. Produtos no Setor\n");
	printf("3. Capital do Estoque\n");
	printf("9. Listar todos\n");
	printf("0. Sair do programa!\n");
	printf("\n\nInforme a opção desejada:");
	scanf("%d",&p);
	return(p);
}

void cadastrar(){
    system("cls");
    printf("\nCadastrando Produto:\n");
    printf("\nNome: ");
    scanf("%s",&estoque[id].nome);
    printf("\nSetor: ");
    scanf("%s",&estoque[id].setor);
    printf("\nQuantidade: ");
    scanf("%d",&estoque[id].qtd);
    printf("\nPreço Unitário: ");
    scanf("%f",&estoque[id].preco);
    id++;
}

int produtos_setor(){
    int i, cont=0;
    char psetor[30];

    system("cls");
    printf("\n\tInforme o setor:");
    scanf("%s",&psetor);

    for(i=0;i<id;i++){
        if(strcmp(estoque[i].setor,psetor)==0)
            cont++;
    }
    return(cont);
}

float capital_estoque(){
    int i;
    float saldo = 0;

    system("cls");
    for(i=0;i<id;i++)
        saldo += (estoque[i].qtd * estoque[i].preco);

    return(saldo);
}

void todos(){
    int i;

    system("cls");
    printf("\n\tProdutos Cadastrados:\n");
    printf("\n\tNome\t\tSetor\t\tQtd\t\tPreco");
    for(i=0;i<id;i++){
        printf("\n\t%s\t\t%s\t\t%d\t\t%.2f", estoque[i].nome, estoque[i].setor, estoque[i].qtd, estoque[i].preco);
    }
    printf("\n\n");
    system("pause");
}
