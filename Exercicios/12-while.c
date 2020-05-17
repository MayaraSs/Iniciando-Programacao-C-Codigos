#include<stdio.h>
int main()
{
    // digite um numero >10
    int product;
    printf("\n entre com um numero menor que 10 \n");
    scanf ("%i",&product);

    while (product <=1000)
    {


        product = 2* product;
        printf("product = %i", product);
    }

    printf("product = %i \n", product);
    return 0;
}
