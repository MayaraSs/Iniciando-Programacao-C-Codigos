// FILE:          ex 6 unidade 3 part 4.c
// TITLE:         Soma dos digitos
// SUBMITTED BY:  Rafaela, Raissa, Mayara
// FOR COURSE:    Programação em Computadores I
// DATE:          May 20, 2014
//
// PURPOSE:
// Calcula a soma dos dígitos de um numero inteiro escrito pelo usuário
//
// OVERALL METHOD:
// A soma dos dígitos é calculada de acordo com a fórmula:
// digito=num%10; num=num/10; soma=soma+ digito;
// Espera como entrada números inteiros
// Esse programa faz controle de dados de entrada comparando enquanto
// diferente de 0
//
// FUNCTIONS:
//
// INCLUDED FILES: stdio.h
//
// DATA FILES:   não
//
// PARAMETERS:
// nome            tipo    value/reference   descrição
// -------------------------------------------------------
// num              int     value            número inteiro
//                                           digitado pelo usuário
// digito           int     value   último digito do numero
// soma             int     value   soma dos dígitos

#include <stdio.h>

int main() {
int num, digito, soma;

soma=0;

printf("\nEscreva um numero inteiro:");
scanf ("%i",&num);

while (num !=0)
   {
     digito=num%10; /*essa operação faz com que o digito receba o numero menos significativo.*/
    num=num/10; /*  atualiza o num com os numeros ainda não somados.*/
    soma=soma+digito; /*soma os dígitos*/
    printf("%i+",digito);/* mostra cada digito na tela*/

   }
    printf("\nSoma total dos digitos:%i",soma);

return 0;
}
// EXAMPLE INPUT AND OUTPUT
//
// O usuário digita o número inteiro: 213
// Escreva um numero inteiro: 213
//
// 3+1+2
// Soma total dos dígitos:6
