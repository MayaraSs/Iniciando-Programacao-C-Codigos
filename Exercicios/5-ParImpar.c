#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1;
    printf("O programa detecta se numero é par ou impar: \n");
    printf ("Informe o numero:");
    scanf("%i" ,&n1);

    if (n1%2 ==0)
        printf("\n Par \n");
    else
        printf("\n Impar \n");
    return 0;
}
