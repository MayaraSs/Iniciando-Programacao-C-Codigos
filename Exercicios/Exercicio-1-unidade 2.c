//FAZER UM PROGRAMA QUE RECEBA QUATRO NUMEROS INTEIROS, CALCULE E MOSTRE A SOMA DESSES NUMEROS
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2,n3,n4;
    int soma;
    printf("\nDigite o primeiro numero: ");
    scanf("%i", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%i",&n2);
    printf("\nDigite o terceiro numero: ");
    scanf("%i",&n3);
    printf("\nDigite o quarto numero: ");
    scanf("%i",&n4);

         soma=n1+n2+n3+n4;

     printf("\nResultado da soma: ");
     printf("soma=%i", soma);



}
