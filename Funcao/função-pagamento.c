/*2. Fa�a um programa em "C" que solicita o total gasto em uma loja,
imprime as op��es de pagamento abaixo e
imprime o resultado de acordo com a sele��o do usu�rio.
1) Op��o: a vista com 10% de desconto
2) Op��o: em duas vezes (sem desconto)
3) Op��o: de 3 at� 10 vezes com 5% de juros ao m�s (acima de R$ 100,00).
OBS: Fazer uma fun��o que imprime as op��es solicita a op��o desejada e
 retorna a op��o escolhida. No programa principal, t
 estar a op��o escolhida e ativar a fun��o correspondente (uma fun��o para cada op��o).*/

#include<stdio.h>

int menu();
void opcao1(float a);
void opcao2(float a);
void opcao3(float a);
double juros(double vl_parcela, int parcela);

main(){
	float valor_gasto;
	int opcao;

	printf("\nInforme o valor gasto:");
	scanf("%f",&valor_gasto);

	do{
		opcao = menu();
		switch (opcao){
			case 1:
				opcao1(valor_gasto);
				break;
			case 2:
				opcao2(valor_gasto);
				break;
			case 3:
				opcao3(valor_gasto);
				break;
		}
	}while ( opcao != 0);

}

int menu(){
	int p;
	system("cls"); //limpa tela
	printf("1. A vista 10%% desconto\n");
	printf("2. Em duas vezes sem desconto\n");
	printf("3. Parcelado (3 a 10) + 5%% juros ao m�s\n");
	printf("0. Sair do programa!\n");
	printf("\n\nInforme a op��o desejada:");
	scanf("%d",&p);
	return(p);
}

void opcao1(float a){
	float valor;
	valor = a * 0.90;

	system("cls");
	printf("Pagamento a vista com 10%% desconto fica em: %.2f\n\n",valor);
	system("pause");
}

void opcao2(float a){
	system("cls");
	printf("Pagamento em duas vezes de R$ %.2f\n\n", (a/2) );
	system("pause");
}

void opcao3(float a){
	int parcelas, i = 1;
	double vl_parcela;
	system("cls");
	if (a<100) {
		printf("Somente acima de R$ 100,00.\n");
		system("pause");
	}else{
		printf("Informe o numero de parcelas (3-10):\n");
		scanf("%d",&parcelas);
		vl_parcela = (a/parcelas);
		while(i<=parcelas){
			printf("Parcela %i = R$ %.2f\n", i, vl_parcela + juros(vl_parcela, i) );
			i++;
		}
		system("pause");
	}

}

double juros(double vl_parcela, int parcela){
	double taxa = 0.05;
	double vl_juros;
	vl_juros = (vl_parcela * taxa) * parcela;
	return vl_juros;
}
