/*PS: Ambos exerc�cios devem possuir vari�veis do programa principal referenciadas com ponteiros nas fun��es, ou seja,

 as fun��es devem receber apenas ponteiros que apontam para as vari�veis do programa principal.

 2. Fa�a um programa em "C" que solicita o total gasto em uma loja, imprime as op��es de pagamento abaixo e imprime o
 resultado de acordo com a sele��o do usu�rio.
1) Op��o: a vista com 10% de desconto
2) Op��o: em duas vezes (sem desconto)
3) Op��o: de 3 at� 10 vezes com 5% de juros ao m�s (acima de R$ 100,00).
OBS: Fazer uma fun��o que imprime as op��es solicita a op��o desejada e retorna a op��o escolhida.
No programa principal, testar a op��o escolhida e ativar a fun��o correspondente (uma fun��o para cada op��o).*/

#include <stdio.h>
int opcoes (int popcao);
float avista(float ptotal_gasto,float presultado);
float duas_vezes(float ptotal_gasto,float presultado);
float mais_vezes(float ptotal_gasto,float presultado,float pjuros, int px);


main(){
float total_gasto,resultado,porcentagem,juros;
int opcao,x;
float *ptotal_gasto=&total_gasto;
float *presultado=&resultado;
float *pporcentagem=&porcentagem;
float *pjuros=&juros;
int *popcao=&opcao;
int *px=&x;

printf("Programa de calculo de pagamento\n\n");
printf("\nInforme o total da compra:\n");
scanf("%f",&*ptotal_gasto);
printf("Endereco:%i Valor: %.2f\n",ptotal_gasto,*ptotal_gasto);

*popcao= opcoes(*popcao);

if(*popcao >0 && *popcao<4)
    printf("Opcao ecolhida:%i\n",*popcao);
else{
   printf("Opcao invalida.");
    opcao= opcoes(*popcao);
    printf("Opcao ecolhida:%i\n",*popcao);
}

if(*popcao==1)
   *presultado= avista(*ptotal_gasto,*presultado);
    else if (*popcao==2)
        *presultado= duas_vezes(*ptotal_gasto, *presultado);
        else if( opcao==3)
            *presultado= mais_vezes(*ptotal_gasto,*presultado,*pjuros,*px);

}


int opcoes (int popcao){
printf("\nDigite o numero correspondente a opcao de pagamento escolhida:\n\n");
printf(" 1-A vista com 10 por cento de desconto. \n 2-Em 2 vezes(sem desconto).\n 3-De 3 a 10 vezes com 5 por cento de juros ao mes(acima de R$ 100,00).\n\n");
scanf("%i",&popcao);
return (popcao);}

float avista(float ptotal_gasto,float presultado){
presultado=ptotal_gasto-(ptotal_gasto*10/100);
printf("\nTotal a pagar: R$ %.2f\n",presultado);
return (presultado);
}
float duas_vezes(float ptotal_gasto,float presultado){
presultado=ptotal_gasto/2;
printf("\nTotal a pagar: R$ %.2f  x 2\n",presultado);
return (presultado);
}
float mais_vezes(float ptotal_gasto,float presultado,float pjuros,int px){
    if(ptotal_gasto>=100){
    printf("Em quantas vezes:");
    scanf("%i",&px);

    pjuros= ptotal_gasto*px*5/100;
    printf("Juros:%.2f\n",pjuros);
    ptotal_gasto=ptotal_gasto+pjuros;
    presultado=ptotal_gasto/px;
    printf("\nTotal a pagar: R$ %.2f  x %i\n",presultado,px);
    }
    else
    printf("Parcela minima R$ 100,00");

    }
