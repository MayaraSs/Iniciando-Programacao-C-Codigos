#include<stdio.h>
#include<stdlib.h>

void leitura(int *v, int n);
void impressao(int *imp, int n);

int main(){
    int n,  i, *vetor;

    printf("Digite quantos numeros deseja cadastrar:");
    scanf("%i",&n);

    vetor=(int*)malloc(n*sizeof(int));

    leitura(vetor, n);
    impressao(vetor,n);

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

void impressao(int *imp, int n){
    int i;

    for(i=0;i<n;i++)
        printf("\nNumero %i: %i\n",i+1,*(imp+i));

}
