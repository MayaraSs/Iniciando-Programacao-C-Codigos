/* Crie uma função em linguagem C que receba 2 números e retorne o maior número.*/

#include <stdio.h>

int maior(int *x,int *y);
int main()
{
    int a,b,r;
    printf("Numero para a:");
    scanf("%d", &a);
    printf("Numero para b:");
    scanf("%d", &b);
    printf("Antes da chamada da funcao:a=%d,b=%d",a,b);
    r= maior(&a,&b);
    printf ("\nMaior = %d",r);
    printf("\nDepois da chamada da funcao:a=%d,b=%d\n",a,b);
}
int maior (int *x, int *y){
    if (*x>*y)
        return(*x);
    else
        return(*y);
    }
