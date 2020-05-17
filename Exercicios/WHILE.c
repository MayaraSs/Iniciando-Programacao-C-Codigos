// Achar a primeira potencia de 2 maior do que 1000
#include<stdio.h>
int main()
{
    // a funcao main inicia a execucao do programa
int product = 2;
printf("\n a primeira potencia de 2 maior do que 1000\n");
printf("(usando while)\n");

while(product<=1000)
    { product =2*product;

printf("\n product=%i\n",product);
}

    printf("\n product=%i\n",product);
return 0; // indica que o programa terminou com sucesso// fim da funcao main
}
