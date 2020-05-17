/*FAÇA UM PROGRAMA QUE LEIA UM VETOR N E CRIE DINAMICAMENTE UM VETOR DE N ELEMENTOS E PASSE ESSE VETOR PARA UMA FUNÇÃO
QUE VAI LER OS ELEMENTOS DESSSE VETOR. DEPOIS, NO PROGRAMA PRICIPAL, O VETOR PREENCHIDO DEVE SER IMPRESSO.
ALÉM DISSO, ANTES DE FINALIZAR O PROGRAMA, DEVE -SE LIBERAR A ÁREA DA MEMÓRIA ALOCADA.*/
#include<stdio.h>
#include<stdlib.h>

void leitura(int *v, int n);

int main(){
    int n,  i, *vetor;

    printf("Digite quantos numeros deseja cadastrar:");
    scanf("%i",&n);

    vetor=(int*)malloc(n*sizeof(int));

    leitura(vetor, n);

    for (i=0;i<n;i++)
        printf("\nNumero %i: %i\n",i+1,*(vetor+i));

    free(vetor);
    return 0;
}

void leitura(int *v, int n){
    int i;

    for(i=0;i<n;i++){
        printf("Digite o %i numero:",i+1);
        scanf("%i",v+i);
    }

}
