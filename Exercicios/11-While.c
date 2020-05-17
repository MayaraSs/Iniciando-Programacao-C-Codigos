#include<stdio.h>
int main(){


int contador;
float total;
float nota;
float media;

total =0;
contador=1;

while(contador<=10){
        printf("Digite nota:\n", contador);
        scanf("%f",&nota);

        total=total+nota;
        contador=contador+1;
}

  media=total/10;
  printf("\n A nota media da turma=%.2f \n",media );

  return 0;
}


