/*Crie uma função em C que receba 2 números e retorne o maior valor*/

#include <stdio.h>
main(){
int a,b,r;

printf("\n Numero para A:");
scanf("%d", &a);

printf("\n Numero para B: ");
scanf("%d", &b);

r = maior (a,b);

printf("\n Maior numero e %d", r);}
int maior (int x, int y){
if (x>y)
    return (x);
else
    return (y);
}
