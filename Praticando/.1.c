 /*Crie uma fun��o em linguagem C que receba 2 n�meros e retorne o
  maior n�mero Crie uma fun��o em linguagem C que receba 2 n�meros e retorne o maior n�mero*/
  #include <stdio.h>
  #include <stdlib.h>

  main(){
  int a,b,r;
  printf("Informe o primeiro numero:");
  scanf("%i",&a);
  printf("Informe o segundo numero:");
  scanf("%i",&b);

  r=maior(a,b);
  printf("Maior numero: %i",r);

  }
  int maior(int a,int b){
       if (a>b)
        return(a);
       else
        return(b);
  }
