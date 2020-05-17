//DADO UM VETOR DE 10 ELEMENTOS DO TIPO INT, ACHAR A SOMA DOS ELEMENTOS PARES.
#include <stdio.h>
main()
{
int n[9], soma=0, i;
for (i=0;i<9;i++)
    {
    printf("Digite os elementos do %i vetor:",i+1);
    scanf("%i",&n[i]);
    if ((n[i]%2)==0){
        soma=soma+n[i];
    }
    }

printf("Soma dos numeros pares%i",soma);


}



