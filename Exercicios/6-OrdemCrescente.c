#include <stdio.h>
#include <stdlib.h>

int main(){
int n1, n2, n3;

printf("Mostra os numeros em ordem crescente: \n");

printf("Informe o 1o numero:");
scanf("%i",&n1);

printf("Informe o 2o numero:");
scanf("%i",&n2);

printf("Informe o 3o numero:");
scanf("%i",&n3);

printf("\n Numeros em ordem crescente: ");
if ( (n1<n2) && (n1<n3) && (n2<n3))
    printf("%i,%i,%i \n", n1, n2, n3);
else if((n1<n2) && (n1<n3)&& (n2>n3))
    printf("%i,%i,%i \n", n1, n2, n3);
else if ((n1<n2) && (n1>n3)&& (n2>n3))
    printf("%i,%i,%i \n", n1, n2, n3);
else if ((n1>n2) && (n1<n3)&& (n2<n3))
    printf("%i,%i,%i \n", n1, n2, n3);
else if ((n1>n2) && (n1>n3)&& (n2<n3))
    printf("%i,%i,%i \n", n1, n2, n3);
else if ((n1>n2) && (n1>n3)&& (n2>n3))
    printf("%i,%i,%i \n", n1, n2, n3);

}
