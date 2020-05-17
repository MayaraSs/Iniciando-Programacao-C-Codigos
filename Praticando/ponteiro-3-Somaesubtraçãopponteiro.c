/*PS: Ambos exercícios devem possuir variáveis do programa principal referenciadas com ponteiros nas funções, ou seja,
 as funções devem receber apenas ponteiros que apontam para as variáveis do programa principal.
1. Faca um programa em "C" que leia dois números e utiliza uma função chamada "soma" e outra chamada "subtracao"
para imprimir a soma e a diferença entre os dois números.
Ambas funções devem receber dois inteiros como parâmetro e retornar um inteiro como resultado.*/

#include <stdio.h>
int soma (int pa,int b);
int subtracao (int pa,int pb);

main(){
int a,b,c;
int *pa=&a;/*pARA SINALIZAR QUE É UM PONTEIRO PRECISA DO * E TODO PONTEIRO GUARDA O ENDEREÇO DA VARIAVEL*/
int *pb=&b;
int *pc=&c;

printf("\n Digite o primeiro numero:");
scanf("%d",&*pa);/*PONTEIRO VAI APONTA A VARIAVEL E VAI GUARDA DENTRO DA VARIAVEL*/
printf("Endereco:%d\t Valor:%d\n",pa,*pa); // sem o * é o endereço e com o * é o valor de P
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
