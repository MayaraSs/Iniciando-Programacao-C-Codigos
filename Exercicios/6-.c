// FILE:          ex 6 unidade 3 part 4.c
// TITLE:         Soma dos digitos
// SUBMITTED BY:  Rafaela, Raissa, Mayara
// FOR COURSE:    Programa��o em Computadores I
// DATE:          May 20, 2014
//
// PURPOSE:
// Calcula a soma dos d�gitos de um numero inteiro escrito pelo usu�rio
//
// OVERALL METHOD:
// A soma dos d�gitos � calculada de acordo com a f�rmula:
// digito=num%10; num=num/10; soma=soma+ digito;
// Espera como entrada n�meros inteiros
// Esse programa faz controle de dados de entrada comparando enquanto
// diferente de 0
//
// FUNCTIONS:
//
// INCLUDED FILES: stdio.h
//
// DATA FILES:   n�o
//
// PARAMETERS:
// nome            tipo    value/reference   descri��o
// -------------------------------------------------------
// num              int     value            n�mero inteiro
//                                           digitado pelo usu�rio
// digito           int     value   �ltimo digito do numero
// soma             int     value   soma dos d�gitos

#include <stdio.h>

int main() {
int num, digito, soma;

soma=0;

printf("\nEscreva um numero inteiro:");
scanf ("%i",&num);

while (num !=0)
   {
     digito=num%10; /*essa opera��o faz com que o digito receba o numero menos significativo.*/
    num=num/10; /*  atualiza o num com os numeros ainda n�o somados.*/
    soma=soma+digito; /*soma os d�gitos*/
    printf("%i+",digito);/* mostra cada digito na tela*/

   }
    printf("\nSoma total dos digitos:%i",soma);

return 0;
}
// EXAMPLE INPUT AND OUTPUT
//
// O usu�rio digita o n�mero inteiro: 213
// Escreva um numero inteiro: 213
//
// 3+1+2
// Soma total dos d�gitos:6
