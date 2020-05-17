/* Crie uma função em linguagem C que receba 2 números e retorne a média desses números.*/
#include <stdio.h>

float media(float *x, float *y, float *m);
int main ()
{
    float a,b,m;
    printf ("Numero para a: ");
    scanf ("%f",&a);
    printf ("Numero para b: ");
    scanf ("%f",&b);
    printf("Valores das variaveis:  a=%.2f,  b=%.2f\n",a,b);
    printf ("Media antes da chamada da funcao: %.2f\n", m);
    m=media(&a,&b,&m);
    printf ("Media depois da chamada da funcao:%.2f\n", m);
}
float media(float *x,float *y,float *m){
    *m=(*x+*y)/2;
    return(*m);
}
