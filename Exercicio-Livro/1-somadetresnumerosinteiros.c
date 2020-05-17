#include <stdio.h>
main()
{
    int n1,n2,n3,n4,soma;
    printf("\nInforme o primeiro numero:");
    scanf("%i",&n1);
    printf("\nInforme o segundo numero:");
    scanf("%i",&n2);
    printf("\nInforme o terceiro numero:");
    scanf("%i",&n3);
    printf("\nInforme o quarto numero:");
    scanf("%i",&n4);
    soma=(n1+n2+n3+n4);
    printf("\nResultado da soma:");
    printf("%i+%i+%i+%i=%i",n1,n2,n3,n4,soma);

}
