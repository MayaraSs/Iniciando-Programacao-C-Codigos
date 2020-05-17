//DADO O VETOR DE 10 ELEMENTOS DO TIPO INT, ACHAR A SOMA DOS ELEMENTOS QUE SE ENCONTRAM NAS POSIÇÕES COM INDICE PAR.
#include <stdio.h>
main()
{
int n[10], soma=0, i;
for (i=0;i<10;i++)
    {
    printf("Digite os elementos do %i vetor:",i);
    scanf("%i",&n[i]);
     if ((i%2)==0){
        soma=soma+n[i];

    }}
    printf("Soma numeros que estao nas posicao pares%i",soma);

}
