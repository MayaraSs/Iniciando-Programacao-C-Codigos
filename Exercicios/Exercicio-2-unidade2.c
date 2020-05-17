/*FAZER UM PROGRAMA QUE RECEBA TRES NOTAS
CALCULAR E MOSTRAR A MEDIA ARITMETICA ENTRE ELAS*/
#include <stdio.h>
#include <stdlib.h>
int main(){
float nota1, nota2, nota3, mean; //VARIAVEIS

printf("\nInforme a 1° nota: ");// INFORMANDO AS NOTAS
scanf("%f", &nota1);

printf("\nInforme a 2° nota: ");
scanf("%f", &nota2);

printf("\nInforme a 3° nota: ");
scanf("%f", &nota3);

mean=(nota1+ nota2+ nota3)/3; // CALCULANDO A MEDIA

printf ("\nMedia das notas: ");
printf("media=%.2f\n   ", mean); //LENDO PARA CALCLULAR QUANDO MEDIA USAR %.2
return 0;
}
