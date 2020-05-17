/*PS: Ambos exercícios devem possuir variáveis do programa principal referenciadas com ponteiros nas funções, ou seja,

 as funções devem receber apenas ponteiros que apontam para as variáveis do programa principal.

 2. Faça um programa em "C" que solicita o total gasto em uma loja, imprime as opções de pagamento abaixo e imprime o
 resultado de acordo com a seleção do usuário.
1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (sem desconto)
3) Opção: de 3 até 10 vezes com 5% de juros ao mês (acima de R$ 100,00).
OBS: Fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida.
No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção).*/

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
