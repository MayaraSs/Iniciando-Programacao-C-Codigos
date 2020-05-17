/*PS: Ambos exerc�cios devem possuir vari�veis do programa principal referenciadas com ponteiros nas fun��es, ou seja,
 as fun��es devem receber apenas ponteiros que apontam para as vari�veis do programa principal.
1. Faca um programa em "C" que leia dois n�meros e utiliza uma fun��o chamada "soma" e outra chamada "subtracao"
para imprimir a soma e a diferen�a entre os dois n�meros.
Ambas fun��es devem receber dois inteiros como par�metro e retornar um inteiro como resultado.*/

#include <stdio.h>
int soma (int pa,int b);
int subtracao (int pa,int pb);

main(){
int a,b,c;
int *pa=&a;/*pARA SINALIZAR QUE � UM PONTEIRO PRECISA DO * E TODO PONTEIRO GUARDA O ENDERE�O DA VARIAVEL*/
int *pb=&b;
int *pc=&c;

printf("\n Digite o primeiro numero:");
scanf("%d",&*pa);/*PONTEIRO VAI APONTA A VARIAVEL E VAI GUARDA DENTRO DA VARIAVEL*/
printf("Endereco:%d\t Valor:%d\n",pa,*pa); // sem o * � o endere�o e com o * � o valor de P
printf("\n Digite o segundo numero:");
scanf("%d",&*pb);
printf("Endereco:%d\t Valor:%d\n",pb,*pb);

*pr= soma(*pa,*pb);
printf("\nSoma:%d\n",*pc);
printf("Endereco:%d \t Valor:%d\n",pc,*pc);
*pr= subtracao(*pa,*pb);
printf("\nSubtracao:%d\n",*pc);
printf("Endereco:%d \t Valor:%d\n",pc,*pc);
}

int soma(int pa,int py){
    return(pa+pb);
    }
int subtracao(int pa,int pb){
    return (pa-pb);
    }
