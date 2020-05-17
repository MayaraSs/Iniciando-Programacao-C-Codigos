/*FAZER UM PROGRAMA QUE RECEBA TRES NOTAS E SEUS RESPECTIVOS PESOS
CALCULAR E MOSTRAR A MEDIA PONDERADA DESSAS NOTAS*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float n1, n2, n3;
float p1,p2,p3; //RESPECTIVOS PESOS DAS NOTAS
float Mp;

printf("\nInforme a primeira nota: ");
scanf("%f", &n1);
printf("\nInforme o peso da primeira nota");
scanf("%f", p1);

printf("\nInforme a segunda nota: ");
scanf("%f", &n2);
printf("\nInforme o peso da segunda nota");
scanf("%f", p2);

printf("\nInforme a terceira nota: ");
scanf("%f", &n3);
printf("\nInforme o peso da terceira nota");
scanf("%f", p3);

Mp=(n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
printf("Media ponderada = %.2f\n",Mp); // PARA CALCULAR A MÉDIA É COLOCADO %.2F


return 0;
}
